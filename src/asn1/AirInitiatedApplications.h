/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CMMessageSetVersion1"
 * 	found in "atn-cm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_AirInitiatedApplications_H_
#define	_AirInitiatedApplications_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AEQualifierVersionAddress;

/* AirInitiatedApplications */
typedef struct AirInitiatedApplications {
	A_SEQUENCE_OF(struct AEQualifierVersionAddress) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AirInitiatedApplications_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AirInitiatedApplications;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AEQualifierVersionAddress.h"

#endif	/* _AirInitiatedApplications_H_ */
#include "asn_internal.h"
