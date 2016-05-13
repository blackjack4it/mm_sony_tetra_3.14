/*****************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
* Unless you and Broadcom execute a separate written software license
* agreement governing use of this software, this software is licensed to you
* under the terms of the GNU General Public License version 2, available at
* http://www.broadcom.com/licenses/GPLv2.php (the "GPL").
*
* Notwithstanding the above, under no circumstances may you combine this
* software in any way with any other Broadcom software provided under a
* license other than the GPL, without Broadcom's express prior written
* consent.
*****************************************************************************/
#ifndef __ARM_ARCH_BCM2166X_CLOCK_MGR_H
#define __ARM_ARCH_BCM2166X_CLOCK_MGR_H

/*Defines used by Kona*/
#define	CLK_WR_ACCESS_PASSWORD	0x00A5A5

#define	ARM_CORE_CLK_NAME_STR			"a9_core"
#define ARM_SWITCH_CLK_NAME_STR			"arm_switch_clk"
#define APB0_CLK_NAME_STR			"apb0_clk"
#define	A9_PLL_CLK_NAME_STR				"a9_pll_clk"
#define	A9_PLL_CHNL0_CLK_NAME_STR		"a9_pll_chnl0_clk"
#define	A9_PLL_CHNL1_CLK_NAME_STR		"a9_pll_chnl1_clk"
#define KPROC_CCU_CLK_NAME_STR			"proc_ccu"
#define ROOT_CCU_CLK_NAME_STR			"root_ccu"
#define CRYSTAL_REF_CLK_NAME_STR		"crystal"
#define PLL0_REF_CLK_NAME_STR			"pll0"
#define PLL1_REF_CLK_NAME_STR			"pll1"
#define	FRAC_1M_REF_CLK_NAME_STR		"frac_1m_clk"
#define	REF_96M_VARVDD_REF_CLK_NAME_STR		"ref_96m_varvdd_clk"
#define	REF_96M_REF_CLK_NAME_STR		"ref_48m_clk"
#define	VAR_96M_REF_CLK_NAME_STR		"var_48m_clk"
#define	VAR_500M_VARVDD_REF_CLK_NAME_STR	"var_500m_varvdd_clk"
#define	VAR_500M_REF_CLK_NAME_STR		"var_500m_clk"
#define	REF_312M_REF_CLK_NAME_STR		"ref_312m_clk"
#define	REF_208M_REF_CLK_NAME_STR		"ref_208m_clk"
#define	REF_156M_REF_CLK_NAME_STR		"ref_156m_clk"
#define	REF_104M_REF_CLK_NAME_STR		"ref_104m_clk"
#define	REF_52M_REF_CLK_NAME_STR		"ref_52m_clk"
#define	REF_13M_REF_CLK_NAME_STR		"ref_13m_clk"
#define	REF_26M_REF_CLK_NAME_STR		"ref_26m_clk"
#define REF_8PHASE_EN_PLL1_CLK_NAME_STR		"ref_8ph_en_pll1"
#define	VAR_312M_REF_CLK_NAME_STR		"var_312m_clk"
#define	VAR_208M_REF_CLK_NAME_STR		"var_208m_clk"
#define	VAR_156M_REF_CLK_NAME_STR		"var_156m_clk"
#define	VAR_104M_REF_CLK_NAME_STR		"var_104m_clk"
#define	VAR_52M_REF_CLK_NAME_STR		"var_52m_clk"
#define	VAR_13M_REF_CLK_NAME_STR		"var_13m_clk"
#define	DFT_19_5M_REF_CLK_NAME_STR		"dft_19_5m_clk"
#define	REF_CX40_VARVDD_REF_CLK_NAME_STR	"ref_cx40_varvdd_clk"
#define	REF_CX40_REF_CLK_NAME_STR "ref_cx40_clk"
#define	REF_1M_REF_CLK_NAME_STR "ref_1m"
#define	REF_32K_REF_CLK_NAME_STR "ref_32k"
#define TPIU_PERI_CLK_NAME_STR	"tpiu_clk"
#define PTI_PERI_CLK_NAME_STR	"pti_clk"
#define	PMU_BSC_VAR_REF_CLK_NAME_STR "pmu_bsc_var"
#define	BBL_32K_REF_CLK_NAME_STR "bbl_32k"
#define	CSI0_PIX_PHY_REF_CLK_NAME_STR "csi0_pix_phy"
#define	CSI0_BYTE0_PHY_REF_CLK_NAME_STR "csi0_byte0_phy"
#define	CSI0_BYTE1_PHY_REF_CLK_NAME_STR "csi0_byte1_phy"
#define	CSI1_PIX_PHY_REF_CLK_NAME_STR "csi1_pix_phy"
#define	CSI1_BYTE0_PHY_REF_CLK_NAME_STR "csi1_byte0_phy"
#define	CSI1_BYTE1_PHY_REF_CLK_NAME_STR "csi1_byte1_phy"
#define	DSI0_PIX_PHY_REF_CLK_NAME_STR "dsi0_pix_phy"
#define	DSI1_PIX_PHY_REF_CLK_NAME_STR "dsi1_pix_phy"
#define	TEST_DEBUG_REF_CLK_NAME_STR "test_debug"
#define	REF_APB6_FREE_CLK_NAME_STR "apb6_free_clk"
#define	KHUB_CCU_CLK_NAME_STR "hub_ccu"
#define	NOR_APB_BUS_CLK_NAME_STR "nor_apb_clk"
#define	TMON_APB_BUS_CLK_NAME_STR "tmon_apb"
#define	APB5_BUS_CLK_NAME_STR "apb5"
#define	CTI_APB_BUS_CLK_NAME_STR "cti_apb"
#define	FUNNEL_APB_BUS_CLK_NAME_STR "funnel_apb"
#define	TPIU_APB_BUS_CLK_NAME_STR "tpiu_apb"
#define	VC_ITM_APB_BUS_CLK_NAME_STR "vc_itm_apb"
#define SEC_VIOL_TRAP4_APB_BUS_CLK_NAME_STR	"sec_viol_trap4_apb"
#define SEC_VIOL_TRAP5_APB_BUS_CLK_NAME_STR	"sec_viol_trap5_apb"
#define SEC_VIOL_TRAP7_APB_BUS_CLK_NAME_STR	"sec_viol_trap7_apb"
#define	AXI_TRACE19_APB_BUS_CLK_NAME_STR	"axi_trace19_apb"
#define	AXI_TRACE11_APB_BUS_CLK_NAME_STR	"axi_trace11_apb"
#define	AXI_TRACE12_APB_BUS_CLK_NAME_STR	"axi_trace12_apb"
#define	AXI_TRACE13_APB_BUS_CLK_NAME_STR	"axi_trace13_apb"
#define	HSI_APB_BUS_CLK_NAME_STR "hsi_apb"
#define	HSI_TX_PERI_CLK_NAME_STR "hsi_tx"
#define	HSI_RX_PERI_CLK_NAME_STR "hsi_rx"
#define	ETB_APB_BUS_CLK_NAME_STR "etb_apb"
#define	FINAL_FUNNEL_APB_BUS_CLK_NAME_STR "final_funnel_apb"
#define	APB10_BUS_CLK_NAME_STR "apb10"
#define	APB9_BUS_CLK_NAME_STR "apb9"
#define	ATB_FILTER_APB_BUS_CLK_NAME_STR "atb_filter_apb"
#define	AUDIOH_26M_PERI_CLK_NAME_STR "audioh_26m"
#define	HUB_PERI_CLK_NAME_STR "hub_clk"
#define	BT_SLIM_AHB_APB_BUS_CLK_NAME_STR "bt_slim_ahb_apb"
#define	ETB2AXI_APB_BUS_CLK_NAME_STR "etb2axi_apb"
#define	AUDIOH_APB_BUS_CLK_NAME_STR "audioh_apb_clk"
#define	SSP3_APB_BUS_CLK_NAME_STR "ssp3_apb_clk"
#define	SSP4_APB_BUS_CLK_NAME_STR "ssp4_apb_clk"
#define	VAR_SPM_APB_BUS_CLK_NAME_STR "var_spm_apb"
#define	NOR_BUS_CLK_NAME_STR "nor_clk"
#define	NOR_ASYNC_PERI_CLK_NAME_STR	"nor_async_clk"
#define	AUDIOH_2P4M_PERI_CLK_NAME_STR "audioh_2p4m_clk"
#define	AUDIOH_156M_PERI_CLK_NAME_STR "audioh_156m_clk"
#define	SSP3_AUDIO_PERI_CLK_NAME_STR "ssp3_audio_clk"
#define	SSP3_PERI_CLK_NAME_STR "ssp3_clk"
#define	SSP4_AUDIO_PERI_CLK_NAME_STR "ssp4_audio_clk"
#define	SSP4_PERI_CLK_NAME_STR "ssp4_clk"
#define	TMON_1M_PERI_CLK_NAME_STR "tmon_1m_clk"
#define	CAPH_SRCMIXER_PERI_CLK_NAME_STR "caph_srcmixer_clk"
#define	DAP_SWITCH_PERI_CLK_NAME_STR "dap_switch"
#define	BROM_PERI_CLK_NAME_STR "brom"
#define	MDIOMASTER_PERI_CLK_NAME_STR "mdiomaster"
#define	KHUBAON_CCU_CLK_NAME_STR "aon_ccu"
#define	HUB_TIMER_APB_BUS_CLK_NAME_STR "hub_timer_apb_clk"
#define	HUBAON_BUS_CLK_NAME_STR		"hubaon_clk"
#define	ACI_APB_BUS_CLK_NAME_STR "aci_apb_clk"
#define	SIM_APB_BUS_CLK_NAME_STR "sim_apb_clk"
#define	SIM2_APB_BUS_CLK_NAME_STR "sim2_apb_clk"
#define	PWRMGR_AXI_BUS_CLK_NAME_STR "pwrmgr_axi"
#define	APB6_BUS_CLK_NAME_STR "apb6"
#define	GPIOKP_APB_BUS_CLK_NAME_STR "gpiokp_apb"
#define	PMU_BSC_APB_BUS_CLK_NAME_STR "pmu_bsc_apb"
#define	CHIPREG_APB_BUS_CLK_NAME_STR "chipreg_apb"
#define	FMON_APB_BUS_CLK_NAME_STR "fmon_apb"
#define	HUB_TZCFG_APB_BUS_CLK_NAME_STR "hub_tzcfg_apb"
#define	SEC_WD_APB_BUS_CLK_NAME_STR "sec_wd_apb"
#define	SYSEMI_SEC_APB_BUS_CLK_NAME_STR "sysemi_sec_apb"
#define	SYSEMI_OPEN_APB_BUS_CLK_NAME_STR "sysemi_open_apb"
#define	VCEMI_SEC_APB_BUS_CLK_NAME_STR "vcemi_sec_apb"
#define	VCEMI_OPEN_APB_BUS_CLK_NAME_STR "vcemi_open_apb"
#define	SPM_APB_BUS_CLK_NAME_STR "spm_apb"
#define	DAP_BUS_CLK_NAME_STR "dap"
#define	SIM_PERI_CLK_NAME_STR "sim_clk"
#define	SIM2_PERI_CLK_NAME_STR "sim2_clk"
#define	HUB_TIMER_PERI_CLK_NAME_STR "hub_timer_clk"
#define	PMU_BSC_PERI_CLK_NAME_STR "pmu_bsc_clk"
#define	KPM_CCU_CLK_NAME_STR "kpm_ccu"
#define	USB_OTG_AHB_BUS_CLK_NAME_STR "usb_otg_clk"
#define	SDIO2_AHB_BUS_CLK_NAME_STR "sdio2_ahb_clk"
#define	SDIO3_AHB_BUS_CLK_NAME_STR "sdio3_ahb_clk"
#define	SDIO1_AHB_BUS_CLK_NAME_STR "sdio1_ahb_clk"
#define	SDIO4_AHB_BUS_CLK_NAME_STR "sdio4_ahb_clk"
#define	SYS_SWITCH_AXI_BUS_CLK_NAME_STR "sys_switch_axi"
#define	MASTER_SWITCH_AHB_BUS_CLK_NAME_STR "master_switch_ahb"
#define	MASTER_SWITCH_AXI_BUS_CLK_NAME_STR "master_switch_axi"
#define	ARMCORE_AXI_BUS_CLK_NAME_STR		"armcore_axi"
#define	APB4_BUS_CLK_NAME_STR			"apb4"
#define	APB8_BUS_CLK_NAME_STR			"apb8"
#define	DMA_AXI_BUS_CLK_NAME_STR		"dma_axi"
#define	USBH_AHB_BUS_CLK_NAME_STR "usbh_ahb"
#define	USB_IC_AHB_BUS_CLK_NAME_STR "usb_ic_ahb"
#define	SDIO2_PERI_CLK_NAME_STR "sdio2_clk"
#define	SDIO2_SLEEP_PERI_CLK_NAME_STR "sdio2_sleep_clk"
#define	SDIO3_PERI_CLK_NAME_STR "sdio3_clk"
#define	SDIO3_SLEEP_PERI_CLK_NAME_STR "sdio3_sleep_clk"
#define	SDIO1_PERI_CLK_NAME_STR "sdio1_clk"
#define	SDIO1_SLEEP_PERI_CLK_NAME_STR "sdio1_sleep_clk"
#define	SDIO4_PERI_CLK_NAME_STR "sdio4_clk"
#define	SDIO4_SLEEP_PERI_CLK_NAME_STR "sdio4_sleep_clk"
#define	USB_IC_PERI_CLK_NAME_STR "usb_ic"
#define	USBH_48M_PERI_CLK_NAME_STR "usbh_48m"
#define	USBH_12M_PERI_CLK_NAME_STR "usbh_12m"
#define	KPS_CCU_CLK_NAME_STR "kps_ccu"
#define	UARTB_APB_BUS_CLK_NAME_STR "uartb_apb_clk"
#define	UARTB2_APB_BUS_CLK_NAME_STR "uartb2_apb_clk"
#define	UARTB3_APB_BUS_CLK_NAME_STR "uartb3_apb_clk"
#define	DMAC_MUX_APB_BUS_CLK_NAME_STR "dmac_mux_apb_clk"
#define	BSC1_APB_BUS_CLK_NAME_STR "bsc1_apb_clk"
#define	BSC2_APB_BUS_CLK_NAME_STR "bsc2_apb_clk"
#define	PWM_APB_BUS_CLK_NAME_STR "pwm_apb_clk"
#define	SSP0_APB_BUS_CLK_NAME_STR "ssp0_apb_clk"
#define	SWITCH_AXI_BUS_CLK_NAME_STR "switch_axi"
#define	EXT_AXI_BUS_CLK_NAME_STR	"ext_axi"
#define	HSM_AHB_BUS_CLK_NAME_STR "hsm_ahb"
#define	HSM_APB_BUS_CLK_NAME_STR "hsm_apb"
#define	SPUM_OPEN_APB_BUS_CLK_NAME_STR "spm_open_apb"
#define	SPUM_SEC_APB_BUS_CLK_NAME_STR "spm_sec_apb"
#define	APB1_BUS_CLK_NAME_STR "apb1"
#define	TIMERS_APB_BUS_CLK_NAME_STR "timers_apb"
#define	APB2_BUS_CLK_NAME_STR "apb2"
#define	SPUM_OPEN_AXI_BUS_CLK_NAME_STR "spum_open_axi"
#define	SPUM_SEC_AXI_BUS_CLK_NAME_STR "spum_sec_axi"
#define	UARTB_PERI_CLK_NAME_STR "uartb_clk"
#define	UARTB2_PERI_CLK_NAME_STR "uartb2_clk"
#define	UARTB3_PERI_CLK_NAME_STR "uartb3_clk"
#define	SSP0_AUDIO_PERI_CLK_NAME_STR "ssp0_audio_clk"
#define	BSC1_PERI_CLK_NAME_STR "bsc1_clk"
#define	BSC2_PERI_CLK_NAME_STR "bsc2_clk"
#define	PWM_PERI_CLK_NAME_STR "pwm_clk"
#define	SSP0_PERI_CLK_NAME_STR "ssp0_clk"
#define	TIMERS_PERI_CLK_NAME_STR "timers"
#define	SPUM_OPEN_PERI_CLK_NAME_STR "spum_open"
#define	SPUM_SEC_PERI_CLK_NAME_STR "spum_sec"
#define	MPHI_AHB_BUS_CLK_NAME_STR "mphi_ahb_clk"
#define	MM_CCU_CLK_NAME_STR "mm_ccu"
#define DSI_PLL_CLK_NAME_STR	"dsi_pll"
#define DSI_PLL_CHNL0_CLK_NAME_STR "dsi_pll_chnl0"
#define DSI_PLL_CHNL1_CLK_NAME_STR "dsi_pll_chnl1"
#define DSI_PLL_CHNL2_CLK_NAME_STR "dsi_pll_chnl2"
#define	MM_SWITCH_AXI_PERI_CLK_NAME_STR "mm_switch_axi_clk"
#define	CSI0_AXI_BUS_CLK_NAME_STR "csi0_axi_clk"
#define	CSI1_AXI_BUS_CLK_NAME_STR "csi1_axi_clk"
#define	ISP_AXI_BUS_CLK_NAME_STR "isp_axi_clk"
#define	SMI_AXI_BUS_CLK_NAME_STR "smi_axi_clk"
#define	VCE_AXI_BUS_CLK_NAME_STR "vce_axi_clk"
#define	DSI0_AXI_BUS_CLK_NAME_STR "dsi0_axi_clk"
#define	DSI1_AXI_BUS_CLK_NAME_STR "dsi1_axi_clk"
#define	MM_APB_BUS_CLK_NAME_STR "mm_apb_clk"
#define	SPI_APB_BUS_CLK_NAME_STR "spi_apb_clk"
#define	MM_DMA_AXI_BUS_CLK_NAME_STR "mm_dma_axi_clk"
#define	V3D_AXI_BUS_CLK_NAME_STR "v3d_axi_clk"
#define	CSI0_LP_PERI_CLK_NAME_STR "csi0_lp_clk"
#define	CSI1_LP_PERI_CLK_NAME_STR "csi1_lp_clk"
#define	SMI_PERI_CLK_NAME_STR "smi_clk"
#define	DSI0_ESC_PERI_CLK_NAME_STR "dsi0_esc_clk"
#define	DSI1_ESC_PERI_CLK_NAME_STR "dsi1_esc_clk"
#define	DSI_PLL_O_DSI_PLL_PERI_CLK_NAME_STR "dsi_pll_o_dsi_pll_clk"
#define DIG_PREDIV_PERI_CLK_NAME_STR	"dig_prediv_clk"
#define	DIG_CH0_PERI_CLK_NAME_STR	"dig_ch0_clk"
#define	DIG_CH1_PERI_CLK_NAME_STR	"dig_ch1_clk"
#define	DIG_CH2_PERI_CLK_NAME_STR	"dig_ch2_clk"
#define	DIG_CH3_PERI_CLK_NAME_STR	"dig_ch3_clk"
#define BMDM_CCU_CLK_NAME_STR			"bmdm_ccu"
#define DSP_CCU_CLK_NAME_STR			"dsp_ccu"

