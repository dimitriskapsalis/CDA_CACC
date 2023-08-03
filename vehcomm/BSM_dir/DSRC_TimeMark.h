/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_DSRC_TimeMark_H_
#define	_DSRC_TimeMark_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeMark */
typedef long	 DSRC_TimeMark_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DSRC_TimeMark_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DSRC_TimeMark;
asn_struct_free_f DSRC_TimeMark_free;
asn_struct_print_f DSRC_TimeMark_print;
asn_constr_check_f DSRC_TimeMark_constraint;
ber_type_decoder_f DSRC_TimeMark_decode_ber;
der_type_encoder_f DSRC_TimeMark_encode_der;
xer_type_decoder_f DSRC_TimeMark_decode_xer;
xer_type_encoder_f DSRC_TimeMark_encode_xer;
oer_type_decoder_f DSRC_TimeMark_decode_oer;
oer_type_encoder_f DSRC_TimeMark_encode_oer;
per_type_decoder_f DSRC_TimeMark_decode_uper;
per_type_encoder_f DSRC_TimeMark_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DSRC_TimeMark_H_ */
#include <asn_internal.h>
