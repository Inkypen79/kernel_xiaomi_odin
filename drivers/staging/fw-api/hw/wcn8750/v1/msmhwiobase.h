/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef MSMHWIOBASE_H
#define MSMHWIOBASE_H

#define HOST_WCSS_WCSS_BASE                                                0x0
#define HOST_WCSS_WCSS_BASE_SIZE                                    0x00d00000
#define HOST_WCSS_WCSS_BASE_PHYS                                    0x00000000

#define HOST_HZ_AUXSSAUXSS_SWI_BASE                                  0x1900000
#define HOST_HZ_AUXSSAUXSS_SWI_BASE_SIZE                            0x00007000
#define HOST_HZ_AUXSSAUXSS_SWI_BASE_PHYS                            0x01900000

#define HOST_WLAN_HZ_ZEALIS_AON_BASE                                 0x1907000
#define HOST_WLAN_HZ_ZEALIS_AON_BASE_SIZE                           0x00019000
#define HOST_WLAN_HZ_ZEALIS_AON_BASE_PHYS                           0x01907000

#define HOST_TLMM_BASE                                               0x1a00000
#define HOST_TLMM_BASE_SIZE                                         0x00100000
#define HOST_TLMM_BASE_PHYS                                         0x01a00000

#define HOST_CORE_TOP_CSR_BASE                                       0x1b00000
#define HOST_CORE_TOP_CSR_BASE_SIZE                                 0x0003f000
#define HOST_CORE_TOP_CSR_BASE_PHYS                                 0x01b00000

#define QUPV3_QUPV3_ID_3_BASE                                        0x1b40000
#define QUPV3_QUPV3_ID_3_BASE_SIZE                                  0x00040000
#define QUPV3_QUPV3_ID_3_BASE_PHYS                                  0x01b40000

#define HOST_SOC_WFSS_CE_REG_BASE                                    0x1b80000
#define HOST_SOC_WFSS_CE_REG_BASE_SIZE                              0x0001c000
#define HOST_SOC_WFSS_CE_REG_BASE_PHYS                              0x01b80000

#define HOST_WL_TLMM_BASE                                            0x1bc0000
#define HOST_WL_TLMM_BASE_SIZE                                      0x00020000
#define HOST_WL_TLMM_BASE_PHYS                                      0x01bc0000

#define HOST_TSENS_SROT_BASE                                         0x1bf0000
#define HOST_TSENS_SROT_BASE_SIZE                                   0x00001000
#define HOST_TSENS_SROT_BASE_PHYS                                   0x01bf0000

#define HOST_TSENS_TM_BASE                                           0x1bf1000
#define HOST_TSENS_TM_BASE_SIZE                                     0x00001000
#define HOST_TSENS_TM_BASE_PHYS                                     0x01bf1000

#define HOST_QDSS_LITE_QDSS_LITE_APB_BASE                            0x1c00000
#define HOST_QDSS_LITE_QDSS_LITE_APB_BASE_SIZE                      0x00080000
#define HOST_QDSS_LITE_QDSS_LITE_APB_BASE_PHYS                      0x01c00000

#define HOST_SOC_DBG_WRAPPER_TOPHOST__BASE                           0x1c80000
#define HOST_SOC_DBG_WRAPPER_TOPHOST__BASE_SIZE                     0x0007fffd
#define HOST_SOC_DBG_WRAPPER_TOPHOST__BASE_PHYS                     0x01c80000

#define HOST_QDSS_APB_WCSS_DBG_DEC_SOC_APB_WCSSDBG_BASE              0x1d00000
#define HOST_QDSS_APB_WCSS_DBG_DEC_SOC_APB_WCSSDBG_BASE_SIZE        0x00100000
#define HOST_QDSS_APB_WCSS_DBG_DEC_SOC_APB_WCSSDBG_BASE_PHYS        0x01d00000

#define HOST_PCIE_PCIE_TOP_WRAPPER_BASE                              0x1e00000
#define HOST_PCIE_PCIE_TOP_WRAPPER_BASE_SIZE                        0x00020000
#define HOST_PCIE_PCIE_TOP_WRAPPER_BASE_PHYS                        0x01e00000

#define HOST_SECURITY_CONTROL_WLAN_BASE                              0x1e20000
#define HOST_SECURITY_CONTROL_WLAN_BASE_SIZE                        0x00008000
#define HOST_SECURITY_CONTROL_WLAN_BASE_PHYS                        0x01e20000

#define HOST_EDPD_CAL_ACC_BASE                                       0x1e28000
#define HOST_EDPD_CAL_ACC_BASE_SIZE                                 0x00003000
#define HOST_EDPD_CAL_ACC_BASE_PHYS                                 0x01e28000

#define HOST_CPR_CX_CPR3_BASE                                        0x1e30000
#define HOST_CPR_CX_CPR3_BASE_SIZE                                  0x00004000
#define HOST_CPR_CX_CPR3_BASE_PHYS                                  0x01e30000

#define HOST_CPR_MX_CPR3_BASE                                        0x1e34000
#define HOST_CPR_MX_CPR3_BASE_SIZE                                  0x00004000
#define HOST_CPR_MX_CPR3_BASE_PHYS                                  0x01e34000