#define	H264_AXI_BUS_CLK_NAME_STR "h264_axi_clk"
#define	AXIPV_AXI_BUS_CLK_NAME_STR "axipv_axi_clk"
#define	PIXELV_APB_BUS_CLK_NAME_STR "pixelv_apb_clk"
#define PIXELV_PERI_CLK_NAME_STR "pixelv_clk"
#define	BSC3_APB_BUS_CLK_NAME_STR "bsc3_apb_clk"
#define	BSC3_PERI_CLK_NAME_STR "bsc3_clk"
#define	BSC4_APB_BUS_CLK_NAME_STR "bsc4_apb_clk"
#define	BSC4_PERI_CLK_NAME_STR "bsc4_clk"
#define	SSP1_APB_BUS_CLK_NAME_STR "ssp1_apb_clk"
#define	SSP1_PERI_CLK_NAME_STR "ssp1_clk"
#define	SSP1_AUDIO_PERI_CLK_NAME_STR "ssp1_audio_clk"
#define	DUMMY_APB_PCLK_NAMER_STR "apb_pclk"
#ifdef CONFIG_DEBUG_FS
/*GPIO0-15 debug bus select values*/
#define DBG_BUS_PM_DBG_BUS_SEL		0x2
#define DBG_BUS_BMDB_DBG_BUS_SEL	0xD

