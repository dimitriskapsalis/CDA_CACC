/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "RegionOffsets.h"

asn_TYPE_member_t asn_MBR_RegionOffsets_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RegionOffsets, xOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionOffsets, yOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct RegionOffsets, zOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zOffset"
		},
};
static const int asn_MAP_RegionOffsets_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RegionOffsets_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RegionOffsets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* xOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* yOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* zOffset */
};
asn_SEQUENCE_specifics_t asn_SPC_RegionOffsets_specs_1 = {
	sizeof(struct RegionOffsets),
	offsetof(struct RegionOffsets, _asn_ctx),
	asn_MAP_RegionOffsets_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RegionOffsets_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RegionOffsets = {
	"RegionOffsets",
	"RegionOffsets",
	&asn_OP_SEQUENCE,
	asn_DEF_RegionOffsets_tags_1,
	sizeof(asn_DEF_RegionOffsets_tags_1)
		/sizeof(asn_DEF_RegionOffsets_tags_1[0]), /* 1 */
	asn_DEF_RegionOffsets_tags_1,	/* Same as above */
	sizeof(asn_DEF_RegionOffsets_tags_1)
		/sizeof(asn_DEF_RegionOffsets_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RegionOffsets_1,
	3,	/* Elements count */
	&asn_SPC_RegionOffsets_specs_1	/* Additional specs */
};

