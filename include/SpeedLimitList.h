/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_SpeedLimitList_H_
#define	_SpeedLimitList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RegulatorySpeedLimit;

/* SpeedLimitList */
typedef struct SpeedLimitList {
	A_SEQUENCE_OF(struct RegulatorySpeedLimit) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedLimitList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedLimitList;
extern asn_SET_OF_specifics_t asn_SPC_SpeedLimitList_specs_1;
extern asn_TYPE_member_t asn_MBR_SpeedLimitList_1[1];
extern asn_per_constraints_t asn_PER_type_SpeedLimitList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegulatorySpeedLimit.h"

#endif	/* _SpeedLimitList_H_ */
#include <asn_internal.h>
