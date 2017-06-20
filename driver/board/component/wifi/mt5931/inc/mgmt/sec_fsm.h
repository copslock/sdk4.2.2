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

/*
** $Id: //Department/DaVinci/TRUNK/MT6620_5931_WiFi_Driver/include/mgmt/sec_fsm.h#6 $
*/

/*! \file   sec_fsm.h
    \brief  Declaration of functions and finite state machine for SECURITY Module.

    Function declaration for privacy.c and SEC_STATE for SECURITY FSM.
*/



#ifndef _SEC_FSM_H
#define _SEC_FSM_H

/*******************************************************************************
*                         C O M P I L E R   F L A G S
********************************************************************************
*/

/*******************************************************************************
*                    E X T E R N A L   R E F E R E N C E S
********************************************************************************
*/

/*******************************************************************************
*                              C O N S T A N T S
********************************************************************************
*/

/* TKIP CounterMeasure interval for Rejoin to Network. */
#define COUNTER_MEASURE_TIMEOUT_INTERVAL_SEC        60

/* Timeout to wait the EAPoL Error Report frame Send out. */
#define EAPOL_REPORT_SEND_TIMEOUT_INTERVAL_SEC       1

/*******************************************************************************
*                             D A T A   T Y P E S
********************************************************************************
*/

typedef UINT_32             SEC_STATUS, *P_SEC_STATUS;

#if 0
/* WPA2 PMKID candicate structure */
typedef struct _PMKID_CANDICATE_T {
    UINT_8              aucBssid[MAC_ADDR_LEN];    /* MAC address */
    UINT_32             u4PreAuthFlags;
} PMKID_CANDICATE_T, *P_PMKID_CANDICATE_T;
#endif

typedef SEC_STATUS(*PFN_SEC_FSM_STATE_HANDLER)(VOID);

/*******************************************************************************
*                            P U B L I C   D A T A
********************************************************************************
*/

/*******************************************************************************
*                           P R I V A T E   D A T A
********************************************************************************
*/

/*******************************************************************************
*                                 M A C R O S
********************************************************************************
*/
//#define SEC_STATE_TRANSITION_FLAG   fgIsTransition
#define SEC_NEXT_STATE_VAR          eNextState

#define SEC_STATE_TRANSITION(prAdapter, prSta, eFromState, eToState) \
        { secFsmTrans_ ## eFromState ## _to_ ## eToState(prAdapter, prSta); \
          SEC_NEXT_STATE_VAR = SEC_STATE_ ## eToState; \
        }

/*******************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
********************************************************************************
*/

/*--------------------------------------------------------------*/
/* Routines to handle the sec check                             */
/*--------------------------------------------------------------*/
/***** Routines in sec_fsm.c *****/
VOID
secFsmInit(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

VOID
secFsmEventInit(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

VOID
secFsmEventStart(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

VOID
secFsmEventAbort(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

BOOLEAN
secFsmEventPTKInstalled(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

VOID
secFsmEvent2ndEapolTx(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

VOID
secFsmEvent4ndEapolTxDone(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

VOID
secFsmEventEapolTxDone(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prStaRec,
    IN ENUM_TX_RESULT_CODE_T  rTxDoneStatus
);

VOID
secFsmEventEapolTxTimeout(
    IN P_ADAPTER_T            prAdapter,
    IN UINT_32                u4Parm
);

VOID
secFsmEventDeauthTxDone(
    IN P_ADAPTER_T          prAdapter,
    IN P_MSDU_INFO_T        prMsduInfo,
    IN ENUM_TX_RESULT_CODE_T  rTxDoneStatus
);

VOID
secFsmEventStartCounterMeasure(
    IN P_ADAPTER_T          prAdapter,
    IN P_STA_RECORD_T       prSta
);

VOID
secFsmEventEndOfCounterMeasure(
    IN P_ADAPTER_T          prAdapter,
    IN UINT_32              u4Parm
);

/*******************************************************************************
*                              F U N C T I O N S
********************************************************************************
*/
#endif /* _SEC_FSM_H */


