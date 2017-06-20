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

#ifndef _GPIO_DRV_H
#define _GPIO_DRV_H


#define MODE_0  0
#define MODE_1  1
#define MODE_2  2
#define MODE_3  3
#define MODE_4  4
#define MODE_5  5
#define MODE_6  6
#define MODE_7  7
#define MODE_8  8
#define MODE_9  9
#define MODE_NC  0
#define PULL_ENABLE  1
#define PULL_DISABLE  0
#define DIR_INPUT  0
#define DIR_OUTPUT  1
#define GPIO_PORTNULL_MODE  0
#define GPIO_PORTNULL_DIR   0
#define GPIO_PORTNULL_PULL  0
#define GPIO_PORTNULL_OUTPUT_LEVEL  0
#define GPIO_PORTNULL_PULL_SEL  0
#define GPIO_PORTNULL_R0    0
#define GPIO_PORTNULL_R1    0
#define GPIO_PORTNULL_PUPD  0
#define GPIO_PORTNULL_DOUT  0

//#define GPIO_PORT0_MODE   MODE_0 // 0:GPIO0
//#define GPIO_PORT1_MODE   MODE_1 // 1:EINT1
#define GPIO_PORT0_MODE   MODE_3 // 3:U2RXD
#define GPIO_PORT1_MODE   MODE_3 // 3:U2TXD
#define GPIO_PORT2_MODE   MODE_3 // 4:U0CTS
#define GPIO_PORT3_MODE   MODE_3 // 4:U0RTS
#define GPIO_PORT4_MODE   MODE_0 // 0:GPIO4
#define GPIO_PORT5_MODE   MODE_0 // 0:GPIO5
#define GPIO_PORT6_MODE   MODE_1 // 0:EINT5
#define GPIO_PORT7_MODE   MODE_0 // 1:GPIO7
#define GPIO_PORT8_MODE   MODE_NC
#define GPIO_PORT9_MODE   MODE_NC
#define GPIO_PORT10_MODE   MODE_0 // 0:GPIO10
#define GPIO_PORT11_MODE   MODE_0 // 1:GPIO11
#define GPIO_PORT12_MODE   MODE_1 // 1:EINT10
#define GPIO_PORT13_MODE   MODE_1 // 1:EINT11
#define GPIO_PORT14_MODE   MODE_0 // 0:GPIO14
#define GPIO_PORT15_MODE   MODE_1 // 1:EINT13
#define GPIO_PORT16_MODE   MODE_1 // 1:U0RXD
#define GPIO_PORT17_MODE   MODE_1 // 1:U0TXD
#define GPIO_PORT18_MODE   MODE_0 // 0:GPIO18
#define GPIO_PORT19_MODE   MODE_2 // 2:EINT18
#define GPIO_PORT20_MODE   MODE_0 // 0:GPIO20
#define GPIO_PORT21_MODE   MODE_0 // 0:GPIO21
#define GPIO_PORT22_MODE   MODE_NC
#define GPIO_PORT23_MODE   MODE_2 // 2:EINT19
#define GPIO_PORT24_MODE   MODE_1 // 1:CMRST
#define GPIO_PORT25_MODE   MODE_1 // 1:CMPDN
#define GPIO_PORT26_MODE   MODE_1 // 1:CMCSD0
#define GPIO_PORT27_MODE   MODE_1 // 1:CMCSD1
#define GPIO_PORT28_MODE   MODE_1 // 1:CMMCLK
#define GPIO_PORT29_MODE   MODE_1 // 1:CMCSK
#define GPIO_PORT30_MODE   MODE_4 // 4:U1RXD
#define GPIO_PORT31_MODE   MODE_4 // 4:U1TXD
#define GPIO_PORT32_MODE   MODE_5 // 5:MC0_DA0
#define GPIO_PORT33_MODE   MODE_5 // 5:MC0_DA1
#define GPIO_PORT34_MODE   MODE_5 // 5:MC0_DA2
#define GPIO_PORT35_MODE   MODE_5 // 5:MC0_DA3
#define GPIO_PORT36_MODE   MODE_1 // 1:SCL0
#define GPIO_PORT37_MODE   MODE_1 // 1:SDA0
#define GPIO_PORT38_MODE   MODE_1 // 1:LSRSTB
#define GPIO_PORT39_MODE   MODE_1 // 1:LSCE_B0
#define GPIO_PORT40_MODE   MODE_1 // 1:LSCK0
#define GPIO_PORT41_MODE   MODE_1 // 1:LSDA0
#define GPIO_PORT42_MODE   MODE_1 // 1:LSA0DA0
#define GPIO_PORT43_MODE   MODE_1 // 1:LPTE
#define GPIO_PORT44_MODE   MODE_0 // 0:GPIO44
#define GPIO_PORT45_MODE   MODE_1 // 1:SRCLKENAI
#define GPIO_PORT46_MODE   MODE_0 // 0:GPIO46
#define GPIO_PORT47_MODE   MODE_0 // 0:GPIO47
#define GPIO_PORT48_MODE   MODE_0 // 0:GPIO48


