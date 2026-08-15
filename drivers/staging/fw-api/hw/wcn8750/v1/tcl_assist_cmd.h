/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _TCL_ASSIST_CMD_H_
#define _TCL_ASSIST_CMD_H_

#include "buffer_addr_info.h"
#define NUM_OF_DWORDS_TCL_ASSIST_CMD 16

struct tcl_assist_cmd {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   buffer_addr_info                                          buf_addr_info;
             uint32_t buf_or_ext_desc_type                                    :  1,
                      bank_id                                                 :  6,
                      vdev_id                                                 :  8,
                      data_length                                             : 14,
                      to_fw_tqm                                               :  2,
                      reserved_2a                                             :  1;
             uint32_t reserved_3a                                             : 25,
                      metadata_length                                         :  7;
             uint32_t txpt_classify_info_index                                :  8,
                      txpt_classify_info_sel                                  :  5,
                      txpt_classify_info_override                             :  1,
                      flow_override_enable                                    :  1,
                      flow_select                                             :  1,
                      hlos_tid                                                :  4,
                      hlos_tid_overwrite                                      :  1,
                      tos_tc_value                                            :  8,
                      reserved_4a                                             :  3;
             uint32_t reserved_5a                                             : 16,
                      l3_type                                                 : 16;
             uint32_t l4_protocol                                             :  8,
                      l4_port                                                 : 16,
                      l4_port_type                                            :  1,
                      da_is_bcast_mcast                                       :  1,
                      da_is_bcast                                             :  1,
                      reserved_6a                                             :  5;
             uint32_t ip_address_31_0                                         : 32;
             uint32_t ip_address_63_32                                        : 32;
             uint32_t ip_address_95_64                                        : 32;
             uint32_t ip_address_127_96                                       : 32;
             uint32_t ip_da_or_sa                                             :  1,
                      encap_length_change                                     :  6,
                      encap_length_decrease                                   :  1,
                      encap_length_override                                   :  1,
                      type_or_length                                          :  1,
                      snap_oui_zero_or_f8                                     :  1,
                      snap_oui_not_zero_and_not_f8                            :  1,
                      msdu_color                                              :  2,
                      tx_notify_frame                                         :  3,
                      tqm_no_drop                                             :  1,
                      reserved_11a                                            : 12,
                      l3_checksum_enable                                      :  1,
                      l4_checksum_enable                                      :  1;
             uint32_t buffer_timestamp                                        : 19,
                      buffer_timestamp_valid                                  :  1,
                      s_vlan_tag_present                                      :  1,
                      c_vlan_tag_present                                      :  1,
                      wmac_hdr_len                                            :  7,
                      reserved_12a                                            :  3;
             uint32_t tcl_cmd_number                                          : 32;
             uint32_t reserved_14a                                            : 32;
             uint32_t reserved_15a                                            : 20,
                      ring_id                                                 :  8,
                      looping_count                                           :  4;
#else
             struct   buffer_addr_info                                          buf_addr_info;
             uint32_t reserved_2a                                             :  1,
                      to_fw_tqm                                               :  2,
                      data_length                                             : 14,
                      vdev_id                                                 :  8,
                      bank_id                                                 :  6,
                      buf_or_ext_desc_type                                    :  1;
             uint32_t metadata_length                                         :  7,
                      reserved_3a                                             : 25;
             uint32_t reserved_4a                                             :  3,
                      tos_tc_value                                            :  8,
                      hlos_tid_overwrite                                      :  1,
                      hlos_tid                                                :  4,
                      flow_select                                             :  1,
                      flow_override_enable                                    :  1,
                      txpt_classify_info_override                             :  1,
                      txpt_classify_info_sel                                  :  5,
                      txpt_classify_info_index                                :  8;
             uint32_t l3_type                                                 : 16,
                      reserved_5a                                             : 16;
             uint32_t reserved_6a                                             :  5,
                      da_is_bcast                                             :  1,
                      da_is_bcast_mcast                                       :  1,
                      l4_port_type                                            :  1,
                      l4_port                                                 : 16,
                      l4_protocol                                             :  8;
             uint32_t ip_address_31_0                                         : 32;
             uint32_t ip_address_63_32                                        : 32;
             uint32_t ip_address_95_64                                        : 32;
             uint32_t ip_address_127_96                                       : 32;
             uint32_t l4_checksum_enable                                      :  1,
                      l3_checksum_enable                                      :  1,
                      reserved_11a                                            : 12,
                      tqm_no_drop                                             :  1,
                      tx_notify_frame                                         :  3,
                      msdu_color                                              :  2,
                      snap_oui_not_zero_and_not_f8                            :  1,
                      snap_oui_zero_or_f8                                     :  1,
                      type_or_length                                          :  1,
                      encap_length_override                                   :  1,
                      encap_length_decrease                                   :  1,
                      encap_length_change                                     :  6,
                      ip_da_or_sa                                             :  1;
             uint32_t reserved_12a                                            :  3,
                      wmac_hdr_len                                            :  7,
                      c_vlan_tag_present                                      :  1,
                      s_vlan_tag_present                                      :  1,
                      buffer_timestamp_valid                                  :  1,
                      buffer_timestamp                                        : 19;
             uint32_t tcl_cmd_number                                          : 32;
             uint32_t reserved_14a                                            : 32;
             uint32_t looping_count                                           :  4,
                      ring_id                                                 :  8,
                      reserved_15a                                            : 20;
#endif
};

