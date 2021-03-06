/*!
 * @file    gpio_pin_map_9200.h
 *
 * @brief   This file specifies the APIs provided to initial GPIO & Pin
 * @note    Copyright (c) 2011 Sunplus Technology Co., Ltd.
 *          All rights reserved.
 *          19, Innovation First Road, Hsinchu Science Park, 300 Taiwan
 * @author
 */
#ifndef __GPIO_PIN_MAP_9200_H__
#define __GPIO_PIN_MAP_9200_H__

#ifdef MATERIALIZE
#define EXTERN
#else
#define EXTERN extern
#endif

#define PIN_NULL					0xFF
#define PIN_W5  					0  	  //HDMI_PRWB
#define PIN_W4  					1     //SCL_HDMIB
#define PIN_Y4  					2     //HDMI_PRWA
#define PIN_AA4 					3     //SDA_HDMIA
#define PIN_AB4 					4     //SCL_HDMIA
#define PIN_AB6 					5     //SDA_M(G)
#define PIN_AB7 					6     //SCL_M(G)
#define PIN_AC5 					7     //UA0_RX
#define PIN_AC6 					8  	  //UA0_TX
#define PIN_AB13					9  	  //AU_SW1(G)
#define PIN_AB14					10 	  //AU_SW0(G)
#define PIN_AB15					11 	  //DVD_IR(G)
#define PIN_AB16					12 	  //DVD_DAT
#define PIN_AC16					13 	  //DVD_EN(G)
#define PIN_AD16					14 	  //IFAGC
#define PIN_AB17					15 	  //SDA_33V(G)
#define PIN_AC17					16 	  //RFAGC(G)
#define PIN_AB18					17 	  //SCL_33V(G)
#define PIN_AC18					18 	  //SPDFOUT
#define PIN_AD18					19 	  //PTSO_D4
#define PIN_AA19					20 	  //CIPLUS_INT
#define PIN_AB19					21 	  //Control_CARD_Pull
#define PIN_AC19					22 	  //CI_CD
#define PIN_AD19					23 	  //PTSO_D1
#define PIN_AE19					24 	  //PTSO_D3
#define PIN_AF19					25 	  //PTSO_D2
#define PIN_AA20					26 	  //CI_PWR_EN
#define PIN_AB20					27 	  //CI_A11
#define PIN_AC20					28 	  //CI_OE
#define PIN_AD20					29 	  //PTSO_D0
#define PIN_AE20					30 	  //CI_D3
#define PIN_AF20					31    //PTSO_SYNC
#define PIN_AA21					32    //CI_A8
#define PIN_AB21					33    //CI_IOW
#define PIN_AC21					34    //CI_A10
#define PIN_AD21					35    //PTSI_D4
#define PIN_AE21					36    //PTSI_D3
#define PIN_AF21					37    //CI_D4
#define PIN_AF22					38    //PTSI_D5
#define PIN_AF23					39    //CI_D7
#define PIN_AF24					40    //CI_A14
#define PIN_AF25					41    //PTSO_D5
#define PIN_AF26					42    //PTSO_CLK
#define PIN_AE22					43    //CI_D6
#define PIN_AE23					44    //PTSI_D6
#define PIN_AE24					45    //CI_WE
#define PIN_AD25					46    //PTSO_D6
#define PIN_AE26					47    //PTSO_D7
#define PIN_AD22					48    //CI_D5
#define PIN_AD23					49    //PTSI_D7
#define PIN_AD24					50    //CI_RDY
#define PIN_AE25					51    //PTSO_VAL
#define PIN_AD26					52    //PTSI_CLK
#define PIN_AC22					53    //CI_IOR
#define PIN_AC23					54    //CI_A12
#define PIN_AC24					55    //CI_WAIT
#define PIN_AC25					56    //CI_A4
#define PIN_AC26					57    //CI_A3
#define PIN_AB22					58    //CI_A9
#define PIN_AB23					59    //CI_A7
#define PIN_AB24					60    //CI_A2
#define PIN_AB25					61    //CI_A1
#define PIN_AB26					62    //CI_A0
#define PIN_AA22					63    //CI_A13
#define PIN_AA23					64    //CI_A6
#define PIN_AA24					65    //PTSI_VAL
#define PIN_AA25					66    //PTSI_SYNC
#define PIN_AA26					67    //CI_D0
#define PIN_Y22 					68    //CI_RST
#define PIN_Y23 					69    //CI_A5
#define PIN_Y24 					70    //CI_D1
#define PIN_Y25 					71    //SD_CLK/CI_CE
#define PIN_Y26 					72    //PTSI_D0
#define PIN_V24 					73    //TS_DATA
#define PIN_W23 					74    //PTSI_D2
#define PIN_W24 					75    //PTSI_D1
#define PIN_W25 					76    //SD_D1
#define PIN_W26 					77    //CI_D2
#define PIN_V25 					78    //TS_VALID
#define PIN_W22 					79    //MUTE_AMP(G)
#define PIN_E6  					80    //PWR_KEY(G)
#define PIN_F6  					81    //LED_G_ON (PWM)(G)
#define PIN_G6  					82    //IR
#define PIN_E5  					83    //BL_ON (PWM)(G)
#define PIN_F5  					84    //POWER_ON (PWM)(G)
#define PIN_E4  					85    //PANEL_ON(G)
#define PIN_F4  					86    //BL_ADJ (PWM)
#define PIN_F1  					87    //RXCLK
#define PIN_G1  					88    //SMI_MDIO
#define PIN_G4  					89    //SMI_MDC_PO
#define PIN_H4  					90    //RMII_TXEN
#define PIN_F2  					91    //RMII_CRSDV
#define PIN_J4  					92    //RMII_TXD[0]
#define PIN_G2  					93    //RMII_RXD[1](I)
#define PIN_F3  					94    //RMII_RXER(I)
#define PIN_H5  					95    //RMII_TXD[1]
#define PIN_G3  					96    //RMII_RXD[0]
#define PIN_H3  					97    //SPI_D0
#define PIN_H2  					98    //SPI_D1
#define PIN_H1  					99    //SPI_CLK
#define PIN_J3  					100   //SPI_CS
#define PIN_P4  					101   ///WP_EDID(G)
#define PIN_R5  					102   //CEC_HDMI
#define PIN_R4  					103   //SDA_HDMIC
#define PIN_T5  					104   //HDMI_PRWC
#define PIN_T4  					105   //SCL_HDMIC
#define PIN_U4  					106   //HPD_HDMIC
#define PIN_V4  					107   //SDA_HDMIB
#define PIN_V23 					108   //TS_CLK
#define PIN_U24 					109   //TS_SYNC
#define PIN_AA5						110   //HPD_B
#define PIN_AB5 					111   //HPD_A


