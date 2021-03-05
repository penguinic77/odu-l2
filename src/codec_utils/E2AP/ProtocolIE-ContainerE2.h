/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "codeathon/E2AP.asn1"
 * 	`asn1c -D ./newE2AP -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ProtocolIE_ContainerE2_H_
#define	_ProtocolIE_ContainerE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RICsubscriptionRequest_IEs;
struct RICsubscriptionResponse_IEs;
struct RICsubscriptionFailure_IEs;
struct RICsubscriptionDeleteRequest_IEs;
struct RICsubscriptionDeleteResponse_IEs;
struct RICsubscriptionDeleteFailure_IEs;
struct RICindication_IEs;
struct RICcontrolRequest_IEs;
struct RICcontrolAcknowledge_IEs;
struct RICcontrolFailure_IEs;
struct ErrorIndicationE2_IEs;
struct E2setupRequestIEs;
struct E2setupResponseIEs;
struct E2setupFailureIEs;
struct ResetRequestIEs;
struct ResetResponseIEs;
struct RICserviceUpdate_IEs;
struct RICserviceUpdateAcknowledge_IEs;
struct RICserviceUpdateFailure_IEs;
struct RICserviceQuery_IEs;

/* ProtocolIE-ContainerE2 */
typedef struct ProtocolIE_ContainerE2_1405P0 {
	A_SEQUENCE_OF(struct RICsubscriptionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P0_t;
typedef struct ProtocolIE_ContainerE2_1405P1 {
	A_SEQUENCE_OF(struct RICsubscriptionResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P1_t;
typedef struct ProtocolIE_ContainerE2_1405P2 {
	A_SEQUENCE_OF(struct RICsubscriptionFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P2_t;
typedef struct ProtocolIE_ContainerE2_1405P3 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P3_t;
typedef struct ProtocolIE_ContainerE2_1405P4 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P4_t;
typedef struct ProtocolIE_ContainerE2_1405P5 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P5_t;
typedef struct ProtocolIE_ContainerE2_1405P6 {
	A_SEQUENCE_OF(struct RICindication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P6_t;
typedef struct ProtocolIE_ContainerE2_1405P7 {
	A_SEQUENCE_OF(struct RICcontrolRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P7_t;
typedef struct ProtocolIE_ContainerE2_1405P8 {
	A_SEQUENCE_OF(struct RICcontrolAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P8_t;
typedef struct ProtocolIE_ContainerE2_1405P9 {
	A_SEQUENCE_OF(struct RICcontrolFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P9_t;
typedef struct ProtocolIE_ContainerE2_1405P10 {
	A_SEQUENCE_OF(struct ErrorIndicationE2_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P10_t;
typedef struct ProtocolIE_ContainerE2_1405P11 {
	A_SEQUENCE_OF(struct E2setupRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P11_t;
typedef struct ProtocolIE_ContainerE2_1405P12 {
	A_SEQUENCE_OF(struct E2setupResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P12_t;
typedef struct ProtocolIE_ContainerE2_1405P13 {
	A_SEQUENCE_OF(struct E2setupFailureIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P13_t;
typedef struct ProtocolIE_ContainerE2_1405P14 {
	A_SEQUENCE_OF(struct ResetRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P14_t;
typedef struct ProtocolIE_ContainerE2_1405P15 {
	A_SEQUENCE_OF(struct ResetResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P15_t;
typedef struct ProtocolIE_ContainerE2_1405P16 {
	A_SEQUENCE_OF(struct RICserviceUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P16_t;
typedef struct ProtocolIE_ContainerE2_1405P17 {
	A_SEQUENCE_OF(struct RICserviceUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P17_t;
typedef struct ProtocolIE_ContainerE2_1405P18 {
	A_SEQUENCE_OF(struct RICserviceUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P18_t;
typedef struct ProtocolIE_ContainerE2_1405P19 {
	A_SEQUENCE_OF(struct RICserviceQuery_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_ContainerE2_1405P19_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P0;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P0_specs_1;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P0_1[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P0_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P1;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P1_specs_3;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P1_3[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P1_constr_3;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P2;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P2_specs_5;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P2_5[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P2_constr_5;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P3;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P3_specs_7;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P3_7[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P3_constr_7;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P4;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P4_specs_9;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P4_9[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P4_constr_9;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P5;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P5_specs_11;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P5_11[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P5_constr_11;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P6;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P6_specs_13;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P6_13[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P6_constr_13;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P7;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P7_specs_15;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P7_15[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P7_constr_15;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P8;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P8_specs_17;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P8_17[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P8_constr_17;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P9;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P9_specs_19;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P9_19[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P9_constr_19;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P10;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P10_specs_21;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P10_21[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P10_constr_21;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P11;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P11_specs_23;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P11_23[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P11_constr_23;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P12;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P12_specs_25;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P12_25[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P12_constr_25;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P13;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P13_specs_27;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P13_27[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P13_constr_27;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P14;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P14_specs_29;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P14_29[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P14_constr_29;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P15;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P15_specs_31;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P15_31[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P15_constr_31;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P16;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P16_specs_33;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P16_33[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P16_constr_33;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P17;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P17_specs_35;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P17_35[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P17_constr_35;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P18;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P18_specs_37;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P18_37[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P18_constr_37;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ContainerE2_1405P19;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_ContainerE2_1405P19_specs_39;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_ContainerE2_1405P19_39[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ContainerE2_1405P19_constr_39;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_ContainerE2_H_ */
#include <asn_internal.h>
