/* Copyright Statement:
 *
 * (C) 2005-2016  MediaTek Inc. All rights reserved.
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
 * Without the prior written permission of MediaTek and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
 * if you have agreed to and been bound by the applicable license agreement with
 * MediaTek ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of MediaTek Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 */


#if 1
/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>
#include "bsp_lcd.h"
#include "bw_gdi_api.h"
#include "lcd_manager.h"

/* Kernel includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"
#include "semphr.h"

/* device.h includes */
#include "mt2523.h"

/* hal includes */
#include "hal_cache.h"
#include "hal_mpu.h"
#include "hal_uart.h"
#include "hal_clock.h"

#include "lcd_config.h"
#include "watch.h"
#include "app_manager.h"
#include "gdi_font_engine.h"
#include "gdi.h"
#include "custom_resource_def.h"
#include "nvdm.h"

/*******************************************************************************************************************
 *				Application Task
 *******************************************************************************************************************/
extern uint8_t* appUtil_convert_string_to_wstring(uint8_t* string);
extern xQueueHandle queAppTask;
extern xSemaphoreHandle semModeChange;
volatile int isBPFnTrigger = 0;
uint32_t bp1_init_val = 0, bp2_init_val = 0 ;
#define BP_CALI 1023
#define BP_PERSONAL 127
#define BP_GENERAL 0


void appBP_Disply(bool value_only, uint32_t bp1, uint32_t bp2)
{
    uint16_t buffer[50] = {0};
    char c_buffer[50] = {0};
    uint8_t buf[11] = {0};
    uint32_t buf_size;
    nvdm_status_t nvdm_status;
    int mode;

    //printf("appBP_Disply \n\r");
    gdi_font_engine_size_t font = GDI_FONT_ENGINE_FONT_MEDIUM;
    gdi_font_engine_display_string_info_t string_info = {0};
    gdi_font_engine_color_t text_color = {0, 255, 255, 255};//white color

    gdi_draw_filled_rectangle(0, 10, 128, 128, 0);
    gdi_font_engine_set_font_size(font);
    gdi_font_engine_set_text_color(text_color);

    if (false == value_only) {

        string_info.x = 0;
        string_info.y = 10;
        string_info.baseline_height = -1;
        //printf("appBP_Disply value_only = false\n\r");
        buf_size = sizeof(buf);
        nvdm_status = nvdm_read_data_item("2511", "mode", (uint8_t *)buf, &buf_size);
        //printf("appBP_Disply read nvdm done \n\r");
        if (nvdm_status != NVDM_STATUS_OK) {

            //printf("fail nvdm read \n\r");
            string_info.string = appUtil_convert_string_to_wstring((uint8_t*) "Blood Pressure:");
            string_info.length = strlen("Blood Pressure:");

        } else {

            mode = atoi((char *)buf);
            //printf("mode = %d\n\r",mode);
            if (mode == BP_CALI) {

                string_info.string = (uint8_t *)L"BP Calibrate";
                string_info.length = wcslen((const wchar_t *)L"BP Calibrate") * 2;

            } else if (mode == BP_GENERAL) {

                string_info.string = (uint8_t *)L"BP General";
                string_info.length = wcslen((const wchar_t *)L"BP General") * 2;

            } else {
                buf_size = sizeof(buf);
                nvdm_status = nvdm_read_data_item("2511", "userid", (uint8_t *)buf, &buf_size);

                //printf("user id = %s\n\r", buf);
                strcpy(c_buffer, "BP P-");
                strcat(c_buffer, (const char *)buf);


                //printf("c_buffer = %s \n\r", c_buffer);

		swprintf((wchar_t *)buffer, 50, L"%s", c_buffer);
                string_info.string = (uint8_t *)buffer;
                string_info.length = wcslen((const wchar_t *)buffer) * 2;

            }

        }


        //printf("gdi_font_engine_show_string1 %s, x %d, y %d, len %d\n", buffer, string_info.x, string_info.y, string_info.length);
        gdi_font_engine_display_string(&string_info);

    }

    sprintf(c_buffer, "%d / %d", (int)bp1, (int)bp2);
    string_info.x = 6 * 8;
    string_info.y = 30;
    string_info.baseline_height = -1;
    string_info.string = appUtil_convert_string_to_wstring((uint8_t*) c_buffer);
    string_info.length = strlen((char *)c_buffer);
    //printf("gdi_font_engine_show_string2 %s, x %d, y %d, len %d\n", buffer, string_info.x, string_info.y, string_info.length);
    gdi_font_engine_display_string(&string_info);
    gdi_lcd_update_screen(0, 10, 128, 64);
}

static void appBP_Upate(uint32_t bp1, uint32_t bp2)
{
    appBP_Disply(false, bp1, bp2);
}

static void appBP_Init(void)
{
    appBP_Disply(false, bp1_init_val, bp2_init_val);
}

void appBP_Task(void *pParameters)
{
    tEvent inEvent = {EVENT_NO, NULL} ;
    uint32_t sbp = 0 , dbp = 0 ;
    sensor_blood_pressure_event_t *data;

    ui_task_message_struct_t ui_msg = {0};


    //printf("appBP_Task\r\n");

    appBP_Init();

    for (;;) {
        if (pdTRUE == xQueueReceive(queAppTask, &inEvent, portMAX_DELAY /*60000/portTICK_RATE_MS*/)) {
            switch (inEvent.event) {


                case EVENT_UPDATE_BP:

                    if (isBPFnTrigger != 0) {

                        //printf("======appBP_Task====== ev=%d, data=%x\r\n", inEvent.event, (unsigned int)inEvent.userdata);
                        data = (sensor_blood_pressure_event_t *)inEvent.userdata;
                        sbp = data->sbp;
                        dbp = data->dbp;
                        appBP_Upate(sbp, dbp);
                        isBPFnTrigger = 0;
                    }

                    break;

                case EVENT_BUTTON_LEFT_LONG_PRESS:



                    //printf(" =============== B.P. EVENT_BUTTON_LEFT_LONG_PRESS \n\r");

                    if (isBPFnTrigger == 0) {

                        ui_msg.message_id = UI_MSG_SENSOR;
                        ui_msg.param1 = SENSOR_TYPE_BLOOD_PRESSURE_MONITOR;
                        isBPFnTrigger = 1;
                        xQueueSend(ui_main_event_queue, &ui_msg, 0);
                        bp1_init_val = 0;
                        bp2_init_val = 0;
                        appBP_Init();

                    } else {

                        /*
                        ui_msg.message_id = UI_MSG_SENSOR;
                                                            ui_msg.param1 = SENSOR_TYPE_BLOOD_PRESSURE_MONITOR;
                        isBPFnTrigger = 0;
                        appBP_Init();
                        xQueueSend(ui_main_event_queue, &ui_msg, 0);
                        */
                    }


                    break;
                case EVENT_BUTTON_3:
                    break;
                case EVENT_BUTTON_4:
                    break;
                case EVENT_BUTTON_5:
                    break;
                case EVENT_BUTTON_6:
                    break;
                case EVENT_INIT_APP:
                    break;
                case EVENT_TASK_END:
                    xSemaphoreGive(semModeChange);
                    vTaskSuspend(NULL);
                    break;
                default:
                    break;
            }
        }
    }
}
#endif

