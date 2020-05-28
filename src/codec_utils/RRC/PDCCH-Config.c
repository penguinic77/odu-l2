/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "PDCCH-Config.h"

#include "ControlResourceSet.h"
#include "SearchSpace.h"
#include "DownlinkPreemption.h"
#include "PUSCH-TPC-CommandConfig.h"
#include "PUCCH-TPC-CommandConfig.h"
#include "SRS-TPC-CommandConfig.h"
static int
memb_controlResourceSetToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 3)) {
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
memb_controlResourceSetToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 3)) {
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
memb_searchSpacesToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 10)) {
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
memb_searchSpacesToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 10)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_controlResourceSetToAddModList_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_type_controlResourceSetToAddModList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_controlResourceSetToReleaseList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_type_controlResourceSetToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_searchSpacesToAddModList_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..10)) */};
static asn_per_constraints_t asn_PER_type_searchSpacesToAddModList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_searchSpacesToReleaseList_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..10)) */};
static asn_per_constraints_t asn_PER_type_searchSpacesToReleaseList_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_downlinkPreemption_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_downlinkPreemption_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_tpc_PUSCH_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tpc_PUSCH_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_tpc_PUCCH_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tpc_PUCCH_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_tpc_SRS_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tpc_SRS_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_controlResourceSetToAddModList_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_memb_controlResourceSetToAddModList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_controlResourceSetToReleaseList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_memb_controlResourceSetToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_searchSpacesToAddModList_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..10)) */};
static asn_per_constraints_t asn_PER_memb_searchSpacesToAddModList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_searchSpacesToReleaseList_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..10)) */};
static asn_per_constraints_t asn_PER_memb_searchSpacesToReleaseList_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_controlResourceSetToAddModList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ControlResourceSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_controlResourceSetToAddModList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_controlResourceSetToAddModList_specs_2 = {
	sizeof(struct PDCCH_Config__controlResourceSetToAddModList),
	offsetof(struct PDCCH_Config__controlResourceSetToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_controlResourceSetToAddModList_2 = {
	"controlResourceSetToAddModList",
	"controlResourceSetToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_controlResourceSetToAddModList_tags_2,
	sizeof(asn_DEF_controlResourceSetToAddModList_tags_2)
		/sizeof(asn_DEF_controlResourceSetToAddModList_tags_2[0]) - 1, /* 1 */
	asn_DEF_controlResourceSetToAddModList_tags_2,	/* Same as above */
	sizeof(asn_DEF_controlResourceSetToAddModList_tags_2)
		/sizeof(asn_DEF_controlResourceSetToAddModList_tags_2[0]), /* 2 */
	{ &asn_OER_type_controlResourceSetToAddModList_constr_2, &asn_PER_type_controlResourceSetToAddModList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_controlResourceSetToAddModList_2,
	1,	/* Single element */
	&asn_SPC_controlResourceSetToAddModList_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_controlResourceSetToReleaseList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ControlResourceSetId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_controlResourceSetToReleaseList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_controlResourceSetToReleaseList_specs_4 = {
	sizeof(struct PDCCH_Config__controlResourceSetToReleaseList),
	offsetof(struct PDCCH_Config__controlResourceSetToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_controlResourceSetToReleaseList_4 = {
	"controlResourceSetToReleaseList",
	"controlResourceSetToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_controlResourceSetToReleaseList_tags_4,
	sizeof(asn_DEF_controlResourceSetToReleaseList_tags_4)
		/sizeof(asn_DEF_controlResourceSetToReleaseList_tags_4[0]) - 1, /* 1 */
	asn_DEF_controlResourceSetToReleaseList_tags_4,	/* Same as above */
	sizeof(asn_DEF_controlResourceSetToReleaseList_tags_4)
		/sizeof(asn_DEF_controlResourceSetToReleaseList_tags_4[0]), /* 2 */
	{ &asn_OER_type_controlResourceSetToReleaseList_constr_4, &asn_PER_type_controlResourceSetToReleaseList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_controlResourceSetToReleaseList_4,
	1,	/* Single element */
	&asn_SPC_controlResourceSetToReleaseList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_searchSpacesToAddModList_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SearchSpace,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_searchSpacesToAddModList_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_searchSpacesToAddModList_specs_6 = {
	sizeof(struct PDCCH_Config__searchSpacesToAddModList),
	offsetof(struct PDCCH_Config__searchSpacesToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_searchSpacesToAddModList_6 = {
	"searchSpacesToAddModList",
	"searchSpacesToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_searchSpacesToAddModList_tags_6,
	sizeof(asn_DEF_searchSpacesToAddModList_tags_6)
		/sizeof(asn_DEF_searchSpacesToAddModList_tags_6[0]) - 1, /* 1 */
	asn_DEF_searchSpacesToAddModList_tags_6,	/* Same as above */
	sizeof(asn_DEF_searchSpacesToAddModList_tags_6)
		/sizeof(asn_DEF_searchSpacesToAddModList_tags_6[0]), /* 2 */
	{ &asn_OER_type_searchSpacesToAddModList_constr_6, &asn_PER_type_searchSpacesToAddModList_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_searchSpacesToAddModList_6,
	1,	/* Single element */
	&asn_SPC_searchSpacesToAddModList_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_searchSpacesToReleaseList_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SearchSpaceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_searchSpacesToReleaseList_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_searchSpacesToReleaseList_specs_8 = {
	sizeof(struct PDCCH_Config__searchSpacesToReleaseList),
	offsetof(struct PDCCH_Config__searchSpacesToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_searchSpacesToReleaseList_8 = {
	"searchSpacesToReleaseList",
	"searchSpacesToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_searchSpacesToReleaseList_tags_8,
	sizeof(asn_DEF_searchSpacesToReleaseList_tags_8)
		/sizeof(asn_DEF_searchSpacesToReleaseList_tags_8[0]) - 1, /* 1 */
	asn_DEF_searchSpacesToReleaseList_tags_8,	/* Same as above */
	sizeof(asn_DEF_searchSpacesToReleaseList_tags_8)
		/sizeof(asn_DEF_searchSpacesToReleaseList_tags_8[0]), /* 2 */
	{ &asn_OER_type_searchSpacesToReleaseList_constr_8, &asn_PER_type_searchSpacesToReleaseList_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_searchSpacesToReleaseList_8,
	1,	/* Single element */
	&asn_SPC_searchSpacesToReleaseList_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_downlinkPreemption_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_Config__downlinkPreemption, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct PDCCH_Config__downlinkPreemption, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DownlinkPreemption,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_downlinkPreemption_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_downlinkPreemption_specs_10 = {
	sizeof(struct PDCCH_Config__downlinkPreemption),
	offsetof(struct PDCCH_Config__downlinkPreemption, _asn_ctx),
	offsetof(struct PDCCH_Config__downlinkPreemption, present),
	sizeof(((struct PDCCH_Config__downlinkPreemption *)0)->present),
	asn_MAP_downlinkPreemption_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_downlinkPreemption_10 = {
	"downlinkPreemption",
	"downlinkPreemption",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_downlinkPreemption_constr_10, &asn_PER_type_downlinkPreemption_constr_10, CHOICE_constraint },
	asn_MBR_downlinkPreemption_10,
	2,	/* Elements count */
	&asn_SPC_downlinkPreemption_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tpc_PUSCH_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_Config__tpc_PUSCH, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct PDCCH_Config__tpc_PUSCH, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_TPC_CommandConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tpc_PUSCH_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_tpc_PUSCH_specs_13 = {
	sizeof(struct PDCCH_Config__tpc_PUSCH),
	offsetof(struct PDCCH_Config__tpc_PUSCH, _asn_ctx),
	offsetof(struct PDCCH_Config__tpc_PUSCH, present),
	sizeof(((struct PDCCH_Config__tpc_PUSCH *)0)->present),
	asn_MAP_tpc_PUSCH_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tpc_PUSCH_13 = {
	"tpc-PUSCH",
	"tpc-PUSCH",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tpc_PUSCH_constr_13, &asn_PER_type_tpc_PUSCH_constr_13, CHOICE_constraint },
	asn_MBR_tpc_PUSCH_13,
	2,	/* Elements count */
	&asn_SPC_tpc_PUSCH_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tpc_PUCCH_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_Config__tpc_PUCCH, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct PDCCH_Config__tpc_PUCCH, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_TPC_CommandConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tpc_PUCCH_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_tpc_PUCCH_specs_16 = {
	sizeof(struct PDCCH_Config__tpc_PUCCH),
	offsetof(struct PDCCH_Config__tpc_PUCCH, _asn_ctx),
	offsetof(struct PDCCH_Config__tpc_PUCCH, present),
	sizeof(((struct PDCCH_Config__tpc_PUCCH *)0)->present),
	asn_MAP_tpc_PUCCH_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tpc_PUCCH_16 = {
	"tpc-PUCCH",
	"tpc-PUCCH",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tpc_PUCCH_constr_16, &asn_PER_type_tpc_PUCCH_constr_16, CHOICE_constraint },
	asn_MBR_tpc_PUCCH_16,
	2,	/* Elements count */
	&asn_SPC_tpc_PUCCH_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tpc_SRS_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_Config__tpc_SRS, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct PDCCH_Config__tpc_SRS, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_TPC_CommandConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tpc_SRS_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_tpc_SRS_specs_19 = {
	sizeof(struct PDCCH_Config__tpc_SRS),
	offsetof(struct PDCCH_Config__tpc_SRS, _asn_ctx),
	offsetof(struct PDCCH_Config__tpc_SRS, present),
	sizeof(((struct PDCCH_Config__tpc_SRS *)0)->present),
	asn_MAP_tpc_SRS_tag2el_19,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tpc_SRS_19 = {
	"tpc-SRS",
	"tpc-SRS",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_tpc_SRS_constr_19, &asn_PER_type_tpc_SRS_constr_19, CHOICE_constraint },
	asn_MBR_tpc_SRS_19,
	2,	/* Elements count */
	&asn_SPC_tpc_SRS_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCCH_Config_1[] = {
	{ ATF_POINTER, 8, offsetof(struct PDCCH_Config, controlResourceSetToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_controlResourceSetToAddModList_2,
		0,
		{ &asn_OER_memb_controlResourceSetToAddModList_constr_2, &asn_PER_memb_controlResourceSetToAddModList_constr_2,  memb_controlResourceSetToAddModList_constraint_1 },
		0, 0, /* No default value */
		"controlResourceSetToAddModList"
		},
	{ ATF_POINTER, 7, offsetof(struct PDCCH_Config, controlResourceSetToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_controlResourceSetToReleaseList_4,
		0,
		{ &asn_OER_memb_controlResourceSetToReleaseList_constr_4, &asn_PER_memb_controlResourceSetToReleaseList_constr_4,  memb_controlResourceSetToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"controlResourceSetToReleaseList"
		},
	{ ATF_POINTER, 6, offsetof(struct PDCCH_Config, searchSpacesToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_searchSpacesToAddModList_6,
		0,
		{ &asn_OER_memb_searchSpacesToAddModList_constr_6, &asn_PER_memb_searchSpacesToAddModList_constr_6,  memb_searchSpacesToAddModList_constraint_1 },
		0, 0, /* No default value */
		"searchSpacesToAddModList"
		},
	{ ATF_POINTER, 5, offsetof(struct PDCCH_Config, searchSpacesToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_searchSpacesToReleaseList_8,
		0,
		{ &asn_OER_memb_searchSpacesToReleaseList_constr_8, &asn_PER_memb_searchSpacesToReleaseList_constr_8,  memb_searchSpacesToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"searchSpacesToReleaseList"
		},
	{ ATF_POINTER, 4, offsetof(struct PDCCH_Config, downlinkPreemption),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_downlinkPreemption_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkPreemption"
		},
	{ ATF_POINTER, 3, offsetof(struct PDCCH_Config, tpc_PUSCH),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tpc_PUSCH_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-PUSCH"
		},
	{ ATF_POINTER, 2, offsetof(struct PDCCH_Config, tpc_PUCCH),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tpc_PUCCH_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-PUCCH"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCCH_Config, tpc_SRS),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tpc_SRS_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-SRS"
		},
};
static const int asn_MAP_PDCCH_Config_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_PDCCH_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCCH_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* controlResourceSetToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* controlResourceSetToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* searchSpacesToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* searchSpacesToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* downlinkPreemption */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tpc-PUSCH */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* tpc-PUCCH */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* tpc-SRS */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCCH_Config_specs_1 = {
	sizeof(struct PDCCH_Config),
	offsetof(struct PDCCH_Config, _asn_ctx),
	asn_MAP_PDCCH_Config_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_PDCCH_Config_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCCH_Config = {
	"PDCCH-Config",
	"PDCCH-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCCH_Config_tags_1,
	sizeof(asn_DEF_PDCCH_Config_tags_1)
		/sizeof(asn_DEF_PDCCH_Config_tags_1[0]), /* 1 */
	asn_DEF_PDCCH_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCCH_Config_tags_1)
		/sizeof(asn_DEF_PDCCH_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDCCH_Config_1,
	8,	/* Elements count */
	&asn_SPC_PDCCH_Config_specs_1	/* Additional specs */
};

