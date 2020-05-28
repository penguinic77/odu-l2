/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_TAG_H_
#define	_TAG_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TAG-Id.h"
#include "TimeAlignmentTimer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TAG */
typedef struct TAG {
	TAG_Id_t	 tag_Id;
	TimeAlignmentTimer_t	 timeAlignmentTimer;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAG;
extern asn_SEQUENCE_specifics_t asn_SPC_TAG_specs_1;
extern asn_TYPE_member_t asn_MBR_TAG_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TAG_H_ */
#include <asn_internal.h>
