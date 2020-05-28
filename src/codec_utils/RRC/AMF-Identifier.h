/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_AMF_Identifier_H_
#define	_AMF_Identifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AMF-Identifier */
typedef BIT_STRING_t	 AMF_Identifier_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AMF_Identifier_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AMF_Identifier;
asn_struct_free_f AMF_Identifier_free;
asn_struct_print_f AMF_Identifier_print;
asn_constr_check_f AMF_Identifier_constraint;
ber_type_decoder_f AMF_Identifier_decode_ber;
der_type_encoder_f AMF_Identifier_encode_der;
xer_type_decoder_f AMF_Identifier_decode_xer;
xer_type_encoder_f AMF_Identifier_encode_xer;
oer_type_decoder_f AMF_Identifier_decode_oer;
oer_type_encoder_f AMF_Identifier_encode_oer;
per_type_decoder_f AMF_Identifier_decode_uper;
per_type_encoder_f AMF_Identifier_encode_uper;
per_type_decoder_f AMF_Identifier_decode_aper;
per_type_encoder_f AMF_Identifier_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AMF_Identifier_H_ */
#include <asn_internal.h>
