/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_AvailablePLMNList_H_
#define	_AvailablePLMNList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AvailablePLMNList_Item;

/* AvailablePLMNList */
typedef struct AvailablePLMNList {
	A_SEQUENCE_OF(struct AvailablePLMNList_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AvailablePLMNList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AvailablePLMNList;

#ifdef __cplusplus
}
#endif

#endif	/* _AvailablePLMNList_H_ */
#include <asn_internal.h>
