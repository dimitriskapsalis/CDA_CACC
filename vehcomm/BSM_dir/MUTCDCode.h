/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_MUTCDCode_H_
#define	_MUTCDCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MUTCDCode {
	MUTCDCode_none	= 0,
	MUTCDCode_regulatory	= 1,
	MUTCDCode_warning	= 2,
	MUTCDCode_maintenance	= 3,
	MUTCDCode_motoristService	= 4,
	MUTCDCode_guide	= 5,
	MUTCDCode_rec	= 6
	/*
	 * Enumeration is extensible
	 */
} e_MUTCDCode;

/* MUTCDCode */
typedef long	 MUTCDCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MUTCDCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MUTCDCode;
extern const asn_INTEGER_specifics_t asn_SPC_MUTCDCode_specs_1;
asn_struct_free_f MUTCDCode_free;
asn_struct_print_f MUTCDCode_print;
asn_constr_check_f MUTCDCode_constraint;
ber_type_decoder_f MUTCDCode_decode_ber;
der_type_encoder_f MUTCDCode_encode_der;
xer_type_decoder_f MUTCDCode_decode_xer;
xer_type_encoder_f MUTCDCode_encode_xer;
oer_type_decoder_f MUTCDCode_decode_oer;
oer_type_encoder_f MUTCDCode_encode_oer;
per_type_decoder_f MUTCDCode_decode_uper;
per_type_encoder_f MUTCDCode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MUTCDCode_H_ */
#include <asn_internal.h>