#define GPIO_PORT0_DIR   DIR_OUTPUT
#define GPIO_PORT1_DIR   DIR_INPUT
#define GPIO_PORT2_DIR   DIR_INPUT
#define GPIO_PORT3_DIR   DIR_INPUT
#define GPIO_PORT4_DIR   DIR_INPUT
#define GPIO_PORT5_DIR   DIR_INPUT
#define GPIO_PORT6_DIR   DIR_INPUT
#define GPIO_PORT7_DIR   DIR_OUTPUT
#define GPIO_PORT8_DIR   DIR_INPUT
#define GPIO_PORT9_DIR   DIR_INPUT
#define GPIO_PORT10_DIR   DIR_OUTPUT
#define GPIO_PORT11_DIR   DIR_OUTPUT
#define GPIO_PORT12_DIR   DIR_INPUT
#define GPIO_PORT13_DIR   DIR_INPUT
#define GPIO_PORT14_DIR   DIR_INPUT
#define GPIO_PORT15_DIR   DIR_INPUT
#define GPIO_PORT16_DIR   DIR_INPUT
#define GPIO_PORT17_DIR   DIR_INPUT
#define GPIO_PORT18_DIR   DIR_OUTPUT
#define GPIO_PORT19_DIR   DIR_INPUT
#define GPIO_PORT20_DIR   DIR_INPUT
#define GPIO_PORT21_DIR   DIR_OUTPUT
#define GPIO_PORT22_DIR   DIR_INPUT
#define GPIO_PORT23_DIR   DIR_INPUT
#define GPIO_PORT24_DIR   DIR_INPUT
#define GPIO_PORT25_DIR   DIR_INPUT
#define GPIO_PORT26_DIR   DIR_INPUT
#define GPIO_PORT27_DIR   DIR_INPUT
#define GPIO_PORT28_DIR   DIR_INPUT
#define GPIO_PORT29_DIR   DIR_INPUT
#define GPIO_PORT30_DIR   DIR_INPUT
#define GPIO_PORT31_DIR   DIR_INPUT
#define GPIO_PORT32_DIR   DIR_INPUT
#define GPIO_PORT33_DIR   DIR_INPUT
#define GPIO_PORT34_DIR   DIR_INPUT
#define GPIO_PORT35_DIR   DIR_INPUT
#define GPIO_PORT36_DIR   DIR_INPUT
#define GPIO_PORT37_DIR   DIR_INPUT
#define GPIO_PORT38_DIR   DIR_INPUT
#define GPIO_PORT39_DIR   DIR_INPUT
#define GPIO_PORT40_DIR   DIR_INPUT
#define GPIO_PORT41_DIR   DIR_INPUT
#define GPIO_PORT42_DIR   DIR_INPUT
#define GPIO_PORT43_DIR   DIR_INPUT
#define GPIO_PORT44_DIR   DIR_INPUT
#define GPIO_PORT45_DIR   DIR_INPUT
#define GPIO_PORT46_DIR   DIR_INPUT
#define GPIO_PORT47_DIR   DIR_INPUT
#define GPIO_PORT48_DIR   DIR_INPUT


