/*
 * Generated by MTK Easy PinMux Tool Version 1.0.3 for 7687. Copyright MediaTek Inc. (C) 2015.
 * Thu Mar 31 10:40:23 2016
 * Do Not Modify the File.
 */

/*****************************************************************************
*
* Filename:
* ---------
*    ***.*
*
* Project:
* --------
*
* Description:
* ------------
*
* Author:
* -------
*
*============================================================================
****************************************************************************/
#ifndef _EPT_GPIO_DRV_H
#define _EPT_GPIO_DRV_H


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
#define OUTPUT_ENABLE  1
#define OUTPUT_DISABLE  0
#define IES_ENABLE  1
#define IES_DISABLE  0
#define PULL_UP_ENABLE  1
#define PULL_UP_DISABLE  0
#define PULL_DOWN_ENABLE  1
#define PULL_DOWN_DISABLE  0
#define GPIO_PORTNULL_MODE  0
#define GPIO_PORTNULL_OE   0
#define GPIO_PORTNULL_IES  0
#define GPIO_PORTNULL_PULL_UP   0
#define GPIO_PORTNULL_PULL_DOWN  0
#define GPIO_PORTNULL_OUTPUT    0

#define GPIO_PORT0_MODE   MODE_7 // 7:UART1_RTS_CM4(O)
#define GPIO_PORT1_MODE   MODE_7 // 7:UART1_CTS_CM4(I)
#define GPIO_PORT2_MODE   MODE_7 // 7:UART1_RX_CM4(I)
#define GPIO_PORT3_MODE   MODE_7 // 7:UART1_TX_CM4(O)
#define GPIO_PORT4_MODE   MODE_8 // 8:GPIO[4](I/O)
#define GPIO_PORT5_MODE   MODE_8 // 8:GPIO[5](I/O)
#define GPIO_PORT6_MODE   MODE_8 // 8:GPIO[6](I/O)
#define GPIO_PORT7_MODE   MODE_8 // 8:GPIO[7](I/O)
#define GPIO_PORT8_MODE   MODE_8 // 8:GPIO[8](I/O)
#define GPIO_PORT9_MODE   MODE_8 // 8:GPIO[9](I/O)
#define GPIO_PORT10_MODE   MODE_8 // 8:GPIO[10](I/O)
#define GPIO_PORT11_MODE   MODE_8 // 8:GPIO[11](I/O)
#define GPIO_PORT12_MODE   MODE_8 // 8:GPIO[12](I/O)
#define GPIO_PORT13_MODE   MODE_8 // 8:GPIO[13](I/O)
#define GPIO_PORT14_MODE   MODE_8 // 8:GPIO[14](I/O)
#define GPIO_PORT15_MODE   MODE_8 // 8:GPIO[15](I/O)
#define GPIO_PORT16_MODE   MODE_8 // 8:GPIO[16](I/O)
#define GPIO_PORT17_MODE   MODE_8 // 8:GPIO[17](I/O)
#define GPIO_PORT18_MODE   MODE_8 // 8:GPIO[18](I/O)
#define GPIO_PORT19_MODE   MODE_8 // 8:GPIO[19](I/O)
#define GPIO_PORT20_MODE   MODE_8 // 8:GPIO[20](I/O)
#define GPIO_PORT21_MODE   MODE_8 // 8:GPIO[21](I/O)
#define GPIO_PORT22_MODE   MODE_8 // 8:GPIO[22](I/O)
#define GPIO_PORT23_MODE   MODE_8 // 8:GPIO[23](I/O)
#define GPIO_PORT24_MODE   MODE_8 // 8:GPIO[24](I/O)
#define GPIO_PORT25_MODE   MODE_8 // 8:GPIO[25](I/O)
#define GPIO_PORT26_MODE   MODE_8 // 8:GPIO[26](I/O)
#define GPIO_PORT27_MODE   MODE_4 // 4:I2C1_CLK(I/O)
#define GPIO_PORT28_MODE   MODE_4 // 4:I2C1_DATA(I/O)
#define GPIO_PORT29_MODE   MODE_8 // 8:GPIO[29](I/O)
#define GPIO_PORT30_MODE   MODE_8 // 8:GPIO[30](I/O)
#define GPIO_PORT31_MODE   MODE_8 // 8:GPIO[31](I/O)
#define GPIO_PORT32_MODE   MODE_8 // 8:GPIO[32](I/O)
#define GPIO_PORT33_MODE   MODE_8 // 8:GPIO[33](I/O)
#define GPIO_PORT34_MODE   MODE_8 // 8:GPIO[34](I/O)
#define GPIO_PORT35_MODE   MODE_8 // 8:GPIO[35](I/O)
#define GPIO_PORT36_MODE   MODE_7 // 7:UART2_RX_CM4(I)
#define GPIO_PORT37_MODE   MODE_7 // 7:UART2_TX_CM4(O)
#define GPIO_PORT38_MODE   MODE_8 // 8:GPIO[38](I/O)
#define GPIO_PORT39_MODE   MODE_8 // 8:GPIO[39](I/O)
#define GPIO_PORT40_MODE   MODE_8 // 8:GPIO[40](I/O)
#define GPIO_PORT41_MODE   MODE_8 // 8:GPIO[41](I/O)
#define GPIO_PORT42_MODE   MODE_8 // 8:GPIO[42](I/O)
#define GPIO_PORT43_MODE   MODE_8 // 8:GPIO[43](I/O)
#define GPIO_PORT44_MODE   MODE_8 // 8:GPIO[44](I/O)
#define GPIO_PORT45_MODE   MODE_8 // 8:GPIO[45](I/O)
#define GPIO_PORT46_MODE   MODE_8 // 8:GPIO[46](I/O)
#define GPIO_PORT47_MODE   MODE_8 // 8:GPIO[47](I/O)
#define GPIO_PORT48_MODE   MODE_8 // 8:GPIO[48](I/O)
#define GPIO_PORT49_MODE   MODE_8 // 8:GPIO[49](I/O)
#define GPIO_PORT50_MODE   MODE_8 // 8:GPIO[50](I/O)
#define GPIO_PORT51_MODE   MODE_8 // 8:GPIO[51](I/O)
#define GPIO_PORT52_MODE   MODE_8 // 8:GPIO[52](I/O)
#define GPIO_PORT53_MODE   MODE_8 // 8:GPIO[53](I/O)
#define GPIO_PORT54_MODE   MODE_8 // 8:GPIO[54](I/O)
#define GPIO_PORT55_MODE   MODE_8 // 8:GPIO[55](I/O)
#define GPIO_PORT56_MODE   MODE_8 // 8:GPIO[56](I/O)
#define GPIO_PORT57_MODE   MODE_8 // 8:GPIO[57](I/O)
#define GPIO_PORT58_MODE   MODE_8 // 8:GPIO[58](I/O)
#define GPIO_PORT59_MODE   MODE_6 // 6:SWD_DIO(I/O)
#define GPIO_PORT60_MODE   MODE_6 // 6:SWD_CLK(I)
#define GPIO_PORT61_MODE   MODE_8 // 8:GPIO[61](I/O)
#define GPIO_PORT62_MODE   MODE_8 // 8:GPIO[62](I/O)
#define GPIO_PORT63_MODE   MODE_8 // 8:GPIO[63](I/O)
#define GPIO_PORT64_MODE   MODE_8 // 8:GPIO[64](I/O)
#define GPIO_PORT65_MODE   MODE_8 // 8:GPIO[65](I/O)
#define GPIO_PORT66_MODE   MODE_8 // 8:GPIO[66](I/O)
#define GPIO_PORT67_MODE   MODE_8 // 8:GPIO[67](I/O)
#define GPIO_PORT68_MODE   MODE_8 // 8:GPIO[68](I/O)
#define GPIO_PORT69_MODE   MODE_8 // 8:GPIO[69](I/O)
#define GPIO_PORT70_MODE   MODE_8 // 8:GPIO[70](I/O)
#define GPIO_PORT71_MODE   MODE_8 // 8:GPIO[71](I/O)
#define GPIO_PORT72_MODE   MODE_8 // 8:GPIO[72](I/O)


