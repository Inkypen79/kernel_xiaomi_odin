/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _TX_FES_STATUS_END_H_
#define _TX_FES_STATUS_END_H_

#include "phytx_abort_request_info.h"
#define NUM_OF_DWORDS_TX_FES_STATUS_END 12

#define NUM_OF_QWORDS_TX_FES_STATUS_END 6

struct tx_fes_status_end {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t prot___reserved_g_0046                                  :  1,
                      prot___reserved_g_0086                                  :  1,
                      prot___reserved_g_0043                                  :  1,
                      prot___reserved_g_0053                                  :  1,
                      prot___reserved_g_0041                                  :  1,
                      __reserved_g_0082                                       :  1,
                      __reserved_g_0046                                       :  1,
                      __reserved_g_0086                                       :  1,
                      __reserved_g_0043                                       :  1,
                      __reserved_g_0053                                       :  1,
                      __reserved_g_0041                                       :  1,
                      __reserved_g_0083                                       :  1,
                      global_data_underflow_warning                           :  1,
                      global_fes_transmit_result                              :  4,
                      cbf_bw_received_valid                                   :  1,
                      cbf_bw_received                                         :  3,
                      actual_received_ack_type                                :  4,
                      sta_response_count                                      :  6,
                      more_data_received                                      :  1;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
             uint16_t reserved_after_struct16                                 :  4,
                      brp_info_valid                                          :  1,
                      qos_null_switch_done_for_eosp                           :  1,
                      reserved_1a                                             :  5,
                      phytx_pkt_end_info_valid                                :  1,
                      phytx_abort_request_info_valid                          :  1,
                      fes_in_11ax_trigger_response_config                     :  1,
                      null_delim_inserted_before_mpdus                        :  1,
                      only_null_delim_sent                                    :  1;
             uint32_t terminate___reserved_g_0022_sequence                              :  1,
                      reserved_2b                                             :  5,
                      response_type                                           :  5,
                      r2r_end_status_to_follow                                :  1,
                      reserved_5a                                             :  3,
                      __reserved_g_0055                                       :  1,
                      __reserved_g_0084                                       :  1,
                      prot___reserved_g_0042                                  :  1,
                      prot___reserved_g_0052                                  :  1,
                      __reserved_g_0042                                       :  1,
                      __reserved_g_0052                                       :  1,
                      reserved_2c                                             : 11;
             uint32_t beamform_masked_user_bitmap_15_0                        : 16,
                      beamform_masked_user_bitmap_31_16                       : 16;
             uint32_t cbf_segment_request_mask                                :  8,
                      cbf_segment_sent_mask                                   :  8,
                      highest_achieved_data_null_ratio                        :  5,
                      use_alt_power_sr                                        :  1,
                      static_2_pwr_mode_status                                :  1,
                      obss_srg_opport_transmit_status                         :  1,
                      srp_based_transmit_status                               :  1,
                      obss_pd_based_transmit_status                           :  1,
                      beamform_masked_user_bitmap_36_32                       :  5,
                      pdg_mpdu_ready                                          :  1;
             uint32_t pdg_mpdu_count                                          : 16,
                      pdg_est_mpdu_tx_count                                   : 16;
             uint32_t pdg_overview_length                                     : 24,
                      txop_duration                                           :  7,
                      pdg_dropped_mpdu_warning                                :  1;
             uint32_t packet_extension_a_factor                               :  2,
                      packet_extension_pe_disambiguity                        :  1,
                      packet_extension                                        :  3,
                      fec_type                                                :  1,
                      stbc                                                    :  1,
                      num_data_symbols                                        : 16,
                      ru_size                                                 :  4,
                      reserved_17a                                            :  4;
             uint32_t num_ltf_symbols                                         :  3,
                      ltf_size                                                :  2,
                      cp_setting                                              :  2,
                      reserved_18a                                            :  5,
                      dcm                                                     :  1,
                      ldpc_extra_symbol                                       :  1,
                      force_extra_symbol                                      :  1,
                      reserved_18b                                            :  1,
                      tx_pwr_shared                                           :  8,
                      tx_pwr_unshared                                         :  8;
             uint32_t __reserved_g_0022_active_user_map                                 : 16,
                      __reserved_g_0022_sent_dummy_tx                                   :  1,
                      __reserved_g_0022_ftm_frame_sent                                  :  1,
                      __reserved_g_0068                                       :  1,
                      __reserved_g_0069                                       :  1,
                      prot___reserved_g_0068                                  :  1,
                      prot___reserved_g_0069                                  :  1,
                      __reserved_g_0056                                       :  1,
                      __reserved_g_0085                                       :  1,
                      cv_corr_status                                          :  8;
             uint32_t current_tx_duration                                     : 16,
                      reserved_21a                                            :  4,
                      hw_qos_null_bitmap                                      :  8,
                      hw_qos_null_setup_missing                               :  1,
                      reserved_21b                                            :  3;
             uint32_t reserved_22b                                            :  4,
                      prot___reserved_g_0040                                  :  1,
                      prot___reserved_g_0080                                  :  1,
                      __reserved_g_0040                                       :  1,
                      __reserved_g_0080                                       :  1,
                      prot___reserved_g_0063                                  :  1,
                      prot___reserved_g_0078                                  :  1,
                      __reserved_g_0063                                       :  1,
                      __reserved_g_0078                                       :  1,
                      prot___reserved_g_0061                                  :  1,
                      prot___reserved_g_0076                                  :  1,
                      __reserved_g_0061                                       :  1,
                      __reserved_g_0076                                       :  1,
                      prot___reserved_g_0059                                  :  1,
                      prot___reserved_g_0074                                  :  1,
                      __reserved_g_0059                                       :  1,
                      __reserved_g_0074                                       :  1,
                      prot___reserved_g_0057                                  :  1,
                      prot___reserved_g_0072                                  :  1,
                      __reserved_g_0057                                       :  1,
                      __reserved_g_0072                                       :  1,
                      coex_signaling_status                                   :  8;
#else
             uint32_t more_data_received                                      :  1,
                      sta_response_count                                      :  6,
                      actual_received_ack_type                                :  4,
                      cbf_bw_received                                         :  3,
                      cbf_bw_received_valid                                   :  1,
                      global_fes_transmit_result                              :  4,
                      global_data_underflow_warning                           :  1,
                      __reserved_g_0083                                       :  1,
                      __reserved_g_0041                                       :  1,
                      __reserved_g_0053                                       :  1,
                      __reserved_g_0043                                       :  1,
                      __reserved_g_0086                                       :  1,
                      __reserved_g_0046                                       :  1,
                      __reserved_g_0082                                       :  1,
                      prot___reserved_g_0041                                  :  1,
                      prot___reserved_g_0053                                  :  1,
                      prot___reserved_g_0043                                  :  1,
                      prot___reserved_g_0086                                  :  1,
                      prot___reserved_g_0046                                  :  1;
             uint32_t only_null_delim_sent                                    :  1,
                      null_delim_inserted_before_mpdus                        :  1,
                      fes_in_11ax_trigger_response_config                     :  1,
                      phytx_abort_request_info_valid                          :  1,
                      phytx_pkt_end_info_valid                                :  1,
                      reserved_1a                                             :  5,
                      qos_null_switch_done_for_eosp                           :  1,
                      brp_info_valid                                          :  1,
                      reserved_after_struct16                                 :  4;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
             uint32_t reserved_2c                                             : 11,
                      __reserved_g_0052                                       :  1,
                      __reserved_g_0042                                       :  1,
                      prot___reserved_g_0052                                  :  1,
                      prot___reserved_g_0042                                  :  1,
                      __reserved_g_0084                                       :  1,
                      __reserved_g_0055                                       :  1,
                      reserved_5a                                             :  3,
                      r2r_end_status_to_follow                                :  1,
                      response_type                                           :  5,
                      reserved_2b                                             :  5,
                      terminate___reserved_g_0022_sequence                              :  1;
             uint32_t beamform_masked_user_bitmap_31_16                       : 16,
                      beamform_masked_user_bitmap_15_0                        : 16;
             uint32_t pdg_mpdu_ready                                          :  1,
                      beamform_masked_user_bitmap_36_32                       :  5,
                      obss_pd_based_transmit_status                           :  1,
                      srp_based_transmit_status                               :  1,
                      obss_srg_opport_transmit_status                         :  1,
                      static_2_pwr_mode_status                                :  1,
                      use_alt_power_sr                                        :  1,
                      highest_achieved_data_null_ratio                        :  5,
                      cbf_segment_sent_mask                                   :  8,
                      cbf_segment_request_mask                                :  8;
             uint32_t pdg_est_mpdu_tx_count                                   : 16,
                      pdg_mpdu_count                                          : 16;
             uint32_t pdg_dropped_mpdu_warning                                :  1,
                      txop_duration                                           :  7,
                      pdg_overview_length                                     : 24;
             uint32_t reserved_17a                                            :  4,
                      ru_size                                                 :  4,
                      num_data_symbols                                        : 16,
                      stbc                                                    :  1,
                      fec_type                                                :  1,
                      packet_extension                                        :  3,
                      packet_extension_pe_disambiguity                        :  1,
                      packet_extension_a_factor                               :  2;
             uint32_t tx_pwr_unshared                                         :  8,
                      tx_pwr_shared                                           :  8,
                      reserved_18b                                            :  1,
                      force_extra_symbol                                      :  1,
                      ldpc_extra_symbol                                       :  1,
                      dcm                                                     :  1,
                      reserved_18a                                            :  5,
                      cp_setting                                              :  2,
                      ltf_size                                                :  2,
                      num_ltf_symbols                                         :  3;
             uint32_t cv_corr_status                                          :  8,
                      __reserved_g_0085                                       :  1,
                      __reserved_g_0056                                       :  1,
                      prot___reserved_g_0069                                  :  1,
                      prot___reserved_g_0068                                  :  1,
                      __reserved_g_0069                                       :  1,
                      __reserved_g_0068                                       :  1,
                      __reserved_g_0022_ftm_frame_sent                                  :  1,
                      __reserved_g_0022_sent_dummy_tx                                   :  1,
                      __reserved_g_0022_active_user_map                                 : 16;
             uint32_t reserved_21b                                            :  3,
                      hw_qos_null_setup_missing                               :  1,
                      hw_qos_null_bitmap                                      :  8,
                      reserved_21a                                            :  4,
                      current_tx_duration                                     : 16;
             uint32_t coex_signaling_status                                   :  8,
                      __reserved_g_0072                                       :  1,
                      __reserved_g_0057                                       :  1,
                      prot___reserved_g_0072                                  :  1,
                      prot___reserved_g_0057                                  :  1,
                      __reserved_g_0074                                       :  1,
                      __reserved_g_0059                                       :  1,
                      prot___reserved_g_0074                                  :  1,
                      prot___reserved_g_0059                                  :  1,
                      __reserved_g_0076                                       :  1,
                      __reserved_g_0061                                       :  1,
                      prot___reserved_g_0076                                  :  1,
                      prot___reserved_g_0061                                  :  1,
                      __reserved_g_0078                                       :  1,
                      __reserved_g_0063                                       :  1,
                      prot___reserved_g_0078                                  :  1,
                      prot___reserved_g_0063                                  :  1,
                      __reserved_g_0080                                       :  1,
                      __reserved_g_0040                                       :  1,
                      prot___reserved_g_0080                                  :  1,
                      prot___reserved_g_0040                                  :  1,
                      reserved_22b                                            :  4;
#endif
};

