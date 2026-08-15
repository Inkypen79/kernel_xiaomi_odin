/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _RESPONSE_END_STATUS_H_
#define _RESPONSE_END_STATUS_H_

#include "phytx_abort_request_info.h"
#define NUM_OF_DWORDS_RESPONSE_END_STATUS 10

#define NUM_OF_QWORDS_RESPONSE_END_STATUS 5

struct response_end_status {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t __reserved_g_0046                                       :  1,
                      __reserved_g_0043                                       :  1,
                      __reserved_g_0041                                       :  1,
                      global_data_underflow_warning                           :  1,
                      response_transmit_status                                :  4,
                      phytx_pkt_end_info_valid                                :  1,
                      phytx_abort_request_info_valid                          :  1,
                      generated_response                                      :  3,
                      mba_user_count                                          :  7,
                      mba_fake_bitmap_count                                   :  7,
                      coex_based_tx_bw                                        :  3,
                      trig_response_related                                   :  1,
                      __reserved_g_0035                                                 :  1;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
             uint16_t cbf_segment_request_mask                                :  8,
                      cbf_segment_sent_mask                                   :  8;
             uint32_t underflow_mpdu_count                                    :  9,
                      data_underflow_warning                                  :  2,
                      reserved_2b                                             : 10,
                      only_null_delim_sent                                    :  1,
                      brp_info_valid                                          :  1,
                      __reserved_g_0068                                       :  1,
                      __reserved_g_0056                                       :  1,
                      __reserved_g_0039                                       :  1,
                      __reserved_g_0040                                       :  1,
                      __reserved_g_0063                                       :  1,
                      __reserved_g_0061                                       :  1,
                      __reserved_g_0059                                       :  1,
                      __reserved_g_0057                                       :  1,
                      __reserved_g_0042                                       :  1;
             uint32_t mu_response_bitmap_31_0                                 : 32;
             uint32_t mu_response_bitmap_36_32                                :  5,
                      reserved_4a                                             : 27;
             uint32_t addr1_31_0                                              : 32;
             uint32_t addr1_47_32                                             : 16,
                      addr2_15_0                                              : 16;
             uint32_t addr2_47_16                                             : 32;
             uint32_t addr3_31_0                                              : 32;
             uint32_t addr3_47_32                                             : 16,
                      __reserved_g_0022                                                 :  1,
                      secure                                                  :  1,
                      __reserved_g_0022_ftm_frame_sent                                  :  1,
                      reserved_20a                                            : 13;
#else
             uint32_t __reserved_g_0035                                                 :  1,
                      trig_response_related                                   :  1,
                      coex_based_tx_bw                                        :  3,
                      mba_fake_bitmap_count                                   :  7,
                      mba_user_count                                          :  7,
                      generated_response                                      :  3,
                      phytx_abort_request_info_valid                          :  1,
                      phytx_pkt_end_info_valid                                :  1,
                      response_transmit_status                                :  4,
                      global_data_underflow_warning                           :  1,
                      __reserved_g_0041                                       :  1,
                      __reserved_g_0043                                       :  1,
                      __reserved_g_0046                                       :  1;
             uint32_t cbf_segment_sent_mask                                   :  8,
                      cbf_segment_request_mask                                :  8;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
             uint32_t __reserved_g_0042                                       :  1,
                      __reserved_g_0057                                       :  1,
                      __reserved_g_0059                                       :  1,
                      __reserved_g_0061                                       :  1,
                      __reserved_g_0063                                       :  1,
                      __reserved_g_0040                                       :  1,
                      __reserved_g_0039                                       :  1,
                      __reserved_g_0056                                       :  1,
                      __reserved_g_0068                                       :  1,
                      brp_info_valid                                          :  1,
                      only_null_delim_sent                                    :  1,
                      reserved_2b                                             : 10,
                      data_underflow_warning                                  :  2,
                      underflow_mpdu_count                                    :  9;
             uint32_t mu_response_bitmap_31_0                                 : 32;
             uint32_t reserved_4a                                             : 27,
                      mu_response_bitmap_36_32                                :  5;
             uint32_t addr1_31_0                                              : 32;
             uint32_t addr2_15_0                                              : 16,
                      addr1_47_32                                             : 16;
             uint32_t addr2_47_16                                             : 32;
             uint32_t addr3_31_0                                              : 32;
             uint32_t reserved_20a                                            : 13,
                      __reserved_g_0022_ftm_frame_sent                                  :  1,
                      secure                                                  :  1,
                      __reserved_g_0022                                                 :  1,
                      addr3_47_32                                             : 16;
#endif
};

