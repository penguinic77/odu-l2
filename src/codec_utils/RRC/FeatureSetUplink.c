/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "FeatureSetUplink.h"

#include "SRS-TxSwitch.h"
#include "SRS-Resources.h"
#include "CSI-ReportFramework.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_featureSetListPerUplinkCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_featureSetListPerUplinkCC_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_featureSetListPerUplinkCC_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scalingFactor_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scalingFactor_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_crossCarrierScheduling_OtherSCS_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_crossCarrierScheduling_OtherSCS_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_searchSpaceSharingCA_UL_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_searchSpaceSharingCA_UL_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_twoPUCCH_Group_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_twoPUCCH_Group_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dynamicSwitchSUL_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dynamicSwitchSUL_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_simultaneousTxSUL_NonSUL_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_simultaneousTxSUL_NonSUL_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_15kHz_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_15kHz_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_30kHz_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_30kHz_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_60kHz_constr_30 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_60kHz_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_120kHz_constr_34 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_120kHz_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_featureSetListPerUplinkCC_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_featureSetListPerUplinkCC_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_featureSetListPerUplinkCC_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_FeatureSetUplinkPerCC_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetListPerUplinkCC_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetListPerUplinkCC_specs_2 = {
	sizeof(struct FeatureSetUplink__featureSetListPerUplinkCC),
	offsetof(struct FeatureSetUplink__featureSetListPerUplinkCC, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetListPerUplinkCC_2 = {
	"featureSetListPerUplinkCC",
	"featureSetListPerUplinkCC",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetListPerUplinkCC_tags_2,
	sizeof(asn_DEF_featureSetListPerUplinkCC_tags_2)
		/sizeof(asn_DEF_featureSetListPerUplinkCC_tags_2[0]) - 1, /* 1 */
	asn_DEF_featureSetListPerUplinkCC_tags_2,	/* Same as above */
	sizeof(asn_DEF_featureSetListPerUplinkCC_tags_2)
		/sizeof(asn_DEF_featureSetListPerUplinkCC_tags_2[0]), /* 2 */
	{ &asn_OER_type_featureSetListPerUplinkCC_constr_2, &asn_PER_type_featureSetListPerUplinkCC_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_featureSetListPerUplinkCC_2,
	1,	/* Single element */
	&asn_SPC_featureSetListPerUplinkCC_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scalingFactor_value2enum_4[] = {
	{ 0,	4,	"f0p4" },
	{ 1,	5,	"f0p75" },
	{ 2,	4,	"f0p8" }
};
static const unsigned int asn_MAP_scalingFactor_enum2value_4[] = {
	0,	/* f0p4(0) */
	1,	/* f0p75(1) */
	2	/* f0p8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scalingFactor_specs_4 = {
	asn_MAP_scalingFactor_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_scalingFactor_enum2value_4,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scalingFactor_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scalingFactor_4 = {
	"scalingFactor",
	"scalingFactor",
	&asn_OP_NativeEnumerated,
	asn_DEF_scalingFactor_tags_4,
	sizeof(asn_DEF_scalingFactor_tags_4)
		/sizeof(asn_DEF_scalingFactor_tags_4[0]) - 1, /* 1 */
	asn_DEF_scalingFactor_tags_4,	/* Same as above */
	sizeof(asn_DEF_scalingFactor_tags_4)
		/sizeof(asn_DEF_scalingFactor_tags_4[0]), /* 2 */
	{ &asn_OER_type_scalingFactor_constr_4, &asn_PER_type_scalingFactor_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scalingFactor_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_crossCarrierScheduling_OtherSCS_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_crossCarrierScheduling_OtherSCS_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_crossCarrierScheduling_OtherSCS_specs_8 = {
	asn_MAP_crossCarrierScheduling_OtherSCS_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_crossCarrierScheduling_OtherSCS_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_crossCarrierScheduling_OtherSCS_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crossCarrierScheduling_OtherSCS_8 = {
	"crossCarrierScheduling-OtherSCS",
	"crossCarrierScheduling-OtherSCS",
	&asn_OP_NativeEnumerated,
	asn_DEF_crossCarrierScheduling_OtherSCS_tags_8,
	sizeof(asn_DEF_crossCarrierScheduling_OtherSCS_tags_8)
		/sizeof(asn_DEF_crossCarrierScheduling_OtherSCS_tags_8[0]) - 1, /* 1 */
	asn_DEF_crossCarrierScheduling_OtherSCS_tags_8,	/* Same as above */
	sizeof(asn_DEF_crossCarrierScheduling_OtherSCS_tags_8)
		/sizeof(asn_DEF_crossCarrierScheduling_OtherSCS_tags_8[0]), /* 2 */
	{ &asn_OER_type_crossCarrierScheduling_OtherSCS_constr_8, &asn_PER_type_crossCarrierScheduling_OtherSCS_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crossCarrierScheduling_OtherSCS_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_searchSpaceSharingCA_UL_value2enum_11[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_searchSpaceSharingCA_UL_enum2value_11[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_searchSpaceSharingCA_UL_specs_11 = {
	asn_MAP_searchSpaceSharingCA_UL_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_searchSpaceSharingCA_UL_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_searchSpaceSharingCA_UL_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_searchSpaceSharingCA_UL_11 = {
	"searchSpaceSharingCA-UL",
	"searchSpaceSharingCA-UL",
	&asn_OP_NativeEnumerated,
	asn_DEF_searchSpaceSharingCA_UL_tags_11,
	sizeof(asn_DEF_searchSpaceSharingCA_UL_tags_11)
		/sizeof(asn_DEF_searchSpaceSharingCA_UL_tags_11[0]) - 1, /* 1 */
	asn_DEF_searchSpaceSharingCA_UL_tags_11,	/* Same as above */
	sizeof(asn_DEF_searchSpaceSharingCA_UL_tags_11)
		/sizeof(asn_DEF_searchSpaceSharingCA_UL_tags_11[0]), /* 2 */
	{ &asn_OER_type_searchSpaceSharingCA_UL_constr_11, &asn_PER_type_searchSpaceSharingCA_UL_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_searchSpaceSharingCA_UL_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoPUCCH_Group_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_twoPUCCH_Group_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoPUCCH_Group_specs_15 = {
	asn_MAP_twoPUCCH_Group_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_twoPUCCH_Group_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoPUCCH_Group_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoPUCCH_Group_15 = {
	"twoPUCCH-Group",
	"twoPUCCH-Group",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoPUCCH_Group_tags_15,
	sizeof(asn_DEF_twoPUCCH_Group_tags_15)
		/sizeof(asn_DEF_twoPUCCH_Group_tags_15[0]) - 1, /* 1 */
	asn_DEF_twoPUCCH_Group_tags_15,	/* Same as above */
	sizeof(asn_DEF_twoPUCCH_Group_tags_15)
		/sizeof(asn_DEF_twoPUCCH_Group_tags_15[0]), /* 2 */
	{ &asn_OER_type_twoPUCCH_Group_constr_15, &asn_PER_type_twoPUCCH_Group_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoPUCCH_Group_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dynamicSwitchSUL_value2enum_17[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dynamicSwitchSUL_enum2value_17[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dynamicSwitchSUL_specs_17 = {
	asn_MAP_dynamicSwitchSUL_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_dynamicSwitchSUL_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dynamicSwitchSUL_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dynamicSwitchSUL_17 = {
	"dynamicSwitchSUL",
	"dynamicSwitchSUL",
	&asn_OP_NativeEnumerated,
	asn_DEF_dynamicSwitchSUL_tags_17,
	sizeof(asn_DEF_dynamicSwitchSUL_tags_17)
		/sizeof(asn_DEF_dynamicSwitchSUL_tags_17[0]) - 1, /* 1 */
	asn_DEF_dynamicSwitchSUL_tags_17,	/* Same as above */
	sizeof(asn_DEF_dynamicSwitchSUL_tags_17)
		/sizeof(asn_DEF_dynamicSwitchSUL_tags_17[0]), /* 2 */
	{ &asn_OER_type_dynamicSwitchSUL_constr_17, &asn_PER_type_dynamicSwitchSUL_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dynamicSwitchSUL_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_simultaneousTxSUL_NonSUL_value2enum_19[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_simultaneousTxSUL_NonSUL_enum2value_19[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_simultaneousTxSUL_NonSUL_specs_19 = {
	asn_MAP_simultaneousTxSUL_NonSUL_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_simultaneousTxSUL_NonSUL_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_simultaneousTxSUL_NonSUL_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_simultaneousTxSUL_NonSUL_19 = {
	"simultaneousTxSUL-NonSUL",
	"simultaneousTxSUL-NonSUL",
	&asn_OP_NativeEnumerated,
	asn_DEF_simultaneousTxSUL_NonSUL_tags_19,
	sizeof(asn_DEF_simultaneousTxSUL_NonSUL_tags_19)
		/sizeof(asn_DEF_simultaneousTxSUL_NonSUL_tags_19[0]) - 1, /* 1 */
	asn_DEF_simultaneousTxSUL_NonSUL_tags_19,	/* Same as above */
	sizeof(asn_DEF_simultaneousTxSUL_NonSUL_tags_19)
		/sizeof(asn_DEF_simultaneousTxSUL_NonSUL_tags_19[0]), /* 2 */
	{ &asn_OER_type_simultaneousTxSUL_NonSUL_constr_19, &asn_PER_type_simultaneousTxSUL_NonSUL_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_simultaneousTxSUL_NonSUL_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_15kHz_value2enum_22[] = {
	{ 0,	5,	"upto2" },
	{ 1,	5,	"upto4" },
	{ 2,	5,	"upto7" }
};
static const unsigned int asn_MAP_scs_15kHz_enum2value_22[] = {
	0,	/* upto2(0) */
	1,	/* upto4(1) */
	2	/* upto7(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_15kHz_specs_22 = {
	asn_MAP_scs_15kHz_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_15kHz_enum2value_22,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_15kHz_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_15kHz_22 = {
	"scs-15kHz",
	"scs-15kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_15kHz_tags_22,
	sizeof(asn_DEF_scs_15kHz_tags_22)
		/sizeof(asn_DEF_scs_15kHz_tags_22[0]) - 1, /* 1 */
	asn_DEF_scs_15kHz_tags_22,	/* Same as above */
	sizeof(asn_DEF_scs_15kHz_tags_22)
		/sizeof(asn_DEF_scs_15kHz_tags_22[0]), /* 2 */
	{ &asn_OER_type_scs_15kHz_constr_22, &asn_PER_type_scs_15kHz_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_15kHz_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_30kHz_value2enum_26[] = {
	{ 0,	5,	"upto2" },
	{ 1,	5,	"upto4" },
	{ 2,	5,	"upto7" }
};
static const unsigned int asn_MAP_scs_30kHz_enum2value_26[] = {
	0,	/* upto2(0) */
	1,	/* upto4(1) */
	2	/* upto7(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_30kHz_specs_26 = {
	asn_MAP_scs_30kHz_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_30kHz_enum2value_26,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_30kHz_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_30kHz_26 = {
	"scs-30kHz",
	"scs-30kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_30kHz_tags_26,
	sizeof(asn_DEF_scs_30kHz_tags_26)
		/sizeof(asn_DEF_scs_30kHz_tags_26[0]) - 1, /* 1 */
	asn_DEF_scs_30kHz_tags_26,	/* Same as above */
	sizeof(asn_DEF_scs_30kHz_tags_26)
		/sizeof(asn_DEF_scs_30kHz_tags_26[0]), /* 2 */
	{ &asn_OER_type_scs_30kHz_constr_26, &asn_PER_type_scs_30kHz_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_30kHz_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_60kHz_value2enum_30[] = {
	{ 0,	5,	"upto2" },
	{ 1,	5,	"upto4" },
	{ 2,	5,	"upto7" }
};
static const unsigned int asn_MAP_scs_60kHz_enum2value_30[] = {
	0,	/* upto2(0) */
	1,	/* upto4(1) */
	2	/* upto7(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_60kHz_specs_30 = {
	asn_MAP_scs_60kHz_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_60kHz_enum2value_30,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_60kHz_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_60kHz_30 = {
	"scs-60kHz",
	"scs-60kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_60kHz_tags_30,
	sizeof(asn_DEF_scs_60kHz_tags_30)
		/sizeof(asn_DEF_scs_60kHz_tags_30[0]) - 1, /* 1 */
	asn_DEF_scs_60kHz_tags_30,	/* Same as above */
	sizeof(asn_DEF_scs_60kHz_tags_30)
		/sizeof(asn_DEF_scs_60kHz_tags_30[0]), /* 2 */
	{ &asn_OER_type_scs_60kHz_constr_30, &asn_PER_type_scs_60kHz_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_60kHz_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_120kHz_value2enum_34[] = {
	{ 0,	5,	"upto2" },
	{ 1,	5,	"upto4" },
	{ 2,	5,	"upto7" }
};
static const unsigned int asn_MAP_scs_120kHz_enum2value_34[] = {
	0,	/* upto2(0) */
	1,	/* upto4(1) */
	2	/* upto7(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_120kHz_specs_34 = {
	asn_MAP_scs_120kHz_value2enum_34,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_120kHz_enum2value_34,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_120kHz_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_120kHz_34 = {
	"scs-120kHz",
	"scs-120kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_120kHz_tags_34,
	sizeof(asn_DEF_scs_120kHz_tags_34)
		/sizeof(asn_DEF_scs_120kHz_tags_34[0]) - 1, /* 1 */
	asn_DEF_scs_120kHz_tags_34,	/* Same as above */
	sizeof(asn_DEF_scs_120kHz_tags_34)
		/sizeof(asn_DEF_scs_120kHz_tags_34[0]), /* 2 */
	{ &asn_OER_type_scs_120kHz_constr_34, &asn_PER_type_scs_120kHz_constr_34, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_120kHz_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pusch_DifferentTB_PerSlot_21[] = {
	{ ATF_POINTER, 4, offsetof(struct FeatureSetUplink__pusch_DifferentTB_PerSlot, scs_15kHz),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_15kHz_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-15kHz"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureSetUplink__pusch_DifferentTB_PerSlot, scs_30kHz),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_30kHz_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-30kHz"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetUplink__pusch_DifferentTB_PerSlot, scs_60kHz),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_60kHz_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-60kHz"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetUplink__pusch_DifferentTB_PerSlot, scs_120kHz),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_120kHz_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-120kHz"
		},
};
static const int asn_MAP_pusch_DifferentTB_PerSlot_oms_21[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_pusch_DifferentTB_PerSlot_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_pusch_DifferentTB_PerSlot_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scs-15kHz */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scs-30kHz */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* scs-60kHz */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* scs-120kHz */
};
static asn_SEQUENCE_specifics_t asn_SPC_pusch_DifferentTB_PerSlot_specs_21 = {
	sizeof(struct FeatureSetUplink__pusch_DifferentTB_PerSlot),
	offsetof(struct FeatureSetUplink__pusch_DifferentTB_PerSlot, _asn_ctx),
	asn_MAP_pusch_DifferentTB_PerSlot_tag2el_21,
	4,	/* Count of tags in the map */
	asn_MAP_pusch_DifferentTB_PerSlot_oms_21,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pusch_DifferentTB_PerSlot_21 = {
	"pusch-DifferentTB-PerSlot",
	"pusch-DifferentTB-PerSlot",
	&asn_OP_SEQUENCE,
	asn_DEF_pusch_DifferentTB_PerSlot_tags_21,
	sizeof(asn_DEF_pusch_DifferentTB_PerSlot_tags_21)
		/sizeof(asn_DEF_pusch_DifferentTB_PerSlot_tags_21[0]) - 1, /* 1 */
	asn_DEF_pusch_DifferentTB_PerSlot_tags_21,	/* Same as above */
	sizeof(asn_DEF_pusch_DifferentTB_PerSlot_tags_21)
		/sizeof(asn_DEF_pusch_DifferentTB_PerSlot_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_pusch_DifferentTB_PerSlot_21,
	4,	/* Elements count */
	&asn_SPC_pusch_DifferentTB_PerSlot_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetUplink_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureSetUplink, featureSetListPerUplinkCC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_featureSetListPerUplinkCC_2,
		0,
		{ &asn_OER_memb_featureSetListPerUplinkCC_constr_2, &asn_PER_memb_featureSetListPerUplinkCC_constr_2,  memb_featureSetListPerUplinkCC_constraint_1 },
		0, 0, /* No default value */
		"featureSetListPerUplinkCC"
		},
	{ ATF_POINTER, 11, offsetof(struct FeatureSetUplink, scalingFactor),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scalingFactor_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scalingFactor"
		},
	{ ATF_POINTER, 10, offsetof(struct FeatureSetUplink, crossCarrierScheduling_OtherSCS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crossCarrierScheduling_OtherSCS_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crossCarrierScheduling-OtherSCS"
		},
	{ ATF_POINTER, 9, offsetof(struct FeatureSetUplink, intraBandFreqSeparationUL),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqSeparationClass,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraBandFreqSeparationUL"
		},
	{ ATF_POINTER, 8, offsetof(struct FeatureSetUplink, searchSpaceSharingCA_UL),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_searchSpaceSharingCA_UL_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"searchSpaceSharingCA-UL"
		},
	{ ATF_POINTER, 7, offsetof(struct FeatureSetUplink, srs_TxSwitch),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_TxSwitch,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-TxSwitch"
		},
	{ ATF_POINTER, 6, offsetof(struct FeatureSetUplink, supportedSRS_Resources),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_Resources,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedSRS-Resources"
		},
	{ ATF_POINTER, 5, offsetof(struct FeatureSetUplink, twoPUCCH_Group),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoPUCCH_Group_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoPUCCH-Group"
		},
	{ ATF_POINTER, 4, offsetof(struct FeatureSetUplink, dynamicSwitchSUL),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dynamicSwitchSUL_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dynamicSwitchSUL"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureSetUplink, simultaneousTxSUL_NonSUL),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_simultaneousTxSUL_NonSUL_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"simultaneousTxSUL-NonSUL"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetUplink, pusch_DifferentTB_PerSlot),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_pusch_DifferentTB_PerSlot_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-DifferentTB-PerSlot"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetUplink, csi_ReportFramework),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_ReportFramework,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-ReportFramework"
		},
};
static const int asn_MAP_FeatureSetUplink_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_FeatureSetUplink_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetUplink_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* featureSetListPerUplinkCC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scalingFactor */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* crossCarrierScheduling-OtherSCS */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* intraBandFreqSeparationUL */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* searchSpaceSharingCA-UL */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* srs-TxSwitch */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* supportedSRS-Resources */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* twoPUCCH-Group */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dynamicSwitchSUL */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* simultaneousTxSUL-NonSUL */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* pusch-DifferentTB-PerSlot */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* csi-ReportFramework */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUplink_specs_1 = {
	sizeof(struct FeatureSetUplink),
	offsetof(struct FeatureSetUplink, _asn_ctx),
	asn_MAP_FeatureSetUplink_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_FeatureSetUplink_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetUplink = {
	"FeatureSetUplink",
	"FeatureSetUplink",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetUplink_tags_1,
	sizeof(asn_DEF_FeatureSetUplink_tags_1)
		/sizeof(asn_DEF_FeatureSetUplink_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetUplink_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetUplink_tags_1)
		/sizeof(asn_DEF_FeatureSetUplink_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FeatureSetUplink_1,
	12,	/* Elements count */
	&asn_SPC_FeatureSetUplink_specs_1	/* Additional specs */
};