#define TX_FES_STATUS_END_GLOBAL_DATA_UNDERFLOW_WARNING_OFFSET                      0x0000000000000000
#define TX_FES_STATUS_END_GLOBAL_DATA_UNDERFLOW_WARNING_LSB                         12
#define TX_FES_STATUS_END_GLOBAL_DATA_UNDERFLOW_WARNING_MSB                         12
#define TX_FES_STATUS_END_GLOBAL_DATA_UNDERFLOW_WARNING_MASK                        0x0000000000001000

#define TX_FES_STATUS_END_GLOBAL_FES_TRANSMIT_RESULT_OFFSET                         0x0000000000000000
#define TX_FES_STATUS_END_GLOBAL_FES_TRANSMIT_RESULT_LSB                            13
#define TX_FES_STATUS_END_GLOBAL_FES_TRANSMIT_RESULT_MSB                            16
#define TX_FES_STATUS_END_GLOBAL_FES_TRANSMIT_RESULT_MASK                           0x000000000001e000

#define TX_FES_STATUS_END_CBF_BW_RECEIVED_VALID_OFFSET                              0x0000000000000000
#define TX_FES_STATUS_END_CBF_BW_RECEIVED_VALID_LSB                                 17
#define TX_FES_STATUS_END_CBF_BW_RECEIVED_VALID_MSB                                 17
#define TX_FES_STATUS_END_CBF_BW_RECEIVED_VALID_MASK                                0x0000000000020000

