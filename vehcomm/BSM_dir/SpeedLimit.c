/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "SpeedLimit.h"

static asn_oer_constraints_t asn_OER_type_item_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_item_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_SpeedLimit_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
asn_per_constraints_t asn_PER_type_SpeedLimit_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_item_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedLimit__Member__item, choice.itis),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIScodes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"itis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedLimit__Member__item, choice.text),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIStextPhrase,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"text"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_item_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* itis */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* text */
};
static asn_CHOICE_specifics_t asn_SPC_item_specs_3 = {
	sizeof(struct SpeedLimit__Member__item),
	offsetof(struct SpeedLimit__Member__item, _asn_ctx),
	offsetof(struct SpeedLimit__Member__item, present),
	sizeof(((struct SpeedLimit__Member__item *)0)->present),
	asn_MAP_item_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_item_3 = {
	"item",
	"item",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_item_constr_3, &asn_PER_type_item_constr_3, CHOICE_constraint },
	asn_MBR_item_3,
	2,	/* Elements count */
	&asn_SPC_item_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedLimit__Member, item),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_item_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"item"
		},
};
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* item */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct SpeedLimit__Member),
	offsetof(struct SpeedLimit__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	1,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SpeedLimit_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SpeedLimit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SpeedLimit_specs_1 = {
	sizeof(struct SpeedLimit),
	offsetof(struct SpeedLimit, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SpeedLimit = {
	"SpeedLimit",
	"SpeedLimit",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SpeedLimit_tags_1,
	sizeof(asn_DEF_SpeedLimit_tags_1)
		/sizeof(asn_DEF_SpeedLimit_tags_1[0]), /* 1 */
	asn_DEF_SpeedLimit_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedLimit_tags_1)
		/sizeof(asn_DEF_SpeedLimit_tags_1[0]), /* 1 */
	{ &asn_OER_type_SpeedLimit_constr_1, &asn_PER_type_SpeedLimit_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SpeedLimit_1,
	1,	/* Single element */
	&asn_SPC_SpeedLimit_specs_1	/* Additional specs */
};

