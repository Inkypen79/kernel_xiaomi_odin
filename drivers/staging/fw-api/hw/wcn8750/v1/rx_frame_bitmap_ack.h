/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _RX_FRAME_BITMAP_ACK_H_
#define _RX_FRAME_BITMAP_ACK_H_

#define NUM_OF_DWORDS_RX_FRAME_BITMAP_ACK 14

#define NUM_OF_QWORDS_RX_FRAME_BITMAP_ACK 7

struct rx_frame_bitmap_ack {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t no_bitmap_available                                     :  1,
                      explicit_ack                                            :  1,
                      explict_ack_type                                        :  3,
                      ba_bitmap_size                                          :  2,
                      gen_mlo_notification                                    :  1,
                      reserved_0a                                             :  2,
                      ba_tid                                                  :  4,
                      sta_full_aid                                            : 13,
                      reserved_0b                                             :  5;
             uint32_t mlo_sta_id                                              : 10,
                      ba_size_1024_allowed                                    :  1,
                      ba_size_512_allowed                                     :  1,
                      ba_size_256_allowed                                     :  1,
                      ba_size_128_allowed                                     :  1,
                      ba_size_64_allowed                                      :  1,
                      ba_size_32_allowed                                      :  1,
                      reserved_1a                                             : 16;
             uint32_t addr1_31_0                                              : 32;
             uint32_t addr1_47_32                                             : 16,
                      addr2_15_0                                              : 16;
             uint32_t addr2_47_16                                             : 32;
             uint32_t ba_ts_ctrl                                              : 16,
                      ba_ts_seq                                               : 16;
             uint32_t ba_ts_bitmap_31_0                                       : 32;
             uint32_t ba_ts_bitmap_63_32                                      : 32;
             uint32_t ba_ts_bitmap_95_64                                      : 32;
             uint32_t ba_ts_bitmap_127_96                                     : 32;
             uint32_t ba_ts_bitmap_159_128                                    : 32;
             uint32_t ba_ts_bitmap_191_160                                    : 32;
             uint32_t ba_ts_bitmap_223_192                                    : 32;
             uint32_t ba_ts_bitmap_255_224                                    : 32;
#else
             uint32_t reserved_0b                                             :  5,
                      sta_full_aid                                            : 13,
                      ba_tid                                                  :  4,
                      reserved_0a                                             :  2,
                      gen_mlo_notification                                    :  1,
                      ba_bitmap_size                                          :  2,
                      explict_ack_type                                        :  3,
                      explicit_ack                                            :  1,
                      no_bitmap_available                                     :  1;
             uint32_t reserved_1a                                             : 16,
                      ba_size_32_allowed                                      :  1,
                      ba_size_64_allowed                                      :  1,
                      ba_size_128_allowed                                     :  1,
                      ba_size_256_allowed                                     :  1,
                      ba_size_512_allowed                                     :  1,
                      ba_size_1024_allowed                                    :  1,
                      mlo_sta_id                                              : 10;
             uint32_t addr1_31_0                                              : 32;
             uint32_t addr2_15_0                                              : 16,
                      addr1_47_32                                             : 16;
             uint32_t addr2_47_16                                             : 32;
             uint32_t ba_ts_seq                                               : 16,
                      ba_ts_ctrl                                              : 16;
             uint32_t ba_ts_bitmap_31_0                                       : 32;
             uint32_t ba_ts_bitmap_63_32                                      : 32;
             uint32_t ba_ts_bitmap_95_64                                      : 32;
             uint32_t ba_ts_bitmap_127_96                                     : 32;
             uint32_t ba_ts_bitmap_159_128                                    : 32;
             uint32_t ba_ts_bitmap_191_160                                    : 32;
             uint32_t ba_ts_bitmap_223_192                                    : 32;
             uint32_t ba_ts_bitmap_255_224                                    : 32;
#endif
};

#define RX_FRAME_BITMAP_ACK_NO_BITMAP_AVAILABLE_OFFSET                              0x0000000000000000
#define RX_FRAME_BITMAP_ACK_NO_BITMAP_AVAILABLE_LSB                                 0
#define RX_FRAME_BITMAP_ACK_NO_BITMAP_AVAILABLE_MSB                                 0
#define RX_FRAME_BITMAP_ACK_NO_BITMAP_AVAILABLE_MASK                                0x0000000000000001

#define RX_FRAME_BITMAP_ACK_EXPLICIT_ACK_OFFSET                                     0x0000000000000000
#define RX_FRAME_BITMAP_ACK_EXPLICIT_ACK_LSB                                        1
#define RX_FRAME_BITMAP_ACK_EXPLICIT_ACK_MSB                                        1
#define RX_FRAME_BITMAP_ACK_EXPLICIT_ACK_MASK                                       0x0000000000000002

#define RX_FRAME_BITMAP_ACK_EXPLICT_ACK_TYPE_OFFSET                                 0x0000000000000000
#define RX_FRAME_BITMAP_ACK_EXPLICT_ACK_TYPE_LSB                                    2
#define RX_FRAME_BITMAP_ACK_EXPLICT_ACK_TYPE_MSB                                    4
#define RX_FRAME_BITMAP_ACK_EXPLICT_ACK_TYPE_MASK                                   0x000000000000001c

