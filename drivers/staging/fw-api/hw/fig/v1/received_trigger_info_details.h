/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _RECEIVED_TRIGGER_INFO_DETAILS_H_
#define _RECEIVED_TRIGGER_INFO_DETAILS_H_

#define NUM_OF_DWORDS_RECEIVED_TRIGGER_INFO_DETAILS 6

struct received_trigger_info_details {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t trigger_type                                            :  4,
                      ax_trigger_source                                       :  1,
                      ax_trigger_type                                         :  4,
                      trigger_source_sta_full_aid                             : 13,
                      frame_control_valid                                     :  1,
                      qos_control_valid                                       :  1,
                      he_control_info_valid                                   :  1,
                      __reserved_g_0022_trigger_subtype                                 :  4,
                      txop_sharing_mode                                       :  2,
                      tid_aggregation_limit_is_zero                           :  1;
             uint32_t phy_ppdu_id                                             : 16,
                      lsig_response_length                                    : 12,
                      __reserved_g_0035                                                 :  1,
                      scsid_valid                                             :  1,
                      ects_as_tb_ppdu                                         :  1,
                      reserved_1a                                             :  1;
             uint32_t frame_control                                           : 16,
                      qos_control                                             : 16;
             uint32_t sw_peer_id                                              : 16,
                      txop_sharing_allocation_duration                        :  9,
                      __reserved_g_0035_trigger_subtype                                 :  4,
                      reserved_3a                                             :  3;
             uint32_t he_control                                              : 32;
             uint32_t txop_sharing_duration_from_durid                        :  1,
                      frame_durationid_lower_4                                :  4,
                      frame_durationid_upper_3                                :  3,
                      reserved_5a                                             : 24;
#else
             uint32_t tid_aggregation_limit_is_zero                           :  1,
                      txop_sharing_mode                                       :  2,
                      __reserved_g_0022_trigger_subtype                                 :  4,
                      he_control_info_valid                                   :  1,
                      qos_control_valid                                       :  1,
                      frame_control_valid                                     :  1,
                      trigger_source_sta_full_aid                             : 13,
                      ax_trigger_type                                         :  4,
                      ax_trigger_source                                       :  1,
                      trigger_type                                            :  4;
             uint32_t reserved_1a                                             :  1,
                      ects_as_tb_ppdu                                         :  1,
                      scsid_valid                                             :  1,
                      __reserved_g_0035                                                 :  1,
                      lsig_response_length                                    : 12,
                      phy_ppdu_id                                             : 16;
             uint32_t qos_control                                             : 16,
                      frame_control                                           : 16;
             uint32_t reserved_3a                                             :  3,
                      __reserved_g_0035_trigger_subtype                                 :  4,
                      txop_sharing_allocation_duration                        :  9,
                      sw_peer_id                                              : 16;
             uint32_t he_control                                              : 32;
             uint32_t reserved_5a                                             : 24,
                      frame_durationid_upper_3                                :  3,
                      frame_durationid_lower_4                                :  4,
                      txop_sharing_duration_from_durid                        :  1;
#endif
};

#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_TYPE_OFFSET                           0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_TYPE_LSB                              0
#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_TYPE_MSB                              3
#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_TYPE_MASK                             0x0000000f

#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_SOURCE_OFFSET                      0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_SOURCE_LSB                         4
#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_SOURCE_MSB                         4
#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_SOURCE_MASK                        0x00000010

#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_TYPE_OFFSET                        0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_TYPE_LSB                           5
#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_TYPE_MSB                           8
#define RECEIVED_TRIGGER_INFO_DETAILS_AX_TRIGGER_TYPE_MASK                          0x000001e0

#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_OFFSET            0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_LSB               9
#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_MSB               21
#define RECEIVED_TRIGGER_INFO_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_MASK              0x003ffe00

#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_VALID_OFFSET                    0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_VALID_LSB                       22
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_VALID_MSB                       22
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_VALID_MASK                      0x00400000

#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_VALID_OFFSET                      0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_VALID_LSB                         23
#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_VALID_MSB                         23
#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_VALID_MASK                        0x00800000

#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_INFO_VALID_OFFSET                  0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_INFO_VALID_LSB                     24
#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_INFO_VALID_MSB                     24
#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_INFO_VALID_MASK                    0x01000000

#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_MODE_OFFSET                      0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_MODE_LSB                         29
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_MODE_MSB                         30
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_MODE_MASK                        0x60000000

#define RECEIVED_TRIGGER_INFO_DETAILS_TID_AGGREGATION_LIMIT_IS_ZERO_OFFSET          0x00000000
#define RECEIVED_TRIGGER_INFO_DETAILS_TID_AGGREGATION_LIMIT_IS_ZERO_LSB             31
#define RECEIVED_TRIGGER_INFO_DETAILS_TID_AGGREGATION_LIMIT_IS_ZERO_MSB             31
#define RECEIVED_TRIGGER_INFO_DETAILS_TID_AGGREGATION_LIMIT_IS_ZERO_MASK            0x80000000