#define BMDM_CCU_DBG_BUS_SEL_MASK		0x7
#define BMDM_CCU_DBG_BUS_SEL_SHIFT		0
#endif

/*
Clock ids
*/
enum {
	CLK_ARM_CORE_CLK_ID,
	CLK_ARM_SWITCH_CLK_ID,
	CLK_APB0_CLK_ID,
	CLK_A9_PLL_CLK_ID,
	CLK_A9_PLL_CHNL0_CLK_ID,
	CLK_A9_PLL_CHNL1_CLK_ID,
	CLK_KPROC_CCU_CLK_ID,
	CLK_ROOT_CCU_CLK_ID,
	CLK_8PHASE_EN_PLL1_REF_CLK_ID,
	CLK_FRAC_1M_REF_CLK_ID,
	CLK_REF_96M_VARVDD_REF_CLK_ID,
	CLK_REF_96M_REF_CLK_ID,
	CLK_VAR_96M_REF_CLK_ID,
	CLK_VAR_500M_VARVDD_REF_CLK_ID,
	CLK_REF_312M_REF_CLK_ID,
	CLK_REF_208M_REF_CLK_ID,
	CLK_REF_156M_REF_CLK_ID,
	CLK_REF_104M_REF_CLK_ID,
	CLK_REF_52M_REF_CLK_ID,
	CLK_REF_13M_REF_CLK_ID,
	CLK_REF_26M_REF_CLK_ID,
	CLK_VAR_312M_REF_CLK_ID,
	CLK_VAR_208M_REF_CLK_ID,
	CLK_VAR_156M_REF_CLK_ID,
	CLK_VAR_104M_REF_CLK_ID,
	CLK_VAR_52M_REF_CLK_ID,
	CLK_VAR_13M_REF_CLK_ID,
	CLK_DFT_19_5M_REF_CLK_ID,
	CLK_REF_CX40_VARVDD_REF_CLK_ID,
	CLK_REF_CX40_REF_CLK_ID,
	CLK_REF_1M_REF_CLK_ID,
	CLK_REF_32K_REF_CLK_ID,
	CLK_TPIU_PERI_CLK_ID,
	CLK_PTI_PERI_CLK_ID,
	CLK_PMU_BSC_VAR_REF_CLK_ID,
	CLK_BBL_32K_REF_CLK_ID,
	CLK_CSI0_PIX_PHY_REF_CLK_ID,
	CLK_CSI0_BYTE0_PHY_REF_CLK_ID,
	CLK_CSI0_BYTE1_PHY_REF_CLK_ID,
	CLK_CSI1_PIX_PHY_REF_CLK_ID,
	CLK_CSI1_BYTE0_PHY_REF_CLK_ID,
	CLK_CSI1_BYTE1_PHY_REF_CLK_ID,
	CLK_DSI0_PIX_PHY_REF_CLK_ID,
	CLK_DSI1_PIX_PHY_REF_CLK_ID,
	CLK_TEST_DEBUG_REF_CLK_ID,
	CLK_REF_APB6_FREE_CLK_ID,
	CLK_KHUB_CCU_CLK_ID,
	CLK_NOR_APB_BUS_CLK_ID,
	CLK_TMON_APB_BUS_CLK_ID,
	CLK_APB5_BUS_CLK_ID,
	CLK_CTI_APB_BUS_CLK_ID,
	CLK_FUNNEL_APB_BUS_CLK_ID,
	CLK_TPIU_APB_BUS_CLK_ID,
	CLK_VC_ITM_APB_BUS_CLK_ID,
	CLK_SEC_VIOL_TRAP4_APB_BUS_CLK_ID,
	CLK_SEC_VIOL_TRAP5_APB_BUS_CLK_ID,
	CLK_SEC_VIOL_TRAP7_APB_BUS_CLK_ID,
	CLK_AXI_TRACE19_APB_BUS_CLK_ID,
	CLK_AXI_TRACE11_APB_BUS_CLK_ID,
	CLK_AXI_TRACE12_APB_BUS_CLK_ID,
	CLK_AXI_TRACE13_APB_BUS_CLK_ID,
	CLK_HSI_APB_BUS_CLK_ID,
	CLK_HSI_TX_PERI_CLK_ID,
	CLK_HSI_RX_PERI_CLK_ID,
	CLK_ETB_APB_BUS_CLK_ID,
	CLK_FINAL_FUNNEL_APB_BUS_CLK_ID,
	CLK_APB10_BUS_CLK_ID,
	CLK_APB9_BUS_CLK_ID,
	CLK_ATB_FILTER_APB_BUS_CLK_ID,
	CLK_AUDIOH_26M_PERI_CLK_ID,
	CLK_HUB_PERI_CLK_ID,
	CLK_HUB_CLK_PERI_CLK_ID,
	CLK_BT_SLIM_AHB_APB_BUS_CLK_ID,
	CLK_ETB2AXI_APB_BUS_CLK_ID,
	CLK_AUDIOH_APB_BUS_CLK_ID,
	CLK_SSP3_APB_BUS_CLK_ID,
	CLK_SSP4_APB_BUS_CLK_ID,
	CLK_VAR_SPM_APB_BUS_CLK_ID,
	CLK_NOR_BUS_CLK_ID,
	CLK_NOR_ASYNC_PERI_CLK_ID,
	CLK_AUDIOH_2P4M_PERI_CLK_ID,
	CLK_AUDIOH_156M_PERI_CLK_ID,
	CLK_SSP3_AUDIO_PERI_CLK_ID,
	CLK_SSP3_PERI_CLK_ID,
	CLK_SSP4_AUDIO_PERI_CLK_ID,
	CLK_SSP4_PERI_CLK_ID,
	CLK_TMON_1M_PERI_CLK_ID,
	CLK_CAPH_SRCMIXER_PERI_CLK_ID,
	CLK_DAP_SWITCH_PERI_CLK_ID,
	CLK_BROM_PERI_CLK_ID,
	CLK_MDIOMASTER_PERI_CLK_ID,
	CLK_KHUBAON_CCU_CLK_ID,
	CLK_HUBAON_BUS_CLK_ID,
	CLK_HUB_TIMER_APB_BUS_CLK_ID,
	CLK_ACI_APB_BUS_CLK_ID,
	CLK_SIM_APB_BUS_CLK_ID,
	CLK_SIM2_APB_BUS_CLK_ID,
	CLK_PWRMGR_AXI_BUS_CLK_ID,
	CLK_APB6_BUS_CLK_ID,
	CLK_GPIOKP_APB_BUS_CLK_ID,
	CLK_PMU_BSC_APB_BUS_CLK_ID,
	CLK_CHIPREG_APB_BUS_CLK_ID,
	CLK_FMON_APB_BUS_CLK_ID,
	CLK_HUB_TZCFG_APB_BUS_CLK_ID,
	CLK_SEC_WD_APB_BUS_CLK_ID,
	CLK_SYSEMI_SEC_APB_BUS_CLK_ID,
	CLK_SYSEMI_OPEN_APB_BUS_CLK_ID,
	CLK_VCEMI_SEC_APB_BUS_CLK_ID,
	CLK_VCEMI_OPEN_APB_BUS_CLK_ID,
	CLK_SPM_APB_BUS_CLK_ID,
	CLK_DAP_BUS_CLK_ID,
	CLK_SIM_PERI_CLK_ID,
	CLK_SIM2_PERI_CLK_ID,
	CLK_HUB_TIMER_PERI_CLK_ID,
	CLK_PMU_BSC_PERI_CLK_ID,
	CLK_KPM_CCU_CLK_ID,
	CLK_USB_OTG_AHB_BUS_CLK_ID,
	CLK_SDIO2_AHB_BUS_CLK_ID,
	CLK_SDIO3_AHB_BUS_CLK_ID,
	CLK_SDIO1_AHB_BUS_CLK_ID,
	CLK_SDIO4_AHB_BUS_CLK_ID,
	CLK_SYS_SWITCH_AXI_BUS_CLK_ID,
	CLK_MASTER_SWITCH_AHB_BUS_CLK_ID,
	CLK_MASTER_SWITCH_AXI_BUS_CLK_ID,
	CLK_ARMCORE_AXI_BUS_CLK_ID,
	CLK_APB4_BUS_CLK_ID,
	CLK_APB8_BUS_CLK_ID,
	CLK_DMA_AXI_BUS_CLK_ID,
	CLK_USBH_AHB_BUS_CLK_ID,
	CLK_USB_IC_AHB_BUS_CLK_ID,
	CLK_SDIO2_PERI_CLK_ID,
	CLK_SDIO2_SLEEP_PERI_CLK_ID,
	CLK_SDIO3_PERI_CLK_ID,
	CLK_SDIO3_SLEEP_PERI_CLK_ID,
	CLK_SDIO1_PERI_CLK_ID,
	CLK_SDIO1_SLEEP_PERI_CLK_ID,
	CLK_SDIO4_PERI_CLK_ID,
	CLK_SDIO4_SLEEP_PERI_CLK_ID,
	CLK_USB_IC_PERI_CLK_ID,
	CLK_USBH_48M_PERI_CLK_ID,
	CLK_USBH_12M_PERI_CLK_ID,
	CLK_KPS_CCU_CLK_ID,
	CLK_UARTB_APB_BUS_CLK_ID,
	CLK_UARTB2_APB_BUS_CLK_ID,
	CLK_UARTB3_APB_BUS_CLK_ID,
	CLK_DMAC_MUX_APB_BUS_CLK_ID,
	CLK_BSC1_APB_BUS_CLK_ID,
	CLK_BSC2_APB_BUS_CLK_ID,
	CLK_PWM_APB_BUS_CLK_ID,
	CLK_SSP0_APB_BUS_CLK_ID,
	CLK_SWITCH_AXI_BUS_CLK_ID,
	CLK_EXT_AXI_BUS_CLK_ID,
	CLK_HSM_AHB_BUS_CLK_ID,
	CLK_HSM_APB_BUS_CLK_ID,
	CLK_SPUM_OPEN_APB_BUS_CLK_ID,
	CLK_SPUM_SEC_APB_BUS_CLK_ID,
	CLK_APB1_BUS_CLK_ID,
	CLK_TIMERS_APB_BUS_CLK_ID,
	CLK_APB2_BUS_CLK_ID,
	CLK_SPUM_OPEN_AXI_BUS_CLK_ID,
	CLK_SPUM_SEC_AXI_BUS_CLK_ID,
	CLK_UARTB_PERI_CLK_ID,
	CLK_UARTB2_PERI_CLK_ID,
	CLK_UARTB3_PERI_CLK_ID,
	CLK_SSP0_AUDIO_PERI_CLK_ID,
	CLK_BSC1_PERI_CLK_ID,
	CLK_BSC2_PERI_CLK_ID,
	CLK_PWM_PERI_CLK_ID,
	CLK_SSP0_PERI_CLK_ID,
	CLK_TIMERS_PERI_CLK_ID,
	CLK_SPUM_OPEN_PERI_CLK_ID,
	CLK_SPUM_SEC_PERI_CLK_ID,
	CLK_MPHI_AHB_BUS_CLK_ID,
	CLK_MM_CCU_CLK_ID,
	CLK_DSI_PLL_CLK_ID,
	CLK_DSI_PLL_CHNL0_CLK_ID,
	CLK_DSI_PLL_CHNL1_CLK_ID,
	CLK_DSI_PLL_CHNL2_CLK_ID,
	CLK_MM_SWITCH_AXI_PERI_CLK_ID,
	CLK_CSI0_AXI_BUS_CLK_ID,
	CLK_CSI1_AXI_BUS_CLK_ID,
	CLK_ISP_AXI_BUS_CLK_ID,
	CLK_SMI_AXI_BUS_CLK_ID,
	CLK_VCE_AXI_BUS_CLK_ID,
	CLK_DSI0_AXI_BUS_CLK_ID,
	CLK_DSI1_AXI_BUS_CLK_ID,
	CLK_MM_APB_BUS_CLK_ID,
	CLK_SPI_APB_BUS_CLK_ID,
	CLK_MM_DMA_AXI_BUS_CLK_ID,
	CLK_V3D_AXI_BUS_CLK_ID,
	CLK_CSI0_LP_PERI_CLK_ID,
	CLK_CSI1_LP_PERI_CLK_ID,
	CLK_SMI_PERI_CLK_ID,
	CLK_DSI0_ESC_PERI_CLK_ID,
	CLK_DSI1_ESC_PERI_CLK_ID,
	CLK_DSI_PLL_O_DSI_PLL_PERI_CLK_ID,
	CLK_DIG_PREDIV_PERI_CLK_ID,
	CLK_DIG_CH0_PERI_CLK_ID,
	CLK_DIG_CH1_PERI_CLK_ID,
	CLK_DIG_CH2_PERI_CLK_ID,
	CLK_DIG_CH3_PERI_CLK_ID,
	CLK_BMDM_CCU_CLK_ID,
	CLK_DSP_CCU_CLK_ID,
	CLK_H264_AXI_BUS_CLK_ID,
	CLK_AXIPV_AXI_BUS_CLK_ID,
	CLK_PIXELV_APB_BUS_CLK_ID,
	CLK_PIXELV_PERI_CLK_ID,
	CLK_BSC3_PERI_CLK_ID,
	CLK_BSC3_APB_BUS_CLK_ID,
	CLK_BSC4_PERI_CLK_ID,
	CLK_BSC4_APB_BUS_CLK_ID,
	CLK_SSP1_APB_BUS_CLK_ID,
	CLK_SSP1_PERI_CLK_ID,
	CLK_SSP1_AUDIO_PERI_CLK_ID,
	CLK_APB_PCLK_DUMMY_CLK_ID,
};

