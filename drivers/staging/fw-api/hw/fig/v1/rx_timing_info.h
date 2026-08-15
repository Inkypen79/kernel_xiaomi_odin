/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _RX_TIMING_INFO_H_
#define _RX_TIMING_INFO_H_

#define NUM_OF_DWORDS_RX_TIMING_INFO 5

struct rx_timing_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t phy_timestamp_1_lower_32                                : 32;
             uint32_t phy_timestamp_1_upper_32                                : 32;
             uint32_t phy_timestamp_2_lower_32                                : 32;
             uint32_t phy_timestamp_2_upper_32                                : 32;
             uint32_t residual_phase_offset                                   : 12,
                      sub_usec_ts_rx_end                                      : 10,
                      reserved                                                : 10;
#else
             uint32_t phy_timestamp_1_lower_32                                : 32;
             uint32_t phy_timestamp_1_upper_32                                : 32;
             uint32_t phy_timestamp_2_lower_32                                : 32;
             uint32_t phy_timestamp_2_upper_32                                : 32;
             uint32_t reserved                                                : 10,
                      sub_usec_ts_rx_end                                      : 10,
                      residual_phase_offset                                   : 12;
#endif
};

#define RX_TIMING_INFO_PHY_TIMESTAMP_1_LOWER_32_OFFSET                              0x00000000
#define RX_TIMING_INFO_PHY_TIMESTAMP_1_LOWER_32_LSB                                 0
#define RX_TIMING_INFO_PHY_TIMESTAMP_1_LOWER_32_MSB                                 31
#define RX_TIMING_INFO_PHY_TIMESTAMP_1_LOWER_32_MASK                                0xffffffff

#define RX_TIMING_INFO_PHY_TIMESTAMP_1_UPPER_32_OFFSET                              0x00000004
#define RX_TIMING_INFO_PHY_TIMESTAMP_1_UPPER_32_LSB                                 0
#define RX_TIMING_INFO_PHY_TIMESTAMP_1_UPPER_32_MSB                                 31
#define RX_TIMING_INFO_PHY_TIMESTAMP_1_UPPER_32_MASK                                0xffffffff

#define RX_TIMING_INFO_PHY_TIMESTAMP_2_LOWER_32_OFFSET                              0x00000008
#define RX_TIMING_INFO_PHY_TIMESTAMP_2_LOWER_32_LSB                                 0
#define RX_TIMING_INFO_PHY_TIMESTAMP_2_LOWER_32_MSB                                 31
#define RX_TIMING_INFO_PHY_TIMESTAMP_2_LOWER_32_MASK                                0xffffffff

#define RX_TIMING_INFO_PHY_TIMESTAMP_2_UPPER_32_OFFSET                              0x0000000c
#define RX_TIMING_INFO_PHY_TIMESTAMP_2_UPPER_32_LSB                                 0
#define RX_TIMING_INFO_PHY_TIMESTAMP_2_UPPER_32_MSB                                 31
#define RX_TIMING_INFO_PHY_TIMESTAMP_2_UPPER_32_MASK                                0xffffffff

#define RX_TIMING_INFO_RESIDUAL_PHASE_OFFSET_OFFSET                                 0x00000010
#define RX_TIMING_INFO_RESIDUAL_PHASE_OFFSET_LSB                                    0
#define RX_TIMING_INFO_RESIDUAL_PHASE_OFFSET_MSB                                    11
#define RX_TIMING_INFO_RESIDUAL_PHASE_OFFSET_MASK                                   0x00000fff

#define RX_TIMING_INFO_SUB_USEC_TS_RX_END_OFFSET                                    0x00000010
#define RX_TIMING_INFO_SUB_USEC_TS_RX_END_LSB                                       12
#define RX_TIMING_INFO_SUB_USEC_TS_RX_END_MSB                                       21
#define RX_TIMING_INFO_SUB_USEC_TS_RX_END_MASK                                      0x003ff000

#define RX_TIMING_INFO_RESERVED_OFFSET                                              0x00000010
#define RX_TIMING_INFO_RESERVED_LSB                                                 22
#define RX_TIMING_INFO_RESERVED_MSB                                                 31
#define RX_TIMING_INFO_RESERVED_MASK                                                0xffc00000

#endif
