/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _RESPONSE_START_STATUS_H_
#define _RESPONSE_START_STATUS_H_

#define NUM_OF_DWORDS_RESPONSE_START_STATUS 2

#define NUM_OF_QWORDS_RESPONSE_START_STATUS 1

struct response_start_status {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t generated_response                                      :  3,
                      __reserved_g_0012                                                  :  2,
                      trig_response_related                                   :  1,
                      response_sta_count                                      :  7,
                      mba_for_cfp_ba                                          :  1,
                      mba_for_cfp_ack                                         :  1,
                      ects_response_type                                      :  2,
                      eba_response_type                                       :  2,
                      cfp_mba                                                 :  1,
                      mba_for_ll_ack                                          :  1,
                      mba_for_ll_ba                                           :  1,
                      reserved                                                : 10;
             uint32_t phy_ppdu_id                                             : 16,
                      sw_peer_id                                              : 16;
#else
             uint32_t reserved                                                : 10,
                      mba_for_ll_ba                                           :  1,
                      mba_for_ll_ack                                          :  1,
                      cfp_mba                                                 :  1,
                      eba_response_type                                       :  2,
                      ects_response_type                                      :  2,
                      mba_for_cfp_ack                                         :  1,
                      mba_for_cfp_ba                                          :  1,
                      response_sta_count                                      :  7,
                      trig_response_related                                   :  1,
                      __reserved_g_0012                                                  :  2,
                      generated_response                                      :  3;
             uint32_t sw_peer_id                                              : 16,
                      phy_ppdu_id                                             : 16;
#endif
};

#define RESPONSE_START_STATUS_GENERATED_RESPONSE_OFFSET                             0x0000000000000000
#define RESPONSE_START_STATUS_GENERATED_RESPONSE_LSB                                0
#define RESPONSE_START_STATUS_GENERATED_RESPONSE_MSB                                2
#define RESPONSE_START_STATUS_GENERATED_RESPONSE_MASK                               0x0000000000000007

#define RESPONSE_START_STATUS_TRIG_RESPONSE_RELATED_OFFSET                          0x0000000000000000
#define RESPONSE_START_STATUS_TRIG_RESPONSE_RELATED_LSB                             5
#define RESPONSE_START_STATUS_TRIG_RESPONSE_RELATED_MSB                             5
#define RESPONSE_START_STATUS_TRIG_RESPONSE_RELATED_MASK                            0x0000000000000020

#define RESPONSE_START_STATUS_RESPONSE_STA_COUNT_OFFSET                             0x0000000000000000
#define RESPONSE_START_STATUS_RESPONSE_STA_COUNT_LSB                                6
#define RESPONSE_START_STATUS_RESPONSE_STA_COUNT_MSB                                12
#define RESPONSE_START_STATUS_RESPONSE_STA_COUNT_MASK                               0x0000000000001fc0

#define RESPONSE_START_STATUS_MBA_FOR_CFP_BA_OFFSET                                 0x0000000000000000
#define RESPONSE_START_STATUS_MBA_FOR_CFP_BA_LSB                                    13
#define RESPONSE_START_STATUS_MBA_FOR_CFP_BA_MSB                                    13
#define RESPONSE_START_STATUS_MBA_FOR_CFP_BA_MASK                                   0x0000000000002000

#define RESPONSE_START_STATUS_MBA_FOR_CFP_ACK_OFFSET                                0x0000000000000000
#define RESPONSE_START_STATUS_MBA_FOR_CFP_ACK_LSB                                   14
#define RESPONSE_START_STATUS_MBA_FOR_CFP_ACK_MSB                                   14
#define RESPONSE_START_STATUS_MBA_FOR_CFP_ACK_MASK                                  0x0000000000004000

#define RESPONSE_START_STATUS_ECTS_RESPONSE_TYPE_OFFSET                             0x0000000000000000
#define RESPONSE_START_STATUS_ECTS_RESPONSE_TYPE_LSB                                15
#define RESPONSE_START_STATUS_ECTS_RESPONSE_TYPE_MSB                                16
#define RESPONSE_START_STATUS_ECTS_RESPONSE_TYPE_MASK                               0x0000000000018000

#define RESPONSE_START_STATUS_EBA_RESPONSE_TYPE_OFFSET                              0x0000000000000000
#define RESPONSE_START_STATUS_EBA_RESPONSE_TYPE_LSB                                 17
#define RESPONSE_START_STATUS_EBA_RESPONSE_TYPE_MSB                                 18
#define RESPONSE_START_STATUS_EBA_RESPONSE_TYPE_MASK                                0x0000000000060000

#define RESPONSE_START_STATUS_CFP_MBA_OFFSET                                        0x0000000000000000
#define RESPONSE_START_STATUS_CFP_MBA_LSB                                           19
#define RESPONSE_START_STATUS_CFP_MBA_MSB                                           19
#define RESPONSE_START_STATUS_CFP_MBA_MASK                                          0x0000000000080000

#define RESPONSE_START_STATUS_MBA_FOR_LL_ACK_OFFSET                                 0x0000000000000000
#define RESPONSE_START_STATUS_MBA_FOR_LL_ACK_LSB                                    20
#define RESPONSE_START_STATUS_MBA_FOR_LL_ACK_MSB                                    20
#define RESPONSE_START_STATUS_MBA_FOR_LL_ACK_MASK                                   0x0000000000100000

#define RESPONSE_START_STATUS_MBA_FOR_LL_BA_OFFSET                                  0x0000000000000000
#define RESPONSE_START_STATUS_MBA_FOR_LL_BA_LSB                                     21
#define RESPONSE_START_STATUS_MBA_FOR_LL_BA_MSB                                     21
#define RESPONSE_START_STATUS_MBA_FOR_LL_BA_MASK                                    0x0000000000200000

#define RESPONSE_START_STATUS_RESERVED_OFFSET                                       0x0000000000000000
#define RESPONSE_START_STATUS_RESERVED_LSB                                          22
#define RESPONSE_START_STATUS_RESERVED_MSB                                          31
#define RESPONSE_START_STATUS_RESERVED_MASK                                         0x00000000ffc00000

#define RESPONSE_START_STATUS_PHY_PPDU_ID_OFFSET                                    0x0000000000000000
#define RESPONSE_START_STATUS_PHY_PPDU_ID_LSB                                       32
#define RESPONSE_START_STATUS_PHY_PPDU_ID_MSB                                       47
#define RESPONSE_START_STATUS_PHY_PPDU_ID_MASK                                      0x0000ffff00000000

#define RESPONSE_START_STATUS_SW_PEER_ID_OFFSET                                     0x0000000000000000
#define RESPONSE_START_STATUS_SW_PEER_ID_LSB                                        48
#define RESPONSE_START_STATUS_SW_PEER_ID_MSB                                        63
#define RESPONSE_START_STATUS_SW_PEER_ID_MASK                                       0xffff000000000000

#endif