/* Drivers mapping */

#if 0  //disable ci card clock
EXTERN UINT8 CARD_3in1_GPIO_ARRAY[10];
#define	CARD_RST_PIN			CARD_3in1_GPIO_ARRAY[0]
#define	CARD_SENSE1_PIN			CARD_3in1_GPIO_ARRAY[1]
#define CARD_SENSE2_PIN			CARD_3in1_GPIO_ARRAY[2]
#define	CARD_CLK				CARD_3in1_GPIO_ARRAY[3]
#define	CARD_CLK1				CARD_3in1_GPIO_ARRAY[4]				//for ci card clock
#define	CARD_CMD				CARD_3in1_GPIO_ARRAY[5]
#define	CARD_D0					CARD_3in1_GPIO_ARRAY[6]
#define	CARD_D1					CARD_3in1_GPIO_ARRAY[7]
#define	CARD_D2					CARD_3in1_GPIO_ARRAY[8]
#define	CARD_D3					CARD_3in1_GPIO_ARRAY[9]
#else
EXTERN UINT8 CARD_3in1_GPIO_ARRAY[8];
#define	CARD_RST_PIN			CARD_3in1_GPIO_ARRAY[0]
#define	CARD_SENSE1_PIN			CARD_3in1_GPIO_ARRAY[1]
#define	CARD_CLK				CARD_3in1_GPIO_ARRAY[2]
#define	CARD_CMD				CARD_3in1_GPIO_ARRAY[3]
#define	CARD_D0					CARD_3in1_GPIO_ARRAY[4]
#define	CARD_D1					CARD_3in1_GPIO_ARRAY[5]
#define	CARD_D2					CARD_3in1_GPIO_ARRAY[6]
#define	CARD_D3					CARD_3in1_GPIO_ARRAY[7]
#endif
#if 0
EXTERN UINT8 SDIO_GPIO_ARRAY[6];
#define	CARD_CLK				SDIO_GPIO_ARRAY[0]
#define	CARD_CMD				SDIO_GPIO_ARRAY[1]
#define	CARD_D0					SDIO_GPIO_ARRAY[2]
#define	CARD_D1					SDIO_GPIO_ARRAY[3]
#define	CARD_D2					SDIO_GPIO_ARRAY[4]
#define	CARD_D3					SDIO_GPIO_ARRAY[5]
#endif
EXTERN UINT8 NAND_FLASH_GPIO_ARRAY[16];
#define	SMC_WP					NAND_FLASH_GPIO_ARRAY[0]
#define	SMC_WE					NAND_FLASH_GPIO_ARRAY[1]
#define	SMC_ALE					NAND_FLASH_GPIO_ARRAY[2]
#define	SMC_CLE					NAND_FLASH_GPIO_ARRAY[3]
#define	SMC_CE0					NAND_FLASH_GPIO_ARRAY[4]
#define	SMC_CE1					NAND_FLASH_GPIO_ARRAY[5]
#define	SMC_RE					NAND_FLASH_GPIO_ARRAY[6]
#define	SMC_RDY					NAND_FLASH_GPIO_ARRAY[7]
#define SMC_D7					NAND_FLASH_GPIO_ARRAY[8]
#define	SMC_D6					NAND_FLASH_GPIO_ARRAY[9]
#define	SMC_D5					NAND_FLASH_GPIO_ARRAY[10]
#define	SMC_D4					NAND_FLASH_GPIO_ARRAY[11]
#define	SMC_D3					NAND_FLASH_GPIO_ARRAY[12]
#define	SMC_D2					NAND_FLASH_GPIO_ARRAY[13]
#define	SMC_D1					NAND_FLASH_GPIO_ARRAY[14]
#define	SMC_D0					NAND_FLASH_GPIO_ARRAY[15]

