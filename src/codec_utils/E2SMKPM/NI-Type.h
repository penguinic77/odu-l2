/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "codeathon/E2SM_KPM.asn1"
 * 	`asn1c -D ./codeathon/e2smkpm/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_NI_Type_H_
#define	_NI_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NI_Type {
	NI_Type_x2_u	= 0,
	NI_Type_xn_u	= 1,
	NI_Type_f1_u	= 2
	/*
	 * Enumeration is extensible
	 */
} e_NI_Type;

/* NI-Type */
typedef long	 NI_Type_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NI_Type_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NI_Type;
extern const asn_INTEGER_specifics_t asn_SPC_NI_Type_specs_1;
asn_struct_free_f NI_Type_free;
asn_struct_print_f NI_Type_print;
asn_constr_check_f NI_Type_constraint;
ber_type_decoder_f NI_Type_decode_ber;
der_type_encoder_f NI_Type_encode_der;
xer_type_decoder_f NI_Type_decode_xer;
xer_type_encoder_f NI_Type_encode_xer;
oer_type_decoder_f NI_Type_decode_oer;
oer_type_encoder_f NI_Type_encode_oer;
per_type_decoder_f NI_Type_decode_uper;
per_type_encoder_f NI_Type_encode_uper;
per_type_decoder_f NI_Type_decode_aper;
per_type_encoder_f NI_Type_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NI_Type_H_ */
#include <asn_internal.h>
