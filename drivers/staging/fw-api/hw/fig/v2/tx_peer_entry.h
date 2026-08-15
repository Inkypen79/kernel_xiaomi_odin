/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _TX_PEER_ENTRY_H_
#define _TX_PEER_ENTRY_H_

#define NUM_OF_DWORDS_TX_PEER_ENTRY 22

#define NUM_OF_QWORDS_TX_PEER_ENTRY 11

struct tx_peer_entry {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t mac_addr_a_31_0                                         : 32;
             uint32_t mac_addr_a_47_32                                        : 16,
                      mac_addr_b_15_0                                         : 16;
             uint32_t mac_addr_b_47_16                                        : 32;
             uint32_t use_ad_b                                                :  1,
                      strip_insert_vlan_inner                                 :  1,
                      strip_insert_vlan_outer                                 :  1,
                      vlan_llc_mode                                           :  1,
                      key_type                                                :  4,
                      a_msdu_wds_ad3_ad4                                      :  3,
                      ignore_hard_filters                                     :  1,
                      ignore_soft_filters                                     :  1,
                      epd_output                                              :  1,
                      wds                                                     :  1,
                      insert_or_strip                                         :  1,
                      sw_filter_id                                            : 16;
             uint32_t temporal_key_31_0                                       : 32;
             uint32_t temporal_key_63_32                                      : 32;
             uint32_t temporal_key_95_64                                      : 32;
             uint32_t temporal_key_127_96                                     : 32;
             uint32_t temporal_key_159_128                                    : 32;
             uint32_t temporal_key_191_160                                    : 32;
             uint32_t temporal_key_223_192                                    : 32;
             uint32_t temporal_key_255_224                                    : 32;
             uint32_t sta_partial_aid                                         : 11,
                      transmit_vif                                            :  4,
                      block_this_user                                         :  1,
                      mesh_amsdu_mode                                         :  2,
                      use_qos_alt_mute_mask                                   :  1,
                      dl_ul_direction                                         :  1,
                      use_ad_c                                                :  1,
                      a_msdu_11s_fromtods_10_ad3                              :  2,
                      multi_link_addr_ad3_valid                               :  1,
                      multi_link_addr_fromtods_00_crypto_en                   :  1,
                      multi_link_addr_mgmt_crypto_en                          :  1,
                      multi_link_addr_ad1_trans_dis                           :  1,
                      data_fromtods_00_ad3                                    :  2,
                      mgmt_fromtods_00_ad3                                    :  2,
                      reserved_12                                             :  1;
             uint32_t insert_vlan_outer_tci                                   : 16,
                      insert_vlan_inner_tci                                   : 16;
             uint32_t __reserved_g_0007                                       : 32;
             uint32_t __reserved_g_0008                                       : 16,
                      __reserved_g_0009                                       : 16;
             uint32_t __reserved_g_0010                                       : 32;
             uint32_t multi_link_addr_crypto_enable                           :  1,
                      a_msdu_fromtods_10_ad3                                  :  2,
                      a_msdu_fromtods_11_ad3                                  :  2,
                      a_msdu_fromtods_11_ad4                                  :  2,
                      reserved_17a                                            :  9,
                      sw_peer_id                                              : 16;
             uint32_t mac_addr_c_31_0                                         : 32;
             uint32_t mac_addr_c_47_32                                        : 16,
                      multi_link_addr_ad3_47_32                               : 16;
             uint32_t multi_link_addr_ad3_31_0                                : 32;
             uint32_t tlv64_padding                                           : 32;
#else
             uint32_t mac_addr_a_31_0                                         : 32;
             uint32_t mac_addr_b_15_0                                         : 16,
                      mac_addr_a_47_32                                        : 16;
             uint32_t mac_addr_b_47_16                                        : 32;
             uint32_t sw_filter_id                                            : 16,
                      insert_or_strip                                         :  1,
                      wds                                                     :  1,
                      epd_output                                              :  1,
                      ignore_soft_filters                                     :  1,
                      ignore_hard_filters                                     :  1,
                      a_msdu_wds_ad3_ad4                                      :  3,
                      key_type                                                :  4,
                      vlan_llc_mode                                           :  1,
                      strip_insert_vlan_outer                                 :  1,
                      strip_insert_vlan_inner                                 :  1,
                      use_ad_b                                                :  1;
             uint32_t temporal_key_31_0                                       : 32;
             uint32_t temporal_key_63_32                                      : 32;
             uint32_t temporal_key_95_64                                      : 32;
             uint32_t temporal_key_127_96                                     : 32;
             uint32_t temporal_key_159_128                                    : 32;
             uint32_t temporal_key_191_160                                    : 32;
             uint32_t temporal_key_223_192                                    : 32;
             uint32_t temporal_key_255_224                                    : 32;
             uint32_t reserved_12                                             :  1,
                      mgmt_fromtods_00_ad3                                    :  2,
                      data_fromtods_00_ad3                                    :  2,
                      multi_link_addr_ad1_trans_dis                           :  1,
                      multi_link_addr_mgmt_crypto_en                          :  1,
                      multi_link_addr_fromtods_00_crypto_en                   :  1,
                      multi_link_addr_ad3_valid                               :  1,
                      a_msdu_11s_fromtods_10_ad3                              :  2,
                      use_ad_c                                                :  1,
                      dl_ul_direction                                         :  1,
                      use_qos_alt_mute_mask                                   :  1,
                      mesh_amsdu_mode                                         :  2,
                      block_this_user                                         :  1,
                      transmit_vif                                            :  4,
                      sta_partial_aid                                         : 11;
             uint32_t insert_vlan_inner_tci                                   : 16,
                      insert_vlan_outer_tci                                   : 16;
             uint32_t __reserved_g_0007                                       : 32;
             uint32_t __reserved_g_0009                                       : 16,
                      __reserved_g_0008                                       : 16;
             uint32_t __reserved_g_0010                                       : 32;
             uint32_t sw_peer_id                                              : 16,
                      reserved_17a                                            :  9,
                      a_msdu_fromtods_11_ad4                                  :  2,
                      a_msdu_fromtods_11_ad3                                  :  2,
                      a_msdu_fromtods_10_ad3                                  :  2,
                      multi_link_addr_crypto_enable                           :  1;
             uint32_t mac_addr_c_31_0                                         : 32;
             uint32_t multi_link_addr_ad3_47_32                               : 16,
                      mac_addr_c_47_32                                        : 16;
             uint32_t multi_link_addr_ad3_31_0                                : 32;
             uint32_t tlv64_padding                                           : 32;
#endif
};