#define HOST_WCSS_IE_BASE                                            0x1e38000
#define HOST_WCSS_IE_BASE_SIZE                                      0x00001000
#define HOST_WCSS_IE_BASE_PHYS                                      0x01e38000

#define HOST_GCC_GCC_BASE                                            0x1e40000
#define HOST_GCC_GCC_BASE_SIZE                                      0x0000048c
#define HOST_GCC_GCC_BASE_PHYS                                      0x01e40000

#define HOST_PCNOC_0_BUS_TIMEOUT_BASE                                0x1e60000
#define HOST_PCNOC_0_BUS_TIMEOUT_BASE_SIZE                          0x00001000
#define HOST_PCNOC_0_BUS_TIMEOUT_BASE_PHYS                          0x01e60000

#define HOST_PCNOC_1_BUS_TIMEOUT_BASE                                0x1e61000
#define HOST_PCNOC_1_BUS_TIMEOUT_BASE_SIZE                          0x00001000
#define HOST_PCNOC_1_BUS_TIMEOUT_BASE_PHYS                          0x01e61000

#define HOST_PCNOC_2_BUS_TIMEOUT_BASE                                0x1e62000
#define HOST_PCNOC_2_BUS_TIMEOUT_BASE_SIZE                          0x00001000
#define HOST_PCNOC_2_BUS_TIMEOUT_BASE_PHYS                          0x01e62000

#define HOST_PCNOC_3_BUS_TIMEOUT_BASE                                0x1e63000
#define HOST_PCNOC_3_BUS_TIMEOUT_BASE_SIZE                          0x00001000
#define HOST_PCNOC_3_BUS_TIMEOUT_BASE_PHYS                          0x01e63000

#define HOST_PCNOC_4_BUS_TIMEOUT_BASE                                0x1e64000
#define HOST_PCNOC_4_BUS_TIMEOUT_BASE_SIZE                          0x00001000
#define HOST_PCNOC_4_BUS_TIMEOUT_BASE_PHYS                          0x01e64000

#define HOST_PCNOC_5_BUS_TIMEOUT_BASE                                0x1e65000
#define HOST_PCNOC_5_BUS_TIMEOUT_BASE_SIZE                          0x00001000
#define HOST_PCNOC_5_BUS_TIMEOUT_BASE_PHYS                          0x01e65000

#define HOST_RRI_PREFETCH_REG_BASE                                   0x1e70000
#define HOST_RRI_PREFETCH_REG_BASE_SIZE                             0x00010000
#define HOST_RRI_PREFETCH_REG_BASE_PHYS                             0x01e70000

#define HOST_SYSTEM_NOC_BASE                                         0x1e80000
#define HOST_SYSTEM_NOC_BASE_SIZE                                   0x0000a000
#define HOST_SYSTEM_NOC_BASE_PHYS                                   0x01e80000

#define HOST_PC_NOC_BASE                                             0x1f00000
#define HOST_PC_NOC_BASE_SIZE                                       0x00003880
#define HOST_PC_NOC_BASE_PHYS                                       0x01f00000

#define HOST_WLAON_WL_AON_REG_BASE                                   0x1f80000
#define HOST_WLAON_WL_AON_REG_BASE_SIZE                             0x000007f0
#define HOST_WLAON_WL_AON_REG_BASE_PHYS                             0x01f80000

#define HOST_SYSPM_SYSPM_REG_BASE                                    0x1f82000
#define HOST_SYSPM_SYSPM_REG_BASE_SIZE                              0x00001000
#define HOST_SYSPM_SYSPM_REG_BASE_PHYS                              0x01f82000

#define HOST_PMU_WLAN_PMU_TOP_BASE                                   0x1f88000
#define HOST_PMU_WLAN_PMU_TOP_BASE_SIZE                             0x00000400
#define HOST_PMU_WLAN_PMU_TOP_BASE_PHYS                             0x01f88000

#define HOST_PMU_NOC_BASE                                            0x1f8a000
#define HOST_PMU_NOC_BASE_SIZE                                      0x00000180
#define HOST_PMU_NOC_BASE_PHYS                                      0x01f8a000

#define HOST_BOOT_ROM                                                0x1200000
#define HOST_BOOT_ROM_SIZE                                          0x00004800
#define HOST_BOOT_ROM_PHYS                                          0x01200000

#define HOST_SYSTEM_IRAM                                             0x1400000
#define HOST_SYSTEM_IRAM_SIZE                                       0x00020000
#define HOST_SYSTEM_IRAM_PHYS                                       0x01400000

#define HOST_ZEALIS_SRAM                                             0x28c0000
#define HOST_ZEALIS_SRAM_SIZE                                       0x00040000
#define HOST_ZEALIS_SRAM_PHYS                                       0x028c0000

#define HOST_PCIE_ATU_REGION                                         0x4000000
#define HOST_PCIE_ATU_REGION_SIZE                                   0x40000000
#define HOST_PCIE_ATU_REGION_PHYS                                   0x04000000

#endif
