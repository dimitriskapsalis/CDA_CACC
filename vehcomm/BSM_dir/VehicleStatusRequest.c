/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "VehicleStatusRequest.h"

static int
memb_subType_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sendOnLessThenValue_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32767 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sendOnMoreThenValue_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32767 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_subType_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_subType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sendOnLessThenValue_constr_4 CC_NOTUSED = {
	{ 2, 0 }	/* (-32767..32767) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sendOnLessThenValue_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32767,  32767 }	/* (-32767..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sendOnMoreThenValue_constr_5 CC_NOTUSED = {
	{ 2, 0 }	/* (-32767..32767) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sendOnMoreThenValue_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32767,  32767 }	/* (-32767..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_VehicleStatusRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatusRequest, dataType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleStatusDeviceTypeTag,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataType"
		},
	{ ATF_POINTER, 4, offsetof(struct VehicleStatusRequest, subType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_subType_constr_3, &asn_PER_memb_subType_constr_3,  memb_subType_constraint_1 },
		0, 0, /* No default value */
		"subType"
		},
	{ ATF_POINTER, 3, offsetof(struct VehicleStatusRequest, sendOnLessThenValue),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sendOnLessThenValue_constr_4, &asn_PER_memb_sendOnLessThenValue_constr_4,  memb_sendOnLessThenValue_constraint_1 },
		0, 0, /* No default value */
		"sendOnLessThenValue"
		},
	{ ATF_POINTER, 2, offsetof(struct VehicleStatusRequest, sendOnMoreThenValue),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sendOnMoreThenValue_constr_5, &asn_PER_memb_sendOnMoreThenValue_constr_5,  memb_sendOnMoreThenValue_constraint_1 },
		0, 0, /* No default value */
		"sendOnMoreThenValue"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleStatusRequest, sendAll),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sendAll"
		},
};
static const int asn_MAP_VehicleStatusRequest_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_VehicleStatusRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VehicleStatusRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dataType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sendOnLessThenValue */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sendOnMoreThenValue */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sendAll */
};
asn_SEQUENCE_specifics_t asn_SPC_VehicleStatusRequest_specs_1 = {
	sizeof(struct VehicleStatusRequest),
	offsetof(struct VehicleStatusRequest, _asn_ctx),
	asn_MAP_VehicleStatusRequest_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_VehicleStatusRequest_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VehicleStatusRequest = {
	"VehicleStatusRequest",
	"VehicleStatusRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_VehicleStatusRequest_tags_1,
	sizeof(asn_DEF_VehicleStatusRequest_tags_1)
		/sizeof(asn_DEF_VehicleStatusRequest_tags_1[0]), /* 1 */
	asn_DEF_VehicleStatusRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleStatusRequest_tags_1)
		/sizeof(asn_DEF_VehicleStatusRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VehicleStatusRequest_1,
	5,	/* Elements count */
	&asn_SPC_VehicleStatusRequest_specs_1	/* Additional specs */
};