#define TX_PEER_ENTRY_MAC_ADDR_A_31_0_OFFSET                                        0x0000000000000000
#define TX_PEER_ENTRY_MAC_ADDR_A_31_0_LSB                                           0
#define TX_PEER_ENTRY_MAC_ADDR_A_31_0_MSB                                           31
#define TX_PEER_ENTRY_MAC_ADDR_A_31_0_MASK                                          0x00000000ffffffff

#define TX_PEER_ENTRY_MAC_ADDR_A_47_32_OFFSET                                       0x0000000000000000
#define TX_PEER_ENTRY_MAC_ADDR_A_47_32_LSB                                          32
#define TX_PEER_ENTRY_MAC_ADDR_A_47_32_MSB                                          47
#define TX_PEER_ENTRY_MAC_ADDR_A_47_32_MASK                                         0x0000ffff00000000

#define TX_PEER_ENTRY_MAC_ADDR_B_15_0_OFFSET                                        0x0000000000000000
#define TX_PEER_ENTRY_MAC_ADDR_B_15_0_LSB                                           48
#define TX_PEER_ENTRY_MAC_ADDR_B_15_0_MSB                                           63
#define TX_PEER_ENTRY_MAC_ADDR_B_15_0_MASK                                          0xffff000000000000

#define TX_PEER_ENTRY_MAC_ADDR_B_47_16_OFFSET                                       0x0000000000000008
#define TX_PEER_ENTRY_MAC_ADDR_B_47_16_LSB                                          0
#define TX_PEER_ENTRY_MAC_ADDR_B_47_16_MSB                                          31
#define TX_PEER_ENTRY_MAC_ADDR_B_47_16_MASK                                         0x00000000ffffffff

#define TX_PEER_ENTRY_USE_AD_B_OFFSET                                               0x0000000000000008
#define TX_PEER_ENTRY_USE_AD_B_LSB                                                  32
#define TX_PEER_ENTRY_USE_AD_B_MSB                                                  32
#define TX_PEER_ENTRY_USE_AD_B_MASK                                                 0x0000000100000000

#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_INNER_OFFSET                                0x0000000000000008
#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_INNER_LSB                                   33
#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_INNER_MSB                                   33
#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_INNER_MASK                                  0x0000000200000000

