/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _RXPCU_EARLY_RX_INDICATION_H_
#define _RXPCU_EARLY_RX_INDICATION_H_

#define NUM_OF_DWORDS_RXPCU_EARLY_RX_INDICATION 2

#define NUM_OF_QWORDS_RXPCU_EARLY_RX_INDICATION 1

struct rxpcu_early_rx_indication {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t pkt_type                                                :  4,
                      dot11ax_su_extended                                     :  1,
                      rate_mcs                                                :  5,
                      dot11ax_received_ext_ru_size                            :  4,
                      reserved_0a                                             : 18;
             uint32_t tlv64_padding                                           : 32;
#else
             uint32_t reserved_0a                                             : 18,
                      dot11ax_received_ext_ru_size                            :  4,
                      rate_mcs                                                :  5,
                      dot11ax_su_extended                                     :  1,
                      pkt_type                                                :  4;
             uint32_t tlv64_padding                                           : 32;
#endif
};

#define RXPCU_EARLY_RX_INDICATION_PKT_TYPE_OFFSET                                   0x0000000000000000
#define RXPCU_EARLY_RX_INDICATION_PKT_TYPE_LSB                                      0
#define RXPCU_EARLY_RX_INDICATION_PKT_TYPE_MSB                                      3
#define RXPCU_EARLY_RX_INDICATION_PKT_TYPE_MASK                                     0x000000000000000f

#define RXPCU_EARLY_RX_INDICATION_DOT11AX_SU_EXTENDED_OFFSET                        0x0000000000000000
#define RXPCU_EARLY_RX_INDICATION_DOT11AX_SU_EXTENDED_LSB                           4
#define RXPCU_EARLY_RX_INDICATION_DOT11AX_SU_EXTENDED_MSB                           4
#define RXPCU_EARLY_RX_INDICATION_DOT11AX_SU_EXTENDED_MASK                          0x0000000000000010

#define RXPCU_EARLY_RX_INDICATION_RATE_MCS_OFFSET                                   0x0000000000000000
#define RXPCU_EARLY_RX_INDICATION_RATE_MCS_LSB                                      5
#define RXPCU_EARLY_RX_INDICATION_RATE_MCS_MSB                                      9
#define RXPCU_EARLY_RX_INDICATION_RATE_MCS_MASK                                     0x00000000000003e0

#define RXPCU_EARLY_RX_INDICATION_DOT11AX_RECEIVED_EXT_RU_SIZE_OFFSET               0x0000000000000000
#define RXPCU_EARLY_RX_INDICATION_DOT11AX_RECEIVED_EXT_RU_SIZE_LSB                  10
#define RXPCU_EARLY_RX_INDICATION_DOT11AX_RECEIVED_EXT_RU_SIZE_MSB                  13
#define RXPCU_EARLY_RX_INDICATION_DOT11AX_RECEIVED_EXT_RU_SIZE_MASK                 0x0000000000003c00

#define RXPCU_EARLY_RX_INDICATION_RESERVED_0A_OFFSET                                0x0000000000000000
#define RXPCU_EARLY_RX_INDICATION_RESERVED_0A_LSB                                   14
#define RXPCU_EARLY_RX_INDICATION_RESERVED_0A_MSB                                   31
#define RXPCU_EARLY_RX_INDICATION_RESERVED_0A_MASK                                  0x00000000ffffc000

#define RXPCU_EARLY_RX_INDICATION_TLV64_PADDING_OFFSET                              0x0000000000000000
#define RXPCU_EARLY_RX_INDICATION_TLV64_PADDING_LSB                                 32
#define RXPCU_EARLY_RX_INDICATION_TLV64_PADDING_MSB                                 63
#define RXPCU_EARLY_RX_INDICATION_TLV64_PADDING_MASK                                0xffffffff00000000

#endif