#define RX_FRAME_BITMAP_ACK_BA_BITMAP_SIZE_OFFSET                                   0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_BITMAP_SIZE_LSB                                      5
#define RX_FRAME_BITMAP_ACK_BA_BITMAP_SIZE_MSB                                      6
#define RX_FRAME_BITMAP_ACK_BA_BITMAP_SIZE_MASK                                     0x0000000000000060

#define RX_FRAME_BITMAP_ACK_GEN_MLO_NOTIFICATION_OFFSET                             0x0000000000000000
#define RX_FRAME_BITMAP_ACK_GEN_MLO_NOTIFICATION_LSB                                7
#define RX_FRAME_BITMAP_ACK_GEN_MLO_NOTIFICATION_MSB                                7
#define RX_FRAME_BITMAP_ACK_GEN_MLO_NOTIFICATION_MASK                               0x0000000000000080

#define RX_FRAME_BITMAP_ACK_RESERVED_0A_OFFSET                                      0x0000000000000000
#define RX_FRAME_BITMAP_ACK_RESERVED_0A_LSB                                         8
#define RX_FRAME_BITMAP_ACK_RESERVED_0A_MSB                                         9
#define RX_FRAME_BITMAP_ACK_RESERVED_0A_MASK                                        0x0000000000000300

#define RX_FRAME_BITMAP_ACK_BA_TID_OFFSET                                           0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_TID_LSB                                              10
#define RX_FRAME_BITMAP_ACK_BA_TID_MSB                                              13
#define RX_FRAME_BITMAP_ACK_BA_TID_MASK                                             0x0000000000003c00

#define RX_FRAME_BITMAP_ACK_STA_FULL_AID_OFFSET                                     0x0000000000000000
#define RX_FRAME_BITMAP_ACK_STA_FULL_AID_LSB                                        14
#define RX_FRAME_BITMAP_ACK_STA_FULL_AID_MSB                                        26
#define RX_FRAME_BITMAP_ACK_STA_FULL_AID_MASK                                       0x0000000007ffc000

#define RX_FRAME_BITMAP_ACK_RESERVED_0B_OFFSET                                      0x0000000000000000
#define RX_FRAME_BITMAP_ACK_RESERVED_0B_LSB                                         27
#define RX_FRAME_BITMAP_ACK_RESERVED_0B_MSB                                         31
#define RX_FRAME_BITMAP_ACK_RESERVED_0B_MASK                                        0x00000000f8000000

#define RX_FRAME_BITMAP_ACK_MLO_STA_ID_OFFSET                                       0x0000000000000000
#define RX_FRAME_BITMAP_ACK_MLO_STA_ID_LSB                                          32
#define RX_FRAME_BITMAP_ACK_MLO_STA_ID_MSB                                          41
#define RX_FRAME_BITMAP_ACK_MLO_STA_ID_MASK                                         0x000003ff00000000

#define RX_FRAME_BITMAP_ACK_BA_SIZE_1024_ALLOWED_OFFSET                             0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_SIZE_1024_ALLOWED_LSB                                42
#define RX_FRAME_BITMAP_ACK_BA_SIZE_1024_ALLOWED_MSB                                42
#define RX_FRAME_BITMAP_ACK_BA_SIZE_1024_ALLOWED_MASK                               0x0000040000000000

#define RX_FRAME_BITMAP_ACK_BA_SIZE_512_ALLOWED_OFFSET                              0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_SIZE_512_ALLOWED_LSB                                 43
#define RX_FRAME_BITMAP_ACK_BA_SIZE_512_ALLOWED_MSB                                 43
#define RX_FRAME_BITMAP_ACK_BA_SIZE_512_ALLOWED_MASK                                0x0000080000000000

#define RX_FRAME_BITMAP_ACK_BA_SIZE_256_ALLOWED_OFFSET                              0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_SIZE_256_ALLOWED_LSB                                 44
#define RX_FRAME_BITMAP_ACK_BA_SIZE_256_ALLOWED_MSB                                 44
#define RX_FRAME_BITMAP_ACK_BA_SIZE_256_ALLOWED_MASK                                0x0000100000000000

#define RX_FRAME_BITMAP_ACK_BA_SIZE_128_ALLOWED_OFFSET                              0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_SIZE_128_ALLOWED_LSB                                 45
#define RX_FRAME_BITMAP_ACK_BA_SIZE_128_ALLOWED_MSB                                 45
#define RX_FRAME_BITMAP_ACK_BA_SIZE_128_ALLOWED_MASK                                0x0000200000000000

#define RX_FRAME_BITMAP_ACK_BA_SIZE_64_ALLOWED_OFFSET                               0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_SIZE_64_ALLOWED_LSB                                  46
#define RX_FRAME_BITMAP_ACK_BA_SIZE_64_ALLOWED_MSB                                  46
#define RX_FRAME_BITMAP_ACK_BA_SIZE_64_ALLOWED_MASK                                 0x0000400000000000