#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_OUTER_OFFSET                                0x0000000000000008
#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_OUTER_LSB                                   34
#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_OUTER_MSB                                   34
#define TX_PEER_ENTRY_STRIP_INSERT_VLAN_OUTER_MASK                                  0x0000000400000000

#define TX_PEER_ENTRY_VLAN_LLC_MODE_OFFSET                                          0x0000000000000008
#define TX_PEER_ENTRY_VLAN_LLC_MODE_LSB                                             35
#define TX_PEER_ENTRY_VLAN_LLC_MODE_MSB                                             35
#define TX_PEER_ENTRY_VLAN_LLC_MODE_MASK                                            0x0000000800000000

#define TX_PEER_ENTRY_KEY_TYPE_OFFSET                                               0x0000000000000008
#define TX_PEER_ENTRY_KEY_TYPE_LSB                                                  36
#define TX_PEER_ENTRY_KEY_TYPE_MSB                                                  39
#define TX_PEER_ENTRY_KEY_TYPE_MASK                                                 0x000000f000000000

#define TX_PEER_ENTRY_A_MSDU_WDS_AD3_AD4_OFFSET                                     0x0000000000000008
#define TX_PEER_ENTRY_A_MSDU_WDS_AD3_AD4_LSB                                        40
#define TX_PEER_ENTRY_A_MSDU_WDS_AD3_AD4_MSB                                        42
#define TX_PEER_ENTRY_A_MSDU_WDS_AD3_AD4_MASK                                       0x0000070000000000

#define TX_PEER_ENTRY_IGNORE_HARD_FILTERS_OFFSET                                    0x0000000000000008
#define TX_PEER_ENTRY_IGNORE_HARD_FILTERS_LSB                                       43
#define TX_PEER_ENTRY_IGNORE_HARD_FILTERS_MSB                                       43
#define TX_PEER_ENTRY_IGNORE_HARD_FILTERS_MASK                                      0x0000080000000000

#define TX_PEER_ENTRY_IGNORE_SOFT_FILTERS_OFFSET                                    0x0000000000000008
#define TX_PEER_ENTRY_IGNORE_SOFT_FILTERS_LSB                                       44
#define TX_PEER_ENTRY_IGNORE_SOFT_FILTERS_MSB                                       44
#define TX_PEER_ENTRY_IGNORE_SOFT_FILTERS_MASK                                      0x0000100000000000

#define TX_PEER_ENTRY_EPD_OUTPUT_OFFSET                                             0x0000000000000008
#define TX_PEER_ENTRY_EPD_OUTPUT_LSB                                                45
#define TX_PEER_ENTRY_EPD_OUTPUT_MSB                                                45
#define TX_PEER_ENTRY_EPD_OUTPUT_MASK                                               0x0000200000000000

#define TX_PEER_ENTRY_WDS_OFFSET                                                    0x0000000000000008
#define TX_PEER_ENTRY_WDS_LSB                                                       46
#define TX_PEER_ENTRY_WDS_MSB                                                       46
#define TX_PEER_ENTRY_WDS_MASK                                                      0x0000400000000000

#define TX_PEER_ENTRY_INSERT_OR_STRIP_OFFSET                                        0x0000000000000008
#define TX_PEER_ENTRY_INSERT_OR_STRIP_LSB                                           47
#define TX_PEER_ENTRY_INSERT_OR_STRIP_MSB                                           47
#define TX_PEER_ENTRY_INSERT_OR_STRIP_MASK                                          0x0000800000000000

#define TX_PEER_ENTRY_SW_FILTER_ID_OFFSET                                           0x0000000000000008
#define TX_PEER_ENTRY_SW_FILTER_ID_LSB                                              48
#define TX_PEER_ENTRY_SW_FILTER_ID_MSB                                              63
#define TX_PEER_ENTRY_SW_FILTER_ID_MASK                                             0xffff000000000000

#define TX_PEER_ENTRY_TEMPORAL_KEY_31_0_OFFSET                                      0x0000000000000010
#define TX_PEER_ENTRY_TEMPORAL_KEY_31_0_LSB                                         0
#define TX_PEER_ENTRY_TEMPORAL_KEY_31_0_MSB                                         31
#define TX_PEER_ENTRY_TEMPORAL_KEY_31_0_MASK                                        0x00000000ffffffff

