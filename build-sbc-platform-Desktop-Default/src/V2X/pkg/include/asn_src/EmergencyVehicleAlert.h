/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MSGEmergencyVehicleAlertModule"
 * 	found in "./MSGEmergencyVehicleAlertModule.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_EmergencyVehicleAlert_H_
#define	_EmergencyVehicleAlert_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "TemporaryID.h"
#include "RoadSideAlert.h"
#include "ResponseType.h"
#include "VehicleMass.h"
#include "VehicleType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EmergencyDetails;

/* EmergencyVehicleAlert */
typedef struct EmergencyVehicleAlert {
	MinuteOfTheYear_t	*timeStamp	/* OPTIONAL */;
	TemporaryID_t	*id	/* OPTIONAL */;
	RoadSideAlert_t	 rsaMsg;
	ResponseType_t	*responseType	/* OPTIONAL */;
	struct EmergencyDetails	*details	/* OPTIONAL */;
	VehicleMass_t	*mass	/* OPTIONAL */;
	VehicleType_t	*basicType	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EmergencyVehicleAlert_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmergencyVehicleAlert;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EmergencyDetails.h"

#endif	/* _EmergencyVehicleAlert_H_ */
#include <asn_internal.h>
