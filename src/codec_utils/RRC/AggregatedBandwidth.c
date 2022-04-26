/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "AggregatedBandwidth.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_AggregatedBandwidth_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_AggregatedBandwidth_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_AggregatedBandwidth_value2enum_1[] = {
	{ 0,	5,	"mhz50" },
	{ 1,	6,	"mhz100" },
	{ 2,	6,	"mhz150" },
	{ 3,	6,	"mhz200" },
	{ 4,	6,	"mhz250" },
	{ 5,	6,	"mhz300" },
	{ 6,	6,	"mhz350" },
	{ 7,	6,	"mhz400" },
	{ 8,	6,	"mhz450" },
	{ 9,	6,	"mhz500" },
	{ 10,	6,	"mhz550" },
	{ 11,	6,	"mhz600" },
	{ 12,	6,	"mhz650" },
	{ 13,	6,	"mhz700" },
	{ 14,	6,	"mhz750" },
	{ 15,	6,	"mhz800" }
};
static const unsigned int asn_MAP_AggregatedBandwidth_enum2value_1[] = {
	1,	/* mhz100(1) */
	2,	/* mhz150(2) */
	3,	/* mhz200(3) */
	4,	/* mhz250(4) */
	5,	/* mhz300(5) */
	6,	/* mhz350(6) */
	7,	/* mhz400(7) */
	8,	/* mhz450(8) */
	0,	/* mhz50(0) */
	9,	/* mhz500(9) */
	10,	/* mhz550(10) */
	11,	/* mhz600(11) */
	12,	/* mhz650(12) */
	13,	/* mhz700(13) */
	14,	/* mhz750(14) */
	15	/* mhz800(15) */
};
const asn_INTEGER_specifics_t asn_SPC_AggregatedBandwidth_specs_1 = {
	asn_MAP_AggregatedBandwidth_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_AggregatedBandwidth_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_AggregatedBandwidth_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AggregatedBandwidth = {
	"AggregatedBandwidth",
	"AggregatedBandwidth",
	&asn_OP_NativeEnumerated,
	asn_DEF_AggregatedBandwidth_tags_1,
	sizeof(asn_DEF_AggregatedBandwidth_tags_1)
		/sizeof(asn_DEF_AggregatedBandwidth_tags_1[0]), /* 1 */
	asn_DEF_AggregatedBandwidth_tags_1,	/* Same as above */
	sizeof(asn_DEF_AggregatedBandwidth_tags_1)
		/sizeof(asn_DEF_AggregatedBandwidth_tags_1[0]), /* 1 */
	{ &asn_OER_type_AggregatedBandwidth_constr_1, &asn_PER_type_AggregatedBandwidth_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_AggregatedBandwidth_specs_1	/* Additional specs */
};

