/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _MACTX_USER_DESC_PER_USER_H_
#define _MACTX_USER_DESC_PER_USER_H_

#define NUM_OF_DWORDS_MACTX_USER_DESC_PER_USER 6

#define NUM_OF_QWORDS_MACTX_USER_DESC_PER_USER 3

struct mactx_user_desc_per_user {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t psdu_length                                             : 24,
                      reserved_0a                                             :  8;
             uint32_t ru_start_index                                          :  8,
                      ru_size                                                 :  4,
                      reserved_1b                                             :  4,
                      ofdma_mu_mimo_enabled                                   :  1,
                      nss                                                     :  3,
                      stream_offset                                           :  3,
                      reserved_1c                                             :  1,
                      mcs                                                     :  5,
                      dcm                                                     :  1,
                      reserved_1d                                             :  2;
             uint32_t fec_type                                                :  1,
                      reserved_2a                                             :  1,
                      qam_diff1                                               :  2,
                      qam_diff2                                               :  2,
                      qam_diff3                                               :  2,
                      user_bf_type                                            :  2,
                      a_factor_ldpc2x                                         :  2,
                      extra_sym_ldpc2x                                        :  1,
                      cw_len_2x                                               :  2,
                      reserved_2b                                             :  1,
                      drop_user_cbf                                           :  1,
                      a_factor_ldpc1x                                         :  2,
                      extra_sym_ldpc1x                                        :  1,
                      cw_len_1x                                               :  2,
                      ldpc1x_used                                             :  1,
                      ldpc2x_used                                             :  1,
                      ldpc_extra_symbol                                       :  1,
                      force_extra_symbol                                      :  1,
                      ldpc_2x_codeword                                        :  1,
                      reserved_2d                                             :  5;
             uint32_t sw_peer_id                                              : 16,
                      per_user_subband_mask                                   : 16;
             uint32_t ldpc_num_avbits                                         : 27,
                      reserved_4a                                             :  5;
             uint32_t num_cw_1x                                               : 16,
                      num_cw_2x                                               : 16;
#else
             uint32_t reserved_0a                                             :  8,
                      psdu_length                                             : 24;
             uint32_t reserved_1d                                             :  2,
                      dcm                                                     :  1,
                      mcs                                                     :  5,
                      reserved_1c                                             :  1,
                      stream_offset                                           :  3,
                      nss                                                     :  3,
                      ofdma_mu_mimo_enabled                                   :  1,
                      reserved_1b                                             :  4,
                      ru_size                                                 :  4,
                      ru_start_index                                          :  8;
             uint32_t reserved_2d                                             :  5,
                      ldpc_2x_codeword                                        :  1,
                      force_extra_symbol                                      :  1,
                      ldpc_extra_symbol                                       :  1,
                      ldpc2x_used                                             :  1,
                      ldpc1x_used                                             :  1,
                      cw_len_1x                                               :  2,
                      extra_sym_ldpc1x                                        :  1,
                      a_factor_ldpc1x                                         :  2,
                      drop_user_cbf                                           :  1,
                      reserved_2b                                             :  1,
                      cw_len_2x                                               :  2,
                      extra_sym_ldpc2x                                        :  1,
                      a_factor_ldpc2x                                         :  2,
                      user_bf_type                                            :  2,
                      qam_diff3                                               :  2,
                      qam_diff2                                               :  2,
                      qam_diff1                                               :  2,
                      reserved_2a                                             :  1,
                      fec_type                                                :  1;
             uint32_t per_user_subband_mask                                   : 16,
                      sw_peer_id                                              : 16;
             uint32_t reserved_4a                                             :  5,
                      ldpc_num_avbits                                         : 27;
             uint32_t num_cw_2x                                               : 16,
                      num_cw_1x                                               : 16;
#endif
};

#define MACTX_USER_DESC_PER_USER_PSDU_LENGTH_OFFSET                                 0x0000000000000000
#define MACTX_USER_DESC_PER_USER_PSDU_LENGTH_LSB                                    0
#define MACTX_USER_DESC_PER_USER_PSDU_LENGTH_MSB                                    23
#define MACTX_USER_DESC_PER_USER_PSDU_LENGTH_MASK                                   0x0000000000ffffff

#define MACTX_USER_DESC_PER_USER_RESERVED_0A_OFFSET                                 0x0000000000000000
#define MACTX_USER_DESC_PER_USER_RESERVED_0A_LSB                                    24
#define MACTX_USER_DESC_PER_USER_RESERVED_0A_MSB                                    31
#define MACTX_USER_DESC_PER_USER_RESERVED_0A_MASK                                   0x00000000ff000000

