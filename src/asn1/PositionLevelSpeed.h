/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_PositionLevelSpeed_H_
#define	_PositionLevelSpeed_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PositionLevel.h"
#include "Speed.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PositionLevelSpeed */
typedef struct PositionLevelSpeed {
	PositionLevel_t	 positionlevel;
	Speed_t	 speed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionLevelSpeed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionLevelSpeed;

#ifdef __cplusplus
}
#endif

#endif	/* _PositionLevelSpeed_H_ */
#include "asn_internal.h"