#define TX_PEER_ENTRY_TEMPORAL_KEY_63_32_OFFSET                                     0x0000000000000010
#define TX_PEER_ENTRY_TEMPORAL_KEY_63_32_LSB                                        32
#define TX_PEER_ENTRY_TEMPORAL_KEY_63_32_MSB                                        63
#define TX_PEER_ENTRY_TEMPORAL_KEY_63_32_MASK                                       0xffffffff00000000

#define TX_PEER_ENTRY_TEMPORAL_KEY_95_64_OFFSET                                     0x0000000000000018
#define TX_PEER_ENTRY_TEMPORAL_KEY_95_64_LSB                                        0
#define TX_PEER_ENTRY_TEMPORAL_KEY_95_64_MSB                                        31
#define TX_PEER_ENTRY_TEMPORAL_KEY_95_64_MASK                                       0x00000000ffffffff

#define TX_PEER_ENTRY_TEMPORAL_KEY_127_96_OFFSET                                    0x0000000000000018
#define TX_PEER_ENTRY_TEMPORAL_KEY_127_96_LSB                                       32
#define TX_PEER_ENTRY_TEMPORAL_KEY_127_96_MSB                                       63
#define TX_PEER_ENTRY_TEMPORAL_KEY_127_96_MASK                                      0xffffffff00000000

#define TX_PEER_ENTRY_TEMPORAL_KEY_159_128_OFFSET                                   0x0000000000000020
#define TX_PEER_ENTRY_TEMPORAL_KEY_159_128_LSB                                      0
#define TX_PEER_ENTRY_TEMPORAL_KEY_159_128_MSB                                      31
#define TX_PEER_ENTRY_TEMPORAL_KEY_159_128_MASK                                     0x00000000ffffffff

#define TX_PEER_ENTRY_TEMPORAL_KEY_191_160_OFFSET                                   0x0000000000000020
#define TX_PEER_ENTRY_TEMPORAL_KEY_191_160_LSB                                      32
#define TX_PEER_ENTRY_TEMPORAL_KEY_191_160_MSB                                      63
#define TX_PEER_ENTRY_TEMPORAL_KEY_191_160_MASK                                     0xffffffff00000000

#define TX_PEER_ENTRY_TEMPORAL_KEY_223_192_OFFSET                                   0x0000000000000028
#define TX_PEER_ENTRY_TEMPORAL_KEY_223_192_LSB                                      0
#define TX_PEER_ENTRY_TEMPORAL_KEY_223_192_MSB                                      31
#define TX_PEER_ENTRY_TEMPORAL_KEY_223_192_MASK                                     0x00000000ffffffff

#define TX_PEER_ENTRY_TEMPORAL_KEY_255_224_OFFSET                                   0x0000000000000028
#define TX_PEER_ENTRY_TEMPORAL_KEY_255_224_LSB                                      32
#define TX_PEER_ENTRY_TEMPORAL_KEY_255_224_MSB                                      63
#define TX_PEER_ENTRY_TEMPORAL_KEY_255_224_MASK                                     0xffffffff00000000

#define TX_PEER_ENTRY_STA_PARTIAL_AID_OFFSET                                        0x0000000000000030
#define TX_PEER_ENTRY_STA_PARTIAL_AID_LSB                                           0
#define TX_PEER_ENTRY_STA_PARTIAL_AID_MSB                                           10
#define TX_PEER_ENTRY_STA_PARTIAL_AID_MASK                                          0x00000000000007ff

#define TX_PEER_ENTRY_TRANSMIT_VIF_OFFSET                                           0x0000000000000030
#define TX_PEER_ENTRY_TRANSMIT_VIF_LSB                                              11
#define TX_PEER_ENTRY_TRANSMIT_VIF_MSB                                              14
#define TX_PEER_ENTRY_TRANSMIT_VIF_MASK                                             0x0000000000007800

#define TX_PEER_ENTRY_BLOCK_THIS_USER_OFFSET                                        0x0000000000000030
#define TX_PEER_ENTRY_BLOCK_THIS_USER_LSB                                           15
#define TX_PEER_ENTRY_BLOCK_THIS_USER_MSB                                           15
#define TX_PEER_ENTRY_BLOCK_THIS_USER_MASK                                          0x0000000000008000

