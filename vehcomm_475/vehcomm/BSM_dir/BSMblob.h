/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "J2735BSMESSAGE"
 * 	found in "BasicSafetyMessage-Volvo.txt"
 */

#ifndef	_BSMblob_H_
#define	_BSMblob_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MsgCount.h"
#include "TemporaryID.h"
#include "DSecond.h"
#include "Latitude.h"
#include "Longitude.h"
#include "Elevation.h"
#include "PositionalAccuracy.h"
#include "TransmissionAndSpeed.h"
#include "Heading.h"
#include "SteeringWheelAngle.h"
#include "AccelerationSet4Way.h"
#include "BrakeSystemStatus.h"
#include "VehicleSize.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BSMblob */
typedef struct BSMblob {
	MsgCount_t	 msgCnt;
	TemporaryID_t	 id;
	DSecond_t	 secMark;
	Latitude_t	 latitude;
	Longitude_t	 longitude;
	Elevation_t	 elev;
	PositionalAccuracy_t	 accuracy;
	TransmissionAndSpeed_t	 speed;
	Heading_t	 heading;
	SteeringWheelAngle_t	 angle;
	AccelerationSet4Way_t	 accelSet;
	BrakeSystemStatus_t	 brakes;
	VehicleSize_t	 size;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BSMblob_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BSMblob;

#ifdef __cplusplus
}
#endif

#endif	/* _BSMblob_H_ */
#include <asn_internal.h>
