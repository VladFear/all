/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LaneFrameModule"
 * 	found in "./LaneFrameModule.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LaneAttributes_H_
#define	_LaneAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneDirection.h"
#include "LaneSharing.h"
#include "LaneTypeAttributes.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LaneAttributes */
typedef struct LaneAttributes {
	LaneDirection_t	 directionalUse;
	LaneSharing_t	 sharedWith;
	LaneTypeAttributes_t	 laneType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes;
extern asn_SEQUENCE_specifics_t asn_SPC_LaneAttributes_specs_1;
extern asn_TYPE_member_t asn_MBR_LaneAttributes_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LaneAttributes_H_ */
#include <asn_internal.h>