#define TX_PEER_ENTRY_MESH_AMSDU_MODE_OFFSET                                        0x0000000000000030
#define TX_PEER_ENTRY_MESH_AMSDU_MODE_LSB                                           16
#define TX_PEER_ENTRY_MESH_AMSDU_MODE_MSB                                           17
#define TX_PEER_ENTRY_MESH_AMSDU_MODE_MASK                                          0x0000000000030000

#define TX_PEER_ENTRY_USE_QOS_ALT_MUTE_MASK_OFFSET                                  0x0000000000000030
#define TX_PEER_ENTRY_USE_QOS_ALT_MUTE_MASK_LSB                                     18
#define TX_PEER_ENTRY_USE_QOS_ALT_MUTE_MASK_MSB                                     18
#define TX_PEER_ENTRY_USE_QOS_ALT_MUTE_MASK_MASK                                    0x0000000000040000

#define TX_PEER_ENTRY_DL_UL_DIRECTION_OFFSET                                        0x0000000000000030
#define TX_PEER_ENTRY_DL_UL_DIRECTION_LSB                                           19
#define TX_PEER_ENTRY_DL_UL_DIRECTION_MSB                                           19
#define TX_PEER_ENTRY_DL_UL_DIRECTION_MASK                                          0x0000000000080000

#define TX_PEER_ENTRY_USE_AD_C_OFFSET                                               0x0000000000000030
#define TX_PEER_ENTRY_USE_AD_C_LSB                                                  20
#define TX_PEER_ENTRY_USE_AD_C_MSB                                                  20
#define TX_PEER_ENTRY_USE_AD_C_MASK                                                 0x0000000000100000

#define TX_PEER_ENTRY_A_MSDU_11S_FROMTODS_10_AD3_OFFSET                             0x0000000000000030
#define TX_PEER_ENTRY_A_MSDU_11S_FROMTODS_10_AD3_LSB                                21
#define TX_PEER_ENTRY_A_MSDU_11S_FROMTODS_10_AD3_MSB                                22
#define TX_PEER_ENTRY_A_MSDU_11S_FROMTODS_10_AD3_MASK                               0x0000000000600000

#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_VALID_OFFSET                              0x0000000000000030
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_VALID_LSB                                 23
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_VALID_MSB                                 23
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_VALID_MASK                                0x0000000000800000

#define TX_PEER_ENTRY_MULTI_LINK_ADDR_FROMTODS_00_CRYPTO_EN_OFFSET                  0x0000000000000030
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_FROMTODS_00_CRYPTO_EN_LSB                     24
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_FROMTODS_00_CRYPTO_EN_MSB                     24
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_FROMTODS_00_CRYPTO_EN_MASK                    0x0000000001000000

#define TX_PEER_ENTRY_MULTI_LINK_ADDR_MGMT_CRYPTO_EN_OFFSET                         0x0000000000000030
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_MGMT_CRYPTO_EN_LSB                            25
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_MGMT_CRYPTO_EN_MSB                            25
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_MGMT_CRYPTO_EN_MASK                           0x0000000002000000

#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD1_TRANS_DIS_OFFSET                          0x0000000000000030
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD1_TRANS_DIS_LSB                             26
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD1_TRANS_DIS_MSB                             26
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD1_TRANS_DIS_MASK                            0x0000000004000000

#define TX_PEER_ENTRY_DATA_FROMTODS_00_AD3_OFFSET                                   0x0000000000000030
#define TX_PEER_ENTRY_DATA_FROMTODS_00_AD3_LSB                                      27
#define TX_PEER_ENTRY_DATA_FROMTODS_00_AD3_MSB                                      28
#define TX_PEER_ENTRY_DATA_FROMTODS_00_AD3_MASK                                     0x0000000018000000

#define TX_PEER_ENTRY_MGMT_FROMTODS_00_AD3_OFFSET                                   0x0000000000000030
#define TX_PEER_ENTRY_MGMT_FROMTODS_00_AD3_LSB                                      29
#define TX_PEER_ENTRY_MGMT_FROMTODS_00_AD3_MSB                                      30
#define TX_PEER_ENTRY_MGMT_FROMTODS_00_AD3_MASK                                     0x0000000060000000

#define TX_PEER_ENTRY_RESERVED_12_OFFSET                                            0x0000000000000030
#define TX_PEER_ENTRY_RESERVED_12_LSB                                               31
#define TX_PEER_ENTRY_RESERVED_12_MSB                                               31
#define TX_PEER_ENTRY_RESERVED_12_MASK                                              0x0000000080000000

