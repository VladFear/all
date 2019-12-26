/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LaneFrameModule"
 * 	found in "./LaneFrameModule.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LaneDataAttributeList_H_
#define	_LaneDataAttributeList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LaneDataAttribute;

/* LaneDataAttributeList */
typedef struct LaneDataAttributeList {
	A_SEQUENCE_OF(struct LaneDataAttribute) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneDataAttributeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneDataAttributeList;
extern asn_SET_OF_specifics_t asn_SPC_LaneDataAttributeList_specs_1;
extern asn_TYPE_member_t asn_MBR_LaneDataAttributeList_1[1];
extern asn_per_constraints_t asn_PER_type_LaneDataAttributeList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LaneDataAttribute.h"

#endif	/* _LaneDataAttributeList_H_ */
#include <asn_internal.h>
