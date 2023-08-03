/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_SteeringWheelAngleConfidence_H_
#define	_SteeringWheelAngleConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SteeringWheelAngleConfidence {
	SteeringWheelAngleConfidence_unavailable	= 0,
	SteeringWheelAngleConfidence_prec2deg	= 1,
	SteeringWheelAngleConfidence_prec1deg	= 2,
	SteeringWheelAngleConfidence_prec0_02deg	= 3
} e_SteeringWheelAngleConfidence;

/* SteeringWheelAngleConfidence */
typedef long	 SteeringWheelAngleConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SteeringWheelAngleConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SteeringWheelAngleConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_SteeringWheelAngleConfidence_specs_1;
asn_struct_free_f SteeringWheelAngleConfidence_free;
asn_struct_print_f SteeringWheelAngleConfidence_print;
asn_constr_check_f SteeringWheelAngleConfidence_constraint;
ber_type_decoder_f SteeringWheelAngleConfidence_decode_ber;
der_type_encoder_f SteeringWheelAngleConfidence_encode_der;
xer_type_decoder_f SteeringWheelAngleConfidence_decode_xer;
xer_type_encoder_f SteeringWheelAngleConfidence_encode_xer;
oer_type_decoder_f SteeringWheelAngleConfidence_decode_oer;
oer_type_encoder_f SteeringWheelAngleConfidence_encode_oer;
per_type_decoder_f SteeringWheelAngleConfidence_decode_uper;
per_type_encoder_f SteeringWheelAngleConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SteeringWheelAngleConfidence_H_ */
#include <asn_internal.h>
