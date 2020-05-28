/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RAN_NotificationAreaInfo_H_
#define	_RAN_NotificationAreaInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RAN_NotificationAreaInfo_PR {
	RAN_NotificationAreaInfo_PR_NOTHING,	/* No components present */
	RAN_NotificationAreaInfo_PR_cellList,
	RAN_NotificationAreaInfo_PR_ran_AreaConfigList
	/* Extensions may appear below */
	
} RAN_NotificationAreaInfo_PR;

/* Forward declarations */
struct PLMN_RAN_AreaCellList;
struct PLMN_RAN_AreaConfigList;

/* RAN-NotificationAreaInfo */
typedef struct RAN_NotificationAreaInfo {
	RAN_NotificationAreaInfo_PR present;
	union RAN_NotificationAreaInfo_u {
		struct PLMN_RAN_AreaCellList	*cellList;
		struct PLMN_RAN_AreaConfigList	*ran_AreaConfigList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAN_NotificationAreaInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAN_NotificationAreaInfo;
extern asn_CHOICE_specifics_t asn_SPC_RAN_NotificationAreaInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_RAN_NotificationAreaInfo_1[2];
extern asn_per_constraints_t asn_PER_type_RAN_NotificationAreaInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RAN_NotificationAreaInfo_H_ */
#include <asn_internal.h>