#define GPIO_PORT0_OUTPUT_LEVEL   0
#define GPIO_PORT1_OUTPUT_LEVEL   0
#define GPIO_PORT2_OUTPUT_LEVEL   0
#define GPIO_PORT3_OUTPUT_LEVEL   0
#define GPIO_PORT4_OUTPUT_LEVEL   0
#define GPIO_PORT5_OUTPUT_LEVEL   0
#define GPIO_PORT6_OUTPUT_LEVEL   0
#define GPIO_PORT7_OUTPUT_LEVEL   1
#define GPIO_PORT8_OUTPUT_LEVEL   0
#define GPIO_PORT9_OUTPUT_LEVEL   0
#define GPIO_PORT10_OUTPUT_LEVEL   1
#define GPIO_PORT11_OUTPUT_LEVEL   1
#define GPIO_PORT12_OUTPUT_LEVEL   0
#define GPIO_PORT13_OUTPUT_LEVEL   0
#define GPIO_PORT14_OUTPUT_LEVEL   1
#define GPIO_PORT15_OUTPUT_LEVEL   0
#define GPIO_PORT16_OUTPUT_LEVEL   0
#define GPIO_PORT17_OUTPUT_LEVEL   0
#define GPIO_PORT18_OUTPUT_LEVEL   0
#define GPIO_PORT19_OUTPUT_LEVEL   0
#define GPIO_PORT20_OUTPUT_LEVEL   0
#define GPIO_PORT21_OUTPUT_LEVEL   0
#define GPIO_PORT22_OUTPUT_LEVEL   0
#define GPIO_PORT23_OUTPUT_LEVEL   0
#define GPIO_PORT24_OUTPUT_LEVEL   0
#define GPIO_PORT25_OUTPUT_LEVEL   0
#define GPIO_PORT26_OUTPUT_LEVEL   0
#define GPIO_PORT27_OUTPUT_LEVEL   0
#define GPIO_PORT28_OUTPUT_LEVEL   0
#define GPIO_PORT29_OUTPUT_LEVEL   0
#define GPIO_PORT30_OUTPUT_LEVEL   0
#define GPIO_PORT31_OUTPUT_LEVEL   0
#define GPIO_PORT32_OUTPUT_LEVEL   0
#define GPIO_PORT33_OUTPUT_LEVEL   0
#define GPIO_PORT34_OUTPUT_LEVEL   0
#define GPIO_PORT35_OUTPUT_LEVEL   0
#define GPIO_PORT36_OUTPUT_LEVEL   0
#define GPIO_PORT37_OUTPUT_LEVEL   0
#define GPIO_PORT38_OUTPUT_LEVEL   0
#define GPIO_PORT39_OUTPUT_LEVEL   0
#define GPIO_PORT40_OUTPUT_LEVEL   0
#define GPIO_PORT41_OUTPUT_LEVEL   0
#define GPIO_PORT42_OUTPUT_LEVEL   0
#define GPIO_PORT43_OUTPUT_LEVEL   0
#define GPIO_PORT44_OUTPUT_LEVEL   0
#define GPIO_PORT45_OUTPUT_LEVEL   0
#define GPIO_PORT46_OUTPUT_LEVEL   0
#define GPIO_PORT47_OUTPUT_LEVEL   0
#define GPIO_PORT48_OUTPUT_LEVEL   0


#define GPIO_PORT0_PULL   PULL_DISABLE
#define GPIO_PORT1_PULL   PULL_DISABLE
#define GPIO_PORT2_PULL   PULL_ENABLE
#define GPIO_PORT3_PULL   PULL_DISABLE
#define GPIO_PORT4_PULL   0
#define GPIO_PORT5_PULL   0
#define GPIO_PORT6_PULL   0
#define GPIO_PORT7_PULL   0
#define GPIO_PORT8_PULL   0
#define GPIO_PORT9_PULL   0
#define GPIO_PORT10_PULL   PULL_DISABLE
#define GPIO_PORT11_PULL   0
#define GPIO_PORT12_PULL   0
#define GPIO_PORT13_PULL   0
#define GPIO_PORT14_PULL   0
#define GPIO_PORT15_PULL   0
#define GPIO_PORT16_PULL   0
#define GPIO_PORT17_PULL   0
#define GPIO_PORT18_PULL   0
#define GPIO_PORT19_PULL   0
#define GPIO_PORT20_PULL   0
#define GPIO_PORT21_PULL   0
#define GPIO_PORT22_PULL   0
#define GPIO_PORT23_PULL   0
#define GPIO_PORT24_PULL   0
#define GPIO_PORT25_PULL   0
#define GPIO_PORT26_PULL   0
#define GPIO_PORT27_PULL   0
#define GPIO_PORT28_PULL   0
#define GPIO_PORT29_PULL   0
#define GPIO_PORT30_PULL   0
#define GPIO_PORT31_PULL   0
#define GPIO_PORT32_PULL   0
#define GPIO_PORT33_PULL   0
#define GPIO_PORT34_PULL   0
#define GPIO_PORT35_PULL   0
#define GPIO_PORT36_PULL   0
#define GPIO_PORT37_PULL   0
#define GPIO_PORT38_PULL   0
#define GPIO_PORT39_PULL   0
#define GPIO_PORT40_PULL   0
#define GPIO_PORT41_PULL   0
#define GPIO_PORT42_PULL   0
#define GPIO_PORT43_PULL   0
#define GPIO_PORT44_PULL   0
#define GPIO_PORT45_PULL   0
#define GPIO_PORT46_PULL   0
#define GPIO_PORT47_PULL   0
#define GPIO_PORT48_PULL   0


