/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _TX_FES_STATUS_PROT_H_
#define _TX_FES_STATUS_PROT_H_

#include "phytx_abort_request_info.h"
#define NUM_OF_DWORDS_TX_FES_STATUS_PROT 4

#define NUM_OF_QWORDS_TX_FES_STATUS_PROT 2

struct tx_fes_status_prot {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t success                                                 :  1,
                      phytx_pkt_end_info_valid                                :  1,
                      phytx_abort_request_info_valid                          :  1,
                      reserved_0                                              : 19,
                      pkt_type                                                :  4,
                      dot11ax_su_extended                                     :  1,
                      rate_mcs                                                :  5;
             uint32_t frame_type                                              :  2,
                      frame_subtype                                           :  4,
                      rx_pwr_mgmt                                             :  1,
                      status                                                  :  1,
                      duration_field                                          : 16,
                      reserved_1a                                             :  2,
                      agc_cbw                                                 :  3,
                      service_cbw                                             :  3;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
             uint16_t reserved_2a                                             : 16;
             uint32_t tlv64_padding                                           : 32;
#else
             uint32_t rate_mcs                                                :  5,
                      dot11ax_su_extended                                     :  1,
                      pkt_type                                                :  4,
                      reserved_0                                              : 19,
                      phytx_abort_request_info_valid                          :  1,
                      phytx_pkt_end_info_valid                                :  1,
                      success                                                 :  1;
             uint32_t service_cbw                                             :  3,
                      agc_cbw                                                 :  3,
                      reserved_1a                                             :  2,
                      duration_field                                          : 16,
                      status                                                  :  1,
                      rx_pwr_mgmt                                             :  1,
                      frame_subtype                                           :  4,
                      frame_type                                              :  2;
             uint32_t reserved_2a                                             : 16;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
             uint32_t tlv64_padding                                           : 32;
#endif
};

#define TX_FES_STATUS_PROT_SUCCESS_OFFSET                                           0x0000000000000000
#define TX_FES_STATUS_PROT_SUCCESS_LSB                                              0
#define TX_FES_STATUS_PROT_SUCCESS_MSB                                              0
#define TX_FES_STATUS_PROT_SUCCESS_MASK                                             0x0000000000000001

#define TX_FES_STATUS_PROT_PHYTX_PKT_END_INFO_VALID_OFFSET                          0x0000000000000000
#define TX_FES_STATUS_PROT_PHYTX_PKT_END_INFO_VALID_LSB                             1
#define TX_FES_STATUS_PROT_PHYTX_PKT_END_INFO_VALID_MSB                             1
#define TX_FES_STATUS_PROT_PHYTX_PKT_END_INFO_VALID_MASK                            0x0000000000000002

#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_VALID_OFFSET                    0x0000000000000000
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_VALID_LSB                       2
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_VALID_MSB                       2
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_VALID_MASK                      0x0000000000000004

#define TX_FES_STATUS_PROT_RESERVED_0_OFFSET                                        0x0000000000000000
#define TX_FES_STATUS_PROT_RESERVED_0_LSB                                           3
#define TX_FES_STATUS_PROT_RESERVED_0_MSB                                           21
#define TX_FES_STATUS_PROT_RESERVED_0_MASK                                          0x00000000003ffff8

#define TX_FES_STATUS_PROT_PKT_TYPE_OFFSET                                          0x0000000000000000
#define TX_FES_STATUS_PROT_PKT_TYPE_LSB                                             22
#define TX_FES_STATUS_PROT_PKT_TYPE_MSB                                             25
#define TX_FES_STATUS_PROT_PKT_TYPE_MASK                                            0x0000000003c00000

#define TX_FES_STATUS_PROT_DOT11AX_SU_EXTENDED_OFFSET                               0x0000000000000000
#define TX_FES_STATUS_PROT_DOT11AX_SU_EXTENDED_LSB                                  26
#define TX_FES_STATUS_PROT_DOT11AX_SU_EXTENDED_MSB                                  26
#define TX_FES_STATUS_PROT_DOT11AX_SU_EXTENDED_MASK                                 0x0000000004000000

#define TX_FES_STATUS_PROT_RATE_MCS_OFFSET                                          0x0000000000000000
#define TX_FES_STATUS_PROT_RATE_MCS_LSB                                             27
#define TX_FES_STATUS_PROT_RATE_MCS_MSB                                             31
#define TX_FES_STATUS_PROT_RATE_MCS_MASK                                            0x00000000f8000000