#define ARM_SWITCH_CLK_FLAGS				AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define ROOT_CCU_CLK_FLAGS		(CCU_KEEP_UNLOCKED|CCU_DBG_BUS_EN)
#define APB10_BUS_CLK_FLAGS			AUTO_GATE
#define APB9_BUS_CLK_FLAGS			AUTO_GATE
#define ACI_APB_BUS_CLK_FLAGS				AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define PWRMGR_AXI_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define APB6_BUS_CLK_FLAGS 					AUTO_GATE
#define GPIOKP_APB_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define CHIPREG_APB_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define FMON_APB_BUS_CLK_FLAGS				AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define HUB_TZCFG_APB_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SEC_WD_APB_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SYSEMI_SEC_APB_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SYSEMI_OPEN_APB_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SPM_APB_BUS_CLK_FLAGS				AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define BSC2_APB_BUS_CLK_FLAGS				AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SWITCH_AXI_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define APB1_BUS_CLK_FLAGS 				AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define MPHI_AHB_BUS_CLK_FLAGS				AUTO_GATE
#define ARM_CORE_CLK_FLAGS			UPDATE_LPJ|HYST_ENABLE|HYST_HIGH
#define APB0_CLK_FLAGS				AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define A9_PLL_CLK_FLAGS		(AUTO_GATE | DELAYED_PLL_LOCK)
#define A9_PLL_CHNL0_CLK_FLAGS		0
#define A9_PLL_CHNL1_CLK_FLAGS		0
#define KPROC_CCU_CLK_FLAGS			CCU_TARGET_AC
#define FRAC_1M_REF_CLK_FLAGS 			AUTO_GATE|ENABLE_ON_INIT
#define REF_96M_VARVDD_REF_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define REF_96M_REF_CLK_FLAGS 			AUTO_GATE|ENABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define VAR_96M_REF_CLK_FLAGS 			AUTO_GATE|ENABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define VAR_500M_VARVDD_REF_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define REF_312M_REF_CLK_FLAGS 			AUTO_GATE|ENABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define REF_208M_REF_CLK_FLAGS 			0
#define REF_156M_REF_CLK_FLAGS 			0
#define REF_104M_REF_CLK_FLAGS 			0
#define REF_52M_REF_CLK_FLAGS 			0
#define REF_13M_REF_CLK_FLAGS 			0
#define REF_26M_REF_CLK_FLAGS 			0
#define VAR_312M_REF_CLK_FLAGS 			AUTO_GATE|ENABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define VAR_208M_REF_CLK_FLAGS 			0
#define VAR_156M_REF_CLK_FLAGS 			0
#define VAR_104M_REF_CLK_FLAGS 			0
#define VAR_52M_REF_CLK_FLAGS 			0
#define VAR_13M_REF_CLK_FLAGS 			0
#define DFT_19_5M_REF_CLK_FLAGS 		0
#define REF_CX40_VARVDD_REF_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define REF_CX40_REF_CLK_FLAGS 			0
#define REF_1M_REF_CLK_FLAGS 			0
#define REF_32K_REF_CLK_FLAGS 			0
#define TPIU_MISC_CLK_FLAGS			INVERT_ENABLE
#define PTI_MISC_CLK_FLAGS			INVERT_ENABLE
#define PMU_BSC_VAR_REF_CLK_FLAGS 		0
#define BBL_32K_REF_CLK_FLAGS 			0
#define CSI0_PIX_PHY_REF_CLK_FLAGS 		0
#define CSI0_BYTE0_PHY_REF_CLK_FLAGS		0
#define CSI0_BYTE1_PHY_REF_CLK_FLAGS		0
#define CSI1_PIX_PHY_REF_CLK_FLAGS		0
#define CSI1_BYTE0_PHY_REF_CLK_FLAGS		0
#define CSI1_BYTE1_PHY_REF_CLK_FLAGS		0
#define DSI0_PIX_PHY_REF_CLK_FLAGS		0
#define DSI1_PIX_PHY_REF_CLK_FLAGS 		0
#define TEST_DEBUG_REF_CLK_FLAGS 		0
#define REF_APB6_FREE_CLK_FLAGS 		AUTO_GATE
#define KHUB_CCU_CLK_FLAGS			(CCU_TARGET_AC|CCU_DBG_BUS_EN)
#define NOR_APB_BUS_CLK_FLAGS 			DISABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define TMON_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define APB5_BUS_CLK_FLAGS 			AUTO_GATE
#define CTI_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define FUNNEL_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define TPIU_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define VC_ITM_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SEC_VIOL_TRAP4_APB_BUS_CLK_FLAGS	AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SEC_VIOL_TRAP5_APB_BUS_CLK_FLAGS	AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SEC_VIOL_TRAP7_APB_BUS_CLK_FLAGS	AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define AXI_TRACE19_APB_BUS_CLK_FLAGS		(DISABLE_ON_INIT|HYST_ENABLE|\
							HYST_HIGH)