//add arthur_20101201,
//1.for serial path need to set as gpio mode, or it will interfere with parallel path
//2.for parallel path need to set as gpio mode, or it will interfere with serial path
EXTERN UINT8	S_TS_GPIO_ARRAY[8];
#define	S_TS_CLK				S_TS_GPIO_ARRAY[0]
#define	S_TS_DAT				S_TS_GPIO_ARRAY[1]
#define	S_TS_DEN 				S_TS_GPIO_ARRAY[2]
#define	S_TS_SYNC				S_TS_GPIO_ARRAY[3]

#define S_TSO_CLK               S_TS_GPIO_ARRAY[4]
#define S_TSO_DAT0              S_TS_GPIO_ARRAY[5]
#define S_TSO_DEN               S_TS_GPIO_ARRAY[6]
#define S_TSO_SYNC              S_TS_GPIO_ARRAY[7]

EXTERN UINT8	P_TS_GPIO_ARRAY[26];
#define	P_TSO_CLK				P_TS_GPIO_ARRAY[0]
#define	P_TSO_DAT0				P_TS_GPIO_ARRAY[1]
#define	P_TSO_DAT1				P_TS_GPIO_ARRAY[2]
#define	P_TSO_DAT2				P_TS_GPIO_ARRAY[3]
#define	P_TSO_DAT3				P_TS_GPIO_ARRAY[4]
#define	P_TSO_DAT4				P_TS_GPIO_ARRAY[5]
#define	P_TSO_DAT5				P_TS_GPIO_ARRAY[6]
#define	P_TSO_DAT6				P_TS_GPIO_ARRAY[7]
#define	P_TSO_DAT7				P_TS_GPIO_ARRAY[8]
#define	P_TSO_DEN 				P_TS_GPIO_ARRAY[9]
#define	P_TSO_SYNC				P_TS_GPIO_ARRAY[10]
#define	P_TSI_CLK				P_TS_GPIO_ARRAY[11]
#define	P_TSI_DAT0				P_TS_GPIO_ARRAY[12]
#define	P_TSI_DAT1				P_TS_GPIO_ARRAY[13]
#define	P_TSI_DAT2				P_TS_GPIO_ARRAY[14]
#define	P_TSI_DAT3				P_TS_GPIO_ARRAY[15]
#define	P_TSI_DAT4				P_TS_GPIO_ARRAY[16]
#define	P_TSI_DAT5				P_TS_GPIO_ARRAY[17]
#define	P_TSI_DAT6				P_TS_GPIO_ARRAY[18]
#define	P_TSI_DAT7				P_TS_GPIO_ARRAY[19]
#define	P_TSI_DEN 				P_TS_GPIO_ARRAY[20]
#define	P_TSI_SYNC				P_TS_GPIO_ARRAY[21]

#define P_TS_CLK                P_TS_GPIO_ARRAY[22]
#define P_TS_DAT                P_TS_GPIO_ARRAY[23]
#define P_TS_DEN                P_TS_GPIO_ARRAY[24]
#define P_TS_SYNC               P_TS_GPIO_ARRAY[25]

EXTERN UINT8 CCIR656_GPIO_ARRAY[9];
#define	CCIR_CLK				CCIR656_GPIO_ARRAY[0]
#define CCIR_D7					CCIR656_GPIO_ARRAY[1]
#define	CCIR_D6					CCIR656_GPIO_ARRAY[2]
#define	CCIR_D5					CCIR656_GPIO_ARRAY[3]
#define	CCIR_D4					CCIR656_GPIO_ARRAY[4]
#define	CCIR_D3					CCIR656_GPIO_ARRAY[5]
#define	CCIR_D2					CCIR656_GPIO_ARRAY[6]
#define	CCIR_D1					CCIR656_GPIO_ARRAY[7]
#define	CCIR_D0					CCIR656_GPIO_ARRAY[8]

