/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "NodeAttributeXYList.h"

static asn_oer_constraints_t asn_OER_type_NodeAttributeXYList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
asn_per_constraints_t asn_PER_type_NodeAttributeXYList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NodeAttributeXYList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NodeAttributeXY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NodeAttributeXYList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NodeAttributeXYList_specs_1 = {
	sizeof(struct NodeAttributeXYList),
	offsetof(struct NodeAttributeXYList, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_NodeAttributeXYList = {
	"NodeAttributeXYList",
	"NodeAttributeXYList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NodeAttributeXYList_tags_1,
	sizeof(asn_DEF_NodeAttributeXYList_tags_1)
		/sizeof(asn_DEF_NodeAttributeXYList_tags_1[0]), /* 1 */
	asn_DEF_NodeAttributeXYList_tags_1,	/* Same as above */
	sizeof(asn_DEF_NodeAttributeXYList_tags_1)
		/sizeof(asn_DEF_NodeAttributeXYList_tags_1[0]), /* 1 */
	{ &asn_OER_type_NodeAttributeXYList_constr_1, &asn_PER_type_NodeAttributeXYList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_NodeAttributeXYList_1,
	1,	/* Single element */
	&asn_SPC_NodeAttributeXYList_specs_1	/* Additional specs */
};