#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET                        0x00000000
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_31_0_LSB                           0
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_31_0_MSB                           31
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_31_0_MASK                          0xffffffff

#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET                       0x00000004
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_39_32_LSB                          0
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_39_32_MSB                          7
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_BUFFER_ADDR_39_32_MASK                         0x000000ff

#define TCL_ASSIST_CMD_BUF_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET                   0x00000004
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB                      8
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_RETURN_BUFFER_MANAGER_MSB                      11
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK                     0x00000f00

#define TCL_ASSIST_CMD_BUF_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET                        0x00000004
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_SW_BUFFER_COOKIE_LSB                           12
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_SW_BUFFER_COOKIE_MSB                           31
#define TCL_ASSIST_CMD_BUF_ADDR_INFO_SW_BUFFER_COOKIE_MASK                          0xfffff000

#define TCL_ASSIST_CMD_BUF_OR_EXT_DESC_TYPE_OFFSET                                  0x00000008
#define TCL_ASSIST_CMD_BUF_OR_EXT_DESC_TYPE_LSB                                     0
#define TCL_ASSIST_CMD_BUF_OR_EXT_DESC_TYPE_MSB                                     0
#define TCL_ASSIST_CMD_BUF_OR_EXT_DESC_TYPE_MASK                                    0x00000001

#define TCL_ASSIST_CMD_BANK_ID_OFFSET                                               0x00000008
#define TCL_ASSIST_CMD_BANK_ID_LSB                                                  1
#define TCL_ASSIST_CMD_BANK_ID_MSB                                                  6
#define TCL_ASSIST_CMD_BANK_ID_MASK                                                 0x0000007e

#define TCL_ASSIST_CMD_VDEV_ID_OFFSET                                               0x00000008
#define TCL_ASSIST_CMD_VDEV_ID_LSB                                                  7
#define TCL_ASSIST_CMD_VDEV_ID_MSB                                                  14
#define TCL_ASSIST_CMD_VDEV_ID_MASK                                                 0x00007f80

#define TCL_ASSIST_CMD_DATA_LENGTH_OFFSET                                           0x00000008
#define TCL_ASSIST_CMD_DATA_LENGTH_LSB                                              15
#define TCL_ASSIST_CMD_DATA_LENGTH_MSB                                              28
#define TCL_ASSIST_CMD_DATA_LENGTH_MASK                                             0x1fff8000

#define TCL_ASSIST_CMD_TO_FW_TQM_OFFSET                                             0x00000008
#define TCL_ASSIST_CMD_TO_FW_TQM_LSB                                                29
#define TCL_ASSIST_CMD_TO_FW_TQM_MSB                                                30
#define TCL_ASSIST_CMD_TO_FW_TQM_MASK                                               0x60000000

#define TCL_ASSIST_CMD_RESERVED_2A_OFFSET                                           0x00000008
#define TCL_ASSIST_CMD_RESERVED_2A_LSB                                              31
#define TCL_ASSIST_CMD_RESERVED_2A_MSB                                              31
#define TCL_ASSIST_CMD_RESERVED_2A_MASK                                             0x80000000

#define TCL_ASSIST_CMD_RESERVED_3A_OFFSET                                           0x0000000c
#define TCL_ASSIST_CMD_RESERVED_3A_LSB                                              0
#define TCL_ASSIST_CMD_RESERVED_3A_MSB                                              24
#define TCL_ASSIST_CMD_RESERVED_3A_MASK                                             0x01ffffff