#define RX_FRAME_BITMAP_ACK_BA_SIZE_32_ALLOWED_OFFSET                               0x0000000000000000
#define RX_FRAME_BITMAP_ACK_BA_SIZE_32_ALLOWED_LSB                                  47
#define RX_FRAME_BITMAP_ACK_BA_SIZE_32_ALLOWED_MSB                                  47
#define RX_FRAME_BITMAP_ACK_BA_SIZE_32_ALLOWED_MASK                                 0x0000800000000000

#define RX_FRAME_BITMAP_ACK_RESERVED_1A_OFFSET                                      0x0000000000000000
#define RX_FRAME_BITMAP_ACK_RESERVED_1A_LSB                                         48
#define RX_FRAME_BITMAP_ACK_RESERVED_1A_MSB                                         63
#define RX_FRAME_BITMAP_ACK_RESERVED_1A_MASK                                        0xffff000000000000

#define RX_FRAME_BITMAP_ACK_ADDR1_31_0_OFFSET                                       0x0000000000000008
#define RX_FRAME_BITMAP_ACK_ADDR1_31_0_LSB                                          0
#define RX_FRAME_BITMAP_ACK_ADDR1_31_0_MSB                                          31
#define RX_FRAME_BITMAP_ACK_ADDR1_31_0_MASK                                         0x00000000ffffffff

#define RX_FRAME_BITMAP_ACK_ADDR1_47_32_OFFSET                                      0x0000000000000008
#define RX_FRAME_BITMAP_ACK_ADDR1_47_32_LSB                                         32
#define RX_FRAME_BITMAP_ACK_ADDR1_47_32_MSB                                         47
#define RX_FRAME_BITMAP_ACK_ADDR1_47_32_MASK                                        0x0000ffff00000000

#define RX_FRAME_BITMAP_ACK_ADDR2_15_0_OFFSET                                       0x0000000000000008
#define RX_FRAME_BITMAP_ACK_ADDR2_15_0_LSB                                          48
#define RX_FRAME_BITMAP_ACK_ADDR2_15_0_MSB                                          63
#define RX_FRAME_BITMAP_ACK_ADDR2_15_0_MASK                                         0xffff000000000000

#define RX_FRAME_BITMAP_ACK_ADDR2_47_16_OFFSET                                      0x0000000000000010
#define RX_FRAME_BITMAP_ACK_ADDR2_47_16_LSB                                         0
#define RX_FRAME_BITMAP_ACK_ADDR2_47_16_MSB                                         31
#define RX_FRAME_BITMAP_ACK_ADDR2_47_16_MASK                                        0x00000000ffffffff

#define RX_FRAME_BITMAP_ACK_BA_TS_CTRL_OFFSET                                       0x0000000000000010
#define RX_FRAME_BITMAP_ACK_BA_TS_CTRL_LSB                                          32
#define RX_FRAME_BITMAP_ACK_BA_TS_CTRL_MSB                                          47
#define RX_FRAME_BITMAP_ACK_BA_TS_CTRL_MASK                                         0x0000ffff00000000

#define RX_FRAME_BITMAP_ACK_BA_TS_SEQ_OFFSET                                        0x0000000000000010
#define RX_FRAME_BITMAP_ACK_BA_TS_SEQ_LSB                                           48
#define RX_FRAME_BITMAP_ACK_BA_TS_SEQ_MSB                                           63
#define RX_FRAME_BITMAP_ACK_BA_TS_SEQ_MASK                                          0xffff000000000000

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_31_0_OFFSET                                0x0000000000000018
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_31_0_LSB                                   0
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_31_0_MSB                                   31
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_31_0_MASK                                  0x00000000ffffffff

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_63_32_OFFSET                               0x0000000000000018
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_63_32_LSB                                  32
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_63_32_MSB                                  63
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_63_32_MASK                                 0xffffffff00000000

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_95_64_OFFSET                               0x0000000000000020
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_95_64_LSB                                  0
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_95_64_MSB                                  31
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_95_64_MASK                                 0x00000000ffffffff

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_127_96_OFFSET                              0x0000000000000020
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_127_96_LSB                                 32
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_127_96_MSB                                 63
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_127_96_MASK                                0xffffffff00000000

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_159_128_OFFSET                             0x0000000000000028
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_159_128_LSB                                0
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_159_128_MSB                                31
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_159_128_MASK                               0x00000000ffffffff

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_191_160_OFFSET                             0x0000000000000028
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_191_160_LSB                                32
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_191_160_MSB                                63
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_191_160_MASK                               0xffffffff00000000

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_223_192_OFFSET                             0x0000000000000030
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_223_192_LSB                                0
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_223_192_MSB                                31
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_223_192_MASK                               0x00000000ffffffff

#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_255_224_OFFSET                             0x0000000000000030
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_255_224_LSB                                32
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_255_224_MSB                                63
#define RX_FRAME_BITMAP_ACK_BA_TS_BITMAP_255_224_MASK                               0xffffffff00000000

#endif