#define TX_FES_STATUS_END_CBF_BW_RECEIVED_OFFSET                                    0x0000000000000000
#define TX_FES_STATUS_END_CBF_BW_RECEIVED_LSB                                       18
#define TX_FES_STATUS_END_CBF_BW_RECEIVED_MSB                                       20
#define TX_FES_STATUS_END_CBF_BW_RECEIVED_MASK                                      0x00000000001c0000

#define TX_FES_STATUS_END_ACTUAL_RECEIVED_ACK_TYPE_OFFSET                           0x0000000000000000
#define TX_FES_STATUS_END_ACTUAL_RECEIVED_ACK_TYPE_LSB                              21
#define TX_FES_STATUS_END_ACTUAL_RECEIVED_ACK_TYPE_MSB                              24
#define TX_FES_STATUS_END_ACTUAL_RECEIVED_ACK_TYPE_MASK                             0x0000000001e00000

#define TX_FES_STATUS_END_STA_RESPONSE_COUNT_OFFSET                                 0x0000000000000000
#define TX_FES_STATUS_END_STA_RESPONSE_COUNT_LSB                                    25
#define TX_FES_STATUS_END_STA_RESPONSE_COUNT_MSB                                    30
#define TX_FES_STATUS_END_STA_RESPONSE_COUNT_MASK                                   0x000000007e000000