#define TCL_ASSIST_CMD_METADATA_LENGTH_OFFSET                                       0x0000000c
#define TCL_ASSIST_CMD_METADATA_LENGTH_LSB                                          25
#define TCL_ASSIST_CMD_METADATA_LENGTH_MSB                                          31
#define TCL_ASSIST_CMD_METADATA_LENGTH_MASK                                         0xfe000000

#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_INDEX_OFFSET                              0x00000010
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_INDEX_LSB                                 0
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_INDEX_MSB                                 7
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_INDEX_MASK                                0x000000ff

#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_SEL_OFFSET                                0x00000010
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_SEL_LSB                                   8
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_SEL_MSB                                   12
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_SEL_MASK                                  0x00001f00

#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_OVERRIDE_OFFSET                           0x00000010
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_OVERRIDE_LSB                              13
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_OVERRIDE_MSB                              13
#define TCL_ASSIST_CMD_TXPT_CLASSIFY_INFO_OVERRIDE_MASK                             0x00002000

#define TCL_ASSIST_CMD_FLOW_OVERRIDE_ENABLE_OFFSET                                  0x00000010
#define TCL_ASSIST_CMD_FLOW_OVERRIDE_ENABLE_LSB                                     14
#define TCL_ASSIST_CMD_FLOW_OVERRIDE_ENABLE_MSB                                     14
#define TCL_ASSIST_CMD_FLOW_OVERRIDE_ENABLE_MASK                                    0x00004000

#define TCL_ASSIST_CMD_FLOW_SELECT_OFFSET                                           0x00000010
#define TCL_ASSIST_CMD_FLOW_SELECT_LSB                                              15
#define TCL_ASSIST_CMD_FLOW_SELECT_MSB                                              15
#define TCL_ASSIST_CMD_FLOW_SELECT_MASK                                             0x00008000

#define TCL_ASSIST_CMD_HLOS_TID_OFFSET                                              0x00000010
#define TCL_ASSIST_CMD_HLOS_TID_LSB                                                 16
#define TCL_ASSIST_CMD_HLOS_TID_MSB                                                 19
#define TCL_ASSIST_CMD_HLOS_TID_MASK                                                0x000f0000

#define TCL_ASSIST_CMD_HLOS_TID_OVERWRITE_OFFSET                                    0x00000010
#define TCL_ASSIST_CMD_HLOS_TID_OVERWRITE_LSB                                       20
#define TCL_ASSIST_CMD_HLOS_TID_OVERWRITE_MSB                                       20
#define TCL_ASSIST_CMD_HLOS_TID_OVERWRITE_MASK                                      0x00100000

#define TCL_ASSIST_CMD_TOS_TC_VALUE_OFFSET                                          0x00000010
#define TCL_ASSIST_CMD_TOS_TC_VALUE_LSB                                             21
#define TCL_ASSIST_CMD_TOS_TC_VALUE_MSB                                             28
#define TCL_ASSIST_CMD_TOS_TC_VALUE_MASK                                            0x1fe00000

#define TCL_ASSIST_CMD_RESERVED_4A_OFFSET                                           0x00000010
#define TCL_ASSIST_CMD_RESERVED_4A_LSB                                              29
#define TCL_ASSIST_CMD_RESERVED_4A_MSB                                              31
#define TCL_ASSIST_CMD_RESERVED_4A_MASK                                             0xe0000000

#define TCL_ASSIST_CMD_RESERVED_5A_OFFSET                                           0x00000014
#define TCL_ASSIST_CMD_RESERVED_5A_LSB                                              0
#define TCL_ASSIST_CMD_RESERVED_5A_MSB                                              15
#define TCL_ASSIST_CMD_RESERVED_5A_MASK                                             0x0000ffff

#define TCL_ASSIST_CMD_L3_TYPE_OFFSET                                               0x00000014
#define TCL_ASSIST_CMD_L3_TYPE_LSB                                                  16
#define TCL_ASSIST_CMD_L3_TYPE_MSB                                                  31
#define TCL_ASSIST_CMD_L3_TYPE_MASK                                                 0xffff0000

#define TCL_ASSIST_CMD_L4_PROTOCOL_OFFSET                                           0x00000018
#define TCL_ASSIST_CMD_L4_PROTOCOL_LSB                                              0
#define TCL_ASSIST_CMD_L4_PROTOCOL_MSB                                              7
#define TCL_ASSIST_CMD_L4_PROTOCOL_MASK                                             0x000000ff

