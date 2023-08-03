/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_PlatooningFlags_H_
#define	_PlatooningFlags_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PlatooningFlags */
typedef OCTET_STRING_t	 PlatooningFlags_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlatooningFlags;
asn_struct_free_f PlatooningFlags_free;
asn_struct_print_f PlatooningFlags_print;
asn_constr_check_f PlatooningFlags_constraint;
ber_type_decoder_f PlatooningFlags_decode_ber;
der_type_encoder_f PlatooningFlags_encode_der;
xer_type_decoder_f PlatooningFlags_decode_xer;
xer_type_encoder_f PlatooningFlags_encode_xer;
oer_type_decoder_f PlatooningFlags_decode_oer;
oer_type_encoder_f PlatooningFlags_encode_oer;
per_type_decoder_f PlatooningFlags_decode_uper;
per_type_encoder_f PlatooningFlags_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PlatooningFlags_H_ */
#include <asn_internal.h>