#define GPIO_PORT0_PULL_SEL   0
#define GPIO_PORT1_PULL_SEL   0
#define GPIO_PORT2_PULL_SEL   1
#define GPIO_PORT3_PULL_SEL   0
#define GPIO_PORT4_PULL_SEL   0
#define GPIO_PORT5_PULL_SEL   0
#define GPIO_PORT6_PULL_SEL   0
#define GPIO_PORT7_PULL_SEL   0
#define GPIO_PORT8_PULL_SEL   0
#define GPIO_PORT9_PULL_SEL   0
#define GPIO_PORT10_PULL_SEL   0
#define GPIO_PORT11_PULL_SEL   0
#define GPIO_PORT12_PULL_SEL   0
#define GPIO_PORT13_PULL_SEL   0
#define GPIO_PORT14_PULL_SEL   0
#define GPIO_PORT15_PULL_SEL   0
#define GPIO_PORT16_PULL_SEL   0
#define GPIO_PORT17_PULL_SEL   0
#define GPIO_PORT18_PULL_SEL   0
#define GPIO_PORT19_PULL_SEL   0
#define GPIO_PORT20_PULL_SEL   0
#define GPIO_PORT21_PULL_SEL   0
#define GPIO_PORT22_PULL_SEL   0
#define GPIO_PORT23_PULL_SEL   0
#define GPIO_PORT24_PULL_SEL   0
#define GPIO_PORT25_PULL_SEL   0
#define GPIO_PORT26_PULL_SEL   0
#define GPIO_PORT27_PULL_SEL   0
#define GPIO_PORT28_PULL_SEL   0
#define GPIO_PORT29_PULL_SEL   0
#define GPIO_PORT30_PULL_SEL   0
#define GPIO_PORT31_PULL_SEL   0
#define GPIO_PORT32_PULL_SEL   0
#define GPIO_PORT33_PULL_SEL   0
#define GPIO_PORT34_PULL_SEL   0
#define GPIO_PORT35_PULL_SEL   0
#define GPIO_PORT36_PULL_SEL   0
#define GPIO_PORT37_PULL_SEL   0
#define GPIO_PORT38_PULL_SEL   0
#define GPIO_PORT39_PULL_SEL   0
#define GPIO_PORT40_PULL_SEL   0
#define GPIO_PORT41_PULL_SEL   0
#define GPIO_PORT42_PULL_SEL   0
#define GPIO_PORT43_PULL_SEL   0
#define GPIO_PORT44_PULL_SEL   0
#define GPIO_PORT45_PULL_SEL   0
#define GPIO_PORT46_PULL_SEL   0
#define GPIO_PORT47_PULL_SEL   0
#define GPIO_PORT48_PULL_SEL   0


