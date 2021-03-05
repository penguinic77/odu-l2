/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "codeathon/E2SM_KPM.asn1"
 * 	`asn1c -D ./codeathon/e2smkpm/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SNSSAI_H_
#define	_SNSSAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SNSSAI */
typedef struct SNSSAI {
	OCTET_STRING_t	 sST;
	OCTET_STRING_t	*sD;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SNSSAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SNSSAI;
extern asn_SEQUENCE_specifics_t asn_SPC_SNSSAI_specs_1;
extern asn_TYPE_member_t asn_MBR_SNSSAI_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SNSSAI_H_ */
#include <asn_internal.h>
