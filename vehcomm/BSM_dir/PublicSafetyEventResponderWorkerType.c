/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "PublicSafetyEventResponderWorkerType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PublicSafetyEventResponderWorkerType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PublicSafetyEventResponderWorkerType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PublicSafetyEventResponderWorkerType_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	11,	"towOperater" },
	{ 2,	16,	"fireAndEMSWorker" },
	{ 3,	10,	"aDOTWorker" },
	{ 4,	14,	"lawEnforcement" },
	{ 5,	15,	"hazmatResponder" },
	{ 6,	19,	"animalControlWorker" },
	{ 7,	14,	"otherPersonnel" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_PublicSafetyEventResponderWorkerType_enum2value_1[] = {
	3,	/* aDOTWorker(3) */
	6,	/* animalControlWorker(6) */
	2,	/* fireAndEMSWorker(2) */
	5,	/* hazmatResponder(5) */
	4,	/* lawEnforcement(4) */
	7,	/* otherPersonnel(7) */
	1,	/* towOperater(1) */
	0	/* unavailable(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_PublicSafetyEventResponderWorkerType_specs_1 = {
	asn_MAP_PublicSafetyEventResponderWorkerType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PublicSafetyEventResponderWorkerType_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PublicSafetyEventResponderWorkerType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PublicSafetyEventResponderWorkerType = {
	"PublicSafetyEventResponderWorkerType",
	"PublicSafetyEventResponderWorkerType",
	&asn_OP_NativeEnumerated,
	asn_DEF_PublicSafetyEventResponderWorkerType_tags_1,
	sizeof(asn_DEF_PublicSafetyEventResponderWorkerType_tags_1)
		/sizeof(asn_DEF_PublicSafetyEventResponderWorkerType_tags_1[0]), /* 1 */
	asn_DEF_PublicSafetyEventResponderWorkerType_tags_1,	/* Same as above */
	sizeof(asn_DEF_PublicSafetyEventResponderWorkerType_tags_1)
		/sizeof(asn_DEF_PublicSafetyEventResponderWorkerType_tags_1[0]), /* 1 */
	{ &asn_OER_type_PublicSafetyEventResponderWorkerType_constr_1, &asn_PER_type_PublicSafetyEventResponderWorkerType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PublicSafetyEventResponderWorkerType_specs_1	/* Additional specs */
};