EXTERN UINT8 PCMCIA_GPIO_ARRAY[29];
EXTERN UINT8 PCMCIA_GPIO_EX_ARRAY[5];
#define	CI_D7					PCMCIA_GPIO_ARRAY[0]
#define CI_D6					PCMCIA_GPIO_ARRAY[1]
#define	CI_D5					PCMCIA_GPIO_ARRAY[2]
#define	CI_D4					PCMCIA_GPIO_ARRAY[3]
#define	CI_D3					PCMCIA_GPIO_ARRAY[4]
#define	CI_D2					PCMCIA_GPIO_ARRAY[5]
#define	CI_D1					PCMCIA_GPIO_ARRAY[6]
#define	CI_D0					PCMCIA_GPIO_ARRAY[7]
#define	CI_A14					PCMCIA_GPIO_ARRAY[8]
#define CI_A13					PCMCIA_GPIO_ARRAY[9]
#define	CI_A12					PCMCIA_GPIO_ARRAY[10]
#define	CI_A11					PCMCIA_GPIO_ARRAY[11]
#define	CI_A10					PCMCIA_GPIO_ARRAY[12]
#define	CI_A9					PCMCIA_GPIO_ARRAY[13]
#define	CI_A8					PCMCIA_GPIO_ARRAY[14]
#define	CI_A7					PCMCIA_GPIO_ARRAY[15]
#define	CI_A6					PCMCIA_GPIO_ARRAY[16]
#define	CI_A5					PCMCIA_GPIO_ARRAY[17]
#define CI_A4					PCMCIA_GPIO_ARRAY[18]
#define	CI_A3					PCMCIA_GPIO_ARRAY[19]
#define	CI_A2					PCMCIA_GPIO_ARRAY[20]
#define	CI_A1					PCMCIA_GPIO_ARRAY[21]
#define	CI_A0					PCMCIA_GPIO_ARRAY[22]
#define	CI_CS					PCMCIA_GPIO_ARRAY[23]
#define	CI_OE					PCMCIA_GPIO_ARRAY[24]
#define	CI_IOR					PCMCIA_GPIO_ARRAY[25]
#define	CI_LOW					PCMCIA_GPIO_ARRAY[26]
#define	CI_WE					PCMCIA_GPIO_ARRAY[27]
#define	CI_WAIT					PCMCIA_GPIO_ARRAY[28]

#define	CI_CD1					PCMCIA_GPIO_EX_ARRAY[0]
#define	CI_CD2					PCMCIA_GPIO_EX_ARRAY[1]
#define	CI_RST					PCMCIA_GPIO_EX_ARRAY[2]
#define	CI_RDY					PCMCIA_GPIO_EX_ARRAY[3]
#define	CI_PWR					PCMCIA_GPIO_EX_ARRAY[4]
//#define	CI_REG					PCMCIA_GPIO_EX_ARRAY[5]


