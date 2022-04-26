/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_S_NSSAI_H_
#define	_S_NSSAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S_NSSAI_PR {
	S_NSSAI_PR_NOTHING,	/* No components present */
	S_NSSAI_PR_sst,
	S_NSSAI_PR_sst_SD
} S_NSSAI_PR;

/* S-NSSAI */
typedef struct S_NSSAI {
	S_NSSAI_PR present;
	union S_NSSAI_u {
		BIT_STRING_t	 sst;
		BIT_STRING_t	 sst_SD;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S_NSSAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_NSSAI;
extern asn_CHOICE_specifics_t asn_SPC_S_NSSAI_specs_1;
extern asn_TYPE_member_t asn_MBR_S_NSSAI_1[2];
extern asn_per_constraints_t asn_PER_type_S_NSSAI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S_NSSAI_H_ */
#include <asn_internal.h>
