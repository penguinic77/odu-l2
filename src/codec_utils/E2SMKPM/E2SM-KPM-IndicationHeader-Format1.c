/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "codeathon/E2SM_KPM.asn1"
 * 	`asn1c -D ./codeathon/e2smkpm/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "E2SM-KPM-IndicationHeader-Format1.h"

#include "GlobalKPMnode-ID.h"
#include "NRCGI.h"
#include "SNSSAI.h"
static int
memb_fiveQI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_qci_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_fiveQI_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_fiveQI_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_qci_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_qci_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationHeader_Format1_1[] = {
	{ ATF_POINTER, 6, offsetof(struct E2SM_KPM_IndicationHeader_Format1, id_GlobalKPMnode_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GlobalKPMnode_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"id-GlobalKPMnode-ID"
		},
	{ ATF_POINTER, 5, offsetof(struct E2SM_KPM_IndicationHeader_Format1, nRCGI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRCGI"
		},
	{ ATF_POINTER, 4, offsetof(struct E2SM_KPM_IndicationHeader_Format1, pLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMN-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct E2SM_KPM_IndicationHeader_Format1, sliceID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SNSSAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sliceID"
		},
	{ ATF_POINTER, 2, offsetof(struct E2SM_KPM_IndicationHeader_Format1, fiveQI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_fiveQI_constr_6, &asn_PER_memb_fiveQI_constr_6,  memb_fiveQI_constraint_1 },
		0, 0, /* No default value */
		"fiveQI"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_KPM_IndicationHeader_Format1, qci),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_qci_constr_7, &asn_PER_memb_qci_constr_7,  memb_qci_constraint_1 },
		0, 0, /* No default value */
		"qci"
		},
};
static const int asn_MAP_E2SM_KPM_IndicationHeader_Format1_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_IndicationHeader_Format1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_IndicationHeader_Format1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* id-GlobalKPMnode-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nRCGI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sliceID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* fiveQI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* qci */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationHeader_Format1_specs_1 = {
	sizeof(struct E2SM_KPM_IndicationHeader_Format1),
	offsetof(struct E2SM_KPM_IndicationHeader_Format1, _asn_ctx),
	asn_MAP_E2SM_KPM_IndicationHeader_Format1_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_E2SM_KPM_IndicationHeader_Format1_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationHeader_Format1 = {
	"E2SM-KPM-IndicationHeader-Format1",
	"E2SM-KPM-IndicationHeader-Format1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_IndicationHeader_Format1_tags_1,
	sizeof(asn_DEF_E2SM_KPM_IndicationHeader_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationHeader_Format1_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_IndicationHeader_Format1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_IndicationHeader_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationHeader_Format1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_IndicationHeader_Format1_1,
	6,	/* Elements count */
	&asn_SPC_E2SM_KPM_IndicationHeader_Format1_specs_1	/* Additional specs */
};
