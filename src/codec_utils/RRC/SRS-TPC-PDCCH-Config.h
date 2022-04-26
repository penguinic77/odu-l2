/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SRS_TPC_PDCCH_Config_H_
#define	_SRS_TPC_PDCCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SRS_CC_SetIndex;

/* SRS-TPC-PDCCH-Config */
typedef struct SRS_TPC_PDCCH_Config {
	struct SRS_TPC_PDCCH_Config__srs_CC_SetIndexlist {
		A_SEQUENCE_OF(struct SRS_CC_SetIndex) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_CC_SetIndexlist;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_TPC_PDCCH_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRS_TPC_PDCCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_TPC_PDCCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_TPC_PDCCH_Config_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_TPC_PDCCH_Config_H_ */
#include <asn_internal.h>
