/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "J2735BSMESSAGE"
 * 	found in "BasicSafetyMessage-Volvo.txt"
 */

#include "AccelerationSet4Way.h"

static asn_TYPE_member_t asn_MBR_AccelerationSet4Way_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, longAcc),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Acceleration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"longAcc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, latAcc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Acceleration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"latAcc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, vertAcc),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VerticalAcceleration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vertAcc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, yaw),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YawRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"yaw"
		},
};
static ber_tlv_tag_t asn_DEF_AccelerationSet4Way_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AccelerationSet4Way_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* longAcc */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* latAcc */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* vertAcc */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* yaw */
};
static asn_SEQUENCE_specifics_t asn_SPC_AccelerationSet4Way_specs_1 = {
	sizeof(struct AccelerationSet4Way),
	offsetof(struct AccelerationSet4Way, _asn_ctx),
	asn_MAP_AccelerationSet4Way_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AccelerationSet4Way = {
	"AccelerationSet4Way",
	"AccelerationSet4Way",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AccelerationSet4Way_tags_1,
	sizeof(asn_DEF_AccelerationSet4Way_tags_1)
		/sizeof(asn_DEF_AccelerationSet4Way_tags_1[0]), /* 1 */
	asn_DEF_AccelerationSet4Way_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccelerationSet4Way_tags_1)
		/sizeof(asn_DEF_AccelerationSet4Way_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AccelerationSet4Way_1,
	4,	/* Elements count */
	&asn_SPC_AccelerationSet4Way_specs_1	/* Additional specs */
};

