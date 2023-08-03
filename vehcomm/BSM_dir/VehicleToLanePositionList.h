/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_VehicleToLanePositionList_H_
#define	_VehicleToLanePositionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleToLanePosition;

/* VehicleToLanePositionList */
typedef struct VehicleToLanePositionList {
	A_SEQUENCE_OF(struct VehicleToLanePosition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleToLanePositionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleToLanePositionList;
extern asn_SET_OF_specifics_t asn_SPC_VehicleToLanePositionList_specs_1;
extern asn_TYPE_member_t asn_MBR_VehicleToLanePositionList_1[1];
extern asn_per_constraints_t asn_PER_type_VehicleToLanePositionList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleToLanePosition.h"

#endif	/* _VehicleToLanePositionList_H_ */
#include <asn_internal.h>