#define AXI_TRACE11_APB_BUS_CLK_FLAGS		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define AXI_TRACE12_APB_BUS_CLK_FLAGS		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define AXI_TRACE13_APB_BUS_CLK_FLAGS		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define HSI_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define HSI_TX_PERI_CLK_FLAGS			(HYST_ENABLE|HYST_HIGH)
#define HSI_RX_PERI_CLK_FLAGS			(HYST_ENABLE|HYST_HIGH)
#define ETB_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define FINAL_FUNNEL_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define ATB_FILTER_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define AUDIOH_26M_PERI_CLK_FLAGS		DONOT_NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define HUB_PERI_CLK_FLAGS			(AUTO_GATE| \
						DONOT_NOTIFY_STATUS_TO_CCU| \
						HYST_ENABLE|HYST_HIGH)
#define BT_SLIM_AHB_APB_BUS_CLK_FLAGS 		DISABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define ETB2AXI_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define AUDIOH_APB_BUS_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define SSP3_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SSP4_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define VAR_SPM_APB_BUS_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define NOR_BUS_CLK_FLAGS 			DISABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define NOR_ASYNC_PERI_CLK_FLAGS		(DISABLE_ON_INIT|HYST_ENABLE \
								|HYST_HIGH)
#define AUDIOH_2P4M_PERI_CLK_FLAGS 		RATE_FIXED|HYST_ENABLE|HYST_HIGH
#define AUDIOH_156M_PERI_CLK_FLAGS		RATE_FIXED|HYST_ENABLE|HYST_HIGH
#define SSP3_AUDIO_PERI_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define SSP3_PERI_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define SSP4_AUDIO_PERI_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define SSP4_PERI_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define TMON_1M_PERI_CLK_FLAGS			DONOT_NOTIFY_STATUS_TO_CCU|DISABLE_ON_INIT|\
							HYST_ENABLE|HYST_HIGH