#define TCL_ASSIST_CMD_L4_PORT_OFFSET                                               0x00000018
#define TCL_ASSIST_CMD_L4_PORT_LSB                                                  8
#define TCL_ASSIST_CMD_L4_PORT_MSB                                                  23
#define TCL_ASSIST_CMD_L4_PORT_MASK                                                 0x00ffff00

#define TCL_ASSIST_CMD_L4_PORT_TYPE_OFFSET                                          0x00000018
#define TCL_ASSIST_CMD_L4_PORT_TYPE_LSB                                             24
#define TCL_ASSIST_CMD_L4_PORT_TYPE_MSB                                             24
#define TCL_ASSIST_CMD_L4_PORT_TYPE_MASK                                            0x01000000

#define TCL_ASSIST_CMD_DA_IS_BCAST_MCAST_OFFSET                                     0x00000018
#define TCL_ASSIST_CMD_DA_IS_BCAST_MCAST_LSB                                        25
#define TCL_ASSIST_CMD_DA_IS_BCAST_MCAST_MSB                                        25
#define TCL_ASSIST_CMD_DA_IS_BCAST_MCAST_MASK                                       0x02000000

#define TCL_ASSIST_CMD_DA_IS_BCAST_OFFSET                                           0x00000018
#define TCL_ASSIST_CMD_DA_IS_BCAST_LSB                                              26
#define TCL_ASSIST_CMD_DA_IS_BCAST_MSB                                              26
#define TCL_ASSIST_CMD_DA_IS_BCAST_MASK                                             0x04000000

#define TCL_ASSIST_CMD_RESERVED_6A_OFFSET                                           0x00000018
#define TCL_ASSIST_CMD_RESERVED_6A_LSB                                              27
#define TCL_ASSIST_CMD_RESERVED_6A_MSB                                              31
#define TCL_ASSIST_CMD_RESERVED_6A_MASK                                             0xf8000000

#define TCL_ASSIST_CMD_IP_ADDRESS_31_0_OFFSET                                       0x0000001c
#define TCL_ASSIST_CMD_IP_ADDRESS_31_0_LSB                                          0
#define TCL_ASSIST_CMD_IP_ADDRESS_31_0_MSB                                          31
#define TCL_ASSIST_CMD_IP_ADDRESS_31_0_MASK                                         0xffffffff

#define TCL_ASSIST_CMD_IP_ADDRESS_63_32_OFFSET                                      0x00000020
#define TCL_ASSIST_CMD_IP_ADDRESS_63_32_LSB                                         0
#define TCL_ASSIST_CMD_IP_ADDRESS_63_32_MSB                                         31
#define TCL_ASSIST_CMD_IP_ADDRESS_63_32_MASK                                        0xffffffff

#define TCL_ASSIST_CMD_IP_ADDRESS_95_64_OFFSET                                      0x00000024
#define TCL_ASSIST_CMD_IP_ADDRESS_95_64_LSB                                         0
#define TCL_ASSIST_CMD_IP_ADDRESS_95_64_MSB                                         31
#define TCL_ASSIST_CMD_IP_ADDRESS_95_64_MASK                                        0xffffffff

#define TCL_ASSIST_CMD_IP_ADDRESS_127_96_OFFSET                                     0x00000028
#define TCL_ASSIST_CMD_IP_ADDRESS_127_96_LSB                                        0
#define TCL_ASSIST_CMD_IP_ADDRESS_127_96_MSB                                        31
#define TCL_ASSIST_CMD_IP_ADDRESS_127_96_MASK                                       0xffffffff

#define TCL_ASSIST_CMD_IP_DA_OR_SA_OFFSET                                           0x0000002c
#define TCL_ASSIST_CMD_IP_DA_OR_SA_LSB                                              0
#define TCL_ASSIST_CMD_IP_DA_OR_SA_MSB                                              0
#define TCL_ASSIST_CMD_IP_DA_OR_SA_MASK                                             0x00000001

#define TCL_ASSIST_CMD_ENCAP_LENGTH_CHANGE_OFFSET                                   0x0000002c
#define TCL_ASSIST_CMD_ENCAP_LENGTH_CHANGE_LSB                                      1
#define TCL_ASSIST_CMD_ENCAP_LENGTH_CHANGE_MSB                                      6
#define TCL_ASSIST_CMD_ENCAP_LENGTH_CHANGE_MASK                                     0x0000007e