#define TX_FES_STATUS_END_MORE_DATA_RECEIVED_OFFSET                                 0x0000000000000000
#define TX_FES_STATUS_END_MORE_DATA_RECEIVED_LSB                                    31
#define TX_FES_STATUS_END_MORE_DATA_RECEIVED_MSB                                    31
#define TX_FES_STATUS_END_MORE_DATA_RECEIVED_MASK                                   0x0000000080000000

#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_OFFSET 0x0000000000000000
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_LSB   32
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MSB   39
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MASK  0x000000ff00000000

#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_OFFSET       0x0000000000000000
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_LSB          40
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MSB          45
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MASK         0x00003f0000000000

#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_OFFSET          0x0000000000000000
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_LSB             46
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MSB             47
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MASK            0x0000c00000000000

#define TX_FES_STATUS_END_RESERVED_AFTER_STRUCT16_OFFSET                            0x0000000000000000
#define TX_FES_STATUS_END_RESERVED_AFTER_STRUCT16_LSB                               48
#define TX_FES_STATUS_END_RESERVED_AFTER_STRUCT16_MSB                               51
#define TX_FES_STATUS_END_RESERVED_AFTER_STRUCT16_MASK                              0x000f000000000000

#define TX_FES_STATUS_END_BRP_INFO_VALID_OFFSET                                     0x0000000000000000
#define TX_FES_STATUS_END_BRP_INFO_VALID_LSB                                        52
#define TX_FES_STATUS_END_BRP_INFO_VALID_MSB                                        52
#define TX_FES_STATUS_END_BRP_INFO_VALID_MASK                                       0x0010000000000000

#define TX_FES_STATUS_END_QOS_NULL_SWITCH_DONE_FOR_EOSP_OFFSET                      0x0000000000000000
#define TX_FES_STATUS_END_QOS_NULL_SWITCH_DONE_FOR_EOSP_LSB                         53
#define TX_FES_STATUS_END_QOS_NULL_SWITCH_DONE_FOR_EOSP_MSB                         53
#define TX_FES_STATUS_END_QOS_NULL_SWITCH_DONE_FOR_EOSP_MASK                        0x0020000000000000

#define TX_FES_STATUS_END_RESERVED_1A_OFFSET                                        0x0000000000000000
#define TX_FES_STATUS_END_RESERVED_1A_LSB                                           54
#define TX_FES_STATUS_END_RESERVED_1A_MSB                                           58
#define TX_FES_STATUS_END_RESERVED_1A_MASK                                          0x07c0000000000000

#define TX_FES_STATUS_END_PHYTX_PKT_END_INFO_VALID_OFFSET                           0x0000000000000000
#define TX_FES_STATUS_END_PHYTX_PKT_END_INFO_VALID_LSB                              59
#define TX_FES_STATUS_END_PHYTX_PKT_END_INFO_VALID_MSB                              59
#define TX_FES_STATUS_END_PHYTX_PKT_END_INFO_VALID_MASK                             0x0800000000000000

#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_VALID_OFFSET                     0x0000000000000000
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_VALID_LSB                        60
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_VALID_MSB                        60
#define TX_FES_STATUS_END_PHYTX_ABORT_REQUEST_INFO_VALID_MASK                       0x1000000000000000

#define TX_FES_STATUS_END_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_OFFSET                0x0000000000000000
#define TX_FES_STATUS_END_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_LSB                   61
#define TX_FES_STATUS_END_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_MSB                   61
#define TX_FES_STATUS_END_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_MASK                  0x2000000000000000

#define TX_FES_STATUS_END_NULL_DELIM_INSERTED_BEFORE_MPDUS_OFFSET                   0x0000000000000000
#define TX_FES_STATUS_END_NULL_DELIM_INSERTED_BEFORE_MPDUS_LSB                      62
#define TX_FES_STATUS_END_NULL_DELIM_INSERTED_BEFORE_MPDUS_MSB                      62
#define TX_FES_STATUS_END_NULL_DELIM_INSERTED_BEFORE_MPDUS_MASK                     0x4000000000000000

#define TX_FES_STATUS_END_ONLY_NULL_DELIM_SENT_OFFSET                               0x0000000000000000
#define TX_FES_STATUS_END_ONLY_NULL_DELIM_SENT_LSB                                  63
#define TX_FES_STATUS_END_ONLY_NULL_DELIM_SENT_MSB                                  63
#define TX_FES_STATUS_END_ONLY_NULL_DELIM_SENT_MASK                                 0x8000000000000000

#define TX_FES_STATUS_END_RESERVED_2B_OFFSET                                        0x0000000000000008
#define TX_FES_STATUS_END_RESERVED_2B_LSB                                           1
#define TX_FES_STATUS_END_RESERVED_2B_MSB                                           5
#define TX_FES_STATUS_END_RESERVED_2B_MASK                                          0x000000000000003e

