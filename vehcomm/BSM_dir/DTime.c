/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "DTime.h"

static asn_TYPE_member_t asn_MBR_DTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DTime, hour),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DHour,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hour"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DTime, minute),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DMinute,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minute"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DTime, second),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"second"
		},
	{ ATF_POINTER, 1, offsetof(struct DTime, offset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"offset"
		},
};
static const int asn_MAP_DTime_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_DTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hour */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* minute */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* second */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* offset */
};
static asn_SEQUENCE_specifics_t asn_SPC_DTime_specs_1 = {
	sizeof(struct DTime),
	offsetof(struct DTime, _asn_ctx),
	asn_MAP_DTime_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_DTime_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DTime = {
	"DTime",
	"DTime",
	&asn_OP_SEQUENCE,
	asn_DEF_DTime_tags_1,
	sizeof(asn_DEF_DTime_tags_1)
		/sizeof(asn_DEF_DTime_tags_1[0]), /* 1 */
	asn_DEF_DTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_DTime_tags_1)
		/sizeof(asn_DEF_DTime_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DTime_1,
	4,	/* Elements count */
	&asn_SPC_DTime_specs_1	/* Additional specs */
};