#define TX_FES_STATUS_PROT_FRAME_TYPE_OFFSET                                        0x0000000000000000
#define TX_FES_STATUS_PROT_FRAME_TYPE_LSB                                           32
#define TX_FES_STATUS_PROT_FRAME_TYPE_MSB                                           33
#define TX_FES_STATUS_PROT_FRAME_TYPE_MASK                                          0x0000000300000000

#define TX_FES_STATUS_PROT_FRAME_SUBTYPE_OFFSET                                     0x0000000000000000
#define TX_FES_STATUS_PROT_FRAME_SUBTYPE_LSB                                        34
#define TX_FES_STATUS_PROT_FRAME_SUBTYPE_MSB                                        37
#define TX_FES_STATUS_PROT_FRAME_SUBTYPE_MASK                                       0x0000003c00000000

#define TX_FES_STATUS_PROT_RX_PWR_MGMT_OFFSET                                       0x0000000000000000
#define TX_FES_STATUS_PROT_RX_PWR_MGMT_LSB                                          38
#define TX_FES_STATUS_PROT_RX_PWR_MGMT_MSB                                          38
#define TX_FES_STATUS_PROT_RX_PWR_MGMT_MASK                                         0x0000004000000000

#define TX_FES_STATUS_PROT_STATUS_OFFSET                                            0x0000000000000000
#define TX_FES_STATUS_PROT_STATUS_LSB                                               39
#define TX_FES_STATUS_PROT_STATUS_MSB                                               39
#define TX_FES_STATUS_PROT_STATUS_MASK                                              0x0000008000000000

#define TX_FES_STATUS_PROT_DURATION_FIELD_OFFSET                                    0x0000000000000000
#define TX_FES_STATUS_PROT_DURATION_FIELD_LSB                                       40
#define TX_FES_STATUS_PROT_DURATION_FIELD_MSB                                       55
#define TX_FES_STATUS_PROT_DURATION_FIELD_MASK                                      0x00ffff0000000000

#define TX_FES_STATUS_PROT_RESERVED_1A_OFFSET                                       0x0000000000000000
#define TX_FES_STATUS_PROT_RESERVED_1A_LSB                                          56
#define TX_FES_STATUS_PROT_RESERVED_1A_MSB                                          57
#define TX_FES_STATUS_PROT_RESERVED_1A_MASK                                         0x0300000000000000

#define TX_FES_STATUS_PROT_AGC_CBW_OFFSET                                           0x0000000000000000
#define TX_FES_STATUS_PROT_AGC_CBW_LSB                                              58
#define TX_FES_STATUS_PROT_AGC_CBW_MSB                                              60
#define TX_FES_STATUS_PROT_AGC_CBW_MASK                                             0x1c00000000000000

#define TX_FES_STATUS_PROT_SERVICE_CBW_OFFSET                                       0x0000000000000000
#define TX_FES_STATUS_PROT_SERVICE_CBW_LSB                                          61
#define TX_FES_STATUS_PROT_SERVICE_CBW_MSB                                          63
#define TX_FES_STATUS_PROT_SERVICE_CBW_MASK                                         0xe000000000000000

#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_OFFSET 0x0000000000000008
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_LSB  0
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MSB  7
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MASK 0x00000000000000ff

#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_OFFSET      0x0000000000000008
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_LSB         8
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MSB         13
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MASK        0x0000000000003f00

#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_OFFSET         0x0000000000000008
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_LSB            14
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MSB            15
#define TX_FES_STATUS_PROT_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MASK           0x000000000000c000

#define TX_FES_STATUS_PROT_RESERVED_2A_OFFSET                                       0x0000000000000008
#define TX_FES_STATUS_PROT_RESERVED_2A_LSB                                          16
#define TX_FES_STATUS_PROT_RESERVED_2A_MSB                                          31
#define TX_FES_STATUS_PROT_RESERVED_2A_MASK                                         0x00000000ffff0000

#define TX_FES_STATUS_PROT_TLV64_PADDING_OFFSET                                     0x0000000000000008
#define TX_FES_STATUS_PROT_TLV64_PADDING_LSB                                        32
#define TX_FES_STATUS_PROT_TLV64_PADDING_MSB                                        63
#define TX_FES_STATUS_PROT_TLV64_PADDING_MASK                                       0xffffffff00000000

#endif
