/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_NodeAttributeLL_H_
#define	_NodeAttributeLL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NodeAttributeLL {
	NodeAttributeLL_reserved	= 0,
	NodeAttributeLL_stopLine	= 1,
	NodeAttributeLL_roundedCapStyleA	= 2,
	NodeAttributeLL_roundedCapStyleB	= 3,
	NodeAttributeLL_mergePoint	= 4,
	NodeAttributeLL_divergePoint	= 5,
	NodeAttributeLL_downstreamStopLine	= 6,
	NodeAttributeLL_downstreamStartNode	= 7,
	NodeAttributeLL_closedToTraffic	= 8,
	NodeAttributeLL_safeIsland	= 9,
	NodeAttributeLL_curbPresentAtStepOff	= 10,
	NodeAttributeLL_hydrantPresent	= 11
	/*
	 * Enumeration is extensible
	 */
} e_NodeAttributeLL;

/* NodeAttributeLL */
typedef long	 NodeAttributeLL_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NodeAttributeLL_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeLL;
extern const asn_INTEGER_specifics_t asn_SPC_NodeAttributeLL_specs_1;
asn_struct_free_f NodeAttributeLL_free;
asn_struct_print_f NodeAttributeLL_print;
asn_constr_check_f NodeAttributeLL_constraint;
ber_type_decoder_f NodeAttributeLL_decode_ber;
der_type_encoder_f NodeAttributeLL_encode_der;
xer_type_decoder_f NodeAttributeLL_decode_xer;
xer_type_encoder_f NodeAttributeLL_encode_xer;
oer_type_decoder_f NodeAttributeLL_decode_oer;
oer_type_encoder_f NodeAttributeLL_encode_oer;
per_type_decoder_f NodeAttributeLL_decode_uper;
per_type_encoder_f NodeAttributeLL_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeAttributeLL_H_ */
#include <asn_internal.h>
