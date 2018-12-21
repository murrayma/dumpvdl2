/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_InterceptCourseFromSequence_H_
#define	_InterceptCourseFromSequence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterceptCourseFrom;

/* InterceptCourseFromSequence */
typedef struct InterceptCourseFromSequence {
	A_SEQUENCE_OF(struct InterceptCourseFrom) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterceptCourseFromSequence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterceptCourseFromSequence;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterceptCourseFrom.h"

#endif	/* _InterceptCourseFromSequence_H_ */
#include "asn_internal.h"
