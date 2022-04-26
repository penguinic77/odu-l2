/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PDU_SessionID_H_
#define	_PDU_SessionID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PDU-SessionID */
typedef long	 PDU_SessionID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PDU_SessionID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PDU_SessionID;
asn_struct_free_f PDU_SessionID_free;
asn_struct_print_f PDU_SessionID_print;
asn_constr_check_f PDU_SessionID_constraint;
ber_type_decoder_f PDU_SessionID_decode_ber;
der_type_encoder_f PDU_SessionID_encode_der;
xer_type_decoder_f PDU_SessionID_decode_xer;
xer_type_encoder_f PDU_SessionID_encode_xer;
oer_type_decoder_f PDU_SessionID_decode_oer;
oer_type_encoder_f PDU_SessionID_encode_oer;
per_type_decoder_f PDU_SessionID_decode_uper;
per_type_encoder_f PDU_SessionID_encode_uper;
per_type_decoder_f PDU_SessionID_decode_aper;
per_type_encoder_f PDU_SessionID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PDU_SessionID_H_ */
#include <asn_internal.h>