// Input
#define GPIO_PORT0_OE   OUTPUT_DISABLE
#define GPIO_PORT0_IES   IES_ENABLE
// Input
#define GPIO_PORT1_OE   OUTPUT_DISABLE
#define GPIO_PORT1_IES   IES_ENABLE
// Input
#define GPIO_PORT2_OE   OUTPUT_DISABLE
#define GPIO_PORT2_IES   IES_ENABLE
// Input
#define GPIO_PORT3_OE   OUTPUT_DISABLE
#define GPIO_PORT3_IES   IES_ENABLE
// Output
#define GPIO_PORT4_OE   OUTPUT_ENABLE
#define GPIO_PORT4_IES   IES_DISABLE
// Output
#define GPIO_PORT5_OE   OUTPUT_ENABLE
#define GPIO_PORT5_IES   IES_DISABLE
// Output
#define GPIO_PORT6_OE   OUTPUT_ENABLE
#define GPIO_PORT6_IES   IES_DISABLE
// Output
#define GPIO_PORT7_OE   OUTPUT_ENABLE
#define GPIO_PORT7_IES   IES_DISABLE
// Input
#define GPIO_PORT8_OE   OUTPUT_DISABLE
#define GPIO_PORT8_IES   IES_ENABLE
// Input
#define GPIO_PORT9_OE   OUTPUT_DISABLE
#define GPIO_PORT9_IES   IES_ENABLE
// Input
#define GPIO_PORT10_OE   OUTPUT_DISABLE
#define GPIO_PORT10_IES   IES_ENABLE
// Input
#define GPIO_PORT11_OE   OUTPUT_DISABLE
#define GPIO_PORT11_IES   IES_ENABLE
// Input
#define GPIO_PORT12_OE   OUTPUT_DISABLE
#define GPIO_PORT12_IES   IES_ENABLE
// Input
#define GPIO_PORT13_OE   OUTPUT_DISABLE
#define GPIO_PORT13_IES   IES_ENABLE
// Input
#define GPIO_PORT14_OE   OUTPUT_DISABLE
#define GPIO_PORT14_IES   IES_ENABLE
// Input
#define GPIO_PORT15_OE   OUTPUT_DISABLE
#define GPIO_PORT15_IES   IES_ENABLE
// Input
#define GPIO_PORT16_OE   OUTPUT_DISABLE
#define GPIO_PORT16_IES   IES_ENABLE
// Input
#define GPIO_PORT17_OE   OUTPUT_DISABLE
#define GPIO_PORT17_IES   IES_ENABLE
// Input
#define GPIO_PORT18_OE   OUTPUT_DISABLE
#define GPIO_PORT18_IES   IES_ENABLE
// Input
#define GPIO_PORT19_OE   OUTPUT_DISABLE
#define GPIO_PORT19_IES   IES_ENABLE
// Input
#define GPIO_PORT20_OE   OUTPUT_DISABLE
#define GPIO_PORT20_IES   IES_ENABLE
// Input
#define GPIO_PORT21_OE   OUTPUT_DISABLE
#define GPIO_PORT21_IES   IES_ENABLE
// Input
#define GPIO_PORT22_OE   OUTPUT_DISABLE
#define GPIO_PORT22_IES   IES_ENABLE
// Input
#define GPIO_PORT23_OE   OUTPUT_DISABLE
#define GPIO_PORT23_IES   IES_ENABLE
// Output
#define GPIO_PORT24_OE   OUTPUT_ENABLE
#define GPIO_PORT24_IES   IES_DISABLE
// Output
#define GPIO_PORT25_OE   OUTPUT_ENABLE
#define GPIO_PORT25_IES   IES_DISABLE
// Output
#define GPIO_PORT26_OE   OUTPUT_ENABLE
#define GPIO_PORT26_IES   IES_DISABLE
// Input
#define GPIO_PORT27_OE   OUTPUT_DISABLE
#define GPIO_PORT27_IES   IES_ENABLE
// Input
#define GPIO_PORT28_OE   OUTPUT_DISABLE
#define GPIO_PORT28_IES   IES_ENABLE
// Output
#define GPIO_PORT29_OE   OUTPUT_ENABLE
#define GPIO_PORT29_IES   IES_DISABLE
// Output
#define GPIO_PORT30_OE   OUTPUT_ENABLE
#define GPIO_PORT30_IES   IES_DISABLE
// Output
#define GPIO_PORT31_OE   OUTPUT_ENABLE
#define GPIO_PORT31_IES   IES_DISABLE
// Output
#define GPIO_PORT32_OE   OUTPUT_ENABLE
#define GPIO_PORT32_IES   IES_DISABLE
// Output
#define GPIO_PORT33_OE   OUTPUT_ENABLE
#define GPIO_PORT33_IES   IES_DISABLE
// Output
#define GPIO_PORT34_OE   OUTPUT_ENABLE
#define GPIO_PORT34_IES   IES_DISABLE
// Output
#define GPIO_PORT35_OE   OUTPUT_ENABLE
#define GPIO_PORT35_IES   IES_DISABLE
// Input
#define GPIO_PORT36_OE   OUTPUT_DISABLE
#define GPIO_PORT36_IES   IES_ENABLE
// Input
#define GPIO_PORT37_OE   OUTPUT_DISABLE
#define GPIO_PORT37_IES   IES_ENABLE
// Output
#define GPIO_PORT38_OE   OUTPUT_ENABLE
#define GPIO_PORT38_IES   IES_DISABLE
// Output
#define GPIO_PORT39_OE   OUTPUT_ENABLE
#define GPIO_PORT39_IES   IES_DISABLE
// Input
#define GPIO_PORT40_OE   OUTPUT_DISABLE
#define GPIO_PORT40_IES   IES_ENABLE
// Input
#define GPIO_PORT41_OE   OUTPUT_DISABLE
#define GPIO_PORT41_IES   IES_ENABLE
// Input
#define GPIO_PORT42_OE   OUTPUT_DISABLE
#define GPIO_PORT42_IES   IES_ENABLE
// Input
#define GPIO_PORT43_OE   OUTPUT_DISABLE
#define GPIO_PORT43_IES   IES_ENABLE
// Input
#define GPIO_PORT44_OE   OUTPUT_DISABLE
#define GPIO_PORT44_IES   IES_ENABLE
// Input
#define GPIO_PORT45_OE   OUTPUT_DISABLE
#define GPIO_PORT45_IES   IES_ENABLE
// Input
#define GPIO_PORT46_OE   OUTPUT_DISABLE
#define GPIO_PORT46_IES   IES_ENABLE
// Input
#define GPIO_PORT47_OE   OUTPUT_DISABLE
#define GPIO_PORT47_IES   IES_ENABLE
// Input
#define GPIO_PORT48_OE   OUTPUT_DISABLE
#define GPIO_PORT48_IES   IES_ENABLE
// Input
#define GPIO_PORT49_OE   OUTPUT_DISABLE
#define GPIO_PORT49_IES   IES_ENABLE
// Input
#define GPIO_PORT50_OE   OUTPUT_DISABLE
#define GPIO_PORT50_IES   IES_ENABLE
// Input
#define GPIO_PORT51_OE   OUTPUT_DISABLE
#define GPIO_PORT51_IES   IES_ENABLE
// Input
#define GPIO_PORT52_OE   OUTPUT_DISABLE
#define GPIO_PORT52_IES   IES_ENABLE
// Input
#define GPIO_PORT53_OE   OUTPUT_DISABLE
#define GPIO_PORT53_IES   IES_ENABLE
// Input
#define GPIO_PORT54_OE   OUTPUT_DISABLE
#define GPIO_PORT54_IES   IES_ENABLE
// Input
#define GPIO_PORT55_OE   OUTPUT_DISABLE
#define GPIO_PORT55_IES   IES_ENABLE
// Input
#define GPIO_PORT56_OE   OUTPUT_DISABLE
#define GPIO_PORT56_IES   IES_ENABLE
// Output
#define GPIO_PORT57_OE   OUTPUT_ENABLE
#define GPIO_PORT57_IES   IES_DISABLE
// Output
#define GPIO_PORT58_OE   OUTPUT_ENABLE
#define GPIO_PORT58_IES   IES_DISABLE
// Input
#define GPIO_PORT59_OE   OUTPUT_DISABLE
#define GPIO_PORT59_IES   IES_ENABLE
// Input
#define GPIO_PORT60_OE   OUTPUT_DISABLE
#define GPIO_PORT60_IES   IES_ENABLE
// Input
#define GPIO_PORT61_OE   OUTPUT_DISABLE
#define GPIO_PORT61_IES   IES_ENABLE
// Input
#define GPIO_PORT62_OE   OUTPUT_DISABLE
#define GPIO_PORT62_IES   IES_ENABLE
// Input
#define GPIO_PORT63_OE   OUTPUT_DISABLE
#define GPIO_PORT63_IES   IES_ENABLE
// Input
#define GPIO_PORT64_OE   OUTPUT_DISABLE
#define GPIO_PORT64_IES   IES_ENABLE
// Input
#define GPIO_PORT65_OE   OUTPUT_DISABLE
#define GPIO_PORT65_IES   IES_ENABLE
// Input
#define GPIO_PORT66_OE   OUTPUT_DISABLE
#define GPIO_PORT66_IES   IES_ENABLE
// Input
#define GPIO_PORT67_OE   OUTPUT_DISABLE
#define GPIO_PORT67_IES   IES_ENABLE
// Input
#define GPIO_PORT68_OE   OUTPUT_DISABLE
#define GPIO_PORT68_IES   IES_ENABLE
// Input
#define GPIO_PORT69_OE   OUTPUT_DISABLE
#define GPIO_PORT69_IES   IES_ENABLE
// Input
#define GPIO_PORT70_OE   OUTPUT_DISABLE
#define GPIO_PORT70_IES   IES_ENABLE
// Input
#define GPIO_PORT71_OE   OUTPUT_DISABLE
#define GPIO_PORT71_IES   IES_ENABLE
// Input
#define GPIO_PORT72_OE   OUTPUT_DISABLE
#define GPIO_PORT72_IES   IES_ENABLE


