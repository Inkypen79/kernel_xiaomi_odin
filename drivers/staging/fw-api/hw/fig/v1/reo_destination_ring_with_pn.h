/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _REO_DESTINATION_RING_WITH_PN_H_
#define _REO_DESTINATION_RING_WITH_PN_H_

#include "rx_msdu_desc_info.h"
#include "buffer_addr_info.h"
#define NUM_OF_DWORDS_REO_DESTINATION_RING_WITH_PN 8

struct reo_destination_ring_with_pn {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   buffer_addr_info                                          buf_or_link_desc_virt_addr_or_addr_info;
             uint32_t msdu_count                                              :  8,
                      prev_pn_23_0                                            : 24;
             uint32_t prev_pn_47_24                                           : 24,
                      prev_pn_127_48_info                                     :  2,
                      reserved_3a                                             :  6;
             struct   rx_msdu_desc_info                                         rx_msdu_desc_info_details;
             uint32_t release_source_module                                   :  3,
                      cookie_conversion_status                                :  1,
                      rxdma_push_reason                                       :  2,
                      rxdma_error_code                                        :  5,
                      reo_delink_error                                        :  1,
                      sw_buffer_cookie                                        : 20;
             uint32_t msdu_link_desc_index                                    :  4,
                      reserved_6a                                             : 28;
             uint32_t reo_dest_buffer_type                                    :  1,
                      reo_push_reason                                         :  2,
                      reo_error_code                                          :  5,
                      captured_msdu_data_size                                 :  4,
                      sw_exception                                            :  1,
                      src_link_id                                             :  3,
                      reo_destination_struct_signature                        :  4,
                      ring_id                                                 :  8,
                      looping_count                                           :  4;
#else
             struct   buffer_addr_info                                          buf_or_link_desc_virt_addr_or_addr_info;
             uint32_t prev_pn_23_0                                            : 24,
                      msdu_count                                              :  8;
             uint32_t reserved_3a                                             :  6,
                      prev_pn_127_48_info                                     :  2,
                      prev_pn_47_24                                           : 24;
             struct   rx_msdu_desc_info                                         rx_msdu_desc_info_details;
             uint32_t sw_buffer_cookie                                        : 20,
                      reo_delink_error                                        :  1,
                      rxdma_error_code                                        :  5,
                      rxdma_push_reason                                       :  2,
                      cookie_conversion_status                                :  1,
                      release_source_module                                   :  3;
             uint32_t reserved_6a                                             : 28,
                      msdu_link_desc_index                                    :  4;
             uint32_t looping_count                                           :  4,
                      ring_id                                                 :  8,
                      reo_destination_struct_signature                        :  4,
                      src_link_id                                             :  3,
                      sw_exception                                            :  1,
                      captured_msdu_data_size                                 :  4,
                      reo_error_code                                          :  5,
                      reo_push_reason                                         :  2,
                      reo_dest_buffer_type                                    :  1;
#endif
};

#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000000
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_31_0_MSB 31
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000004
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_39_32_MSB 7
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000004
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_RETURN_BUFFER_MANAGER_MSB 11
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000f00

#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000004
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_SW_BUFFER_COOKIE_LSB 12
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_SW_BUFFER_COOKIE_MSB 31
#define REO_DESTINATION_RING_WITH_PN_BUF_OR_LINK_DESC_VIRT_ADDR_OR_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff000

#define REO_DESTINATION_RING_WITH_PN_MSDU_COUNT_OFFSET                              0x00000008
#define REO_DESTINATION_RING_WITH_PN_MSDU_COUNT_LSB                                 0
#define REO_DESTINATION_RING_WITH_PN_MSDU_COUNT_MSB                                 7
#define REO_DESTINATION_RING_WITH_PN_MSDU_COUNT_MASK                                0x000000ff

#define REO_DESTINATION_RING_WITH_PN_PREV_PN_23_0_OFFSET                            0x00000008
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_23_0_LSB                               8
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_23_0_MSB                               31
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_23_0_MASK                              0xffffff00

#define REO_DESTINATION_RING_WITH_PN_PREV_PN_47_24_OFFSET                           0x0000000c
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_47_24_LSB                              0
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_47_24_MSB                              23
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_47_24_MASK                             0x00ffffff

#define REO_DESTINATION_RING_WITH_PN_PREV_PN_127_48_INFO_OFFSET                     0x0000000c
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_127_48_INFO_LSB                        24
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_127_48_INFO_MSB                        25
#define REO_DESTINATION_RING_WITH_PN_PREV_PN_127_48_INFO_MASK                       0x03000000

