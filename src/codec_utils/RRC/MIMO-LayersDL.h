/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_MIMO_LayersDL_H_
#define	_MIMO_LayersDL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_LayersDL {
	MIMO_LayersDL_twoLayers	= 0,
	MIMO_LayersDL_fourLayers	= 1,
	MIMO_LayersDL_eightLayers	= 2
} e_MIMO_LayersDL;

/* MIMO-LayersDL */
typedef long	 MIMO_LayersDL_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MIMO_LayersDL_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MIMO_LayersDL;
extern const asn_INTEGER_specifics_t asn_SPC_MIMO_LayersDL_specs_1;
asn_struct_free_f MIMO_LayersDL_free;
asn_struct_print_f MIMO_LayersDL_print;
asn_constr_check_f MIMO_LayersDL_constraint;
ber_type_decoder_f MIMO_LayersDL_decode_ber;
der_type_encoder_f MIMO_LayersDL_encode_der;
xer_type_decoder_f MIMO_LayersDL_decode_xer;
xer_type_encoder_f MIMO_LayersDL_encode_xer;
oer_type_decoder_f MIMO_LayersDL_decode_oer;
oer_type_encoder_f MIMO_LayersDL_encode_oer;
per_type_decoder_f MIMO_LayersDL_decode_uper;
per_type_encoder_f MIMO_LayersDL_encode_uper;
per_type_decoder_f MIMO_LayersDL_decode_aper;
per_type_encoder_f MIMO_LayersDL_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_LayersDL_H_ */
#include <asn_internal.h>