#define TX_FES_STATUS_END_RESPONSE_TYPE_OFFSET                                      0x0000000000000008
#define TX_FES_STATUS_END_RESPONSE_TYPE_LSB                                         6
#define TX_FES_STATUS_END_RESPONSE_TYPE_MSB                                         10
#define TX_FES_STATUS_END_RESPONSE_TYPE_MASK                                        0x00000000000007c0

#define TX_FES_STATUS_END_R2R_END_STATUS_TO_FOLLOW_OFFSET                           0x0000000000000008
#define TX_FES_STATUS_END_R2R_END_STATUS_TO_FOLLOW_LSB                              11
#define TX_FES_STATUS_END_R2R_END_STATUS_TO_FOLLOW_MSB                              11
#define TX_FES_STATUS_END_R2R_END_STATUS_TO_FOLLOW_MASK                             0x0000000000000800

#define TX_FES_STATUS_END_RESERVED_5A_OFFSET                                        0x0000000000000008
#define TX_FES_STATUS_END_RESERVED_5A_LSB                                           12
#define TX_FES_STATUS_END_RESERVED_5A_MSB                                           14
#define TX_FES_STATUS_END_RESERVED_5A_MASK                                          0x0000000000007000

#define TX_FES_STATUS_END_RESERVED_2C_OFFSET                                        0x0000000000000008
#define TX_FES_STATUS_END_RESERVED_2C_LSB                                           21
#define TX_FES_STATUS_END_RESERVED_2C_MSB                                           31
#define TX_FES_STATUS_END_RESERVED_2C_MASK                                          0x00000000ffe00000

#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_15_0_OFFSET                   0x0000000000000008
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_15_0_LSB                      32
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_15_0_MSB                      47
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_15_0_MASK                     0x0000ffff00000000

#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_31_16_OFFSET                  0x0000000000000008
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_31_16_LSB                     48
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_31_16_MSB                     63
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_31_16_MASK                    0xffff000000000000

#define TX_FES_STATUS_END_CBF_SEGMENT_REQUEST_MASK_OFFSET                           0x0000000000000010
#define TX_FES_STATUS_END_CBF_SEGMENT_REQUEST_MASK_LSB                              0
#define TX_FES_STATUS_END_CBF_SEGMENT_REQUEST_MASK_MSB                              7
#define TX_FES_STATUS_END_CBF_SEGMENT_REQUEST_MASK_MASK                             0x00000000000000ff

#define TX_FES_STATUS_END_CBF_SEGMENT_SENT_MASK_OFFSET                              0x0000000000000010
#define TX_FES_STATUS_END_CBF_SEGMENT_SENT_MASK_LSB                                 8
#define TX_FES_STATUS_END_CBF_SEGMENT_SENT_MASK_MSB                                 15
#define TX_FES_STATUS_END_CBF_SEGMENT_SENT_MASK_MASK                                0x000000000000ff00

#define TX_FES_STATUS_END_HIGHEST_ACHIEVED_DATA_NULL_RATIO_OFFSET                   0x0000000000000010
#define TX_FES_STATUS_END_HIGHEST_ACHIEVED_DATA_NULL_RATIO_LSB                      16
#define TX_FES_STATUS_END_HIGHEST_ACHIEVED_DATA_NULL_RATIO_MSB                      20
#define TX_FES_STATUS_END_HIGHEST_ACHIEVED_DATA_NULL_RATIO_MASK                     0x00000000001f0000

#define TX_FES_STATUS_END_USE_ALT_POWER_SR_OFFSET                                   0x0000000000000010
#define TX_FES_STATUS_END_USE_ALT_POWER_SR_LSB                                      21
#define TX_FES_STATUS_END_USE_ALT_POWER_SR_MSB                                      21
#define TX_FES_STATUS_END_USE_ALT_POWER_SR_MASK                                     0x0000000000200000

#define TX_FES_STATUS_END_STATIC_2_PWR_MODE_STATUS_OFFSET                           0x0000000000000010
#define TX_FES_STATUS_END_STATIC_2_PWR_MODE_STATUS_LSB                              22
#define TX_FES_STATUS_END_STATIC_2_PWR_MODE_STATUS_MSB                              22
#define TX_FES_STATUS_END_STATIC_2_PWR_MODE_STATUS_MASK                             0x0000000000400000

#define TX_FES_STATUS_END_OBSS_SRG_OPPORT_TRANSMIT_STATUS_OFFSET                    0x0000000000000010
#define TX_FES_STATUS_END_OBSS_SRG_OPPORT_TRANSMIT_STATUS_LSB                       23
#define TX_FES_STATUS_END_OBSS_SRG_OPPORT_TRANSMIT_STATUS_MSB                       23
#define TX_FES_STATUS_END_OBSS_SRG_OPPORT_TRANSMIT_STATUS_MASK                      0x0000000000800000