#ifdef SUPPORT_COMMON_I2C
#if defined(CUSTOMER_orion)
#define	COMMON_I2C_GPIO_NUM		38
#else
#define	COMMON_I2C_GPIO_NUM		34
#endif
EXTERN UINT8	COMMON_I2C_GPIO_ARRAY[COMMON_I2C_GPIO_NUM];
#define GPIO_FUNC_EEPROM_SDA	COMMON_I2C_GPIO_ARRAY[0]
#define GPIO_FUNC_EEPROM_SCL	COMMON_I2C_GPIO_ARRAY[1]
#define GPIO_FUNC_VGA_SDA		COMMON_I2C_GPIO_ARRAY[2]
#define GPIO_FUNC_VGA_SCL		COMMON_I2C_GPIO_ARRAY[3]
#define GPIO_FUNC_HDMI_SDA		COMMON_I2C_GPIO_ARRAY[4]
#define GPIO_FUNC_HDMI_SCL		COMMON_I2C_GPIO_ARRAY[5]
#define GPIO_FUNC_SNIM1_SDA		COMMON_I2C_GPIO_ARRAY[6]
#define GPIO_FUNC_SNIM1_SCL		COMMON_I2C_GPIO_ARRAY[7]
#define GPIO_FUNC_SNIM2_SDA		COMMON_I2C_GPIO_ARRAY[8]
#define GPIO_FUNC_SNIM2_SCL		COMMON_I2C_GPIO_ARRAY[9]
#define GPIO_FUNC_TNIM1_SDA		COMMON_I2C_GPIO_ARRAY[10]
#define GPIO_FUNC_TNIM1_SCL		COMMON_I2C_GPIO_ARRAY[11]
#define GPIO_FUNC_TNIM2_SDA		COMMON_I2C_GPIO_ARRAY[12]
#define GPIO_FUNC_TNIM2_SCL		COMMON_I2C_GPIO_ARRAY[13]
#define GPIO_FUNC_CI_SDA		COMMON_I2C_GPIO_ARRAY[14]
#define GPIO_FUNC_CI_SCL		COMMON_I2C_GPIO_ARRAY[15]
#define GPIO_FUNC_IPOD_SDA		COMMON_I2C_GPIO_ARRAY[16]
#define GPIO_FUNC_IPOD_SCL		COMMON_I2C_GPIO_ARRAY[17]
#define GPIO_FUNC_DEF_SDA		COMMON_I2C_GPIO_ARRAY[18]
#define GPIO_FUNC_DEF_SCL		COMMON_I2C_GPIO_ARRAY[19]
#define GPIO_FUNC_CNIM1_SDA		COMMON_I2C_GPIO_ARRAY[20]
#define GPIO_FUNC_CNIM1_SCL		COMMON_I2C_GPIO_ARRAY[21]
#define GPIO_FUNC_CNIM2_SDA		COMMON_I2C_GPIO_ARRAY[22]
#define GPIO_FUNC_CNIM2_SCL		COMMON_I2C_GPIO_ARRAY[23]
#define GPIO_FUNC_INIM1_SDA		COMMON_I2C_GPIO_ARRAY[24]
#define GPIO_FUNC_INIM1_SCL		COMMON_I2C_GPIO_ARRAY[25]
#define GPIO_FUNC_INIM2_SDA		COMMON_I2C_GPIO_ARRAY[26]
#define GPIO_FUNC_INIM2_SCL		COMMON_I2C_GPIO_ARRAY[27]
#define GPIO_FUNC_HDMIB_SDA		COMMON_I2C_GPIO_ARRAY[28]
#define GPIO_FUNC_HDMIB_SCL		COMMON_I2C_GPIO_ARRAY[29]
#define GPIO_FUNC_HDMIC_SDA		COMMON_I2C_GPIO_ARRAY[30]
#define GPIO_FUNC_HDMIC_SCL		COMMON_I2C_GPIO_ARRAY[31]
#define GPIO_FUNC_HDMIA_SDA		COMMON_I2C_GPIO_ARRAY[32]
#define GPIO_FUNC_HDMIA_SCL		COMMON_I2C_GPIO_ARRAY[33]
#if defined(CUSTOMER_orion)
#define GPIO_FUNC_UCOM_SDA	    COMMON_I2C_GPIO_ARRAY[34]
#define GPIO_FUNC_UCOM_SCL	    COMMON_I2C_GPIO_ARRAY[35]
#define GPIO_FUNC_AMP_SDA	    COMMON_I2C_GPIO_ARRAY[36]
#define GPIO_FUNC_AMP_SCL	    COMMON_I2C_GPIO_ARRAY[37]
#endif
#endif

EXTERN UINT8 IR_IN_PIN;

EXTERN UINT8 SPI_GPIO_ARRAY[4];
#define SPI_D0 					SPI_GPIO_ARRAY[0]
#define SPI_D1 					SPI_GPIO_ARRAY[1]
#define SPI_CLK					SPI_GPIO_ARRAY[2]
#define SPI_CS 					SPI_GPIO_ARRAY[3]

EXTERN UINT8 CI_PLUS_INT;

EXTERN UINT8 SPI_MAC_GPIO_ARRAY[10];
#define RXCLK         			SPI_MAC_GPIO_ARRAY[0]
#define SMI_MDIO      			SPI_MAC_GPIO_ARRAY[1]
#define SMI_MDC_PO    			SPI_MAC_GPIO_ARRAY[2]
#define RMII_TXEN     			SPI_MAC_GPIO_ARRAY[3]
#define RMII_CRSDV    			SPI_MAC_GPIO_ARRAY[4]
#define RMII_RXERI  			SPI_MAC_GPIO_ARRAY[5]
#define RMII_TXD0   			SPI_MAC_GPIO_ARRAY[6]
#define RMII_TXD1   			SPI_MAC_GPIO_ARRAY[7]
#define RMII_RXD0				SPI_MAC_GPIO_ARRAY[8]
#define RMII_RXD1   			SPI_MAC_GPIO_ARRAY[9]

EXTERN UINT8 HDMI_PWRA;

EXTERN UINT8 HDMI_PWRB;

