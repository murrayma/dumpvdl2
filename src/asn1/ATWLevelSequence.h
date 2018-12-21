/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ATWLevelSequence_H_
#define	_ATWLevelSequence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ATWLevel;

/* ATWLevelSequence */
typedef struct ATWLevelSequence {
	A_SEQUENCE_OF(struct ATWLevel) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ATWLevelSequence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ATWLevelSequence;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ATWLevel.h"

#endif	/* _ATWLevelSequence_H_ */
#include "asn_internal.h"
