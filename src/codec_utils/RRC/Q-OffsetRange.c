/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "Q-OffsetRange.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Q_OffsetRange_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Q_OffsetRange_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Q_OffsetRange_value2enum_1[] = {
	{ 0,	5,	"dB-24" },
	{ 1,	5,	"dB-22" },
	{ 2,	5,	"dB-20" },
	{ 3,	5,	"dB-18" },
	{ 4,	5,	"dB-16" },
	{ 5,	5,	"dB-14" },
	{ 6,	5,	"dB-12" },
	{ 7,	5,	"dB-10" },
	{ 8,	4,	"dB-8" },
	{ 9,	4,	"dB-6" },
	{ 10,	4,	"dB-5" },
	{ 11,	4,	"dB-4" },
	{ 12,	4,	"dB-3" },
	{ 13,	4,	"dB-2" },
	{ 14,	4,	"dB-1" },
	{ 15,	3,	"dB0" },
	{ 16,	3,	"dB1" },
	{ 17,	3,	"dB2" },
	{ 18,	3,	"dB3" },
	{ 19,	3,	"dB4" },
	{ 20,	3,	"dB5" },
	{ 21,	3,	"dB6" },
	{ 22,	3,	"dB8" },
	{ 23,	4,	"dB10" },
	{ 24,	4,	"dB12" },
	{ 25,	4,	"dB14" },
	{ 26,	4,	"dB16" },
	{ 27,	4,	"dB18" },
	{ 28,	4,	"dB20" },
	{ 29,	4,	"dB22" },
	{ 30,	4,	"dB24" }
};
static const unsigned int asn_MAP_Q_OffsetRange_enum2value_1[] = {
	14,	/* dB-1(14) */
	7,	/* dB-10(7) */
	6,	/* dB-12(6) */
	5,	/* dB-14(5) */
	4,	/* dB-16(4) */
	3,	/* dB-18(3) */
	13,	/* dB-2(13) */
	2,	/* dB-20(2) */
	1,	/* dB-22(1) */
	0,	/* dB-24(0) */
	12,	/* dB-3(12) */
	11,	/* dB-4(11) */
	10,	/* dB-5(10) */
	9,	/* dB-6(9) */
	8,	/* dB-8(8) */
	15,	/* dB0(15) */
	16,	/* dB1(16) */
	23,	/* dB10(23) */
	24,	/* dB12(24) */
	25,	/* dB14(25) */
	26,	/* dB16(26) */
	27,	/* dB18(27) */
	17,	/* dB2(17) */
	28,	/* dB20(28) */
	29,	/* dB22(29) */
	30,	/* dB24(30) */
	18,	/* dB3(18) */
	19,	/* dB4(19) */
	20,	/* dB5(20) */
	21,	/* dB6(21) */
	22	/* dB8(22) */
};
const asn_INTEGER_specifics_t asn_SPC_Q_OffsetRange_specs_1 = {
	asn_MAP_Q_OffsetRange_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Q_OffsetRange_enum2value_1,	/* N => "tag"; sorted by N */
	31,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Q_OffsetRange_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Q_OffsetRange = {
	"Q-OffsetRange",
	"Q-OffsetRange",
	&asn_OP_NativeEnumerated,
	asn_DEF_Q_OffsetRange_tags_1,
	sizeof(asn_DEF_Q_OffsetRange_tags_1)
		/sizeof(asn_DEF_Q_OffsetRange_tags_1[0]), /* 1 */
	asn_DEF_Q_OffsetRange_tags_1,	/* Same as above */
	sizeof(asn_DEF_Q_OffsetRange_tags_1)
		/sizeof(asn_DEF_Q_OffsetRange_tags_1[0]), /* 1 */
	{ &asn_OER_type_Q_OffsetRange_constr_1, &asn_PER_type_Q_OffsetRange_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Q_OffsetRange_specs_1	/* Additional specs */
};