#define RESPONSE_END_STATUS_GLOBAL_DATA_UNDERFLOW_WARNING_OFFSET                    0x0000000000000000
#define RESPONSE_END_STATUS_GLOBAL_DATA_UNDERFLOW_WARNING_LSB                       3
#define RESPONSE_END_STATUS_GLOBAL_DATA_UNDERFLOW_WARNING_MSB                       3
#define RESPONSE_END_STATUS_GLOBAL_DATA_UNDERFLOW_WARNING_MASK                      0x0000000000000008

#define RESPONSE_END_STATUS_RESPONSE_TRANSMIT_STATUS_OFFSET                         0x0000000000000000
#define RESPONSE_END_STATUS_RESPONSE_TRANSMIT_STATUS_LSB                            4
#define RESPONSE_END_STATUS_RESPONSE_TRANSMIT_STATUS_MSB                            7
#define RESPONSE_END_STATUS_RESPONSE_TRANSMIT_STATUS_MASK                           0x00000000000000f0

#define RESPONSE_END_STATUS_PHYTX_PKT_END_INFO_VALID_OFFSET                         0x0000000000000000
#define RESPONSE_END_STATUS_PHYTX_PKT_END_INFO_VALID_LSB                            8
#define RESPONSE_END_STATUS_PHYTX_PKT_END_INFO_VALID_MSB                            8
#define RESPONSE_END_STATUS_PHYTX_PKT_END_INFO_VALID_MASK                           0x0000000000000100

#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_VALID_OFFSET                   0x0000000000000000
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_VALID_LSB                      9
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_VALID_MSB                      9
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_VALID_MASK                     0x0000000000000200

#define RESPONSE_END_STATUS_GENERATED_RESPONSE_OFFSET                               0x0000000000000000
#define RESPONSE_END_STATUS_GENERATED_RESPONSE_LSB                                  10
#define RESPONSE_END_STATUS_GENERATED_RESPONSE_MSB                                  12
#define RESPONSE_END_STATUS_GENERATED_RESPONSE_MASK                                 0x0000000000001c00

#define RESPONSE_END_STATUS_MBA_USER_COUNT_OFFSET                                   0x0000000000000000
#define RESPONSE_END_STATUS_MBA_USER_COUNT_LSB                                      13
#define RESPONSE_END_STATUS_MBA_USER_COUNT_MSB                                      19
#define RESPONSE_END_STATUS_MBA_USER_COUNT_MASK                                     0x00000000000fe000

#define RESPONSE_END_STATUS_MBA_FAKE_BITMAP_COUNT_OFFSET                            0x0000000000000000
#define RESPONSE_END_STATUS_MBA_FAKE_BITMAP_COUNT_LSB                               20
#define RESPONSE_END_STATUS_MBA_FAKE_BITMAP_COUNT_MSB                               26
#define RESPONSE_END_STATUS_MBA_FAKE_BITMAP_COUNT_MASK                              0x0000000007f00000

#define RESPONSE_END_STATUS_COEX_BASED_TX_BW_OFFSET                                 0x0000000000000000
#define RESPONSE_END_STATUS_COEX_BASED_TX_BW_LSB                                    27
#define RESPONSE_END_STATUS_COEX_BASED_TX_BW_MSB                                    29
#define RESPONSE_END_STATUS_COEX_BASED_TX_BW_MASK                                   0x0000000038000000