#define TX_PEER_ENTRY_INSERT_VLAN_OUTER_TCI_OFFSET                                  0x0000000000000030
#define TX_PEER_ENTRY_INSERT_VLAN_OUTER_TCI_LSB                                     32
#define TX_PEER_ENTRY_INSERT_VLAN_OUTER_TCI_MSB                                     47
#define TX_PEER_ENTRY_INSERT_VLAN_OUTER_TCI_MASK                                    0x0000ffff00000000

#define TX_PEER_ENTRY_INSERT_VLAN_INNER_TCI_OFFSET                                  0x0000000000000030
#define TX_PEER_ENTRY_INSERT_VLAN_INNER_TCI_LSB                                     48
#define TX_PEER_ENTRY_INSERT_VLAN_INNER_TCI_MSB                                     63
#define TX_PEER_ENTRY_INSERT_VLAN_INNER_TCI_MASK                                    0xffff000000000000

#define TX_PEER_ENTRY_MULTI_LINK_ADDR_CRYPTO_ENABLE_OFFSET                          0x0000000000000040
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_CRYPTO_ENABLE_LSB                             32
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_CRYPTO_ENABLE_MSB                             32
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_CRYPTO_ENABLE_MASK                            0x0000000100000000

#define TX_PEER_ENTRY_A_MSDU_FROMTODS_10_AD3_OFFSET                                 0x0000000000000040
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_10_AD3_LSB                                    33
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_10_AD3_MSB                                    34
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_10_AD3_MASK                                   0x0000000600000000

#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD3_OFFSET                                 0x0000000000000040
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD3_LSB                                    35
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD3_MSB                                    36
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD3_MASK                                   0x0000001800000000

#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD4_OFFSET                                 0x0000000000000040
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD4_LSB                                    37
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD4_MSB                                    38
#define TX_PEER_ENTRY_A_MSDU_FROMTODS_11_AD4_MASK                                   0x0000006000000000

#define TX_PEER_ENTRY_RESERVED_17A_OFFSET                                           0x0000000000000040
#define TX_PEER_ENTRY_RESERVED_17A_LSB                                              39
#define TX_PEER_ENTRY_RESERVED_17A_MSB                                              47
#define TX_PEER_ENTRY_RESERVED_17A_MASK                                             0x0000ff8000000000

#define TX_PEER_ENTRY_SW_PEER_ID_OFFSET                                             0x0000000000000040
#define TX_PEER_ENTRY_SW_PEER_ID_LSB                                                48
#define TX_PEER_ENTRY_SW_PEER_ID_MSB                                                63
#define TX_PEER_ENTRY_SW_PEER_ID_MASK                                               0xffff000000000000

#define TX_PEER_ENTRY_MAC_ADDR_C_31_0_OFFSET                                        0x0000000000000048
#define TX_PEER_ENTRY_MAC_ADDR_C_31_0_LSB                                           0
#define TX_PEER_ENTRY_MAC_ADDR_C_31_0_MSB                                           31
#define TX_PEER_ENTRY_MAC_ADDR_C_31_0_MASK                                          0x00000000ffffffff

#define TX_PEER_ENTRY_MAC_ADDR_C_47_32_OFFSET                                       0x0000000000000048
#define TX_PEER_ENTRY_MAC_ADDR_C_47_32_LSB                                          32
#define TX_PEER_ENTRY_MAC_ADDR_C_47_32_MSB                                          47
#define TX_PEER_ENTRY_MAC_ADDR_C_47_32_MASK                                         0x0000ffff00000000

#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_47_32_OFFSET                              0x0000000000000048
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_47_32_LSB                                 48
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_47_32_MSB                                 63
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_47_32_MASK                                0xffff000000000000

#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_31_0_OFFSET                               0x0000000000000050
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_31_0_LSB                                  0
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_31_0_MSB                                  31
#define TX_PEER_ENTRY_MULTI_LINK_ADDR_AD3_31_0_MASK                                 0x00000000ffffffff

#define TX_PEER_ENTRY_TLV64_PADDING_OFFSET                                          0x0000000000000050
#define TX_PEER_ENTRY_TLV64_PADDING_LSB                                             32
#define TX_PEER_ENTRY_TLV64_PADDING_MSB                                             63
#define TX_PEER_ENTRY_TLV64_PADDING_MASK                                            0xffffffff00000000

#endif