#define TCL_ASSIST_CMD_ENCAP_LENGTH_DECREASE_OFFSET                                 0x0000002c
#define TCL_ASSIST_CMD_ENCAP_LENGTH_DECREASE_LSB                                    7
#define TCL_ASSIST_CMD_ENCAP_LENGTH_DECREASE_MSB                                    7
#define TCL_ASSIST_CMD_ENCAP_LENGTH_DECREASE_MASK                                   0x00000080

#define TCL_ASSIST_CMD_ENCAP_LENGTH_OVERRIDE_OFFSET                                 0x0000002c
#define TCL_ASSIST_CMD_ENCAP_LENGTH_OVERRIDE_LSB                                    8
#define TCL_ASSIST_CMD_ENCAP_LENGTH_OVERRIDE_MSB                                    8
#define TCL_ASSIST_CMD_ENCAP_LENGTH_OVERRIDE_MASK                                   0x00000100

#define TCL_ASSIST_CMD_TYPE_OR_LENGTH_OFFSET                                        0x0000002c
#define TCL_ASSIST_CMD_TYPE_OR_LENGTH_LSB                                           9
#define TCL_ASSIST_CMD_TYPE_OR_LENGTH_MSB                                           9
#define TCL_ASSIST_CMD_TYPE_OR_LENGTH_MASK                                          0x00000200

#define TCL_ASSIST_CMD_SNAP_OUI_ZERO_OR_F8_OFFSET                                   0x0000002c
#define TCL_ASSIST_CMD_SNAP_OUI_ZERO_OR_F8_LSB                                      10
#define TCL_ASSIST_CMD_SNAP_OUI_ZERO_OR_F8_MSB                                      10
#define TCL_ASSIST_CMD_SNAP_OUI_ZERO_OR_F8_MASK                                     0x00000400

#define TCL_ASSIST_CMD_SNAP_OUI_NOT_ZERO_AND_NOT_F8_OFFSET                          0x0000002c
#define TCL_ASSIST_CMD_SNAP_OUI_NOT_ZERO_AND_NOT_F8_LSB                             11
#define TCL_ASSIST_CMD_SNAP_OUI_NOT_ZERO_AND_NOT_F8_MSB                             11
#define TCL_ASSIST_CMD_SNAP_OUI_NOT_ZERO_AND_NOT_F8_MASK                            0x00000800

#define TCL_ASSIST_CMD_MSDU_COLOR_OFFSET                                            0x0000002c
#define TCL_ASSIST_CMD_MSDU_COLOR_LSB                                               12
#define TCL_ASSIST_CMD_MSDU_COLOR_MSB                                               13
#define TCL_ASSIST_CMD_MSDU_COLOR_MASK                                              0x00003000

#define TCL_ASSIST_CMD_TX_NOTIFY_FRAME_OFFSET                                       0x0000002c
#define TCL_ASSIST_CMD_TX_NOTIFY_FRAME_LSB                                          14
#define TCL_ASSIST_CMD_TX_NOTIFY_FRAME_MSB                                          16
#define TCL_ASSIST_CMD_TX_NOTIFY_FRAME_MASK                                         0x0001c000

#define TCL_ASSIST_CMD_TQM_NO_DROP_OFFSET                                           0x0000002c
#define TCL_ASSIST_CMD_TQM_NO_DROP_LSB                                              17
#define TCL_ASSIST_CMD_TQM_NO_DROP_MSB                                              17
#define TCL_ASSIST_CMD_TQM_NO_DROP_MASK                                             0x00020000

#define TCL_ASSIST_CMD_RESERVED_11A_OFFSET                                          0x0000002c
#define TCL_ASSIST_CMD_RESERVED_11A_LSB                                             18
#define TCL_ASSIST_CMD_RESERVED_11A_MSB                                             29
#define TCL_ASSIST_CMD_RESERVED_11A_MASK                                            0x3ffc0000

#define TCL_ASSIST_CMD_L3_CHECKSUM_ENABLE_OFFSET                                    0x0000002c
#define TCL_ASSIST_CMD_L3_CHECKSUM_ENABLE_LSB                                       30
#define TCL_ASSIST_CMD_L3_CHECKSUM_ENABLE_MSB                                       30
#define TCL_ASSIST_CMD_L3_CHECKSUM_ENABLE_MASK                                      0x40000000

