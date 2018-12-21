/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ProcedureDeparture_H_
#define	_ProcedureDeparture_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProcedureName.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ProcedureDeparture */
typedef ProcedureName_t	 ProcedureDeparture_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProcedureDeparture;
asn_struct_free_f ProcedureDeparture_free;
asn_struct_print_f ProcedureDeparture_print;
asn_constr_check_f ProcedureDeparture_constraint;
ber_type_decoder_f ProcedureDeparture_decode_ber;
der_type_encoder_f ProcedureDeparture_encode_der;
xer_type_decoder_f ProcedureDeparture_decode_xer;
xer_type_encoder_f ProcedureDeparture_encode_xer;
per_type_decoder_f ProcedureDeparture_decode_uper;
per_type_encoder_f ProcedureDeparture_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProcedureDeparture_H_ */
#include "asn_internal.h"
