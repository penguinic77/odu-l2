/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_EUTRA_Parameters_H_
#define	_EUTRA_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorEUTRA.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_ParametersCommon;
struct EUTRA_ParametersXDD_Diff;

/* EUTRA-Parameters */
typedef struct EUTRA_Parameters {
	struct EUTRA_Parameters__supportedBandListEUTRA {
		A_SEQUENCE_OF(FreqBandIndicatorEUTRA_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedBandListEUTRA;
	struct EUTRA_ParametersCommon	*eutra_ParametersCommon;	/* OPTIONAL */
	struct EUTRA_ParametersXDD_Diff	*eutra_ParametersXDD_Diff;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_Parameters_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_Parameters_H_ */
#include <asn_internal.h>
