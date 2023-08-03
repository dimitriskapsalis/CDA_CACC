/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "TrailerHistoryPoint.h"

asn_TYPE_member_t asn_MBR_TrailerHistoryPoint_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerHistoryPoint, pivotAngle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_Angle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pivotAngle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerHistoryPoint, timeOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerHistoryPoint, positionOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_24b,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"positionOffset"
		},
	{ ATF_POINTER, 2, offsetof(struct TrailerHistoryPoint, elevationOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VertOffset_B07,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"elevationOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct TrailerHistoryPoint, heading),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CoarseHeading,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
};
static const int asn_MAP_TrailerHistoryPoint_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_TrailerHistoryPoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrailerHistoryPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pivotAngle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* positionOffset */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* elevationOffset */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* heading */
};
asn_SEQUENCE_specifics_t asn_SPC_TrailerHistoryPoint_specs_1 = {
	sizeof(struct TrailerHistoryPoint),
	offsetof(struct TrailerHistoryPoint, _asn_ctx),
	asn_MAP_TrailerHistoryPoint_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_TrailerHistoryPoint_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrailerHistoryPoint = {
	"TrailerHistoryPoint",
	"TrailerHistoryPoint",
	&asn_OP_SEQUENCE,
	asn_DEF_TrailerHistoryPoint_tags_1,
	sizeof(asn_DEF_TrailerHistoryPoint_tags_1)
		/sizeof(asn_DEF_TrailerHistoryPoint_tags_1[0]), /* 1 */
	asn_DEF_TrailerHistoryPoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrailerHistoryPoint_tags_1)
		/sizeof(asn_DEF_TrailerHistoryPoint_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrailerHistoryPoint_1,
	5,	/* Elements count */
	&asn_SPC_TrailerHistoryPoint_specs_1	/* Additional specs */
};

