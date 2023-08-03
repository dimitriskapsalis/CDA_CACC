/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_PATH_BSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "VehicleStatus.h"

static asn_TYPE_member_t asn_MBR_steering_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__steering, angle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"angle"
		},
	{ ATF_POINTER, 3, offsetof(struct VehicleStatus__steering, confidence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngleConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"confidence"
		},
	{ ATF_POINTER, 2, offsetof(struct VehicleStatus__steering, rate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngleRateOfChange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rate"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleStatus__steering, wheels),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DrivingWheelAngle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wheels"
		},
};
static const int asn_MAP_steering_oms_12[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_steering_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_steering_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* angle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* confidence */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* wheels */
};
static asn_SEQUENCE_specifics_t asn_SPC_steering_specs_12 = {
	sizeof(struct VehicleStatus__steering),
	offsetof(struct VehicleStatus__steering, _asn_ctx),
	asn_MAP_steering_tag2el_12,
	4,	/* Count of tags in the map */
	asn_MAP_steering_oms_12,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_steering_12 = {
	"steering",
	"steering",
	&asn_OP_SEQUENCE,
	asn_DEF_steering_tags_12,
	sizeof(asn_DEF_steering_tags_12)
		/sizeof(asn_DEF_steering_tags_12[0]) - 1, /* 1 */
	asn_DEF_steering_tags_12,	/* Same as above */
	sizeof(asn_DEF_steering_tags_12)
		/sizeof(asn_DEF_steering_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_steering_12,
	4,	/* Elements count */
	&asn_SPC_steering_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_accelSets_17[] = {
	{ ATF_POINTER, 5, offsetof(struct VehicleStatus__accelSets, accel4way),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationSet4Way,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accel4way"
		},
	{ ATF_POINTER, 4, offsetof(struct VehicleStatus__accelSets, vertAccelThres),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VerticalAccelerationThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vertAccelThres"
		},
	{ ATF_POINTER, 3, offsetof(struct VehicleStatus__accelSets, yawRateCon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YawRateConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yawRateCon"
		},
	{ ATF_POINTER, 2, offsetof(struct VehicleStatus__accelSets, hozAccelCon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hozAccelCon"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleStatus__accelSets, confidenceSet),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfidenceSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"confidenceSet"
		},
};
static const int asn_MAP_accelSets_oms_17[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_accelSets_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_accelSets_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accel4way */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* vertAccelThres */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* yawRateCon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hozAccelCon */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* confidenceSet */
};
static asn_SEQUENCE_specifics_t asn_SPC_accelSets_specs_17 = {
	sizeof(struct VehicleStatus__accelSets),
	offsetof(struct VehicleStatus__accelSets, _asn_ctx),
	asn_MAP_accelSets_tag2el_17,
	5,	/* Count of tags in the map */
	asn_MAP_accelSets_oms_17,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_accelSets_17 = {
	"accelSets",
	"accelSets",
	&asn_OP_SEQUENCE,
	asn_DEF_accelSets_tags_17,
	sizeof(asn_DEF_accelSets_tags_17)
		/sizeof(asn_DEF_accelSets_tags_17[0]) - 1, /* 1 */
	asn_DEF_accelSets_tags_17,	/* Same as above */
	sizeof(asn_DEF_accelSets_tags_17)
		/sizeof(asn_DEF_accelSets_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_accelSets_17,
	5,	/* Elements count */
	&asn_SPC_accelSets_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_object_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__object, obDist),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObstacleDistance,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"obDist"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__object, obDirect),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_Angle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"obDirect"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__object, dateTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DDateTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dateTime"
		},
};
static const ber_tlv_tag_t asn_DEF_object_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_object_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* obDist */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* obDirect */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dateTime */
};
static asn_SEQUENCE_specifics_t asn_SPC_object_specs_23 = {
	sizeof(struct VehicleStatus__object),
	offsetof(struct VehicleStatus__object, _asn_ctx),
	asn_MAP_object_tag2el_23,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_object_23 = {
	"object",
	"object",
	&asn_OP_SEQUENCE,
	asn_DEF_object_tags_23,
	sizeof(asn_DEF_object_tags_23)
		/sizeof(asn_DEF_object_tags_23[0]) - 1, /* 1 */
	asn_DEF_object_tags_23,	/* Same as above */
	sizeof(asn_DEF_object_tags_23)
		/sizeof(asn_DEF_object_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_object_23,
	3,	/* Elements count */
	&asn_SPC_object_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_vehicleData_31[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__vehicleData, height),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleHeight,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"height"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__vehicleData, bumpers),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BumperHeights,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bumpers"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__vehicleData, mass),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleMass,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__vehicleData, trailerWeight),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerWeight,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trailerWeight"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__vehicleData, type),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type"
		},
};
static const ber_tlv_tag_t asn_DEF_vehicleData_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_vehicleData_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* height */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bumpers */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mass */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trailerWeight */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* type */
};
static asn_SEQUENCE_specifics_t asn_SPC_vehicleData_specs_31 = {
	sizeof(struct VehicleStatus__vehicleData),
	offsetof(struct VehicleStatus__vehicleData, _asn_ctx),
	asn_MAP_vehicleData_tag2el_31,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_vehicleData_31 = {
	"vehicleData",
	"vehicleData",
	&asn_OP_SEQUENCE,
	asn_DEF_vehicleData_tags_31,
	sizeof(asn_DEF_vehicleData_tags_31)
		/sizeof(asn_DEF_vehicleData_tags_31[0]) - 1, /* 1 */
	asn_DEF_vehicleData_tags_31,	/* Same as above */
	sizeof(asn_DEF_vehicleData_tags_31)
		/sizeof(asn_DEF_vehicleData_tags_31[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_vehicleData_31,
	5,	/* Elements count */
	&asn_SPC_vehicleData_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_weatherReport_39[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleStatus__weatherReport, isRaining),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssPrecipYesNo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"isRaining"
		},
	{ ATF_POINTER, 4, offsetof(struct VehicleStatus__weatherReport, rainRate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssPrecipRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rainRate"
		},
	{ ATF_POINTER, 3, offsetof(struct VehicleStatus__weatherReport, precipSituation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssPrecipSituation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"precipSituation"
		},
	{ ATF_POINTER, 2, offsetof(struct VehicleStatus__weatherReport, solarRadiation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssSolarRadiation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"solarRadiation"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleStatus__weatherReport, friction),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EssMobileFriction,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"friction"
		},
};
static const int asn_MAP_weatherReport_oms_39[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_weatherReport_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_weatherReport_tag2el_39[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* isRaining */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rainRate */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* precipSituation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* solarRadiation */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* friction */
};
static asn_SEQUENCE_specifics_t asn_SPC_weatherReport_specs_39 = {
	sizeof(struct VehicleStatus__weatherReport),
	offsetof(struct VehicleStatus__weatherReport, _asn_ctx),
	asn_MAP_weatherReport_tag2el_39,
	5,	/* Count of tags in the map */
	asn_MAP_weatherReport_oms_39,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_weatherReport_39 = {
	"weatherReport",
	"weatherReport",
	&asn_OP_SEQUENCE,
	asn_DEF_weatherReport_tags_39,
	sizeof(asn_DEF_weatherReport_tags_39)
		/sizeof(asn_DEF_weatherReport_tags_39[0]) - 1, /* 1 */
	asn_DEF_weatherReport_tags_39,	/* Same as above */
	sizeof(asn_DEF_weatherReport_tags_39)
		/sizeof(asn_DEF_weatherReport_tags_39[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_weatherReport_39,
	5,	/* Elements count */
	&asn_SPC_weatherReport_specs_39	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_VehicleStatus_1[] = {
	{ ATF_POINTER, 22, offsetof(struct VehicleStatus, lights),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExteriorLights,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lights"
		},
	{ ATF_POINTER, 21, offsetof(struct VehicleStatus, lightBar),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LightbarInUse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lightBar"
		},
	{ ATF_POINTER, 20, offsetof(struct VehicleStatus, wipers),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WiperSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wipers"
		},
	{ ATF_POINTER, 19, offsetof(struct VehicleStatus, brakeStatus),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BrakeSystemStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"brakeStatus"
		},
	{ ATF_POINTER, 18, offsetof(struct VehicleStatus, brakePressure),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BrakeAppliedPressure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"brakePressure"
		},
	{ ATF_POINTER, 17, offsetof(struct VehicleStatus, roadFriction),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CoefficientOfFriction,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"roadFriction"
		},
	{ ATF_POINTER, 16, offsetof(struct VehicleStatus, sunData),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SunSensor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sunData"
		},
	{ ATF_POINTER, 15, offsetof(struct VehicleStatus, rainData),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RainSensor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rainData"
		},
	{ ATF_POINTER, 14, offsetof(struct VehicleStatus, airTemp),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AmbientAirTemperature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"airTemp"
		},
	{ ATF_POINTER, 13, offsetof(struct VehicleStatus, airPres),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AmbientAirPressure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"airPres"
		},
	{ ATF_POINTER, 12, offsetof(struct VehicleStatus, steering),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_steering_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"steering"
		},
	{ ATF_POINTER, 11, offsetof(struct VehicleStatus, accelSets),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_accelSets_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accelSets"
		},
	{ ATF_POINTER, 10, offsetof(struct VehicleStatus, object),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_object_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"object"
		},
	{ ATF_POINTER, 9, offsetof(struct VehicleStatus, fullPos),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FullPositionVector,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullPos"
		},
	{ ATF_POINTER, 8, offsetof(struct VehicleStatus, throttlePos),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThrottlePosition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"throttlePos"
		},
	{ ATF_POINTER, 7, offsetof(struct VehicleStatus, speedHeadC),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedandHeadingandThrottleConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedHeadC"
		},
	{ ATF_POINTER, 6, offsetof(struct VehicleStatus, speedC),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedC"
		},
	{ ATF_POINTER, 5, offsetof(struct VehicleStatus, vehicleData),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		0,
		&asn_DEF_vehicleData_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleData"
		},
	{ ATF_POINTER, 4, offsetof(struct VehicleStatus, vehicleIdent),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleIdent,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleIdent"
		},
	{ ATF_POINTER, 3, offsetof(struct VehicleStatus, j1939data),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_J1939data,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"j1939data"
		},
	{ ATF_POINTER, 2, offsetof(struct VehicleStatus, weatherReport),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		0,
		&asn_DEF_weatherReport_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"weatherReport"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleStatus, gnssStatus),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSSstatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnssStatus"
		},
};
static const int asn_MAP_VehicleStatus_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };
static const ber_tlv_tag_t asn_DEF_VehicleStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VehicleStatus_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lights */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lightBar */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* wipers */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* brakeStatus */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* brakePressure */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* roadFriction */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sunData */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rainData */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* airTemp */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* airPres */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* steering */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* accelSets */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* object */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* fullPos */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* throttlePos */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* speedHeadC */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* speedC */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* vehicleData */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* vehicleIdent */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* j1939data */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* weatherReport */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 } /* gnssStatus */
};
asn_SEQUENCE_specifics_t asn_SPC_VehicleStatus_specs_1 = {
	sizeof(struct VehicleStatus),
	offsetof(struct VehicleStatus, _asn_ctx),
	asn_MAP_VehicleStatus_tag2el_1,
	22,	/* Count of tags in the map */
	asn_MAP_VehicleStatus_oms_1,	/* Optional members */
	22, 0,	/* Root/Additions */
	22,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VehicleStatus = {
	"VehicleStatus",
	"VehicleStatus",
	&asn_OP_SEQUENCE,
	asn_DEF_VehicleStatus_tags_1,
	sizeof(asn_DEF_VehicleStatus_tags_1)
		/sizeof(asn_DEF_VehicleStatus_tags_1[0]), /* 1 */
	asn_DEF_VehicleStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleStatus_tags_1)
		/sizeof(asn_DEF_VehicleStatus_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VehicleStatus_1,
	22,	/* Elements count */
	&asn_SPC_VehicleStatus_specs_1	/* Additional specs */
};

