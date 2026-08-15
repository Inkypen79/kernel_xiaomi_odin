/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _WBM_RELEASE_RING_TX_H_
#define _WBM_RELEASE_RING_TX_H_

#include "buffer_addr_info.h"
#define NUM_OF_DWORDS_WBM_RELEASE_RING_TX 4

struct wbm_release_ring_tx {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   buffer_addr_info                                          released_buff_or_desc_addr_info;
             uint32_t release_source_module                                   :  3,
                      buffer_or_desc_type                                     :  3,
                      reserved_2a                                             : 26;
             uint32_t tqm_status_number                                       : 32;
#else
             struct   buffer_addr_info                                          released_buff_or_desc_addr_info;
             uint32_t reserved_2a                                             : 26,
                      buffer_or_desc_type                                     :  3,
                      release_source_module                                   :  3;
             uint32_t tqm_status_number                                       : 32;
#endif
};

#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000000
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB    0
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MSB    31
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK   0xffffffff

#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000004
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB   0
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MSB   7
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK  0x000000ff

#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000004
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MSB 11
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000f00

#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000004
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB    12
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MSB    31
#define WBM_RELEASE_RING_TX_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK   0xfffff000

#define WBM_RELEASE_RING_TX_RELEASE_SOURCE_MODULE_OFFSET                            0x00000008
#define WBM_RELEASE_RING_TX_RELEASE_SOURCE_MODULE_LSB                               0
#define WBM_RELEASE_RING_TX_RELEASE_SOURCE_MODULE_MSB                               2
#define WBM_RELEASE_RING_TX_RELEASE_SOURCE_MODULE_MASK                              0x00000007

#define WBM_RELEASE_RING_TX_BUFFER_OR_DESC_TYPE_OFFSET                              0x00000008
#define WBM_RELEASE_RING_TX_BUFFER_OR_DESC_TYPE_LSB                                 3
#define WBM_RELEASE_RING_TX_BUFFER_OR_DESC_TYPE_MSB                                 5
#define WBM_RELEASE_RING_TX_BUFFER_OR_DESC_TYPE_MASK                                0x00000038

#define WBM_RELEASE_RING_TX_RESERVED_2A_OFFSET                                      0x00000008
#define WBM_RELEASE_RING_TX_RESERVED_2A_LSB                                         6
#define WBM_RELEASE_RING_TX_RESERVED_2A_MSB                                         31
#define WBM_RELEASE_RING_TX_RESERVED_2A_MASK                                        0xffffffc0

#define WBM_RELEASE_RING_TX_TQM_STATUS_NUMBER_OFFSET                                0x0000000c
#define WBM_RELEASE_RING_TX_TQM_STATUS_NUMBER_LSB                                   0
#define WBM_RELEASE_RING_TX_TQM_STATUS_NUMBER_MSB                                   31
#define WBM_RELEASE_RING_TX_TQM_STATUS_NUMBER_MASK                                  0xffffffff

#endif
