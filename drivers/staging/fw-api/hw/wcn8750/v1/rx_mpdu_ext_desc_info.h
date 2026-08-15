/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _RX_MPDU_EXT_DESC_INFO_H_
#define _RX_MPDU_EXT_DESC_INFO_H_

#define NUM_OF_DWORDS_RX_MPDU_EXT_DESC_INFO 2

struct rx_mpdu_ext_desc_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t pn_31_0                                                 : 32;
             uint32_t pn_47_32                                                : 16,
                      pn_127_48_info                                          :  2,
                      msdu_link_desc_index                                    :  4,
                      reserved_1a                                             : 10;
#else
             uint32_t pn_31_0                                                 : 32;
             uint32_t reserved_1a                                             : 10,
                      msdu_link_desc_index                                    :  4,
                      pn_127_48_info                                          :  2,
                      pn_47_32                                                : 16;
#endif
};

#define RX_MPDU_EXT_DESC_INFO_PN_31_0_OFFSET                                        0x00000000
#define RX_MPDU_EXT_DESC_INFO_PN_31_0_LSB                                           0
#define RX_MPDU_EXT_DESC_INFO_PN_31_0_MSB                                           31
#define RX_MPDU_EXT_DESC_INFO_PN_31_0_MASK                                          0xffffffff

#define RX_MPDU_EXT_DESC_INFO_PN_47_32_OFFSET                                       0x00000004
#define RX_MPDU_EXT_DESC_INFO_PN_47_32_LSB                                          0
#define RX_MPDU_EXT_DESC_INFO_PN_47_32_MSB                                          15
#define RX_MPDU_EXT_DESC_INFO_PN_47_32_MASK                                         0x0000ffff

#define RX_MPDU_EXT_DESC_INFO_PN_127_48_INFO_OFFSET                                 0x00000004
#define RX_MPDU_EXT_DESC_INFO_PN_127_48_INFO_LSB                                    16
#define RX_MPDU_EXT_DESC_INFO_PN_127_48_INFO_MSB                                    17
#define RX_MPDU_EXT_DESC_INFO_PN_127_48_INFO_MASK                                   0x00030000

#define RX_MPDU_EXT_DESC_INFO_MSDU_LINK_DESC_INDEX_OFFSET                           0x00000004
#define RX_MPDU_EXT_DESC_INFO_MSDU_LINK_DESC_INDEX_LSB                              18
#define RX_MPDU_EXT_DESC_INFO_MSDU_LINK_DESC_INDEX_MSB                              21
#define RX_MPDU_EXT_DESC_INFO_MSDU_LINK_DESC_INDEX_MASK                             0x003c0000

#define RX_MPDU_EXT_DESC_INFO_RESERVED_1A_OFFSET                                    0x00000004
#define RX_MPDU_EXT_DESC_INFO_RESERVED_1A_LSB                                       22
#define RX_MPDU_EXT_DESC_INFO_RESERVED_1A_MSB                                       31
#define RX_MPDU_EXT_DESC_INFO_RESERVED_1A_MASK                                      0xffc00000

#endif