#define RESPONSE_END_STATUS_TRIG_RESPONSE_RELATED_OFFSET                            0x0000000000000000
#define RESPONSE_END_STATUS_TRIG_RESPONSE_RELATED_LSB                               30
#define RESPONSE_END_STATUS_TRIG_RESPONSE_RELATED_MSB                               30
#define RESPONSE_END_STATUS_TRIG_RESPONSE_RELATED_MASK                              0x0000000040000000

#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_OFFSET 0x0000000000000000
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_LSB 32
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MSB 39
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MASK 0x000000ff00000000

#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_OFFSET     0x0000000000000000
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_LSB        40
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MSB        45
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MASK       0x00003f0000000000

#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_OFFSET        0x0000000000000000
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_LSB           46
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MSB           47
#define RESPONSE_END_STATUS_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MASK          0x0000c00000000000

#define RESPONSE_END_STATUS_CBF_SEGMENT_REQUEST_MASK_OFFSET                         0x0000000000000000
#define RESPONSE_END_STATUS_CBF_SEGMENT_REQUEST_MASK_LSB                            48
#define RESPONSE_END_STATUS_CBF_SEGMENT_REQUEST_MASK_MSB                            55
#define RESPONSE_END_STATUS_CBF_SEGMENT_REQUEST_MASK_MASK                           0x00ff000000000000

#define RESPONSE_END_STATUS_CBF_SEGMENT_SENT_MASK_OFFSET                            0x0000000000000000
#define RESPONSE_END_STATUS_CBF_SEGMENT_SENT_MASK_LSB                               56
#define RESPONSE_END_STATUS_CBF_SEGMENT_SENT_MASK_MSB                               63
#define RESPONSE_END_STATUS_CBF_SEGMENT_SENT_MASK_MASK                              0xff00000000000000

#define RESPONSE_END_STATUS_UNDERFLOW_MPDU_COUNT_OFFSET                             0x0000000000000008
#define RESPONSE_END_STATUS_UNDERFLOW_MPDU_COUNT_LSB                                0
#define RESPONSE_END_STATUS_UNDERFLOW_MPDU_COUNT_MSB                                8
#define RESPONSE_END_STATUS_UNDERFLOW_MPDU_COUNT_MASK                               0x00000000000001ff

#define RESPONSE_END_STATUS_DATA_UNDERFLOW_WARNING_OFFSET                           0x0000000000000008
#define RESPONSE_END_STATUS_DATA_UNDERFLOW_WARNING_LSB                              9
#define RESPONSE_END_STATUS_DATA_UNDERFLOW_WARNING_MSB                              10
#define RESPONSE_END_STATUS_DATA_UNDERFLOW_WARNING_MASK                             0x0000000000000600

#define RESPONSE_END_STATUS_RESERVED_2B_OFFSET                                      0x0000000000000008
#define RESPONSE_END_STATUS_RESERVED_2B_LSB                                         11
#define RESPONSE_END_STATUS_RESERVED_2B_MSB                                         20
#define RESPONSE_END_STATUS_RESERVED_2B_MASK                                        0x00000000001ff800

#define RESPONSE_END_STATUS_ONLY_NULL_DELIM_SENT_OFFSET                             0x0000000000000008
#define RESPONSE_END_STATUS_ONLY_NULL_DELIM_SENT_LSB                                21
#define RESPONSE_END_STATUS_ONLY_NULL_DELIM_SENT_MSB                                21
#define RESPONSE_END_STATUS_ONLY_NULL_DELIM_SENT_MASK                               0x0000000000200000

#define RESPONSE_END_STATUS_BRP_INFO_VALID_OFFSET                                   0x0000000000000008
#define RESPONSE_END_STATUS_BRP_INFO_VALID_LSB                                      22
#define RESPONSE_END_STATUS_BRP_INFO_VALID_MSB                                      22
#define RESPONSE_END_STATUS_BRP_INFO_VALID_MASK                                     0x0000000000400000