#define REO_DESTINATION_RING_WITH_PN_RESERVED_3A_OFFSET                             0x0000000c
#define REO_DESTINATION_RING_WITH_PN_RESERVED_3A_LSB                                26
#define REO_DESTINATION_RING_WITH_PN_RESERVED_3A_MSB                                31
#define REO_DESTINATION_RING_WITH_PN_RESERVED_3A_MASK                               0xfc000000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_OFFSET 0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_LSB 0
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_MSB 0
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_MASK 0x00000001

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_OFFSET 0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_LSB 1
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_MSB 1
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_MASK 0x00000002

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_OFFSET 0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_LSB 2
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_MSB 2
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_MASK 0x00000004

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_OFFSET   0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_LSB      3
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_MSB      16
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_MASK     0x0001fff8

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_OFFSET     0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_LSB        17
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_MSB        17
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_MASK       0x00020000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_OFFSET   0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_LSB      18
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_MSB      18
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_MASK     0x00040000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_OFFSET   0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_LSB      19
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_MSB      19
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_MASK     0x00080000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_OFFSET    0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_LSB       20
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_MSB       20
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_MASK      0x00100000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_OFFSET 0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_LSB 21
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_MSB 21
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_MASK 0x00200000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_OFFSET 0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_LSB 22
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_MSB 22
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_MASK 0x00400000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_OFFSET 0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_LSB   23
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_MSB   23
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_MASK  0x00800000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FR_DS_OFFSET         0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FR_DS_LSB            24
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FR_DS_MSB            24
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_FR_DS_MASK           0x01000000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TO_DS_OFFSET         0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TO_DS_LSB            25
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TO_DS_MSB            25
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_TO_DS_MASK           0x02000000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_OFFSET     0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_LSB        26
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_MSB        26
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_MASK       0x04000000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_OFFSET  0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_LSB     27
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_MSB     28
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_MASK    0x18000000

#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DECAP_FORMAT_OFFSET  0x00000010
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DECAP_FORMAT_LSB     29
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DECAP_FORMAT_MSB     30
#define REO_DESTINATION_RING_WITH_PN_RX_MSDU_DESC_INFO_DETAILS_DECAP_FORMAT_MASK    0x60000000

#define REO_DESTINATION_RING_WITH_PN_RELEASE_SOURCE_MODULE_OFFSET                   0x00000014
#define REO_DESTINATION_RING_WITH_PN_RELEASE_SOURCE_MODULE_LSB                      0
#define REO_DESTINATION_RING_WITH_PN_RELEASE_SOURCE_MODULE_MSB                      2
#define REO_DESTINATION_RING_WITH_PN_RELEASE_SOURCE_MODULE_MASK                     0x00000007

#define REO_DESTINATION_RING_WITH_PN_COOKIE_CONVERSION_STATUS_OFFSET                0x00000014
#define REO_DESTINATION_RING_WITH_PN_COOKIE_CONVERSION_STATUS_LSB                   3
#define REO_DESTINATION_RING_WITH_PN_COOKIE_CONVERSION_STATUS_MSB                   3
#define REO_DESTINATION_RING_WITH_PN_COOKIE_CONVERSION_STATUS_MASK                  0x00000008

#define REO_DESTINATION_RING_WITH_PN_RXDMA_PUSH_REASON_OFFSET                       0x00000014
#define REO_DESTINATION_RING_WITH_PN_RXDMA_PUSH_REASON_LSB                          4
#define REO_DESTINATION_RING_WITH_PN_RXDMA_PUSH_REASON_MSB                          5
#define REO_DESTINATION_RING_WITH_PN_RXDMA_PUSH_REASON_MASK                         0x00000030

#define REO_DESTINATION_RING_WITH_PN_RXDMA_ERROR_CODE_OFFSET                        0x00000014
#define REO_DESTINATION_RING_WITH_PN_RXDMA_ERROR_CODE_LSB                           6
#define REO_DESTINATION_RING_WITH_PN_RXDMA_ERROR_CODE_MSB                           10
#define REO_DESTINATION_RING_WITH_PN_RXDMA_ERROR_CODE_MASK                          0x000007c0

#define REO_DESTINATION_RING_WITH_PN_REO_DELINK_ERROR_OFFSET                        0x00000014
#define REO_DESTINATION_RING_WITH_PN_REO_DELINK_ERROR_LSB                           11
#define REO_DESTINATION_RING_WITH_PN_REO_DELINK_ERROR_MSB                           11
#define REO_DESTINATION_RING_WITH_PN_REO_DELINK_ERROR_MASK                          0x00000800

#define REO_DESTINATION_RING_WITH_PN_SW_BUFFER_COOKIE_OFFSET                        0x00000014
#define REO_DESTINATION_RING_WITH_PN_SW_BUFFER_COOKIE_LSB                           12
#define REO_DESTINATION_RING_WITH_PN_SW_BUFFER_COOKIE_MSB                           31
#define REO_DESTINATION_RING_WITH_PN_SW_BUFFER_COOKIE_MASK                          0xfffff000

