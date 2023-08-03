/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "EmissionType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_EmissionType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_EmissionType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_EmissionType_value2enum_1[] = {
	{ 0,	5,	"typeA" },
	{ 1,	5,	"typeB" },
	{ 2,	5,	"typeC" },
	{ 3,	5,	"typeD" },
	{ 4,	5,	"typeE" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_EmissionType_enum2value_1[] = {
	0,	/* typeA(0) */
	1,	/* typeB(1) */
	2,	/* typeC(2) */
	3,	/* typeD(3) */
	4	/* typeE(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_EmissionType_specs_1 = {
	asn_MAP_EmissionType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_EmissionType_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_EmissionType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EmissionType = {
	"EmissionType",
	"EmissionType",
	&asn_OP_NativeEnumerated,
	asn_DEF_EmissionType_tags_1,
	sizeof(asn_DEF_EmissionType_tags_1)
		/sizeof(asn_DEF_EmissionType_tags_1[0]), /* 1 */
	asn_DEF_EmissionType_tags_1,	/* Same as above */
	sizeof(asn_DEF_EmissionType_tags_1)
		/sizeof(asn_DEF_EmissionType_tags_1[0]), /* 1 */
	{ &asn_OER_type_EmissionType_constr_1, &asn_PER_type_EmissionType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_EmissionType_specs_1	/* Additional specs */
};

