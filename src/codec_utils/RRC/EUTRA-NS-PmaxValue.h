/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_EUTRA_NS_PmaxValue_H_
#define	_EUTRA_NS_PmaxValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRA-NS-PmaxValue */
typedef struct EUTRA_NS_PmaxValue {
	long	*additionalPmax;	/* OPTIONAL */
	long	*additionalSpectrumEmission;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_NS_PmaxValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_NS_PmaxValue;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_NS_PmaxValue_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_NS_PmaxValue_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_NS_PmaxValue_H_ */
#include <asn_internal.h>
