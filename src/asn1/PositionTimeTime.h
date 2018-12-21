/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_PositionTimeTime_H_
#define	_PositionTimeTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Position.h"
#include "TimeTime.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PositionTimeTime */
typedef struct PositionTimeTime {
	Position_t	 position;
	TimeTime_t	 times;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionTimeTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionTimeTime;

#ifdef __cplusplus
}
#endif

#endif	/* _PositionTimeTime_H_ */
#include "asn_internal.h"