#define GPIO_PORT0_OUTPUT   0
#define GPIO_PORT1_OUTPUT   0
#define GPIO_PORT2_OUTPUT   0
#define GPIO_PORT3_OUTPUT   0
#define GPIO_PORT4_OUTPUT   0
#define GPIO_PORT5_OUTPUT   0
#define GPIO_PORT6_OUTPUT   1
#define GPIO_PORT7_OUTPUT   0
#define GPIO_PORT8_OUTPUT   0
#define GPIO_PORT9_OUTPUT   0
#define GPIO_PORT10_OUTPUT   0
#define GPIO_PORT11_OUTPUT   0
#define GPIO_PORT12_OUTPUT   0
#define GPIO_PORT13_OUTPUT   0
#define GPIO_PORT14_OUTPUT   0
#define GPIO_PORT15_OUTPUT   0
#define GPIO_PORT16_OUTPUT   0
#define GPIO_PORT17_OUTPUT   0
#define GPIO_PORT18_OUTPUT   0
#define GPIO_PORT19_OUTPUT   0
#define GPIO_PORT20_OUTPUT   0
#define GPIO_PORT21_OUTPUT   0
#define GPIO_PORT22_OUTPUT   0
#define GPIO_PORT23_OUTPUT   0
#define GPIO_PORT24_OUTPUT   0
#define GPIO_PORT25_OUTPUT   0
#define GPIO_PORT26_OUTPUT   0
#define GPIO_PORT27_OUTPUT   0
#define GPIO_PORT28_OUTPUT   0
#define GPIO_PORT29_OUTPUT   0
#define GPIO_PORT30_OUTPUT   0
#define GPIO_PORT31_OUTPUT   0
#define GPIO_PORT32_OUTPUT   0
#define GPIO_PORT33_OUTPUT   0
#define GPIO_PORT34_OUTPUT   0
#define GPIO_PORT35_OUTPUT   0
#define GPIO_PORT36_OUTPUT   0
#define GPIO_PORT37_OUTPUT   0
#define GPIO_PORT38_OUTPUT   1
#define GPIO_PORT39_OUTPUT   0
#define GPIO_PORT40_OUTPUT   0
#define GPIO_PORT41_OUTPUT   0
#define GPIO_PORT42_OUTPUT   0
#define GPIO_PORT43_OUTPUT   0
#define GPIO_PORT44_OUTPUT   0
#define GPIO_PORT45_OUTPUT   0
#define GPIO_PORT46_OUTPUT   0
#define GPIO_PORT47_OUTPUT   0
#define GPIO_PORT48_OUTPUT   0
#define GPIO_PORT49_OUTPUT   0
#define GPIO_PORT50_OUTPUT   0
#define GPIO_PORT51_OUTPUT   0
#define GPIO_PORT52_OUTPUT   0
#define GPIO_PORT53_OUTPUT   0
#define GPIO_PORT54_OUTPUT   0
#define GPIO_PORT55_OUTPUT   0
#define GPIO_PORT56_OUTPUT   0
#define GPIO_PORT57_OUTPUT   0
#define GPIO_PORT58_OUTPUT   0
#define GPIO_PORT59_OUTPUT   0
#define GPIO_PORT60_OUTPUT   0
#define GPIO_PORT61_OUTPUT   0
#define GPIO_PORT62_OUTPUT   0
#define GPIO_PORT63_OUTPUT   0
#define GPIO_PORT64_OUTPUT   0
#define GPIO_PORT65_OUTPUT   0
#define GPIO_PORT66_OUTPUT   0
#define GPIO_PORT67_OUTPUT   0
#define GPIO_PORT68_OUTPUT   0
#define GPIO_PORT69_OUTPUT   0
#define GPIO_PORT70_OUTPUT   0
#define GPIO_PORT71_OUTPUT   0
#define GPIO_PORT72_OUTPUT   0


