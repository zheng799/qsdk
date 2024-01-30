/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLOCK_IPQ_NSSCC_9048_H
#define _DT_BINDINGS_CLOCK_IPQ_NSSCC_9048_H

#define NSS_CC_CE_APB_CLK					0
#define NSS_CC_CE_AXI_CLK					1
#define NSS_CC_CE_CLK_SRC					2
#define NSS_CC_CFG_CLK_SRC					3
#define NSS_CC_CLC_AXI_CLK					4
#define NSS_CC_CLC_CLK_SRC					5
#define NSS_CC_CRYPTO_CLK					6
#define NSS_CC_CRYPTO_CLK_SRC					7
#define NSS_CC_CRYPTO_PPE_CLK					8
#define NSS_CC_HAQ_AHB_CLK					9
#define NSS_CC_HAQ_AXI_CLK					10
#define NSS_CC_HAQ_CLK_SRC					11
#define NSS_CC_IMEM_AHB_CLK					12
#define NSS_CC_IMEM_CLK_SRC					13
#define NSS_CC_IMEM_QSB_CLK					14
#define NSS_CC_INT_CFG_CLK_SRC					15
#define NSS_CC_NSS_CSR_CLK					16
#define NSS_CC_NSSNOC_CE_APB_CLK				17
#define NSS_CC_NSSNOC_CE_AXI_CLK				18
#define NSS_CC_NSSNOC_CLC_AXI_CLK				19
#define NSS_CC_NSSNOC_CRYPTO_CLK				20
#define NSS_CC_NSSNOC_HAQ_AHB_CLK				21
#define NSS_CC_NSSNOC_HAQ_AXI_CLK				22
#define NSS_CC_NSSNOC_IMEM_AHB_CLK				23
#define NSS_CC_NSSNOC_IMEM_QSB_CLK				24
#define NSS_CC_NSSNOC_NSS_CSR_CLK				25
#define NSS_CC_NSSNOC_PPE_CFG_CLK				26
#define NSS_CC_NSSNOC_PPE_CLK					27
#define NSS_CC_NSSNOC_UBI32_AHB0_CLK				28
#define NSS_CC_NSSNOC_UBI32_AXI0_CLK				29
#define NSS_CC_NSSNOC_UBI32_INT0_AHB_CLK			30
#define NSS_CC_NSSNOC_UBI32_NC_AXI0_1_CLK			31
#define NSS_CC_NSSNOC_UBI32_NC_AXI0_CLK				32
#define NSS_CC_PORT1_MAC_CLK					33
#define NSS_CC_PORT1_RX_CLK					34
#define NSS_CC_PORT1_RX_CLK_SRC					35
#define NSS_CC_PORT1_RX_DIV_CLK_SRC				36
#define NSS_CC_PORT1_TX_CLK					37
#define NSS_CC_PORT1_TX_CLK_SRC					38
#define NSS_CC_PORT1_TX_DIV_CLK_SRC				39
#define NSS_CC_PORT2_MAC_CLK					40
#define NSS_CC_PORT2_RX_CLK					41
#define NSS_CC_PORT2_RX_CLK_SRC					42
#define NSS_CC_PORT2_RX_DIV_CLK_SRC				43
#define NSS_CC_PORT2_TX_CLK					44
#define NSS_CC_PORT2_TX_CLK_SRC					45
#define NSS_CC_PORT2_TX_DIV_CLK_SRC				46
#define NSS_CC_PORT3_MAC_CLK					47
#define NSS_CC_PORT3_RX_CLK					48
#define NSS_CC_PORT3_RX_CLK_SRC					49
#define NSS_CC_PORT3_RX_DIV_CLK_SRC				50
#define NSS_CC_PORT3_TX_CLK					51
#define NSS_CC_PORT3_TX_CLK_SRC					52
#define NSS_CC_PORT3_TX_DIV_CLK_SRC				53
#define NSS_CC_PORT4_MAC_CLK					54
#define NSS_CC_PORT4_RX_CLK					55
#define NSS_CC_PORT4_RX_CLK_SRC					56
#define NSS_CC_PORT4_RX_DIV_CLK_SRC				57
#define NSS_CC_PORT4_TX_CLK					58
#define NSS_CC_PORT4_TX_CLK_SRC					59
#define NSS_CC_PORT4_TX_DIV_CLK_SRC				60
#define NSS_CC_PORT5_MAC_CLK					61
#define NSS_CC_PORT5_RX_CLK					62
#define NSS_CC_PORT5_RX_CLK_SRC					63
#define NSS_CC_PORT5_RX_DIV_CLK_SRC				64
#define NSS_CC_PORT5_TX_CLK					65
#define NSS_CC_PORT5_TX_CLK_SRC					66
#define NSS_CC_PORT5_TX_DIV_CLK_SRC				67
#define NSS_CC_PORT6_MAC_CLK					68
#define NSS_CC_PORT6_RX_CLK					69
#define NSS_CC_PORT6_RX_CLK_SRC					70
#define NSS_CC_PORT6_RX_DIV_CLK_SRC				71
#define NSS_CC_PORT6_TX_CLK					72
#define NSS_CC_PORT6_TX_CLK_SRC					73
#define NSS_CC_PORT6_TX_DIV_CLK_SRC				74
#define NSS_CC_PPE_CLK_SRC					75
#define NSS_CC_PPE_EDMA_CFG_CLK					76
#define NSS_CC_PPE_EDMA_CLK					77
#define NSS_CC_PPE_SWITCH_BTQ_CLK				78
#define NSS_CC_PPE_SWITCH_CFG_CLK				79
#define NSS_CC_PPE_SWITCH_CLK					80
#define NSS_CC_PPE_SWITCH_IPE_CLK				81
#define NSS_CC_UBI0_CLK_SRC					82
#define NSS_CC_UBI0_DIV_CLK_SRC					83
#define NSS_CC_UBI1_CLK_SRC					84
#define NSS_CC_UBI1_DIV_CLK_SRC					85
#define NSS_CC_UBI2_CLK_SRC					86
#define NSS_CC_UBI2_DIV_CLK_SRC					87
#define NSS_CC_UBI32_AHB0_CLK					88
#define NSS_CC_UBI32_AHB1_CLK					89
#define NSS_CC_UBI32_AHB2_CLK					90
#define NSS_CC_UBI32_AHB3_CLK					91
#define NSS_CC_UBI32_AXI0_CLK					92
#define NSS_CC_UBI32_AXI1_CLK					93
#define NSS_CC_UBI32_AXI2_CLK					94
#define NSS_CC_UBI32_AXI3_CLK					95
#define NSS_CC_UBI32_CORE0_CLK					96
#define NSS_CC_UBI32_CORE1_CLK					97
#define NSS_CC_UBI32_CORE2_CLK					98
#define NSS_CC_UBI32_CORE3_CLK					99
#define NSS_CC_UBI32_INTR0_AHB_CLK				100
#define NSS_CC_UBI32_INTR1_AHB_CLK				101
#define NSS_CC_UBI32_INTR2_AHB_CLK				102
#define NSS_CC_UBI32_INTR3_AHB_CLK				103
#define NSS_CC_UBI32_NC_AXI0_CLK				104
#define NSS_CC_UBI32_NC_AXI1_CLK				105
#define NSS_CC_UBI32_NC_AXI2_CLK				106
#define NSS_CC_UBI32_NC_AXI3_CLK				107
#define NSS_CC_UBI32_UTCM0_CLK					108
#define NSS_CC_UBI32_UTCM1_CLK					109
#define NSS_CC_UBI32_UTCM2_CLK					110
#define NSS_CC_UBI32_UTCM3_CLK					111
#define NSS_CC_UBI3_CLK_SRC					112
#define NSS_CC_UBI3_DIV_CLK_SRC					113
#define NSS_CC_UBI_AXI_CLK_SRC					114
#define NSS_CC_UBI_NC_AXI_BFDCD_CLK_SRC				115
#define NSS_CC_UNIPHY_PORT1_RX_CLK				116
#define NSS_CC_UNIPHY_PORT1_TX_CLK				117
#define NSS_CC_UNIPHY_PORT2_RX_CLK				118
#define NSS_CC_UNIPHY_PORT2_TX_CLK				119
#define NSS_CC_UNIPHY_PORT3_RX_CLK				120
#define NSS_CC_UNIPHY_PORT3_TX_CLK				121
#define NSS_CC_UNIPHY_PORT4_RX_CLK				122
#define NSS_CC_UNIPHY_PORT4_TX_CLK				123
#define NSS_CC_UNIPHY_PORT5_RX_CLK				124
#define NSS_CC_UNIPHY_PORT5_TX_CLK				125
#define NSS_CC_UNIPHY_PORT6_RX_CLK				126
#define NSS_CC_UNIPHY_PORT6_TX_CLK				127
#define NSS_CC_XGMAC0_PTP_REF_CLK				128
#define NSS_CC_XGMAC0_PTP_REF_DIV_CLK_SRC			129
#define NSS_CC_XGMAC1_PTP_REF_CLK				130
#define NSS_CC_XGMAC1_PTP_REF_DIV_CLK_SRC			131
#define NSS_CC_XGMAC2_PTP_REF_CLK				132
#define NSS_CC_XGMAC2_PTP_REF_DIV_CLK_SRC			133
#define NSS_CC_XGMAC3_PTP_REF_CLK				134
#define NSS_CC_XGMAC3_PTP_REF_DIV_CLK_SRC			135
#define NSS_CC_XGMAC4_PTP_REF_CLK				136
#define NSS_CC_XGMAC4_PTP_REF_DIV_CLK_SRC			137
#define NSS_CC_XGMAC5_PTP_REF_CLK				138
#define NSS_CC_XGMAC5_PTP_REF_DIV_CLK_SRC			139
#define UBI32_PLL						140
#define UBI32_PLL_MAIN						141

#endif