EXTERN UINT8 HDMI_PWRC;

EXTERN UINT8 HDMI_SLAVE_I2CA_GPIO_ARRAY[2];
#define SDA_HDMIA				HDMI_SLAVE_I2CA_GPIO_ARRAY[0]
#define SCL_HDMIA				HDMI_SLAVE_I2CA_GPIO_ARRAY[1]

EXTERN UINT8 HDMI_SLAVE_I2CB_GPIO_ARRAY[2];
#define SCL_HDMIB				HDMI_SLAVE_I2CB_GPIO_ARRAY[0]
#define SDA_HDMIB				HDMI_SLAVE_I2CB_GPIO_ARRAY[1]

EXTERN UINT8 HDMI_SLAVE_I2CC_GPIO_ARRAY[2];
#define SDA_HDMIC				HDMI_SLAVE_I2CC_GPIO_ARRAY[0]
#define SCL_HDMIC				HDMI_SLAVE_I2CC_GPIO_ARRAY[1]

EXTERN UINT8 UART0_GPIO_ARRAY[2];
#define UA0_RX					UART0_GPIO_ARRAY[0]
#define UA0_TX					UART0_GPIO_ARRAY[1]

EXTERN UINT8 UART1_GPIO_ARRAY[2];
#define UA1_RX					UART1_GPIO_ARRAY[0]
#define UA1_TX					UART1_GPIO_ARRAY[1]

EXTERN UINT8 IDEMOD_GPIO_ARRAY[2];
#define IDEMOD_IFAGC_PIN		IDEMOD_GPIO_ARRAY[0]
#define IDEMOD_RFAGC_PIN		IDEMOD_GPIO_ARRAY[1]

EXTERN UINT8 DEMOD_CD_GPIO_ARRAY[11];
#define DEMOD_CD_DIN0			DEMOD_CD_GPIO_ARRAY[0]
#define DEMOD_CD_DIN1			DEMOD_CD_GPIO_ARRAY[1]
#define DEMOD_CD_DIN2			DEMOD_CD_GPIO_ARRAY[2]
#define DEMOD_CD_DIN3			DEMOD_CD_GPIO_ARRAY[3]
#define DEMOD_CD_DIN4			DEMOD_CD_GPIO_ARRAY[4]
#define DEMOD_CD_DIN5			DEMOD_CD_GPIO_ARRAY[5]
#define DEMOD_CD_DIN6			DEMOD_CD_GPIO_ARRAY[6]
#define DEMOD_CD_DIN7			DEMOD_CD_GPIO_ARRAY[7]
#define DEMOD_CD_SYNC			DEMOD_CD_GPIO_ARRAY[8]
#define DEMOD_CD_CLK			DEMOD_CD_GPIO_ARRAY[9]
#define DEMOD_CD_DEN			DEMOD_CD_GPIO_ARRAY[10]

EXTERN UINT8 CEC_HDMI;

EXTERN UINT8 EJTAG_GPIO_ARRAY[5];
#define EJ_TRST_N				EJTAG_GPIO_ARRAY[0]
#define EJ_TCK					EJTAG_GPIO_ARRAY[1]
#define EJ_TMS					EJTAG_GPIO_ARRAY[2]
#define EJ_TDI					EJTAG_GPIO_ARRAY[3]
#define EJ_TDO					EJTAG_GPIO_ARRAY[4]

EXTERN UINT8 DSP_EJTAG_GPIO_ARRAY[5];
#define DSP_RTCK				DSP_EJTAG_GPIO_ARRAY[0]
#define DSP_TCK					DSP_EJTAG_GPIO_ARRAY[1]
#define DSP_TMS					DSP_EJTAG_GPIO_ARRAY[2]
#define DSP_TDI					DSP_EJTAG_GPIO_ARRAY[3]
#define DSP_TDO					DSP_EJTAG_GPIO_ARRAY[4]

EXTERN UINT8 SCLR_GPWMCH0;

EXTERN UINT8 SCLR_GPWMCH1;

EXTERN UINT8 SCLR_GPWMCH2;

EXTERN UINT8 SCLR_GPWMCH3;

EXTERN UINT8 SCLR_PWM_GPIO_ARRAY[4];
#define SCLR_PWMCH0				SCLR_PWM_GPIO_ARRAY[0]
#define SCLR_PWMCH1				SCLR_PWM_GPIO_ARRAY[1]
#define SCLR_PWMCH2				SCLR_PWM_GPIO_ARRAY[2]
#define SCLR_PWMCH3				SCLR_PWM_GPIO_ARRAY[3]

