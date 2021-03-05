/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "codeathon/E2SM_KPM.asn1"
 * 	`asn1c -D ./codeathon/e2smkpm/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_GlobalKPMnode_ID_H_
#define	_GlobalKPMnode_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GlobalKPMnode_ID_PR {
	GlobalKPMnode_ID_PR_NOTHING,	/* No components present */
	GlobalKPMnode_ID_PR_gNB,
	GlobalKPMnode_ID_PR_en_gNB,
	GlobalKPMnode_ID_PR_ng_eNB,
	GlobalKPMnode_ID_PR_eNB
	/* Extensions may appear below */
	
} GlobalKPMnode_ID_PR;

/* Forward declarations */
struct GlobalKPMnode_gNB_ID;
struct GlobalKPMnode_en_gNB_ID;
struct GlobalKPMnode_ng_eNB_ID;
struct GlobalKPMnode_eNB_ID;

/* GlobalKPMnode-ID */
typedef struct GlobalKPMnode_ID {
	GlobalKPMnode_ID_PR present;
	union GlobalKPMnode_ID_u {
		struct GlobalKPMnode_gNB_ID	*gNB;
		struct GlobalKPMnode_en_gNB_ID	*en_gNB;
		struct GlobalKPMnode_ng_eNB_ID	*ng_eNB;
		struct GlobalKPMnode_eNB_ID	*eNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalKPMnode_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalKPMnode_ID;
extern asn_CHOICE_specifics_t asn_SPC_GlobalKPMnode_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalKPMnode_ID_1[4];
extern asn_per_constraints_t asn_PER_type_GlobalKPMnode_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalKPMnode_ID_H_ */
#include <asn_internal.h>