// Disable
#define GPIO_PORT0_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT0_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT1_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT1_PULL_DOWN   PULL_DOWN_DISABLE
// Enable:_Pull_Up
#define GPIO_PORT2_PULL_UP   PULL_UP_ENABLE
#define GPIO_PORT2_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT3_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT3_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT4_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT4_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT5_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT5_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT6_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT6_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT7_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT7_PULL_DOWN   PULL_DOWN_DISABLE
// Enable:_Pull_Down
#define GPIO_PORT8_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT8_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT9_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT9_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT10_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT10_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT11_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT11_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT12_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT12_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT13_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT13_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT14_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT14_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT15_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT15_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT16_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT16_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT17_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT17_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT18_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT18_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT19_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT19_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT20_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT20_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT21_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT21_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT22_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT22_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT23_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT23_PULL_DOWN   PULL_DOWN_ENABLE
// Disable
#define GPIO_PORT24_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT24_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT25_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT25_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT26_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT26_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT27_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT27_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT28_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT28_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT29_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT29_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT30_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT30_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT31_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT31_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT32_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT32_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT33_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT33_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT34_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT34_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT35_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT35_PULL_DOWN   PULL_DOWN_DISABLE
// Enable:_Pull_Up
#define GPIO_PORT36_PULL_UP   PULL_UP_ENABLE
#define GPIO_PORT36_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT37_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT37_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT38_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT38_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT39_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT39_PULL_DOWN   PULL_DOWN_DISABLE
// Enable:_Pull_Down
#define GPIO_PORT40_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT40_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT41_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT41_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT42_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT42_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT43_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT43_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT44_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT44_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT45_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT45_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT46_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT46_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT47_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT47_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT48_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT48_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT49_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT49_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT50_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT50_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT51_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT51_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT52_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT52_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT53_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT53_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT54_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT54_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT55_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT55_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT56_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT56_PULL_DOWN   PULL_DOWN_ENABLE
// Disable
#define GPIO_PORT57_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT57_PULL_DOWN   PULL_DOWN_DISABLE
// Disable
#define GPIO_PORT58_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT58_PULL_DOWN   PULL_DOWN_DISABLE
// Enable:_Pull_Down
#define GPIO_PORT59_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT59_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT60_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT60_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT61_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT61_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT62_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT62_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT63_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT63_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT64_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT64_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT65_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT65_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT66_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT66_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT67_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT67_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT68_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT68_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT69_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT69_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT70_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT70_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT71_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT71_PULL_DOWN   PULL_DOWN_ENABLE
// Enable:_Pull_Down
#define GPIO_PORT72_PULL_UP   PULL_UP_DISABLE
#define GPIO_PORT72_PULL_DOWN   PULL_DOWN_ENABLE




#endif /* _EPT_GPIO_DRV_H */