#define TX_FES_STATUS_END_SRP_BASED_TRANSMIT_STATUS_OFFSET                          0x0000000000000010
#define TX_FES_STATUS_END_SRP_BASED_TRANSMIT_STATUS_LSB                             24
#define TX_FES_STATUS_END_SRP_BASED_TRANSMIT_STATUS_MSB                             24
#define TX_FES_STATUS_END_SRP_BASED_TRANSMIT_STATUS_MASK                            0x0000000001000000

#define TX_FES_STATUS_END_OBSS_PD_BASED_TRANSMIT_STATUS_OFFSET                      0x0000000000000010
#define TX_FES_STATUS_END_OBSS_PD_BASED_TRANSMIT_STATUS_LSB                         25
#define TX_FES_STATUS_END_OBSS_PD_BASED_TRANSMIT_STATUS_MSB                         25
#define TX_FES_STATUS_END_OBSS_PD_BASED_TRANSMIT_STATUS_MASK                        0x0000000002000000

#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_36_32_OFFSET                  0x0000000000000010
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_36_32_LSB                     26
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_36_32_MSB                     30
#define TX_FES_STATUS_END_BEAMFORM_MASKED_USER_BITMAP_36_32_MASK                    0x000000007c000000

#define TX_FES_STATUS_END_PDG_MPDU_READY_OFFSET                                     0x0000000000000010
#define TX_FES_STATUS_END_PDG_MPDU_READY_LSB                                        31
#define TX_FES_STATUS_END_PDG_MPDU_READY_MSB                                        31
#define TX_FES_STATUS_END_PDG_MPDU_READY_MASK                                       0x0000000080000000

#define TX_FES_STATUS_END_PDG_MPDU_COUNT_OFFSET                                     0x0000000000000010
#define TX_FES_STATUS_END_PDG_MPDU_COUNT_LSB                                        32
#define TX_FES_STATUS_END_PDG_MPDU_COUNT_MSB                                        47
#define TX_FES_STATUS_END_PDG_MPDU_COUNT_MASK                                       0x0000ffff00000000

#define TX_FES_STATUS_END_PDG_EST_MPDU_TX_COUNT_OFFSET                              0x0000000000000010
#define TX_FES_STATUS_END_PDG_EST_MPDU_TX_COUNT_LSB                                 48
#define TX_FES_STATUS_END_PDG_EST_MPDU_TX_COUNT_MSB                                 63
#define TX_FES_STATUS_END_PDG_EST_MPDU_TX_COUNT_MASK                                0xffff000000000000

#define TX_FES_STATUS_END_PDG_OVERVIEW_LENGTH_OFFSET                                0x0000000000000018
#define TX_FES_STATUS_END_PDG_OVERVIEW_LENGTH_LSB                                   0
#define TX_FES_STATUS_END_PDG_OVERVIEW_LENGTH_MSB                                   23
#define TX_FES_STATUS_END_PDG_OVERVIEW_LENGTH_MASK                                  0x0000000000ffffff

#define TX_FES_STATUS_END_TXOP_DURATION_OFFSET                                      0x0000000000000018
#define TX_FES_STATUS_END_TXOP_DURATION_LSB                                         24
#define TX_FES_STATUS_END_TXOP_DURATION_MSB                                         30
#define TX_FES_STATUS_END_TXOP_DURATION_MASK                                        0x000000007f000000

#define TX_FES_STATUS_END_PDG_DROPPED_MPDU_WARNING_OFFSET                           0x0000000000000018
#define TX_FES_STATUS_END_PDG_DROPPED_MPDU_WARNING_LSB                              31
#define TX_FES_STATUS_END_PDG_DROPPED_MPDU_WARNING_MSB                              31
#define TX_FES_STATUS_END_PDG_DROPPED_MPDU_WARNING_MASK                             0x0000000080000000

#define TX_FES_STATUS_END_PACKET_EXTENSION_A_FACTOR_OFFSET                          0x0000000000000018
#define TX_FES_STATUS_END_PACKET_EXTENSION_A_FACTOR_LSB                             32
#define TX_FES_STATUS_END_PACKET_EXTENSION_A_FACTOR_MSB                             33
#define TX_FES_STATUS_END_PACKET_EXTENSION_A_FACTOR_MASK                            0x0000000300000000

#define TX_FES_STATUS_END_PACKET_EXTENSION_PE_DISAMBIGUITY_OFFSET                   0x0000000000000018
#define TX_FES_STATUS_END_PACKET_EXTENSION_PE_DISAMBIGUITY_LSB                      34
#define TX_FES_STATUS_END_PACKET_EXTENSION_PE_DISAMBIGUITY_MSB                      34
#define TX_FES_STATUS_END_PACKET_EXTENSION_PE_DISAMBIGUITY_MASK                     0x0000000400000000

