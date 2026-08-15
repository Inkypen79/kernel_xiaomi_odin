/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _TX_RATE_STATS_INFO_H_
#define _TX_RATE_STATS_INFO_H_

#define NUM_OF_DWORDS_TX_RATE_STATS_INFO 2

struct tx_rate_stats_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t tx_rate_stats_info_valid                                :  1,
                      transmit_bw                                             :  3,
                      transmit_pkt_type                                       :  4,
                      transmit_stbc                                           :  1,
                      transmit_ldpc                                           :  1,
                      transmit_sgi                                            :  2,
                      transmit_mcs                                            :  5,
                      unequal_modulation_info                                 :  3,
                      ofdma_transmission                                      :  1,
                      reserved_0a                                             :  4,
                      tones_in_ru                                             :  4,
                      transmit_nss                                            :  3;
             uint32_t ppdu_transmission_tsf                                   : 32;
#else
             uint32_t transmit_nss                                            :  3,
                      tones_in_ru                                             :  4,
                      reserved_0a                                             :  4,
                      ofdma_transmission                                      :  1,
                      unequal_modulation_info                                 :  3,
                      transmit_mcs                                            :  5,
                      transmit_sgi                                            :  2,
                      transmit_ldpc                                           :  1,
                      transmit_stbc                                           :  1,
                      transmit_pkt_type                                       :  4,
                      transmit_bw                                             :  3,
                      tx_rate_stats_info_valid                                :  1;
             uint32_t ppdu_transmission_tsf                                   : 32;
#endif
};

#define TX_RATE_STATS_INFO_TX_RATE_STATS_INFO_VALID_OFFSET                          0x00000000
#define TX_RATE_STATS_INFO_TX_RATE_STATS_INFO_VALID_LSB                             0
#define TX_RATE_STATS_INFO_TX_RATE_STATS_INFO_VALID_MSB                             0
#define TX_RATE_STATS_INFO_TX_RATE_STATS_INFO_VALID_MASK                            0x00000001

#define TX_RATE_STATS_INFO_TRANSMIT_BW_OFFSET                                       0x00000000
#define TX_RATE_STATS_INFO_TRANSMIT_BW_LSB                                          1
#define TX_RATE_STATS_INFO_TRANSMIT_BW_MSB                                          3
#define TX_RATE_STATS_INFO_TRANSMIT_BW_MASK                                         0x0000000e

#define TX_RATE_STATS_INFO_TRANSMIT_PKT_TYPE_OFFSET                                 0x00000000
#define TX_RATE_STATS_INFO_TRANSMIT_PKT_TYPE_LSB                                    4
#define TX_RATE_STATS_INFO_TRANSMIT_PKT_TYPE_MSB                                    7
#define TX_RATE_STATS_INFO_TRANSMIT_PKT_TYPE_MASK                                   0x000000f0

#define TX_RATE_STATS_INFO_TRANSMIT_STBC_OFFSET                                     0x00000000
#define TX_RATE_STATS_INFO_TRANSMIT_STBC_LSB                                        8
#define TX_RATE_STATS_INFO_TRANSMIT_STBC_MSB                                        8
#define TX_RATE_STATS_INFO_TRANSMIT_STBC_MASK                                       0x00000100

#define TX_RATE_STATS_INFO_TRANSMIT_LDPC_OFFSET                                     0x00000000
#define TX_RATE_STATS_INFO_TRANSMIT_LDPC_LSB                                        9
#define TX_RATE_STATS_INFO_TRANSMIT_LDPC_MSB                                        9
#define TX_RATE_STATS_INFO_TRANSMIT_LDPC_MASK                                       0x00000200

#define TX_RATE_STATS_INFO_TRANSMIT_SGI_OFFSET                                      0x00000000
#define TX_RATE_STATS_INFO_TRANSMIT_SGI_LSB                                         10
#define TX_RATE_STATS_INFO_TRANSMIT_SGI_MSB                                         11
#define TX_RATE_STATS_INFO_TRANSMIT_SGI_MASK                                        0x00000c00

#define TX_RATE_STATS_INFO_TRANSMIT_MCS_OFFSET                                      0x00000000
#define TX_RATE_STATS_INFO_TRANSMIT_MCS_LSB                                         12
#define TX_RATE_STATS_INFO_TRANSMIT_MCS_MSB                                         16
#define TX_RATE_STATS_INFO_TRANSMIT_MCS_MASK                                        0x0001f000

#define TX_RATE_STATS_INFO_UNEQUAL_MODULATION_INFO_OFFSET                           0x00000000
#define TX_RATE_STATS_INFO_UNEQUAL_MODULATION_INFO_LSB                              17
#define TX_RATE_STATS_INFO_UNEQUAL_MODULATION_INFO_MSB                              19
#define TX_RATE_STATS_INFO_UNEQUAL_MODULATION_INFO_MASK                             0x000e0000

#define TX_RATE_STATS_INFO_OFDMA_TRANSMISSION_OFFSET                                0x00000000
#define TX_RATE_STATS_INFO_OFDMA_TRANSMISSION_LSB                                   20
#define TX_RATE_STATS_INFO_OFDMA_TRANSMISSION_MSB                                   20
#define TX_RATE_STATS_INFO_OFDMA_TRANSMISSION_MASK                                  0x00100000

#define TX_RATE_STATS_INFO_RESERVED_0A_OFFSET                                       0x00000000
#define TX_RATE_STATS_INFO_RESERVED_0A_LSB                                          21
#define TX_RATE_STATS_INFO_RESERVED_0A_MSB                                          24
#define TX_RATE_STATS_INFO_RESERVED_0A_MASK                                         0x01e00000

#define TX_RATE_STATS_INFO_TONES_IN_RU_OFFSET                                       0x00000000
#define TX_RATE_STATS_INFO_TONES_IN_RU_LSB                                          25
#define TX_RATE_STATS_INFO_TONES_IN_RU_MSB                                          28
#define TX_RATE_STATS_INFO_TONES_IN_RU_MASK                                         0x1e000000

#define TX_RATE_STATS_INFO_TRANSMIT_NSS_OFFSET                                      0x00000000
#define TX_RATE_STATS_INFO_TRANSMIT_NSS_LSB                                         29
#define TX_RATE_STATS_INFO_TRANSMIT_NSS_MSB                                         31
#define TX_RATE_STATS_INFO_TRANSMIT_NSS_MASK                                        0xe0000000

#define TX_RATE_STATS_INFO_PPDU_TRANSMISSION_TSF_OFFSET                             0x00000004
#define TX_RATE_STATS_INFO_PPDU_TRANSMISSION_TSF_LSB                                0
#define TX_RATE_STATS_INFO_PPDU_TRANSMISSION_TSF_MSB                                31
#define TX_RATE_STATS_INFO_PPDU_TRANSMISSION_TSF_MASK                               0xffffffff

#endif