#define CAPH_SRCMIXER_PERI_CLK_FLAGS		(DISABLE_ON_INIT|\
							HYST_ENABLE|HYST_HIGH)
#define DAP_SWITCH_PERI_CLK_FLAGS		(RATE_FIXED|HYST_ENABLE| \
							HYST_HIGH| \
						DONOT_NOTIFY_STATUS_TO_CCU)
#define BROM_PERI_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define MDIOMASTER_PERI_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define KHUBAON_CCU_CLK_FLAGS 			CCU_TARGET_AC
#define HUBAON_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SIM_APB_BUS_CLK_FLAGS			HYST_ENABLE|HYST_HIGH
#define SIM2_APB_BUS_CLK_FLAGS			HYST_ENABLE|HYST_HIGH
#define HUB_TIMER_APB_BUS_CLK_FLAGS 		AUTO_GATE|ENABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define PMU_BSC_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define VCEMI_SEC_APB_BUS_CLK_FLAGS 		DISABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define VCEMI_OPEN_APB_BUS_CLK_FLAGS 		DISABLE_ON_INIT|HYST_ENABLE|HYST_HIGH
#define DAP_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SIM_PERI_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define SIM2_PERI_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define HUB_TIMER_PERI_CLK_FLAGS		ENABLE_ON_INIT|DONOT_NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define PMU_BSC_PERI_CLK_FLAGS			AUTO_GATE|DONOT_NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define KPM_CCU_CLK_FLAGS			(CCU_TARGET_AC|CCU_DBG_BUS_EN)
#define USB_OTG_AHB_BUS_CLK_FLAGS 		DISABLE_ON_INIT | NOTIFY_STATUS_TO_CCU
#define SDIO2_AHB_BUS_CLK_FLAGS 		DISABLE_ON_INIT
#define SDIO3_AHB_BUS_CLK_FLAGS 		DISABLE_ON_INIT
#define SDIO1_AHB_BUS_CLK_FLAGS 		DISABLE_ON_INIT
#define SDIO4_AHB_BUS_CLK_FLAGS 		DISABLE_ON_INIT
#define SYS_SWITCH_AXI_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define MASTER_SWITCH_AHB_BUS_CLK_FLAGS 	AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define MASTER_SWITCH_AXI_BUS_CLK_FLAGS 	HYST_ENABLE|HYST_HIGH
#define ARMCORE_AXI_BUS_CLK_FLAGS		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define APB4_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define APB8_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define DMA_AXI_BUS_CLK_FLAGS			HYST_ENABLE|HYST_HIGH
#define USBH_AHB_BUS_CLK_FLAGS 			0
#define USB_IC_AHB_BUS_CLK_FLAGS		0
#define SDIO2_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define SDIO2_SLEEP_PERI_CLK_FLAGS 		DISABLE_ON_INIT|DONOT_NOTIFY_STATUS_TO_CCU
#define SDIO3_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define SDIO3_SLEEP_PERI_CLK_FLAGS 		DISABLE_ON_INIT|DONOT_NOTIFY_STATUS_TO_CCU
#define SDIO1_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define SDIO1_SLEEP_PERI_CLK_FLAGS 		DISABLE_ON_INIT|DONOT_NOTIFY_STATUS_TO_CCU
#define SDIO4_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define SDIO4_SLEEP_PERI_CLK_FLAGS 		DISABLE_ON_INIT|DONOT_NOTIFY_STATUS_TO_CCU
#define USB_IC_PERI_CLK_FLAGS 			DISABLE_ON_INIT
#define USBH_48M_PERI_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define USBH_12M_PERI_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define KPS_CCU_CLK_FLAGS			(CCU_TARGET_AC|CCU_DBG_BUS_EN)
#define EXT_AXI_BUS_CLK_FLAGS			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define UARTB_APB_BUS_CLK_FLAGS 		AUTO_GATE
#define UARTB2_APB_BUS_CLK_FLAGS 		AUTO_GATE
#define UARTB3_APB_BUS_CLK_FLAGS 		AUTO_GATE
#define DMAC_MUX_APB_BUS_CLK_FLAGS 		AUTO_GATE|DISABLE_ON_INIT
#define BSC1_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define PWM_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SSP0_APB_BUS_CLK_FLAGS 			AUTO_GATE
#define HSM_AHB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define HSM_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SPUM_OPEN_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SPUM_SEC_APB_BUS_CLK_FLAGS 		AUTO_GATE|HYST_ENABLE|HYST_HIGH
#ifdef CONFIG_1MHZ_SLV_SYSTEM_TIMER
#define TIMERS_APB_BUS_CLK_FLAGS                0
#else
#define TIMERS_APB_BUS_CLK_FLAGS                AUTO_GATE
#endif
#define APB2_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SPUM_OPEN_AXI_BUS_CLK_FLAGS		AUTO_GATE
#define SPUM_SEC_AXI_BUS_CLK_FLAGS		AUTO_GATE
#define UARTB_PERI_CLK_FLAGS 			DONOT_NOTIFY_STATUS_TO_CCU
#define UARTB2_PERI_CLK_FLAGS 			DONOT_NOTIFY_STATUS_TO_CCU
#define UARTB3_PERI_CLK_FLAGS 			DONOT_NOTIFY_STATUS_TO_CCU
#define SSP0_AUDIO_PERI_CLK_FLAGS 		HYST_ENABLE|HYST_HIGH
#define BSC1_PERI_CLK_FLAGS 			0
#define BSC2_PERI_CLK_FLAGS 			0
#define PWM_PERI_CLK_FLAGS 			RATE_FIXED
#define SSP0_PERI_CLK_FLAGS 			0
#ifdef CONFIG_1MHZ_SLV_SYSTEM_TIMER
#define TIMERS_PERI_CLK_FLAGS                   ENABLE_ON_INIT
#else
#define TIMERS_PERI_CLK_FLAGS 			DISABLE_ON_INIT
#endif
#define SPUM_OPEN_PERI_CLK_FLAGS		(DISABLE_ON_INIT|\
						HYST_ENABLE|HYST_HIGH)
