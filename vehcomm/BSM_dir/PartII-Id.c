/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "PartII-Id.h"

int
PartII_Id_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PartII_Id_constr_1 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
asn_per_constraints_t asn_PER_type_PartII_Id_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_PartII_Id_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PartII_Id = {
	"PartII-Id",
	"PartII-Id",
	&asn_OP_NativeInteger,
	asn_DEF_PartII_Id_tags_1,
	sizeof(asn_DEF_PartII_Id_tags_1)
		/sizeof(asn_DEF_PartII_Id_tags_1[0]), /* 1 */
	asn_DEF_PartII_Id_tags_1,	/* Same as above */
	sizeof(asn_DEF_PartII_Id_tags_1)
		/sizeof(asn_DEF_PartII_Id_tags_1[0]), /* 1 */
	{ &asn_OER_type_PartII_Id_constr_1, &asn_PER_type_PartII_Id_constr_1, PartII_Id_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