#define TX_FES_STATUS_END_PACKET_EXTENSION_OFFSET                                   0x0000000000000018
#define TX_FES_STATUS_END_PACKET_EXTENSION_LSB                                      35
#define TX_FES_STATUS_END_PACKET_EXTENSION_MSB                                      37
#define TX_FES_STATUS_END_PACKET_EXTENSION_MASK                                     0x0000003800000000

#define TX_FES_STATUS_END_FEC_TYPE_OFFSET                                           0x0000000000000018
#define TX_FES_STATUS_END_FEC_TYPE_LSB                                              38
#define TX_FES_STATUS_END_FEC_TYPE_MSB                                              38
#define TX_FES_STATUS_END_FEC_TYPE_MASK                                             0x0000004000000000

#define TX_FES_STATUS_END_STBC_OFFSET                                               0x0000000000000018
#define TX_FES_STATUS_END_STBC_LSB                                                  39
#define TX_FES_STATUS_END_STBC_MSB                                                  39
#define TX_FES_STATUS_END_STBC_MASK                                                 0x0000008000000000

#define TX_FES_STATUS_END_NUM_DATA_SYMBOLS_OFFSET                                   0x0000000000000018
#define TX_FES_STATUS_END_NUM_DATA_SYMBOLS_LSB                                      40
#define TX_FES_STATUS_END_NUM_DATA_SYMBOLS_MSB                                      55
#define TX_FES_STATUS_END_NUM_DATA_SYMBOLS_MASK                                     0x00ffff0000000000

#define TX_FES_STATUS_END_RU_SIZE_OFFSET                                            0x0000000000000018
#define TX_FES_STATUS_END_RU_SIZE_LSB                                               56
#define TX_FES_STATUS_END_RU_SIZE_MSB                                               59
#define TX_FES_STATUS_END_RU_SIZE_MASK                                              0x0f00000000000000

#define TX_FES_STATUS_END_RESERVED_17A_OFFSET                                       0x0000000000000018
#define TX_FES_STATUS_END_RESERVED_17A_LSB                                          60
#define TX_FES_STATUS_END_RESERVED_17A_MSB                                          63
#define TX_FES_STATUS_END_RESERVED_17A_MASK                                         0xf000000000000000

#define TX_FES_STATUS_END_NUM_LTF_SYMBOLS_OFFSET                                    0x0000000000000020
#define TX_FES_STATUS_END_NUM_LTF_SYMBOLS_LSB                                       0
#define TX_FES_STATUS_END_NUM_LTF_SYMBOLS_MSB                                       2
#define TX_FES_STATUS_END_NUM_LTF_SYMBOLS_MASK                                      0x0000000000000007

#define TX_FES_STATUS_END_LTF_SIZE_OFFSET                                           0x0000000000000020
#define TX_FES_STATUS_END_LTF_SIZE_LSB                                              3
#define TX_FES_STATUS_END_LTF_SIZE_MSB                                              4
#define TX_FES_STATUS_END_LTF_SIZE_MASK                                             0x0000000000000018

#define TX_FES_STATUS_END_CP_SETTING_OFFSET                                         0x0000000000000020
#define TX_FES_STATUS_END_CP_SETTING_LSB                                            5
#define TX_FES_STATUS_END_CP_SETTING_MSB                                            6
#define TX_FES_STATUS_END_CP_SETTING_MASK                                           0x0000000000000060

#define TX_FES_STATUS_END_RESERVED_18A_OFFSET                                       0x0000000000000020
#define TX_FES_STATUS_END_RESERVED_18A_LSB                                          7
#define TX_FES_STATUS_END_RESERVED_18A_MSB                                          11
#define TX_FES_STATUS_END_RESERVED_18A_MASK                                         0x0000000000000f80

#define TX_FES_STATUS_END_DCM_OFFSET                                                0x0000000000000020
#define TX_FES_STATUS_END_DCM_LSB                                                   12
#define TX_FES_STATUS_END_DCM_MSB                                                   12
#define TX_FES_STATUS_END_DCM_MASK                                                  0x0000000000001000

#define TX_FES_STATUS_END_LDPC_EXTRA_SYMBOL_OFFSET                                  0x0000000000000020
#define TX_FES_STATUS_END_LDPC_EXTRA_SYMBOL_LSB                                     13
#define TX_FES_STATUS_END_LDPC_EXTRA_SYMBOL_MSB                                     13
#define TX_FES_STATUS_END_LDPC_EXTRA_SYMBOL_MASK                                    0x0000000000002000