#define SPUM_SEC_PERI_CLK_FLAGS			(DISABLE_ON_INIT|\
						HYST_ENABLE|HYST_HIGH)
#define MM_CCU_CLK_FLAGS			(CCU_TARGET_AC|\
							CCU_ACCESS_ENABLE)
#define DSI_PLL_CLK_FLAGS			0
#define DSI_PLL_CHNL0_CLK_FLAGS 		0
#define DSI_PLL_CHNL1_CLK_FLAGS 		0
#define DSI_PLL_CHNL2_CLK_FLAGS 		0
#define MM_SWITCH_AXI_PERI_CLK_FLAGS		(DONOT_NOTIFY_STATUS_TO_CCU |\
							HYST_ENABLE|HYST_HIGH)
#define CSI0_AXI_BUS_CLK_FLAGS 			NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define CSI1_AXI_BUS_CLK_FLAGS 			NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define ISP_AXI_BUS_CLK_FLAGS 			NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define SMI_AXI_BUS_CLK_FLAGS 			NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define VCE_AXI_BUS_CLK_FLAGS 			NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define DSI0_AXI_BUS_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define DSI1_AXI_BUS_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define MM_APB_BUS_CLK_FLAGS 			AUTO_GATE|HYST_ENABLE|HYST_HIGH
#define SPI_APB_BUS_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define MM_DMA_AXI_BUS_CLK_FLAGS 		NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define V3D_AXI_BUS_CLK_FLAGS 			NOTIFY_STATUS_TO_CCU|HYST_ENABLE|HYST_HIGH
#define CSI0_LP_PERI_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define CSI1_LP_PERI_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define SMI_PERI_CLK_FLAGS 			HYST_ENABLE|HYST_HIGH
#define DSI0_ESC_PERI_CLK_FLAGS			(HYST_ENABLE|HYST_HIGH)
#define DSI1_ESC_PERI_CLK_FLAGS			(HYST_ENABLE|HYST_HIGH)
#define DSI_PLL_O_DSI_PLL_PERI_CLK_FLAGS 	HYST_ENABLE|HYST_HIGH
#define DIG_PREDIV_PERI_CLK_FLAGS			0
#define	DIG_CH0_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define	DIG_CH1_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define	DIG_CH2_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define	DIG_CH3_PERI_CLK_FLAGS			DISABLE_ON_INIT
#define BMDM_CCU_CLK_FLAGS			(CCU_TARGET_AC|CCU_DBG_BUS_EN)
#define DSP_CCU_CLK_FLAGS			CCU_TARGET_AC

