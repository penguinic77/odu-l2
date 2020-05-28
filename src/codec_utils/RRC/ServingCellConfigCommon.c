/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "ServingCellConfigCommon.h"

#include "DownlinkConfigCommon.h"
#include "UplinkConfigCommon.h"
#include "TDD-UL-DL-ConfigCommon.h"
#include "RateMatchPatternLTE-CRS.h"
#include "RateMatchPattern.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_shortBitmap_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_mediumBitmap_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_longBitmap_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_rateMatchPatternToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rateMatchPatternToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ss_PBCH_BlockPower_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= 50)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_n_TimingAdvanceOffset_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_n_TimingAdvanceOffset_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_shortBitmap_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_shortBitmap_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_mediumBitmap_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_mediumBitmap_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_longBitmap_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	64	/* (SIZE(64..64)) */};
static asn_per_constraints_t asn_PER_memb_longBitmap_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  64,  64 }	/* (SIZE(64..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ssb_PositionsInBurst_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ssb_PositionsInBurst_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ssb_periodicityServingCell_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ssb_periodicityServingCell_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dmrs_TypeA_Position_constr_23 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dmrs_TypeA_Position_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_lte_CRS_ToMatchAround_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_lte_CRS_ToMatchAround_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rateMatchPatternToAddModList_constr_29 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_rateMatchPatternToAddModList_constr_29 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rateMatchPatternToReleaseList_constr_31 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_rateMatchPatternToReleaseList_constr_31 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rateMatchPatternToAddModList_constr_29 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_rateMatchPatternToAddModList_constr_29 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rateMatchPatternToReleaseList_constr_31 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_rateMatchPatternToReleaseList_constr_31 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ss_PBCH_BlockPower_constr_35 CC_NOTUSED = {
	{ 1, 0 }	/* (-60..50) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ss_PBCH_BlockPower_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_n_TimingAdvanceOffset_value2enum_6[] = {
	{ 0,	2,	"n0" },
	{ 1,	6,	"n25600" },
	{ 2,	6,	"n39936" }
};
static const unsigned int asn_MAP_n_TimingAdvanceOffset_enum2value_6[] = {
	0,	/* n0(0) */
	1,	/* n25600(1) */
	2	/* n39936(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_n_TimingAdvanceOffset_specs_6 = {
	asn_MAP_n_TimingAdvanceOffset_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_n_TimingAdvanceOffset_enum2value_6,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_n_TimingAdvanceOffset_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n_TimingAdvanceOffset_6 = {
	"n-TimingAdvanceOffset",
	"n-TimingAdvanceOffset",
	&asn_OP_NativeEnumerated,
	asn_DEF_n_TimingAdvanceOffset_tags_6,
	sizeof(asn_DEF_n_TimingAdvanceOffset_tags_6)
		/sizeof(asn_DEF_n_TimingAdvanceOffset_tags_6[0]) - 1, /* 1 */
	asn_DEF_n_TimingAdvanceOffset_tags_6,	/* Same as above */
	sizeof(asn_DEF_n_TimingAdvanceOffset_tags_6)
		/sizeof(asn_DEF_n_TimingAdvanceOffset_tags_6[0]), /* 2 */
	{ &asn_OER_type_n_TimingAdvanceOffset_constr_6, &asn_PER_type_n_TimingAdvanceOffset_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_n_TimingAdvanceOffset_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ssb_PositionsInBurst_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellConfigCommon__ssb_PositionsInBurst, choice.shortBitmap),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_shortBitmap_constr_11, &asn_PER_memb_shortBitmap_constr_11,  memb_shortBitmap_constraint_10 },
		0, 0, /* No default value */
		"shortBitmap"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellConfigCommon__ssb_PositionsInBurst, choice.mediumBitmap),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_mediumBitmap_constr_12, &asn_PER_memb_mediumBitmap_constr_12,  memb_mediumBitmap_constraint_10 },
		0, 0, /* No default value */
		"mediumBitmap"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellConfigCommon__ssb_PositionsInBurst, choice.longBitmap),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_longBitmap_constr_13, &asn_PER_memb_longBitmap_constr_13,  memb_longBitmap_constraint_10 },
		0, 0, /* No default value */
		"longBitmap"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ssb_PositionsInBurst_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* shortBitmap */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mediumBitmap */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* longBitmap */
};
static asn_CHOICE_specifics_t asn_SPC_ssb_PositionsInBurst_specs_10 = {
	sizeof(struct ServingCellConfigCommon__ssb_PositionsInBurst),
	offsetof(struct ServingCellConfigCommon__ssb_PositionsInBurst, _asn_ctx),
	offsetof(struct ServingCellConfigCommon__ssb_PositionsInBurst, present),
	sizeof(((struct ServingCellConfigCommon__ssb_PositionsInBurst *)0)->present),
	asn_MAP_ssb_PositionsInBurst_tag2el_10,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_PositionsInBurst_10 = {
	"ssb-PositionsInBurst",
	"ssb-PositionsInBurst",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ssb_PositionsInBurst_constr_10, &asn_PER_type_ssb_PositionsInBurst_constr_10, CHOICE_constraint },
	asn_MBR_ssb_PositionsInBurst_10,
	3,	/* Elements count */
	&asn_SPC_ssb_PositionsInBurst_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ssb_periodicityServingCell_value2enum_14[] = {
	{ 0,	3,	"ms5" },
	{ 1,	4,	"ms10" },
	{ 2,	4,	"ms20" },
	{ 3,	4,	"ms40" },
	{ 4,	4,	"ms80" },
	{ 5,	5,	"ms160" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_ssb_periodicityServingCell_enum2value_14[] = {
	1,	/* ms10(1) */
	5,	/* ms160(5) */
	2,	/* ms20(2) */
	3,	/* ms40(3) */
	0,	/* ms5(0) */
	4,	/* ms80(4) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_ssb_periodicityServingCell_specs_14 = {
	asn_MAP_ssb_periodicityServingCell_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_ssb_periodicityServingCell_enum2value_14,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ssb_periodicityServingCell_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_periodicityServingCell_14 = {
	"ssb-periodicityServingCell",
	"ssb-periodicityServingCell",
	&asn_OP_NativeEnumerated,
	asn_DEF_ssb_periodicityServingCell_tags_14,
	sizeof(asn_DEF_ssb_periodicityServingCell_tags_14)
		/sizeof(asn_DEF_ssb_periodicityServingCell_tags_14[0]) - 1, /* 1 */
	asn_DEF_ssb_periodicityServingCell_tags_14,	/* Same as above */
	sizeof(asn_DEF_ssb_periodicityServingCell_tags_14)
		/sizeof(asn_DEF_ssb_periodicityServingCell_tags_14[0]), /* 2 */
	{ &asn_OER_type_ssb_periodicityServingCell_constr_14, &asn_PER_type_ssb_periodicityServingCell_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ssb_periodicityServingCell_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dmrs_TypeA_Position_value2enum_23[] = {
	{ 0,	4,	"pos2" },
	{ 1,	4,	"pos3" }
};
static const unsigned int asn_MAP_dmrs_TypeA_Position_enum2value_23[] = {
	0,	/* pos2(0) */
	1	/* pos3(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_dmrs_TypeA_Position_specs_23 = {
	asn_MAP_dmrs_TypeA_Position_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_dmrs_TypeA_Position_enum2value_23,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dmrs_TypeA_Position_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_TypeA_Position_23 = {
	"dmrs-TypeA-Position",
	"dmrs-TypeA-Position",
	&asn_OP_NativeEnumerated,
	asn_DEF_dmrs_TypeA_Position_tags_23,
	sizeof(asn_DEF_dmrs_TypeA_Position_tags_23)
		/sizeof(asn_DEF_dmrs_TypeA_Position_tags_23[0]) - 1, /* 1 */
	asn_DEF_dmrs_TypeA_Position_tags_23,	/* Same as above */
	sizeof(asn_DEF_dmrs_TypeA_Position_tags_23)
		/sizeof(asn_DEF_dmrs_TypeA_Position_tags_23[0]), /* 2 */
	{ &asn_OER_type_dmrs_TypeA_Position_constr_23, &asn_PER_type_dmrs_TypeA_Position_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dmrs_TypeA_Position_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_lte_CRS_ToMatchAround_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellConfigCommon__lte_CRS_ToMatchAround, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct ServingCellConfigCommon__lte_CRS_ToMatchAround, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RateMatchPatternLTE_CRS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_lte_CRS_ToMatchAround_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_lte_CRS_ToMatchAround_specs_26 = {
	sizeof(struct ServingCellConfigCommon__lte_CRS_ToMatchAround),
	offsetof(struct ServingCellConfigCommon__lte_CRS_ToMatchAround, _asn_ctx),
	offsetof(struct ServingCellConfigCommon__lte_CRS_ToMatchAround, present),
	sizeof(((struct ServingCellConfigCommon__lte_CRS_ToMatchAround *)0)->present),
	asn_MAP_lte_CRS_ToMatchAround_tag2el_26,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lte_CRS_ToMatchAround_26 = {
	"lte-CRS-ToMatchAround",
	"lte-CRS-ToMatchAround",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_lte_CRS_ToMatchAround_constr_26, &asn_PER_type_lte_CRS_ToMatchAround_constr_26, CHOICE_constraint },
	asn_MBR_lte_CRS_ToMatchAround_26,
	2,	/* Elements count */
	&asn_SPC_lte_CRS_ToMatchAround_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rateMatchPatternToAddModList_29[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RateMatchPattern,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rateMatchPatternToAddModList_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rateMatchPatternToAddModList_specs_29 = {
	sizeof(struct ServingCellConfigCommon__rateMatchPatternToAddModList),
	offsetof(struct ServingCellConfigCommon__rateMatchPatternToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rateMatchPatternToAddModList_29 = {
	"rateMatchPatternToAddModList",
	"rateMatchPatternToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rateMatchPatternToAddModList_tags_29,
	sizeof(asn_DEF_rateMatchPatternToAddModList_tags_29)
		/sizeof(asn_DEF_rateMatchPatternToAddModList_tags_29[0]) - 1, /* 1 */
	asn_DEF_rateMatchPatternToAddModList_tags_29,	/* Same as above */
	sizeof(asn_DEF_rateMatchPatternToAddModList_tags_29)
		/sizeof(asn_DEF_rateMatchPatternToAddModList_tags_29[0]), /* 2 */
	{ &asn_OER_type_rateMatchPatternToAddModList_constr_29, &asn_PER_type_rateMatchPatternToAddModList_constr_29, SEQUENCE_OF_constraint },
	asn_MBR_rateMatchPatternToAddModList_29,
	1,	/* Single element */
	&asn_SPC_rateMatchPatternToAddModList_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rateMatchPatternToReleaseList_31[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_RateMatchPatternId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rateMatchPatternToReleaseList_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rateMatchPatternToReleaseList_specs_31 = {
	sizeof(struct ServingCellConfigCommon__rateMatchPatternToReleaseList),
	offsetof(struct ServingCellConfigCommon__rateMatchPatternToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rateMatchPatternToReleaseList_31 = {
	"rateMatchPatternToReleaseList",
	"rateMatchPatternToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rateMatchPatternToReleaseList_tags_31,
	sizeof(asn_DEF_rateMatchPatternToReleaseList_tags_31)
		/sizeof(asn_DEF_rateMatchPatternToReleaseList_tags_31[0]) - 1, /* 1 */
	asn_DEF_rateMatchPatternToReleaseList_tags_31,	/* Same as above */
	sizeof(asn_DEF_rateMatchPatternToReleaseList_tags_31)
		/sizeof(asn_DEF_rateMatchPatternToReleaseList_tags_31[0]), /* 2 */
	{ &asn_OER_type_rateMatchPatternToReleaseList_constr_31, &asn_PER_type_rateMatchPatternToReleaseList_constr_31, SEQUENCE_OF_constraint },
	asn_MBR_rateMatchPatternToReleaseList_31,
	1,	/* Single element */
	&asn_SPC_rateMatchPatternToReleaseList_specs_31	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ServingCellConfigCommon_1[] = {
	{ ATF_POINTER, 7, offsetof(struct ServingCellConfigCommon, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_POINTER, 6, offsetof(struct ServingCellConfigCommon, downlinkConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DownlinkConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkConfigCommon"
		},
	{ ATF_POINTER, 5, offsetof(struct ServingCellConfigCommon, uplinkConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkConfigCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct ServingCellConfigCommon, supplementaryUplinkConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supplementaryUplinkConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct ServingCellConfigCommon, n_TimingAdvanceOffset),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_n_TimingAdvanceOffset_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n-TimingAdvanceOffset"
		},
	{ ATF_POINTER, 2, offsetof(struct ServingCellConfigCommon, ssb_PositionsInBurst),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ssb_PositionsInBurst_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionsInBurst"
		},
	{ ATF_POINTER, 1, offsetof(struct ServingCellConfigCommon, ssb_periodicityServingCell),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ssb_periodicityServingCell_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-periodicityServingCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellConfigCommon, dmrs_TypeA_Position),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dmrs_TypeA_Position_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dmrs-TypeA-Position"
		},
	{ ATF_POINTER, 5, offsetof(struct ServingCellConfigCommon, lte_CRS_ToMatchAround),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_lte_CRS_ToMatchAround_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lte-CRS-ToMatchAround"
		},
	{ ATF_POINTER, 4, offsetof(struct ServingCellConfigCommon, rateMatchPatternToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_rateMatchPatternToAddModList_29,
		0,
		{ &asn_OER_memb_rateMatchPatternToAddModList_constr_29, &asn_PER_memb_rateMatchPatternToAddModList_constr_29,  memb_rateMatchPatternToAddModList_constraint_1 },
		0, 0, /* No default value */
		"rateMatchPatternToAddModList"
		},
	{ ATF_POINTER, 3, offsetof(struct ServingCellConfigCommon, rateMatchPatternToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_rateMatchPatternToReleaseList_31,
		0,
		{ &asn_OER_memb_rateMatchPatternToReleaseList_constr_31, &asn_PER_memb_rateMatchPatternToReleaseList_constr_31,  memb_rateMatchPatternToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"rateMatchPatternToReleaseList"
		},
	{ ATF_POINTER, 2, offsetof(struct ServingCellConfigCommon, ssbSubcarrierSpacing),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbSubcarrierSpacing"
		},
	{ ATF_POINTER, 1, offsetof(struct ServingCellConfigCommon, tdd_UL_DL_ConfigurationCommon),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_UL_DL_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-UL-DL-ConfigurationCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServingCellConfigCommon, ss_PBCH_BlockPower),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ss_PBCH_BlockPower_constr_35, &asn_PER_memb_ss_PBCH_BlockPower_constr_35,  memb_ss_PBCH_BlockPower_constraint_1 },
		0, 0, /* No default value */
		"ss-PBCH-BlockPower"
		},
};
static const int asn_MAP_ServingCellConfigCommon_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_ServingCellConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServingCellConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* downlinkConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* supplementaryUplinkConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* n-TimingAdvanceOffset */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ssb-PositionsInBurst */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ssb-periodicityServingCell */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dmrs-TypeA-Position */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* lte-CRS-ToMatchAround */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rateMatchPatternToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* rateMatchPatternToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ssbSubcarrierSpacing */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* tdd-UL-DL-ConfigurationCommon */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* ss-PBCH-BlockPower */
};
asn_SEQUENCE_specifics_t asn_SPC_ServingCellConfigCommon_specs_1 = {
	sizeof(struct ServingCellConfigCommon),
	offsetof(struct ServingCellConfigCommon, _asn_ctx),
	asn_MAP_ServingCellConfigCommon_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_ServingCellConfigCommon_oms_1,	/* Optional members */
	12, 0,	/* Root/Additions */
	14,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServingCellConfigCommon = {
	"ServingCellConfigCommon",
	"ServingCellConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_ServingCellConfigCommon_tags_1,
	sizeof(asn_DEF_ServingCellConfigCommon_tags_1)
		/sizeof(asn_DEF_ServingCellConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_ServingCellConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServingCellConfigCommon_tags_1)
		/sizeof(asn_DEF_ServingCellConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServingCellConfigCommon_1,
	14,	/* Elements count */
	&asn_SPC_ServingCellConfigCommon_specs_1	/* Additional specs */
};

