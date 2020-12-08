/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "MAC-CellGroupConfig.h"

#include "SchedulingRequestConfig.h"
#include "BSR-Config.h"
#include "TAG-Config.h"
#include "DRX-Config.h"
#include "PHR-Config.h"
static asn_oer_constraints_t asn_OER_type_drx_Config_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_drx_Config_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_phr_Config_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_phr_Config_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dataInactivityTimer_v1530_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dataInactivityTimer_v1530_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_drx_Config_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_CellGroupConfig__drx_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct MAC_CellGroupConfig__drx_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRX_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_drx_Config_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_drx_Config_specs_2 = {
	sizeof(struct MAC_CellGroupConfig__drx_Config),
	offsetof(struct MAC_CellGroupConfig__drx_Config, _asn_ctx),
	offsetof(struct MAC_CellGroupConfig__drx_Config, present),
	sizeof(((struct MAC_CellGroupConfig__drx_Config *)0)->present),
	asn_MAP_drx_Config_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_Config_2 = {
	"drx-Config",
	"drx-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_drx_Config_constr_2, &asn_PER_type_drx_Config_constr_2, CHOICE_constraint },
	asn_MBR_drx_Config_2,
	2,	/* Elements count */
	&asn_SPC_drx_Config_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_phr_Config_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_CellGroupConfig__phr_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct MAC_CellGroupConfig__phr_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PHR_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_phr_Config_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_phr_Config_specs_8 = {
	sizeof(struct MAC_CellGroupConfig__phr_Config),
	offsetof(struct MAC_CellGroupConfig__phr_Config, _asn_ctx),
	offsetof(struct MAC_CellGroupConfig__phr_Config, present),
	sizeof(((struct MAC_CellGroupConfig__phr_Config *)0)->present),
	asn_MAP_phr_Config_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_phr_Config_8 = {
	"phr-Config",
	"phr-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_phr_Config_constr_8, &asn_PER_type_phr_Config_constr_8, CHOICE_constraint },
	asn_MBR_phr_Config_8,
	2,	/* Elements count */
	&asn_SPC_phr_Config_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dataInactivityTimer_v1530_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_CellGroupConfig__ext1__dataInactivityTimer_v1530, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_CellGroupConfig__ext1__dataInactivityTimer_v1530, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataInactivityTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dataInactivityTimer_v1530_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_dataInactivityTimer_v1530_specs_15 = {
	sizeof(struct MAC_CellGroupConfig__ext1__dataInactivityTimer_v1530),
	offsetof(struct MAC_CellGroupConfig__ext1__dataInactivityTimer_v1530, _asn_ctx),
	offsetof(struct MAC_CellGroupConfig__ext1__dataInactivityTimer_v1530, present),
	sizeof(((struct MAC_CellGroupConfig__ext1__dataInactivityTimer_v1530 *)0)->present),
	asn_MAP_dataInactivityTimer_v1530_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dataInactivityTimer_v1530_15 = {
	"dataInactivityTimer-v1530",
	"dataInactivityTimer-v1530",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_dataInactivityTimer_v1530_constr_15, &asn_PER_type_dataInactivityTimer_v1530_constr_15, CHOICE_constraint },
	asn_MBR_dataInactivityTimer_v1530_15,
	2,	/* Elements count */
	&asn_SPC_dataInactivityTimer_v1530_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_13[] = {
	{ ATF_POINTER, 2, offsetof(struct MAC_CellGroupConfig__ext1, csi_Mask_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-Mask-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_CellGroupConfig__ext1, dataInactivityTimer_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dataInactivityTimer_v1530_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataInactivityTimer-v1530"
		},
};
static const int asn_MAP_ext1_oms_13[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-Mask-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dataInactivityTimer-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_13 = {
	sizeof(struct MAC_CellGroupConfig__ext1),
	offsetof(struct MAC_CellGroupConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_13,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_13 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_13,
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_13,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_CellGroupConfig_1[] = {
	{ ATF_POINTER, 5, offsetof(struct MAC_CellGroupConfig, drx_Config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_drx_Config_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-Config"
		},
	{ ATF_POINTER, 4, offsetof(struct MAC_CellGroupConfig, schedulingRequestConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SchedulingRequestConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingRequestConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct MAC_CellGroupConfig, bsr_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSR_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bsr-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_CellGroupConfig, tag_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAG_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tag-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_CellGroupConfig, phr_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_phr_Config_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_CellGroupConfig, skipUplinkTxDynamic),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipUplinkTxDynamic"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_CellGroupConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext1_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MAC_CellGroupConfig_oms_1[] = { 0, 1, 2, 3, 4, 6 };
static const ber_tlv_tag_t asn_DEF_MAC_CellGroupConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_CellGroupConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-Config */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* schedulingRequestConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bsr-Config */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tag-Config */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phr-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* skipUplinkTxDynamic */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_CellGroupConfig_specs_1 = {
	sizeof(struct MAC_CellGroupConfig),
	offsetof(struct MAC_CellGroupConfig, _asn_ctx),
	asn_MAP_MAC_CellGroupConfig_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_MAC_CellGroupConfig_oms_1,	/* Optional members */
	5, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_CellGroupConfig = {
	"MAC-CellGroupConfig",
	"MAC-CellGroupConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_CellGroupConfig_tags_1,
	sizeof(asn_DEF_MAC_CellGroupConfig_tags_1)
		/sizeof(asn_DEF_MAC_CellGroupConfig_tags_1[0]), /* 1 */
	asn_DEF_MAC_CellGroupConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_CellGroupConfig_tags_1)
		/sizeof(asn_DEF_MAC_CellGroupConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_CellGroupConfig_1,
	7,	/* Elements count */
	&asn_SPC_MAC_CellGroupConfig_specs_1	/* Additional specs */
};

