/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */

#ifndef _TLV_HDR_H_
#define _TLV_HDR_H_

#define _TLV_USERID_WIDTH_      6

#define _TLV_MRV_EN_LEN_WIDTH_  9
#define _TLV_MRV_DIS_LEN_WIDTH_ 12

#define _TLV_DATA_WIDTH_        32
#define _TLV_64_DATA_WIDTH_     64
#define _TLV_CDATA_WIDTH_       32
#define _TLV_77_DATA_WIDTH_     77
#define _TLV_CDATA_77_WIDTH_    64

#define _TLV_TAG_WIDTH_         10
#define _TLV_CTAG_WIDTH_        6

struct tlv_mlo_usr_77_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_dst_linkid      :   3,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
           uint64_t             pad_65to76_bit      :   12,
                                tlv_compression     :   1,
                                pad_77to128_bit     :   51;
#else
           uint64_t             pad_77to128_bit     :   51,
                                tlv_compression     :   1,
                                pad_65to76_bit      :   12;
           uint64_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_dst_linkid      :   3,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_mlo_77_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_dst_linkid      :   3,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_reserved_0a     :   6,
                                dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
           uint64_t             pad_65to76_bit      :   12,
                                tlv_compression     :   1,
                                pad_77to128_bit     :   51;
#else
           uint64_t             pad_77to128_bit     :   51,
                                tlv_compression     :   1,
                                pad_65to76_bit      :   12;
           uint64_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1,
                                tlv_reserved_0a     :   6,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_dst_linkid      :   3,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_mac_usr_32_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_;
#else
           uint32_t             tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_mac_32_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_reserved        :   6;
#else
           uint32_t             tlv_reserved        :   6,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_mac_usr_64_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
#else
           uint64_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_mac_64_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_reserved_0a     :   6,
                                dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
#else
           uint64_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1,
                                tlv_reserved_0a     :   6,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_mac_usr_77_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
           uint64_t             pad_65to76_bit      :   12,
                                tlv_compression     :   1,
                                pad_77to128_bit     :   51;
#else
           uint64_t             pad_77to128_bit     :   51,
                                tlv_compression     :   1,
                                pad_65to76_bit      :   12;
           uint64_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_mac_77_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_reserved_0a     :   6,
                                dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
           uint64_t             pad_65to76_bit      :   12,
                                tlv_compression     :   1,
                                pad_77to128_bit     :   51;
#else
           uint64_t             pad_77to128_bit     :   51,
                                tlv_compression     :   1,
                                pad_65to76_bit      :   12;
           uint64_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1,
                                tlv_reserved_0a     :   6,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_usr_c_77_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_ctag            :   _TLV_CTAG_WIDTH_,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_cdata_lower_52  :   52;
           uint64_t             tlv_cdata_upper_12  :   12,
                                tlv_compression     :   1,
                                pad_77to128_bit     :   51;
#else
           uint64_t             pad_77to128_bit     :   51,
                                tlv_compression     :   1,
                                tlv_cdata_upper_12  :   12;
           uint64_t             tlv_cdata_lower_52  :   52,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_ctag            :   _TLV_CTAG_WIDTH_;
#endif
};

struct tlv_mlo_usr_64_tlw32_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_dst_linkid      :   3,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_;
#else
           uint32_t             tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_dst_linkid      :   3,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
#else
           uint32_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1;
#endif
};

struct tlv_mlo_64_tlw32_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_dst_linkid      :   3,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_reserved        :   _TLV_USERID_WIDTH_;
#else
           uint32_t             tlv_reserved        :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_dst_linkid      :   3,
                                tlv_len             :   _TLV_MRV_EN_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
#else
           uint32_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1;
#endif
};

struct tlv_mac_usr_64_tlw32_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_;
#else
           uint32_t             tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
#else
           uint32_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1;
#endif
};

struct tlv_mac_64_tlw32_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_reserved        :   _TLV_USERID_WIDTH_;
#else
           uint32_t             tlv_reserved        :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
#else
           uint32_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1;
#endif
};

struct tlv_usr_c_77_tlw32_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_ctag            :   _TLV_CTAG_WIDTH_,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_cdata_lower_20  :   20;
           uint32_t             tlv_cdata_middle_32 :   32;
           uint32_t             tlv_cdata_upper_12  :   12,
                                tlv_compression     :   1,
                                pad_77to96_bit      :   19;
           uint32_t             pad_96to128_bit     :   32;
#else
           uint32_t             tlv_cdata_lower_20  :   20,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_ctag            :   _TLV_CTAG_WIDTH_;
           uint32_t             tlv_cdata_middle_32 :   32;
           uint32_t             pad_77to96_bit      :   20,
                                tlv_compression     :   1,
                                tlv_cdata_upper_12  :   12;
           uint32_t             pad_96to128_bit     :   32;
#endif
};

struct tlv_usr_32_hdr {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_reserved        :   32;
#else
           uint64_t             tlv_reserved        :   32,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_32_hdr {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_reserved        :   6,
                                pad_32to64_bit      :   32;
#else
           uint64_t             pad_32to64_bit      :   32,
                                tlv_reserved        :   6,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_usr_77_hdr {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_;
           uint32_t             dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
           uint32_t             pad_64to75_bit      :   12,
                                tlv_compression     :   1,
                                pad_77to95_bit      :   19;
#else
           uint32_t             pad_77to95_bit      :   19,
                                tlv_compression     :   1,
                                pad_64to75_bit      :   12;
           uint32_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1;
           uint32_t             tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_77_hdr {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint32_t             tlv_tag             :   _TLV_TAG_WIDTH_,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_src_linkid      :   3,
                                tlv_mrv             :   1,
                                tlv_usrid           :   _TLV_USERID_WIDTH_;
           uint32_t             dso_subband0        :   1,
                                dso_subband1        :   1,
                                dso_subband2        :   1,
                                dso_subband3        :   1,
                                tlv_reserved_1a     :   4,
                                npca_m_prim         :   1,
                                npca_o_prim         :   1,
                                tlv_reserved_1b     :   2,
                                fbw                 :   1,
                                tlv_reserved_1c     :   19;
           uint32_t             pad_64to75_bit      :   12,
                                tlv_compression     :   1,
                                pad_77to96_bit      :   19;
#else
           uint32_t             pad_77to96_bit      :   19,
                                tlv_compression     :   1,
                                pad_64to75_bit      :   12;
           uint32_t             tlv_reserved_1c     :   19,
                                fbw                 :   1,
                                tlv_reserved_1b     :   2,
                                npca_o_prim         :   1,
                                npca_m_prim         :   1,
                                tlv_reserved_1a     :   4,
                                dso_subband3        :   1,
                                dso_subband2        :   1,
                                dso_subband1        :   1,
                                dso_subband0        :   1;
           uint32_t             tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_mrv             :   1,
                                tlv_src_linkid      :   3,
                                tlv_len             :   _TLV_MRV_DIS_LEN_WIDTH_,
                                tlv_tag             :   _TLV_TAG_WIDTH_;
#endif
};

struct tlv_usr_c_44_tlword_t {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
           uint64_t             tlv_ctag            :   _TLV_CTAG_WIDTH_,
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_cdata           :   _TLV_CDATA_WIDTH_,
                                pad_44to64_bit      :   20;
#else
           uint64_t             tlv_cdata_lower_20  :   20,
                                pad_44to64_bit      :   20,
                                tlv_cdata_upper_12  :   12;
                                tlv_usrid           :   _TLV_USERID_WIDTH_,
                                tlv_ctag            :   _TLV_CTAG_WIDTH_,
#endif
};

#endif