EXTERN UINT8 MASTER_I2C_TUNER_GPIO_ARRAY[2];
#define SCLR_DDCMASTER_D_MX		MASTER_I2C_TUNER_GPIO_ARRAY[0]
#define SCLR_DDCMASTER_CK_MX	MASTER_I2C_TUNER_GPIO_ARRAY[1]

EXTERN UINT8 MASTER_I2C_GEN_GPIO_ARRAY[2];
#define I2C_SDA_PIN				MASTER_I2C_GEN_GPIO_ARRAY[0]
#define I2C_SCL_PIN				MASTER_I2C_GEN_GPIO_ARRAY[1]

EXTERN UINT8 DIG_AUDIO_IF_GPIO_ARRAY[7];
#define CLKGENA_IEC0_BCLK_O		DIG_AUDIO_IF_GPIO_ARRAY[0]
#define CONFIG0_BCK_I      		DIG_AUDIO_IF_GPIO_ARRAY[1]
#define CONFIG0_LRCK_I     		DIG_AUDIO_IF_GPIO_ARRAY[2]
#define AU_DATA0           		DIG_AUDIO_IF_GPIO_ARRAY[3]
#define CLK_EXT_DAC_MCLK   		DIG_AUDIO_IF_GPIO_ARRAY[4]
#define AU_DATA1				DIG_AUDIO_IF_GPIO_ARRAY[5]
#define AU_DATA2				DIG_AUDIO_IF_GPIO_ARRAY[6]

EXTERN UINT8 AUDIO_3_SPDIF_GPIO_ARRAY[6];
#define CLKGENA_PCM_IEC_BCLK_O	AUDIO_3_SPDIF_GPIO_ARRAY[0]
#define PCM_IEC_TX0        		AUDIO_3_SPDIF_GPIO_ARRAY[1]
#define PCM_IEC_TX1        		AUDIO_3_SPDIF_GPIO_ARRAY[2]
#define PCM_IEC_TX2        		AUDIO_3_SPDIF_GPIO_ARRAY[3]
#define AUD_IEC1_RX        		AUDIO_3_SPDIF_GPIO_ARRAY[4]
#define AUD_IEC2_RX        		AUDIO_3_SPDIF_GPIO_ARRAY[5]

EXTERN UINT8 DDC_SLAVE_I2C_GPIO_ARRAY[2];
#define SCLR_DDCSLAVE_D_MX		DDC_SLAVE_I2C_GPIO_ARRAY[0]
#define SCLR_DDCSLAVE_CK_MX	DDC_SLAVE_I2C_GPIO_ARRAY[1]

EXTERN UINT8 EXT_I2C_GPIO_ARRAY[2];
#define EXT_I2C_SDA				EXT_I2C_GPIO_ARRAY[0]
#define EXT_I2C_SCL				EXT_I2C_GPIO_ARRAY[1]

EXTERN UINT8 Q_LOGIC_GPIO_ARRAY[11];
#define SCLR_P0_MX0				Q_LOGIC_GPIO_ARRAY[0]
#define SCLR_P0_MX1				Q_LOGIC_GPIO_ARRAY[1]
#define SCLR_P0_MX2				Q_LOGIC_GPIO_ARRAY[2]
#define SCLR_P0_MX3				Q_LOGIC_GPIO_ARRAY[3]
#define SCLR_P0_MX4				Q_LOGIC_GPIO_ARRAY[4]
#define SCLR_P0_MX5				Q_LOGIC_GPIO_ARRAY[5]
#define SCLR_P0_MX6				Q_LOGIC_GPIO_ARRAY[6]
#define SCLR_P0_MX7				Q_LOGIC_GPIO_ARRAY[7]
#define SCLR_P3I_MX0			Q_LOGIC_GPIO_ARRAY[8]
#define SCLR_P3I_MX1			Q_LOGIC_GPIO_ARRAY[9]
#define SCLR_ALEI_MX			Q_LOGIC_GPIO_ARRAY[10]