#define TCL_ASSIST_CMD_L4_CHECKSUM_ENABLE_OFFSET                                    0x0000002c
#define TCL_ASSIST_CMD_L4_CHECKSUM_ENABLE_LSB                                       31
#define TCL_ASSIST_CMD_L4_CHECKSUM_ENABLE_MSB                                       31
#define TCL_ASSIST_CMD_L4_CHECKSUM_ENABLE_MASK                                      0x80000000

#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_OFFSET                                      0x00000030
#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_LSB                                         0
#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_MSB                                         18
#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_MASK                                        0x0007ffff

#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_VALID_OFFSET                                0x00000030
#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_VALID_LSB                                   19
#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_VALID_MSB                                   19
#define TCL_ASSIST_CMD_BUFFER_TIMESTAMP_VALID_MASK                                  0x00080000

#define TCL_ASSIST_CMD_S_VLAN_TAG_PRESENT_OFFSET                                    0x00000030
#define TCL_ASSIST_CMD_S_VLAN_TAG_PRESENT_LSB                                       20
#define TCL_ASSIST_CMD_S_VLAN_TAG_PRESENT_MSB                                       20
#define TCL_ASSIST_CMD_S_VLAN_TAG_PRESENT_MASK                                      0x00100000

#define TCL_ASSIST_CMD_C_VLAN_TAG_PRESENT_OFFSET                                    0x00000030
#define TCL_ASSIST_CMD_C_VLAN_TAG_PRESENT_LSB                                       21
#define TCL_ASSIST_CMD_C_VLAN_TAG_PRESENT_MSB                                       21
#define TCL_ASSIST_CMD_C_VLAN_TAG_PRESENT_MASK                                      0x00200000

#define TCL_ASSIST_CMD_WMAC_HDR_LEN_OFFSET                                          0x00000030
#define TCL_ASSIST_CMD_WMAC_HDR_LEN_LSB                                             22
#define TCL_ASSIST_CMD_WMAC_HDR_LEN_MSB                                             28
#define TCL_ASSIST_CMD_WMAC_HDR_LEN_MASK                                            0x1fc00000

#define TCL_ASSIST_CMD_RESERVED_12A_OFFSET                                          0x00000030
#define TCL_ASSIST_CMD_RESERVED_12A_LSB                                             29
#define TCL_ASSIST_CMD_RESERVED_12A_MSB                                             31
#define TCL_ASSIST_CMD_RESERVED_12A_MASK                                            0xe0000000

#define TCL_ASSIST_CMD_TCL_CMD_NUMBER_OFFSET                                        0x00000034
#define TCL_ASSIST_CMD_TCL_CMD_NUMBER_LSB                                           0
#define TCL_ASSIST_CMD_TCL_CMD_NUMBER_MSB                                           31
#define TCL_ASSIST_CMD_TCL_CMD_NUMBER_MASK                                          0xffffffff

#define TCL_ASSIST_CMD_RESERVED_14A_OFFSET                                          0x00000038
#define TCL_ASSIST_CMD_RESERVED_14A_LSB                                             0
#define TCL_ASSIST_CMD_RESERVED_14A_MSB                                             31
#define TCL_ASSIST_CMD_RESERVED_14A_MASK                                            0xffffffff

#define TCL_ASSIST_CMD_RESERVED_15A_OFFSET                                          0x0000003c
#define TCL_ASSIST_CMD_RESERVED_15A_LSB                                             0
#define TCL_ASSIST_CMD_RESERVED_15A_MSB                                             19
#define TCL_ASSIST_CMD_RESERVED_15A_MASK                                            0x000fffff

#define TCL_ASSIST_CMD_RING_ID_OFFSET                                               0x0000003c
#define TCL_ASSIST_CMD_RING_ID_LSB                                                  20
#define TCL_ASSIST_CMD_RING_ID_MSB                                                  27
#define TCL_ASSIST_CMD_RING_ID_MASK                                                 0x0ff00000

#define TCL_ASSIST_CMD_LOOPING_COUNT_OFFSET                                         0x0000003c
#define TCL_ASSIST_CMD_LOOPING_COUNT_LSB                                            28
#define TCL_ASSIST_CMD_LOOPING_COUNT_MSB                                            31
#define TCL_ASSIST_CMD_LOOPING_COUNT_MASK                                           0xf0000000

#endif
