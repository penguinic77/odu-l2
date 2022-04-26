/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "TypeII-Codebook.h"

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
memb_maxNumberResources_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
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
memb_totalNumberTxPorts_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 256)) {
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
memb_parameterLx_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 4)) {
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
memb_maxNumberCSI_RS_PerResourceSet_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_maxNumberTxPortsPerResource_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberTxPortsPerResource_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_amplitudeScalingType_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_amplitudeScalingType_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_amplitudeSubsetRestriction_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_amplitudeSubsetRestriction_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberResources_constr_9 CC_NOTUSED = {
	{ 1, 1 }	/* (1..64) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberResources_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_totalNumberTxPorts_constr_10 CC_NOTUSED = {
	{ 2, 1 }	/* (2..256) */,
	-1};
static asn_per_constraints_t asn_PER_memb_totalNumberTxPorts_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2,  256 }	/* (2..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_parameterLx_constr_11 CC_NOTUSED = {
	{ 1, 1 }	/* (2..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_parameterLx_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  2,  4 }	/* (2..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberCSI_RS_PerResourceSet_constr_17 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberCSI_RS_PerResourceSet_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxNumberTxPortsPerResource_value2enum_2[] = {
	{ 0,	2,	"p4" },
	{ 1,	2,	"p8" },
	{ 2,	3,	"p12" },
	{ 3,	3,	"p16" },
	{ 4,	3,	"p24" },
	{ 5,	3,	"p32" }
};
static const unsigned int asn_MAP_maxNumberTxPortsPerResource_enum2value_2[] = {
	2,	/* p12(2) */
	3,	/* p16(3) */
	4,	/* p24(4) */
	5,	/* p32(5) */
	0,	/* p4(0) */
	1	/* p8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberTxPortsPerResource_specs_2 = {
	asn_MAP_maxNumberTxPortsPerResource_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberTxPortsPerResource_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberTxPortsPerResource_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberTxPortsPerResource_2 = {
	"maxNumberTxPortsPerResource",
	"maxNumberTxPortsPerResource",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberTxPortsPerResource_tags_2,
	sizeof(asn_DEF_maxNumberTxPortsPerResource_tags_2)
		/sizeof(asn_DEF_maxNumberTxPortsPerResource_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxNumberTxPortsPerResource_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxNumberTxPortsPerResource_tags_2)
		/sizeof(asn_DEF_maxNumberTxPortsPerResource_tags_2[0]), /* 2 */
	{ &asn_OER_type_maxNumberTxPortsPerResource_constr_2, &asn_PER_type_maxNumberTxPortsPerResource_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberTxPortsPerResource_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_amplitudeScalingType_value2enum_12[] = {
	{ 0,	8,	"wideband" },
	{ 1,	18,	"widebandAndSubband" }
};
static const unsigned int asn_MAP_amplitudeScalingType_enum2value_12[] = {
	0,	/* wideband(0) */
	1	/* widebandAndSubband(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_amplitudeScalingType_specs_12 = {
	asn_MAP_amplitudeScalingType_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_amplitudeScalingType_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_amplitudeScalingType_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_amplitudeScalingType_12 = {
	"amplitudeScalingType",
	"amplitudeScalingType",
	&asn_OP_NativeEnumerated,
	asn_DEF_amplitudeScalingType_tags_12,
	sizeof(asn_DEF_amplitudeScalingType_tags_12)
		/sizeof(asn_DEF_amplitudeScalingType_tags_12[0]) - 1, /* 1 */
	asn_DEF_amplitudeScalingType_tags_12,	/* Same as above */
	sizeof(asn_DEF_amplitudeScalingType_tags_12)
		/sizeof(asn_DEF_amplitudeScalingType_tags_12[0]), /* 2 */
	{ &asn_OER_type_amplitudeScalingType_constr_12, &asn_PER_type_amplitudeScalingType_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_amplitudeScalingType_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_amplitudeSubsetRestriction_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_amplitudeSubsetRestriction_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_amplitudeSubsetRestriction_specs_15 = {
	asn_MAP_amplitudeSubsetRestriction_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_amplitudeSubsetRestriction_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_amplitudeSubsetRestriction_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_amplitudeSubsetRestriction_15 = {
	"amplitudeSubsetRestriction",
	"amplitudeSubsetRestriction",
	&asn_OP_NativeEnumerated,
	asn_DEF_amplitudeSubsetRestriction_tags_15,
	sizeof(asn_DEF_amplitudeSubsetRestriction_tags_15)
		/sizeof(asn_DEF_amplitudeSubsetRestriction_tags_15[0]) - 1, /* 1 */
	asn_DEF_amplitudeSubsetRestriction_tags_15,	/* Same as above */
	sizeof(asn_DEF_amplitudeSubsetRestriction_tags_15)
		/sizeof(asn_DEF_amplitudeSubsetRestriction_tags_15[0]), /* 2 */
	{ &asn_OER_type_amplitudeSubsetRestriction_constr_15, &asn_PER_type_amplitudeSubsetRestriction_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_amplitudeSubsetRestriction_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TypeII_Codebook_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TypeII_Codebook, maxNumberTxPortsPerResource),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberTxPortsPerResource_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberTxPortsPerResource"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TypeII_Codebook, maxNumberResources),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberResources_constr_9, &asn_PER_memb_maxNumberResources_constr_9,  memb_maxNumberResources_constraint_1 },
		0, 0, /* No default value */
		"maxNumberResources"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TypeII_Codebook, totalNumberTxPorts),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_totalNumberTxPorts_constr_10, &asn_PER_memb_totalNumberTxPorts_constr_10,  memb_totalNumberTxPorts_constraint_1 },
		0, 0, /* No default value */
		"totalNumberTxPorts"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TypeII_Codebook, parameterLx),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_parameterLx_constr_11, &asn_PER_memb_parameterLx_constr_11,  memb_parameterLx_constraint_1 },
		0, 0, /* No default value */
		"parameterLx"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TypeII_Codebook, amplitudeScalingType),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_amplitudeScalingType_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"amplitudeScalingType"
		},
	{ ATF_POINTER, 1, offsetof(struct TypeII_Codebook, amplitudeSubsetRestriction),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_amplitudeSubsetRestriction_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"amplitudeSubsetRestriction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TypeII_Codebook, maxNumberCSI_RS_PerResourceSet),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberCSI_RS_PerResourceSet_constr_17, &asn_PER_memb_maxNumberCSI_RS_PerResourceSet_constr_17,  memb_maxNumberCSI_RS_PerResourceSet_constraint_1 },
		0, 0, /* No default value */
		"maxNumberCSI-RS-PerResourceSet"
		},
};
static const int asn_MAP_TypeII_Codebook_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_TypeII_Codebook_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TypeII_Codebook_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberTxPortsPerResource */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberResources */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* totalNumberTxPorts */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* parameterLx */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* amplitudeScalingType */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* amplitudeSubsetRestriction */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* maxNumberCSI-RS-PerResourceSet */
};
asn_SEQUENCE_specifics_t asn_SPC_TypeII_Codebook_specs_1 = {
	sizeof(struct TypeII_Codebook),
	offsetof(struct TypeII_Codebook, _asn_ctx),
	asn_MAP_TypeII_Codebook_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_TypeII_Codebook_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TypeII_Codebook = {
	"TypeII-Codebook",
	"TypeII-Codebook",
	&asn_OP_SEQUENCE,
	asn_DEF_TypeII_Codebook_tags_1,
	sizeof(asn_DEF_TypeII_Codebook_tags_1)
		/sizeof(asn_DEF_TypeII_Codebook_tags_1[0]), /* 1 */
	asn_DEF_TypeII_Codebook_tags_1,	/* Same as above */
	sizeof(asn_DEF_TypeII_Codebook_tags_1)
		/sizeof(asn_DEF_TypeII_Codebook_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TypeII_Codebook_1,
	7,	/* Elements count */
	&asn_SPC_TypeII_Codebook_specs_1	/* Additional specs */
};