EXTERN UINT8 SCLR_PROBE_GPIO_ARRAY[18];
#define SCLR_PROBE0 			SCLR_PROBE_GPIO_ARRAY[0]
#define SCLR_PROBE1 			SCLR_PROBE_GPIO_ARRAY[1]
#define SCLR_PROBE2 			SCLR_PROBE_GPIO_ARRAY[2]
#define SCLR_PROBE3 			SCLR_PROBE_GPIO_ARRAY[3]
#define SCLR_PROBE4 			SCLR_PROBE_GPIO_ARRAY[4]
#define SCLR_PROBE5 			SCLR_PROBE_GPIO_ARRAY[5]
#define SCLR_PROBE6 			SCLR_PROBE_GPIO_ARRAY[6]
#define SCLR_PROBE7 			SCLR_PROBE_GPIO_ARRAY[7]
#define SCLR_PROBE8 			SCLR_PROBE_GPIO_ARRAY[8]
#define SCLR_PROBE9 			SCLR_PROBE_GPIO_ARRAY[9]
#define SCLR_PROBE10			SCLR_PROBE_GPIO_ARRAY[10]
#define SCLR_PROBE11			SCLR_PROBE_GPIO_ARRAY[11]
#define SCLR_PROBE12			SCLR_PROBE_GPIO_ARRAY[12]
#define SCLR_PROBE13			SCLR_PROBE_GPIO_ARRAY[13]
#define SCLR_PROBE14			SCLR_PROBE_GPIO_ARRAY[14]
#define SCLR_PROBE15			SCLR_PROBE_GPIO_ARRAY[15]
#define SCLR_PROBE16			SCLR_PROBE_GPIO_ARRAY[16]
#define SCLR_PROBE17			SCLR_PROBE_GPIO_ARRAY[17]

EXTERN UINT8 SCLR_TV_OUT_GPIO_ARRAY[29];
#define SCLR_TVOUT_DATA0 		SCLR_TV_OUT_GPIO_ARRAY[0 ]
#define SCLR_TVOUT_DATA1 		SCLR_TV_OUT_GPIO_ARRAY[1 ]
#define SCLR_TVOUT_DATA2 		SCLR_TV_OUT_GPIO_ARRAY[2 ]
#define SCLR_TVOUT_DATA3 		SCLR_TV_OUT_GPIO_ARRAY[3 ]
#define SCLR_TVOUT_DATA4 		SCLR_TV_OUT_GPIO_ARRAY[4 ]
#define SCLR_TVOUT_DATA5 		SCLR_TV_OUT_GPIO_ARRAY[5 ]
#define SCLR_TVOUT_DATA6 		SCLR_TV_OUT_GPIO_ARRAY[6 ]
#define SCLR_TVOUT_DATA7 		SCLR_TV_OUT_GPIO_ARRAY[7 ]
#define SCLR_TVOUT_DATA8 		SCLR_TV_OUT_GPIO_ARRAY[8 ]
#define SCLR_TVOUT_DATA9 		SCLR_TV_OUT_GPIO_ARRAY[9 ]
#define SCLR_TVOUT_DATA10		SCLR_TV_OUT_GPIO_ARRAY[10]
#define SCLR_TVOUT_DATA11		SCLR_TV_OUT_GPIO_ARRAY[11]
#define SCLR_TVOUT_DATA12		SCLR_TV_OUT_GPIO_ARRAY[12]
#define SCLR_TVOUT_DATA13		SCLR_TV_OUT_GPIO_ARRAY[13]
#define SCLR_TVOUT_DATA14		SCLR_TV_OUT_GPIO_ARRAY[14]
#define SCLR_TVOUT_DATA15		SCLR_TV_OUT_GPIO_ARRAY[15]
#define SCLR_TVOUT_DATA16		SCLR_TV_OUT_GPIO_ARRAY[16]
#define SCLR_TVOUT_DATA17		SCLR_TV_OUT_GPIO_ARRAY[17]
#define SCLR_TVOUT_DATA18		SCLR_TV_OUT_GPIO_ARRAY[18]
#define SCLR_TVOUT_DATA19		SCLR_TV_OUT_GPIO_ARRAY[19]
#define SCLR_TVOUT_DATA20		SCLR_TV_OUT_GPIO_ARRAY[20]
#define SCLR_TVOUT_DATA21		SCLR_TV_OUT_GPIO_ARRAY[21]
#define SCLR_TVOUT_DATA22		SCLR_TV_OUT_GPIO_ARRAY[22]
#define SCLR_TVOUT_DATA23		SCLR_TV_OUT_GPIO_ARRAY[23]
#define SCLR_TVOUT_HS  			SCLR_TV_OUT_GPIO_ARRAY[24]
#define SCLR_TVOUT_VS      		SCLR_TV_OUT_GPIO_ARRAY[25]
#define SCLR_TVOUT_FIELD		SCLR_TV_OUT_GPIO_ARRAY[26]
#define SCLR_TVOUT_ODDCLK		SCLR_TV_OUT_GPIO_ARRAY[27]
#define SCLR_TVOUT_DEN 			SCLR_TV_OUT_GPIO_ARRAY[28]

EXTERN UINT8 PWR_KEY_PIN;

EXTERN UINT8 PC_SYNC_GPIO_ARRAY[2];
#define HSYNC_PC				PC_SYNC_GPIO_ARRAY[0]
#define VSYNC_PC				PC_SYNC_GPIO_ARRAY[1]

#endif/* __GPIO_PIN_MAP_9200_H__ */