#define TX_FES_STATUS_END_FORCE_EXTRA_SYMBOL_OFFSET                                 0x0000000000000020
#define TX_FES_STATUS_END_FORCE_EXTRA_SYMBOL_LSB                                    14
#define TX_FES_STATUS_END_FORCE_EXTRA_SYMBOL_MSB                                    14
#define TX_FES_STATUS_END_FORCE_EXTRA_SYMBOL_MASK                                   0x0000000000004000

#define TX_FES_STATUS_END_RESERVED_18B_OFFSET                                       0x0000000000000020
#define TX_FES_STATUS_END_RESERVED_18B_LSB                                          15
#define TX_FES_STATUS_END_RESERVED_18B_MSB                                          15
#define TX_FES_STATUS_END_RESERVED_18B_MASK                                         0x0000000000008000

#define TX_FES_STATUS_END_TX_PWR_SHARED_OFFSET                                      0x0000000000000020
#define TX_FES_STATUS_END_TX_PWR_SHARED_LSB                                         16
#define TX_FES_STATUS_END_TX_PWR_SHARED_MSB                                         23
#define TX_FES_STATUS_END_TX_PWR_SHARED_MASK                                        0x0000000000ff0000

#define TX_FES_STATUS_END_TX_PWR_UNSHARED_OFFSET                                    0x0000000000000020
#define TX_FES_STATUS_END_TX_PWR_UNSHARED_LSB                                       24
#define TX_FES_STATUS_END_TX_PWR_UNSHARED_MSB                                       31
#define TX_FES_STATUS_END_TX_PWR_UNSHARED_MASK                                      0x00000000ff000000

#define TX_FES_STATUS_END_CV_CORR_STATUS_OFFSET                                     0x0000000000000020
#define TX_FES_STATUS_END_CV_CORR_STATUS_LSB                                        56
#define TX_FES_STATUS_END_CV_CORR_STATUS_MSB                                        63
#define TX_FES_STATUS_END_CV_CORR_STATUS_MASK                                       0xff00000000000000

#define TX_FES_STATUS_END_CURRENT_TX_DURATION_OFFSET                                0x0000000000000028
#define TX_FES_STATUS_END_CURRENT_TX_DURATION_LSB                                   0
#define TX_FES_STATUS_END_CURRENT_TX_DURATION_MSB                                   15
#define TX_FES_STATUS_END_CURRENT_TX_DURATION_MASK                                  0x000000000000ffff

#define TX_FES_STATUS_END_RESERVED_21A_OFFSET                                       0x0000000000000028
#define TX_FES_STATUS_END_RESERVED_21A_LSB                                          16
#define TX_FES_STATUS_END_RESERVED_21A_MSB                                          19
#define TX_FES_STATUS_END_RESERVED_21A_MASK                                         0x00000000000f0000

#define TX_FES_STATUS_END_HW_QOS_NULL_BITMAP_OFFSET                                 0x0000000000000028
#define TX_FES_STATUS_END_HW_QOS_NULL_BITMAP_LSB                                    20
#define TX_FES_STATUS_END_HW_QOS_NULL_BITMAP_MSB                                    27
#define TX_FES_STATUS_END_HW_QOS_NULL_BITMAP_MASK                                   0x000000000ff00000

#define TX_FES_STATUS_END_HW_QOS_NULL_SETUP_MISSING_OFFSET                          0x0000000000000028
#define TX_FES_STATUS_END_HW_QOS_NULL_SETUP_MISSING_LSB                             28
#define TX_FES_STATUS_END_HW_QOS_NULL_SETUP_MISSING_MSB                             28
#define TX_FES_STATUS_END_HW_QOS_NULL_SETUP_MISSING_MASK                            0x0000000010000000

#define TX_FES_STATUS_END_RESERVED_21B_OFFSET                                       0x0000000000000028
#define TX_FES_STATUS_END_RESERVED_21B_LSB                                          29
#define TX_FES_STATUS_END_RESERVED_21B_MSB                                          31
#define TX_FES_STATUS_END_RESERVED_21B_MASK                                         0x00000000e0000000

#define TX_FES_STATUS_END_RESERVED_22B_OFFSET                                       0x0000000000000028
#define TX_FES_STATUS_END_RESERVED_22B_LSB                                          32
#define TX_FES_STATUS_END_RESERVED_22B_MSB                                          35
#define TX_FES_STATUS_END_RESERVED_22B_MASK                                         0x0000000f00000000

#define TX_FES_STATUS_END_COEX_SIGNALING_STATUS_OFFSET                              0x0000000000000028
#define TX_FES_STATUS_END_COEX_SIGNALING_STATUS_LSB                                 56
#define TX_FES_STATUS_END_COEX_SIGNALING_STATUS_MSB                                 63
#define TX_FES_STATUS_END_COEX_SIGNALING_STATUS_MASK                                0xff00000000000000

#endif