// PUPD3 PD-47K_ohms
#define GPIO_PORT4_PUPD  0
#define GPIO_PORT4_R1 0
#define GPIO_PORT4_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT5_PUPD  0
#define GPIO_PORT5_R1 0
#define GPIO_PORT5_R0 0
// PUPD3 Disable_pull
#define GPIO_PORT6_PUPD  0
#define GPIO_PORT6_R1 0
#define GPIO_PORT6_R0 0
// PUPD3 Disable_pull
#define GPIO_PORT7_PUPD  0
#define GPIO_PORT7_R1 0
#define GPIO_PORT7_R0 0
// PUPD3 PD-47K_ohms
#define GPIO_PORT8_PUPD  1
#define GPIO_PORT8_R1 0
#define GPIO_PORT8_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT9_PUPD  1
#define GPIO_PORT9_R1 0
#define GPIO_PORT9_R0 1
// PUPD3 Disable_pull
#define GPIO_PORT11_PUPD  0
#define GPIO_PORT11_R1 0
#define GPIO_PORT11_R0 0
// PUPD3 PU-23.5K_ohms
#define GPIO_PORT12_PUPD  0
#define GPIO_PORT12_R1 1
#define GPIO_PORT12_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT13_PUPD  1
#define GPIO_PORT13_R1 0
#define GPIO_PORT13_R0 1
// PUPD3 Disable_pull
#define GPIO_PORT14_PUPD  0
#define GPIO_PORT14_R1 0
#define GPIO_PORT14_R0 0
// PUPD3 PU-47K_ohms
#define GPIO_PORT15_PUPD  0
#define GPIO_PORT15_R1 0
#define GPIO_PORT15_R0 1
// PUPD3 PU-47K_ohms
#define GPIO_PORT16_PUPD  0
#define GPIO_PORT16_R1 0
#define GPIO_PORT16_R0 1
// PUPD3 Disable_pull
#define GPIO_PORT17_PUPD  0
#define GPIO_PORT17_R1 0
#define GPIO_PORT17_R0 0
// PUPD2 Disable_pull
#define GPIO_PORT18_PUPD  0
#define GPIO_PORT18_R1 0
#define GPIO_PORT18_R0 0
// PUPD2 PU-75K_ohms
#define GPIO_PORT19_PUPD  0
#define GPIO_PORT19_R1 0
#define GPIO_PORT19_R0 1
// PUPD2 PD-75K_ohms
#define GPIO_PORT20_PUPD  1
#define GPIO_PORT20_R1 0
#define GPIO_PORT20_R0 1
// PUPD1 Disable_pull
#define GPIO_PORT21_PUPD  0
#define GPIO_PORT21_R1 0
#define GPIO_PORT21_R0 0
// PUPD1 PD-75K_ohms
#define GPIO_PORT22_PUPD  1
#define GPIO_PORT22_R1 0
#define GPIO_PORT22_R0 1
// PUPD1 Disable_pull
#define GPIO_PORT23_PUPD  0
#define GPIO_PORT23_R1 0
#define GPIO_PORT23_R0 0
// PUPD3 PD-47K_ohms
#define GPIO_PORT24_PUPD  1
#define GPIO_PORT24_R1 0
#define GPIO_PORT24_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT25_PUPD  1
#define GPIO_PORT25_R1 0
#define GPIO_PORT25_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT26_PUPD  1
#define GPIO_PORT26_R1 0
#define GPIO_PORT26_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT27_PUPD  1
#define GPIO_PORT27_R1 0
#define GPIO_PORT27_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT28_PUPD  1
#define GPIO_PORT28_R1 0
#define GPIO_PORT28_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT29_PUPD  1
#define GPIO_PORT29_R1 0
#define GPIO_PORT29_R0 1
// PUPD3 PU-23.5K_ohms
#define GPIO_PORT30_PUPD  0
#define GPIO_PORT30_R1 1
#define GPIO_PORT30_R0 1
// PUPD3 Disable_pull
#define GPIO_PORT31_PUPD  0
#define GPIO_PORT31_R1 0
#define GPIO_PORT31_R0 0
// PUPD3 PD-47K_ohms
#define GPIO_PORT32_PUPD  1
#define GPIO_PORT32_R1 0
#define GPIO_PORT32_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT33_PUPD  1
#define GPIO_PORT33_R1 0
#define GPIO_PORT33_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT34_PUPD  1
#define GPIO_PORT34_R1 0
#define GPIO_PORT34_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT35_PUPD  1
#define GPIO_PORT35_R1 0
#define GPIO_PORT35_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT36_PUPD  1
#define GPIO_PORT36_R1 0
#define GPIO_PORT36_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT37_PUPD  1
#define GPIO_PORT37_R1 0
#define GPIO_PORT37_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT38_PUPD  1
#define GPIO_PORT38_R1 0
#define GPIO_PORT38_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT39_PUPD  1
#define GPIO_PORT39_R1 0
#define GPIO_PORT39_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT40_PUPD  1
#define GPIO_PORT40_R1 0
#define GPIO_PORT40_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT41_PUPD  1
#define GPIO_PORT41_R1 0
#define GPIO_PORT41_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT42_PUPD  1
#define GPIO_PORT42_R1 0
#define GPIO_PORT42_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT43_PUPD  1
#define GPIO_PORT43_R1 0
#define GPIO_PORT43_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT44_PUPD  1
#define GPIO_PORT44_R1 0
#define GPIO_PORT44_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT45_PUPD  1
#define GPIO_PORT45_R1 0
#define GPIO_PORT45_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT46_PUPD  1
#define GPIO_PORT46_R1 0
#define GPIO_PORT46_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT47_PUPD  1
#define GPIO_PORT47_R1 0
#define GPIO_PORT47_R0 1
// PUPD3 PD-47K_ohms
#define GPIO_PORT48_PUPD  1
#define GPIO_PORT48_R1 0
#define GPIO_PORT48_R0 1


#define GPIO_STRAPPING_PIN_NUMBER 6
#define GPIO_STRAPPING_PIN_ARRAY 20,40,44,46,47,48


#define STRAPPING_PIN_MODE_SET_VALUE 0
#define STRAPPING_PIN_DIR_SET_VALUE 1
#define STRAPPING_PIN_DOUT_SET_VALUE 0

#endif /* _GPIO_DRV_H */