/* Clocks added in Hawaii */
#define H264_AXI_BUS_CLK_FLAGS (NOTIFY_STATUS_TO_CCU | HYST_ENABLE | HYST_HIGH)
#define AXIPV_AXI_BUS_CLK_FLAGS (NOTIFY_STATUS_TO_CCU | HYST_ENABLE | HYST_HIGH)
#define PIXELV_APB_BUS_CLK_FLAGS (HYST_ENABLE | HYST_HIGH)
#define PIXELV_PERI_CLK_FLAGS 0
#define BSC3_APB_BUS_CLK_FLAGS (AUTO_GATE | HYST_ENABLE | HYST_HIGH)
#define BSC3_PERI_CLK_FLAGS 0
#define BSC4_APB_BUS_CLK_FLAGS (AUTO_GATE | HYST_ENABLE | HYST_HIGH)
#define BSC4_PERI_CLK_FLAGS 0
#define SSP1_APB_BUS_CLK_FLAGS AUTO_GATE
#define SSP1_PERI_CLK_FLAGS 0
#define SSP1_AUDIO_PERI_CLK_FLAGS (HYST_ENABLE | HYST_HIGH)

#define DIG_CHANNEL_AUTO_GATE_REQ_MASK	7

#define PLL1_OFFSET_CONFIG	0xBFFFF

enum {
	CSI0_CAMPIX_PLL,
	CSI1_CAMPIX_PLL,
	CSI0_BYTE1_PLL,
	CSI0_BYTE0_PLL,
	CSI1_BYTE1_PLL,
	CSI1_BYTE0_PLL,
	DSI0_PIXEL_PLL,
	DSI1_PIXEL_PLL
};

enum {
	CSI_NO_CLOCK = 0,
	CSI_REF_CRYSTAL_CLK = 0x3,
	CSI_TESTDEBUG_DIV2_CLK = 0x4,
	CSI_TESTDEBUG_CLK = 0x5,
	CSI_RX1_BCLKHS = 0x6,
	CSI_RX1_BCLKHS_N = 0x7,
	CSI_RX0_BCLKHS = 0x8,
	CSI_RX0_BCLKHS_N = 0x9
};

enum {
	DSI_NO_CLOCK = 0,
	DSI_REF_CRYSTAL_CLK = 0x1,
	DSI_TESTDEBUG_DIV2_CLK = 0x2,
	DSI_TESTDEBUG_CLK = 0x3,
	DSI_TXDDRCLK = 0x4,
	DSI_TXDDRCLK_N = 0x5,
	DSI_TXDDRCLK2 = 0x6,
	DSI_TXDDRCLK2_N = 0x7,
	DSI_TX0_BCLKHS = 0x8,
	DSI_TX0_BCLKHS_N = 0x9
};

enum {
	ROOT_CCU_PLL0A,
	ROOT_CCU_PLL1A,
};
#ifdef CONFIG_MM_FREEZE_VAR500M_ERRATUM
int var500m_clk_en_override(int enable);
#endif
int mm_ccu_set_pll_select(u32 clk_id, u32 value);
int clk_set_pll_pwr_on_idle(int pll_id, int enable);
int clk_set_crystal_pwr_on_idle(int enable);
int __clock_init(void);
int __clock_print_act_clks(void);
int chip_reset(void);
#ifdef CONFIG_DEBUG_FS
int debug_bus_mux_sel(int mux_sel, int mux_param, u32 dbg_bit_sel);
int set_clk_idle_debug_mon(int clk_idle, int db_sel, u32 dbg_bit_sel);
int set_clk_monitor_debug(int mon_select, int db_sel, u32 dbg_bit_sel);
#endif

#endif /* __ARM_ARCH_BCM2166X_CLOCK_MGR_H  */