#define RECEIVED_TRIGGER_INFO_DETAILS_PHY_PPDU_ID_OFFSET                            0x00000004
#define RECEIVED_TRIGGER_INFO_DETAILS_PHY_PPDU_ID_LSB                               0
#define RECEIVED_TRIGGER_INFO_DETAILS_PHY_PPDU_ID_MSB                               15
#define RECEIVED_TRIGGER_INFO_DETAILS_PHY_PPDU_ID_MASK                              0x0000ffff

#define RECEIVED_TRIGGER_INFO_DETAILS_LSIG_RESPONSE_LENGTH_OFFSET                   0x00000004
#define RECEIVED_TRIGGER_INFO_DETAILS_LSIG_RESPONSE_LENGTH_LSB                      16
#define RECEIVED_TRIGGER_INFO_DETAILS_LSIG_RESPONSE_LENGTH_MSB                      27
#define RECEIVED_TRIGGER_INFO_DETAILS_LSIG_RESPONSE_LENGTH_MASK                     0x0fff0000

#define RECEIVED_TRIGGER_INFO_DETAILS_SCSID_VALID_OFFSET                            0x00000004
#define RECEIVED_TRIGGER_INFO_DETAILS_SCSID_VALID_LSB                               29
#define RECEIVED_TRIGGER_INFO_DETAILS_SCSID_VALID_MSB                               29
#define RECEIVED_TRIGGER_INFO_DETAILS_SCSID_VALID_MASK                              0x20000000

#define RECEIVED_TRIGGER_INFO_DETAILS_ECTS_AS_TB_PPDU_OFFSET                        0x00000004
#define RECEIVED_TRIGGER_INFO_DETAILS_ECTS_AS_TB_PPDU_LSB                           30
#define RECEIVED_TRIGGER_INFO_DETAILS_ECTS_AS_TB_PPDU_MSB                           30
#define RECEIVED_TRIGGER_INFO_DETAILS_ECTS_AS_TB_PPDU_MASK                          0x40000000

#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_1A_OFFSET                            0x00000004
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_1A_LSB                               31
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_1A_MSB                               31
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_1A_MASK                              0x80000000

#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_OFFSET                          0x00000008
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_LSB                             0
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_MSB                             15
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_CONTROL_MASK                            0x0000ffff

#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_OFFSET                            0x00000008
#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_LSB                               16
#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_MSB                               31
#define RECEIVED_TRIGGER_INFO_DETAILS_QOS_CONTROL_MASK                              0xffff0000

#define RECEIVED_TRIGGER_INFO_DETAILS_SW_PEER_ID_OFFSET                             0x0000000c
#define RECEIVED_TRIGGER_INFO_DETAILS_SW_PEER_ID_LSB                                0
#define RECEIVED_TRIGGER_INFO_DETAILS_SW_PEER_ID_MSB                                15
#define RECEIVED_TRIGGER_INFO_DETAILS_SW_PEER_ID_MASK                               0x0000ffff

#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_ALLOCATION_DURATION_OFFSET       0x0000000c
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_ALLOCATION_DURATION_LSB          16
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_ALLOCATION_DURATION_MSB          24
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_ALLOCATION_DURATION_MASK         0x01ff0000

#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_3A_OFFSET                            0x0000000c
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_3A_LSB                               29
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_3A_MSB                               31
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_3A_MASK                              0xe0000000

#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_OFFSET                             0x00000010
#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_LSB                                0
#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_MSB                                31
#define RECEIVED_TRIGGER_INFO_DETAILS_HE_CONTROL_MASK                               0xffffffff

#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_DURATION_FROM_DURID_OFFSET       0x00000014
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_DURATION_FROM_DURID_LSB          0
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_DURATION_FROM_DURID_MSB          0
#define RECEIVED_TRIGGER_INFO_DETAILS_TXOP_SHARING_DURATION_FROM_DURID_MASK         0x00000001

#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_LOWER_4_OFFSET               0x00000014
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_LOWER_4_LSB                  1
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_LOWER_4_MSB                  4
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_LOWER_4_MASK                 0x0000001e

#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_UPPER_3_OFFSET               0x00000014
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_UPPER_3_LSB                  5
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_UPPER_3_MSB                  7
#define RECEIVED_TRIGGER_INFO_DETAILS_FRAME_DURATIONID_UPPER_3_MASK                 0x000000e0

#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_5A_OFFSET                            0x00000014
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_5A_LSB                               8
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_5A_MSB                               31
#define RECEIVED_TRIGGER_INFO_DETAILS_RESERVED_5A_MASK                              0xffffff00

#endif