#define MACTX_USER_DESC_PER_USER_RU_START_INDEX_OFFSET                              0x0000000000000000
#define MACTX_USER_DESC_PER_USER_RU_START_INDEX_LSB                                 32
#define MACTX_USER_DESC_PER_USER_RU_START_INDEX_MSB                                 39
#define MACTX_USER_DESC_PER_USER_RU_START_INDEX_MASK                                0x000000ff00000000

#define MACTX_USER_DESC_PER_USER_RU_SIZE_OFFSET                                     0x0000000000000000
#define MACTX_USER_DESC_PER_USER_RU_SIZE_LSB                                        40
#define MACTX_USER_DESC_PER_USER_RU_SIZE_MSB                                        43
#define MACTX_USER_DESC_PER_USER_RU_SIZE_MASK                                       0x00000f0000000000

#define MACTX_USER_DESC_PER_USER_RESERVED_1B_OFFSET                                 0x0000000000000000
#define MACTX_USER_DESC_PER_USER_RESERVED_1B_LSB                                    44
#define MACTX_USER_DESC_PER_USER_RESERVED_1B_MSB                                    47
#define MACTX_USER_DESC_PER_USER_RESERVED_1B_MASK                                   0x0000f00000000000

#define MACTX_USER_DESC_PER_USER_OFDMA_MU_MIMO_ENABLED_OFFSET                       0x0000000000000000
#define MACTX_USER_DESC_PER_USER_OFDMA_MU_MIMO_ENABLED_LSB                          48
#define MACTX_USER_DESC_PER_USER_OFDMA_MU_MIMO_ENABLED_MSB                          48
#define MACTX_USER_DESC_PER_USER_OFDMA_MU_MIMO_ENABLED_MASK                         0x0001000000000000

#define MACTX_USER_DESC_PER_USER_NSS_OFFSET                                         0x0000000000000000
#define MACTX_USER_DESC_PER_USER_NSS_LSB                                            49
#define MACTX_USER_DESC_PER_USER_NSS_MSB                                            51
#define MACTX_USER_DESC_PER_USER_NSS_MASK                                           0x000e000000000000

#define MACTX_USER_DESC_PER_USER_STREAM_OFFSET_OFFSET                               0x0000000000000000
#define MACTX_USER_DESC_PER_USER_STREAM_OFFSET_LSB                                  52
#define MACTX_USER_DESC_PER_USER_STREAM_OFFSET_MSB                                  54
#define MACTX_USER_DESC_PER_USER_STREAM_OFFSET_MASK                                 0x0070000000000000

#define MACTX_USER_DESC_PER_USER_RESERVED_1C_OFFSET                                 0x0000000000000000
#define MACTX_USER_DESC_PER_USER_RESERVED_1C_LSB                                    55
#define MACTX_USER_DESC_PER_USER_RESERVED_1C_MSB                                    55
#define MACTX_USER_DESC_PER_USER_RESERVED_1C_MASK                                   0x0080000000000000

#define MACTX_USER_DESC_PER_USER_MCS_OFFSET                                         0x0000000000000000
#define MACTX_USER_DESC_PER_USER_MCS_LSB                                            56
#define MACTX_USER_DESC_PER_USER_MCS_MSB                                            60
#define MACTX_USER_DESC_PER_USER_MCS_MASK                                           0x1f00000000000000

#define MACTX_USER_DESC_PER_USER_DCM_OFFSET                                         0x0000000000000000
#define MACTX_USER_DESC_PER_USER_DCM_LSB                                            61
#define MACTX_USER_DESC_PER_USER_DCM_MSB                                            61
#define MACTX_USER_DESC_PER_USER_DCM_MASK                                           0x2000000000000000

#define MACTX_USER_DESC_PER_USER_RESERVED_1D_OFFSET                                 0x0000000000000000
#define MACTX_USER_DESC_PER_USER_RESERVED_1D_LSB                                    62
#define MACTX_USER_DESC_PER_USER_RESERVED_1D_MSB                                    63
#define MACTX_USER_DESC_PER_USER_RESERVED_1D_MASK                                   0xc000000000000000

#define MACTX_USER_DESC_PER_USER_FEC_TYPE_OFFSET                                    0x0000000000000008
#define MACTX_USER_DESC_PER_USER_FEC_TYPE_LSB                                       0
#define MACTX_USER_DESC_PER_USER_FEC_TYPE_MSB                                       0
#define MACTX_USER_DESC_PER_USER_FEC_TYPE_MASK                                      0x0000000000000001

#define MACTX_USER_DESC_PER_USER_RESERVED_2A_OFFSET                                 0x0000000000000008
#define MACTX_USER_DESC_PER_USER_RESERVED_2A_LSB                                    1
#define MACTX_USER_DESC_PER_USER_RESERVED_2A_MSB                                    1
#define MACTX_USER_DESC_PER_USER_RESERVED_2A_MASK                                   0x0000000000000002

