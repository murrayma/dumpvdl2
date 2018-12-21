/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCAPDUsVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ProtectedAircraftPDUs_H_
#define	_ProtectedAircraftPDUs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PMCPDLCUserAbortReason.h"
#include "PMCPDLCProviderAbortReason.h"
#include "ProtectedStartDownMessage.h"
#include "ProtectedDownlinkMessage.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProtectedAircraftPDUs_PR {
	ProtectedAircraftPDUs_PR_NOTHING,	/* No components present */
	ProtectedAircraftPDUs_PR_abortUser,
	ProtectedAircraftPDUs_PR_abortProvider,
	ProtectedAircraftPDUs_PR_startdown,
	ProtectedAircraftPDUs_PR_send,
	/* Extensions may appear below */
	
} ProtectedAircraftPDUs_PR;

/* ProtectedAircraftPDUs */
typedef struct ProtectedAircraftPDUs {
	ProtectedAircraftPDUs_PR present;
	union ProtectedAircraftPDUs_u {
		PMCPDLCUserAbortReason_t	 abortUser;
		PMCPDLCProviderAbortReason_t	 abortProvider;
		ProtectedStartDownMessage_t	 startdown;
		ProtectedDownlinkMessage_t	 send;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtectedAircraftPDUs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtectedAircraftPDUs;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtectedAircraftPDUs_H_ */
#include "asn_internal.h"