#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_31_0_OFFSET                          0x0000000000000008
#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_31_0_LSB                             32
#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_31_0_MSB                             63
#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_31_0_MASK                            0xffffffff00000000

#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_36_32_OFFSET                         0x0000000000000010
#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_36_32_LSB                            0
#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_36_32_MSB                            4
#define RESPONSE_END_STATUS_MU_RESPONSE_BITMAP_36_32_MASK                           0x000000000000001f

#define RESPONSE_END_STATUS_RESERVED_4A_OFFSET                                      0x0000000000000010
#define RESPONSE_END_STATUS_RESERVED_4A_LSB                                         5
#define RESPONSE_END_STATUS_RESERVED_4A_MSB                                         31
#define RESPONSE_END_STATUS_RESERVED_4A_MASK                                        0x00000000ffffffe0

#define RESPONSE_END_STATUS_ADDR1_31_0_OFFSET                                       0x0000000000000010
#define RESPONSE_END_STATUS_ADDR1_31_0_LSB                                          32
#define RESPONSE_END_STATUS_ADDR1_31_0_MSB                                          63
#define RESPONSE_END_STATUS_ADDR1_31_0_MASK                                         0xffffffff00000000

#define RESPONSE_END_STATUS_ADDR1_47_32_OFFSET                                      0x0000000000000018
#define RESPONSE_END_STATUS_ADDR1_47_32_LSB                                         0
#define RESPONSE_END_STATUS_ADDR1_47_32_MSB                                         15
#define RESPONSE_END_STATUS_ADDR1_47_32_MASK                                        0x000000000000ffff

#define RESPONSE_END_STATUS_ADDR2_15_0_OFFSET                                       0x0000000000000018
#define RESPONSE_END_STATUS_ADDR2_15_0_LSB                                          16
#define RESPONSE_END_STATUS_ADDR2_15_0_MSB                                          31
#define RESPONSE_END_STATUS_ADDR2_15_0_MASK                                         0x00000000ffff0000

#define RESPONSE_END_STATUS_ADDR2_47_16_OFFSET                                      0x0000000000000018
#define RESPONSE_END_STATUS_ADDR2_47_16_LSB                                         32
#define RESPONSE_END_STATUS_ADDR2_47_16_MSB                                         63
#define RESPONSE_END_STATUS_ADDR2_47_16_MASK                                        0xffffffff00000000

#define RESPONSE_END_STATUS_ADDR3_31_0_OFFSET                                       0x0000000000000020
#define RESPONSE_END_STATUS_ADDR3_31_0_LSB                                          0
#define RESPONSE_END_STATUS_ADDR3_31_0_MSB                                          31
#define RESPONSE_END_STATUS_ADDR3_31_0_MASK                                         0x00000000ffffffff

#define RESPONSE_END_STATUS_ADDR3_47_32_OFFSET                                      0x0000000000000020
#define RESPONSE_END_STATUS_ADDR3_47_32_LSB                                         32
#define RESPONSE_END_STATUS_ADDR3_47_32_MSB                                         47
#define RESPONSE_END_STATUS_ADDR3_47_32_MASK                                        0x0000ffff00000000

#define RESPONSE_END_STATUS_SECURE_OFFSET                                           0x0000000000000020
#define RESPONSE_END_STATUS_SECURE_LSB                                              49
#define RESPONSE_END_STATUS_SECURE_MSB                                              49
#define RESPONSE_END_STATUS_SECURE_MASK                                             0x0002000000000000

#define RESPONSE_END_STATUS_RESERVED_20A_OFFSET                                     0x0000000000000020
#define RESPONSE_END_STATUS_RESERVED_20A_LSB                                        51
#define RESPONSE_END_STATUS_RESERVED_20A_MSB                                        63
#define RESPONSE_END_STATUS_RESERVED_20A_MASK                                       0xfff8000000000000

#endif
