/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_PlaceBearing_H_
#define	_PlaceBearing_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PublishedIdentifier.h"
#include "Degrees.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PlaceBearing */
typedef struct PlaceBearing {
	PublishedIdentifier_t	 publishedIdentifier;
	Degrees_t	 degrees;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PlaceBearing_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlaceBearing;

#ifdef __cplusplus
}
#endif

#endif	/* _PlaceBearing_H_ */
#include "asn_internal.h"