#define MACTX_USER_DESC_PER_USER_QAM_DIFF1_OFFSET                                   0x0000000000000008
#define MACTX_USER_DESC_PER_USER_QAM_DIFF1_LSB                                      2
#define MACTX_USER_DESC_PER_USER_QAM_DIFF1_MSB                                      3
#define MACTX_USER_DESC_PER_USER_QAM_DIFF1_MASK                                     0x000000000000000c

#define MACTX_USER_DESC_PER_USER_QAM_DIFF2_OFFSET                                   0x0000000000000008
#define MACTX_USER_DESC_PER_USER_QAM_DIFF2_LSB                                      4
#define MACTX_USER_DESC_PER_USER_QAM_DIFF2_MSB                                      5
#define MACTX_USER_DESC_PER_USER_QAM_DIFF2_MASK                                     0x0000000000000030

#define MACTX_USER_DESC_PER_USER_QAM_DIFF3_OFFSET                                   0x0000000000000008
#define MACTX_USER_DESC_PER_USER_QAM_DIFF3_LSB                                      6
#define MACTX_USER_DESC_PER_USER_QAM_DIFF3_MSB                                      7
#define MACTX_USER_DESC_PER_USER_QAM_DIFF3_MASK                                     0x00000000000000c0

#define MACTX_USER_DESC_PER_USER_USER_BF_TYPE_OFFSET                                0x0000000000000008
#define MACTX_USER_DESC_PER_USER_USER_BF_TYPE_LSB                                   8
#define MACTX_USER_DESC_PER_USER_USER_BF_TYPE_MSB                                   9
#define MACTX_USER_DESC_PER_USER_USER_BF_TYPE_MASK                                  0x0000000000000300

#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC2X_OFFSET                             0x0000000000000008
#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC2X_LSB                                10
#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC2X_MSB                                11
#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC2X_MASK                               0x0000000000000c00

#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC2X_OFFSET                            0x0000000000000008
#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC2X_LSB                               12
#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC2X_MSB                               12
#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC2X_MASK                              0x0000000000001000

#define MACTX_USER_DESC_PER_USER_CW_LEN_2X_OFFSET                                   0x0000000000000008
#define MACTX_USER_DESC_PER_USER_CW_LEN_2X_LSB                                      13
#define MACTX_USER_DESC_PER_USER_CW_LEN_2X_MSB                                      14
#define MACTX_USER_DESC_PER_USER_CW_LEN_2X_MASK                                     0x0000000000006000

#define MACTX_USER_DESC_PER_USER_RESERVED_2B_OFFSET                                 0x0000000000000008
#define MACTX_USER_DESC_PER_USER_RESERVED_2B_LSB                                    15
#define MACTX_USER_DESC_PER_USER_RESERVED_2B_MSB                                    15
#define MACTX_USER_DESC_PER_USER_RESERVED_2B_MASK                                   0x0000000000008000

#define MACTX_USER_DESC_PER_USER_DROP_USER_CBF_OFFSET                               0x0000000000000008
#define MACTX_USER_DESC_PER_USER_DROP_USER_CBF_LSB                                  16
#define MACTX_USER_DESC_PER_USER_DROP_USER_CBF_MSB                                  16
#define MACTX_USER_DESC_PER_USER_DROP_USER_CBF_MASK                                 0x0000000000010000

#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC1X_OFFSET                             0x0000000000000008
#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC1X_LSB                                17
#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC1X_MSB                                18
#define MACTX_USER_DESC_PER_USER_A_FACTOR_LDPC1X_MASK                               0x0000000000060000

#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC1X_OFFSET                            0x0000000000000008
#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC1X_LSB                               19
#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC1X_MSB                               19
#define MACTX_USER_DESC_PER_USER_EXTRA_SYM_LDPC1X_MASK                              0x0000000000080000

#define MACTX_USER_DESC_PER_USER_CW_LEN_1X_OFFSET                                   0x0000000000000008
#define MACTX_USER_DESC_PER_USER_CW_LEN_1X_LSB                                      20
#define MACTX_USER_DESC_PER_USER_CW_LEN_1X_MSB                                      21
#define MACTX_USER_DESC_PER_USER_CW_LEN_1X_MASK                                     0x0000000000300000

#define MACTX_USER_DESC_PER_USER_LDPC1X_USED_OFFSET                                 0x0000000000000008
#define MACTX_USER_DESC_PER_USER_LDPC1X_USED_LSB                                    22
#define MACTX_USER_DESC_PER_USER_LDPC1X_USED_MSB                                    22
#define MACTX_USER_DESC_PER_USER_LDPC1X_USED_MASK                                   0x0000000000400000