#define REO_DESTINATION_RING_WITH_PN_MSDU_LINK_DESC_INDEX_OFFSET                    0x00000018
#define REO_DESTINATION_RING_WITH_PN_MSDU_LINK_DESC_INDEX_LSB                       0
#define REO_DESTINATION_RING_WITH_PN_MSDU_LINK_DESC_INDEX_MSB                       3
#define REO_DESTINATION_RING_WITH_PN_MSDU_LINK_DESC_INDEX_MASK                      0x0000000f

#define REO_DESTINATION_RING_WITH_PN_RESERVED_6A_OFFSET                             0x00000018
#define REO_DESTINATION_RING_WITH_PN_RESERVED_6A_LSB                                4
#define REO_DESTINATION_RING_WITH_PN_RESERVED_6A_MSB                                31
#define REO_DESTINATION_RING_WITH_PN_RESERVED_6A_MASK                               0xfffffff0

#define REO_DESTINATION_RING_WITH_PN_REO_DEST_BUFFER_TYPE_OFFSET                    0x0000001c
#define REO_DESTINATION_RING_WITH_PN_REO_DEST_BUFFER_TYPE_LSB                       0
#define REO_DESTINATION_RING_WITH_PN_REO_DEST_BUFFER_TYPE_MSB                       0
#define REO_DESTINATION_RING_WITH_PN_REO_DEST_BUFFER_TYPE_MASK                      0x00000001

#define REO_DESTINATION_RING_WITH_PN_REO_PUSH_REASON_OFFSET                         0x0000001c
#define REO_DESTINATION_RING_WITH_PN_REO_PUSH_REASON_LSB                            1
#define REO_DESTINATION_RING_WITH_PN_REO_PUSH_REASON_MSB                            2
#define REO_DESTINATION_RING_WITH_PN_REO_PUSH_REASON_MASK                           0x00000006

#define REO_DESTINATION_RING_WITH_PN_REO_ERROR_CODE_OFFSET                          0x0000001c
#define REO_DESTINATION_RING_WITH_PN_REO_ERROR_CODE_LSB                             3
#define REO_DESTINATION_RING_WITH_PN_REO_ERROR_CODE_MSB                             7
#define REO_DESTINATION_RING_WITH_PN_REO_ERROR_CODE_MASK                            0x000000f8

#define REO_DESTINATION_RING_WITH_PN_CAPTURED_MSDU_DATA_SIZE_OFFSET                 0x0000001c
#define REO_DESTINATION_RING_WITH_PN_CAPTURED_MSDU_DATA_SIZE_LSB                    8
#define REO_DESTINATION_RING_WITH_PN_CAPTURED_MSDU_DATA_SIZE_MSB                    11
#define REO_DESTINATION_RING_WITH_PN_CAPTURED_MSDU_DATA_SIZE_MASK                   0x00000f00

#define REO_DESTINATION_RING_WITH_PN_SW_EXCEPTION_OFFSET                            0x0000001c
#define REO_DESTINATION_RING_WITH_PN_SW_EXCEPTION_LSB                               12
#define REO_DESTINATION_RING_WITH_PN_SW_EXCEPTION_MSB                               12
#define REO_DESTINATION_RING_WITH_PN_SW_EXCEPTION_MASK                              0x00001000

#define REO_DESTINATION_RING_WITH_PN_SRC_LINK_ID_OFFSET                             0x0000001c
#define REO_DESTINATION_RING_WITH_PN_SRC_LINK_ID_LSB                                13
#define REO_DESTINATION_RING_WITH_PN_SRC_LINK_ID_MSB                                15
#define REO_DESTINATION_RING_WITH_PN_SRC_LINK_ID_MASK                               0x0000e000

#define REO_DESTINATION_RING_WITH_PN_REO_DESTINATION_STRUCT_SIGNATURE_OFFSET        0x0000001c
#define REO_DESTINATION_RING_WITH_PN_REO_DESTINATION_STRUCT_SIGNATURE_LSB           16
#define REO_DESTINATION_RING_WITH_PN_REO_DESTINATION_STRUCT_SIGNATURE_MSB           19
#define REO_DESTINATION_RING_WITH_PN_REO_DESTINATION_STRUCT_SIGNATURE_MASK          0x000f0000

#define REO_DESTINATION_RING_WITH_PN_RING_ID_OFFSET                                 0x0000001c
#define REO_DESTINATION_RING_WITH_PN_RING_ID_LSB                                    20
#define REO_DESTINATION_RING_WITH_PN_RING_ID_MSB                                    27
#define REO_DESTINATION_RING_WITH_PN_RING_ID_MASK                                   0x0ff00000

#define REO_DESTINATION_RING_WITH_PN_LOOPING_COUNT_OFFSET                           0x0000001c
#define REO_DESTINATION_RING_WITH_PN_LOOPING_COUNT_LSB                              28
#define REO_DESTINATION_RING_WITH_PN_LOOPING_COUNT_MSB                              31
#define REO_DESTINATION_RING_WITH_PN_LOOPING_COUNT_MASK                             0xf0000000

#endif
