/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-CommonDataTypes"
 * 	found in "codeathon/E2AP.asn1"
 * 	`asn1c -D ./newE2AP -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ProcedureCodeE2_H_
#define	_ProcedureCodeE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProcedureCodeE2 */
typedef long	 ProcedureCodeE2_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ProcedureCodeE2_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProcedureCodeE2;
asn_struct_free_f ProcedureCodeE2_free;
asn_struct_print_f ProcedureCodeE2_print;
asn_constr_check_f ProcedureCodeE2_constraint;
ber_type_decoder_f ProcedureCodeE2_decode_ber;
der_type_encoder_f ProcedureCodeE2_encode_der;
xer_type_decoder_f ProcedureCodeE2_decode_xer;
xer_type_encoder_f ProcedureCodeE2_encode_xer;
oer_type_decoder_f ProcedureCodeE2_decode_oer;
oer_type_encoder_f ProcedureCodeE2_encode_oer;
per_type_decoder_f ProcedureCodeE2_decode_uper;
per_type_encoder_f ProcedureCodeE2_encode_uper;
per_type_decoder_f ProcedureCodeE2_decode_aper;
per_type_encoder_f ProcedureCodeE2_encode_aper;
#define ProcedureCodeE2_id_E2setup	((ProcedureCodeE2_t)1)
#define ProcedureCodeE2_id_ErrorIndicationE2	((ProcedureCodeE2_t)2)
#define ProcedureCodeE2_id_Reset	((ProcedureCodeE2_t)3)
#define ProcedureCodeE2_id_RICcontrol	((ProcedureCodeE2_t)4)
#define ProcedureCodeE2_id_RICindication	((ProcedureCodeE2_t)5)
#define ProcedureCodeE2_id_RICserviceQuery	((ProcedureCodeE2_t)6)
#define ProcedureCodeE2_id_RICserviceUpdate	((ProcedureCodeE2_t)7)
#define ProcedureCodeE2_id_RICsubscription	((ProcedureCodeE2_t)8)
#define ProcedureCodeE2_id_RICsubscriptionDelete	((ProcedureCodeE2_t)9)

#ifdef __cplusplus
}
#endif

#endif	/* _ProcedureCodeE2_H_ */
#include <asn_internal.h>
