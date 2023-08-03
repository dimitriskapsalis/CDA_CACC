/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "TirePressureThresholdDetection.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_TirePressureThresholdDetection_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TirePressureThresholdDetection_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TirePressureThresholdDetection_value2enum_1[] = {
	{ 0,	6,	"noData" },
	{ 1,	12,	"overPressure" },
	{ 2,	17,	"noWarningPressure" },
	{ 3,	13,	"underPressure" },
	{ 4,	20,	"extremeUnderPressure" },
	{ 5,	9,	"undefined" },
	{ 6,	14,	"errorIndicator" },
	{ 7,	12,	"notAvailable" }
};
static const unsigned int asn_MAP_TirePressureThresholdDetection_enum2value_1[] = {
	6,	/* errorIndicator(6) */
	4,	/* extremeUnderPressure(4) */
	0,	/* noData(0) */
	2,	/* noWarningPressure(2) */
	7,	/* notAvailable(7) */
	1,	/* overPressure(1) */
	5,	/* undefined(5) */
	3	/* underPressure(3) */
};
const asn_INTEGER_specifics_t asn_SPC_TirePressureThresholdDetection_specs_1 = {
	asn_MAP_TirePressureThresholdDetection_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TirePressureThresholdDetection_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TirePressureThresholdDetection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TirePressureThresholdDetection = {
	"TirePressureThresholdDetection",
	"TirePressureThresholdDetection",
	&asn_OP_NativeEnumerated,
	asn_DEF_TirePressureThresholdDetection_tags_1,
	sizeof(asn_DEF_TirePressureThresholdDetection_tags_1)
		/sizeof(asn_DEF_TirePressureThresholdDetection_tags_1[0]), /* 1 */
	asn_DEF_TirePressureThresholdDetection_tags_1,	/* Same as above */
	sizeof(asn_DEF_TirePressureThresholdDetection_tags_1)
		/sizeof(asn_DEF_TirePressureThresholdDetection_tags_1[0]), /* 1 */
	{ &asn_OER_type_TirePressureThresholdDetection_constr_1, &asn_PER_type_TirePressureThresholdDetection_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TirePressureThresholdDetection_specs_1	/* Additional specs */
};

