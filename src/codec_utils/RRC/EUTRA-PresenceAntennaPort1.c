/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "EUTRA-PresenceAntennaPort1.h"

/*
 * This type is implemented using BOOLEAN,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_EUTRA_PresenceAntennaPort1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (1 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_PresenceAntennaPort1 = {
	"EUTRA-PresenceAntennaPort1",
	"EUTRA-PresenceAntennaPort1",
	&asn_OP_BOOLEAN,
	asn_DEF_EUTRA_PresenceAntennaPort1_tags_1,
	sizeof(asn_DEF_EUTRA_PresenceAntennaPort1_tags_1)
		/sizeof(asn_DEF_EUTRA_PresenceAntennaPort1_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_PresenceAntennaPort1_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_PresenceAntennaPort1_tags_1)
		/sizeof(asn_DEF_EUTRA_PresenceAntennaPort1_tags_1[0]), /* 1 */
	{ 0, 0, BOOLEAN_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