#define MACTX_USER_DESC_PER_USER_LDPC2X_USED_OFFSET                                 0x0000000000000008
#define MACTX_USER_DESC_PER_USER_LDPC2X_USED_LSB                                    23
#define MACTX_USER_DESC_PER_USER_LDPC2X_USED_MSB                                    23
#define MACTX_USER_DESC_PER_USER_LDPC2X_USED_MASK                                   0x0000000000800000

#define MACTX_USER_DESC_PER_USER_LDPC_EXTRA_SYMBOL_OFFSET                           0x0000000000000008
#define MACTX_USER_DESC_PER_USER_LDPC_EXTRA_SYMBOL_LSB                              24
#define MACTX_USER_DESC_PER_USER_LDPC_EXTRA_SYMBOL_MSB                              24
#define MACTX_USER_DESC_PER_USER_LDPC_EXTRA_SYMBOL_MASK                             0x0000000001000000

#define MACTX_USER_DESC_PER_USER_FORCE_EXTRA_SYMBOL_OFFSET                          0x0000000000000008
#define MACTX_USER_DESC_PER_USER_FORCE_EXTRA_SYMBOL_LSB                             25
#define MACTX_USER_DESC_PER_USER_FORCE_EXTRA_SYMBOL_MSB                             25
#define MACTX_USER_DESC_PER_USER_FORCE_EXTRA_SYMBOL_MASK                            0x0000000002000000

#define MACTX_USER_DESC_PER_USER_LDPC_2X_CODEWORD_OFFSET                            0x0000000000000008
#define MACTX_USER_DESC_PER_USER_LDPC_2X_CODEWORD_LSB                               26
#define MACTX_USER_DESC_PER_USER_LDPC_2X_CODEWORD_MSB                               26
#define MACTX_USER_DESC_PER_USER_LDPC_2X_CODEWORD_MASK                              0x0000000004000000

#define MACTX_USER_DESC_PER_USER_RESERVED_2D_OFFSET                                 0x0000000000000008
#define MACTX_USER_DESC_PER_USER_RESERVED_2D_LSB                                    27
#define MACTX_USER_DESC_PER_USER_RESERVED_2D_MSB                                    31
#define MACTX_USER_DESC_PER_USER_RESERVED_2D_MASK                                   0x00000000f8000000

#define MACTX_USER_DESC_PER_USER_SW_PEER_ID_OFFSET                                  0x0000000000000008
#define MACTX_USER_DESC_PER_USER_SW_PEER_ID_LSB                                     32
#define MACTX_USER_DESC_PER_USER_SW_PEER_ID_MSB                                     47
#define MACTX_USER_DESC_PER_USER_SW_PEER_ID_MASK                                    0x0000ffff00000000

#define MACTX_USER_DESC_PER_USER_PER_USER_SUBBAND_MASK_OFFSET                       0x0000000000000008
#define MACTX_USER_DESC_PER_USER_PER_USER_SUBBAND_MASK_LSB                          48
#define MACTX_USER_DESC_PER_USER_PER_USER_SUBBAND_MASK_MSB                          63
#define MACTX_USER_DESC_PER_USER_PER_USER_SUBBAND_MASK_MASK                         0xffff000000000000

#define MACTX_USER_DESC_PER_USER_LDPC_NUM_AVBITS_OFFSET                             0x0000000000000010
#define MACTX_USER_DESC_PER_USER_LDPC_NUM_AVBITS_LSB                                0
#define MACTX_USER_DESC_PER_USER_LDPC_NUM_AVBITS_MSB                                26
#define MACTX_USER_DESC_PER_USER_LDPC_NUM_AVBITS_MASK                               0x0000000007ffffff

#define MACTX_USER_DESC_PER_USER_RESERVED_4A_OFFSET                                 0x0000000000000010
#define MACTX_USER_DESC_PER_USER_RESERVED_4A_LSB                                    27
#define MACTX_USER_DESC_PER_USER_RESERVED_4A_MSB                                    31
#define MACTX_USER_DESC_PER_USER_RESERVED_4A_MASK                                   0x00000000f8000000

#define MACTX_USER_DESC_PER_USER_NUM_CW_1X_OFFSET                                   0x0000000000000010
#define MACTX_USER_DESC_PER_USER_NUM_CW_1X_LSB                                      32
#define MACTX_USER_DESC_PER_USER_NUM_CW_1X_MSB                                      47
#define MACTX_USER_DESC_PER_USER_NUM_CW_1X_MASK                                     0x0000ffff00000000

#define MACTX_USER_DESC_PER_USER_NUM_CW_2X_OFFSET                                   0x0000000000000010
#define MACTX_USER_DESC_PER_USER_NUM_CW_2X_LSB                                      48
#define MACTX_USER_DESC_PER_USER_NUM_CW_2X_MSB                                      63
#define MACTX_USER_DESC_PER_USER_NUM_CW_2X_MASK                                     0xffff000000000000

#endif
