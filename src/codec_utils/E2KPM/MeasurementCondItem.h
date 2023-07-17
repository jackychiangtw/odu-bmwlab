/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_MeasurementCondItem_H_
#define	_MeasurementCondItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementType.h"
#include "MatchingCondList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasurementCondItem */
typedef struct MeasurementCondItem {
	MeasurementType_t	 measType;
	MatchingCondList_t	 matchingCond;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCondItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCondItem;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementCondItem_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementCondItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementCondItem_H_ */
#include <asn_internal.h>
