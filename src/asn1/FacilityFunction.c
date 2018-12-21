/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "FacilityFunction.h"

int
FacilityFunction_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
FacilityFunction_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
FacilityFunction_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
FacilityFunction_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
FacilityFunction_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
FacilityFunction_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
FacilityFunction_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
FacilityFunction_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
FacilityFunction_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
FacilityFunction_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	FacilityFunction_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_FacilityFunction_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  8 }	/* (0..8,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_FacilityFunction_value2enum_1[] = {
	{ 0,	6,	"center" },
	{ 1,	8,	"approach" },
	{ 2,	5,	"tower" },
	{ 3,	5,	"final" },
	{ 4,	13,	"groundControl" },
	{ 5,	17,	"clearanceDelivery" },
	{ 6,	9,	"departure" },
	{ 7,	7,	"control" },
	{ 8,	5,	"radio" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_FacilityFunction_enum2value_1[] = {
	1,	/* approach(1) */
	0,	/* center(0) */
	5,	/* clearanceDelivery(5) */
	7,	/* control(7) */
	6,	/* departure(6) */
	3,	/* final(3) */
	4,	/* groundControl(4) */
	8,	/* radio(8) */
	2	/* tower(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_FacilityFunction_specs_1 = {
	asn_MAP_FacilityFunction_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_FacilityFunction_enum2value_1,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	10,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_FacilityFunction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FacilityFunction = {
	"FacilityFunction",
	"FacilityFunction",
	FacilityFunction_free,
	FacilityFunction_print,
	FacilityFunction_constraint,
	FacilityFunction_decode_ber,
	FacilityFunction_encode_der,
	FacilityFunction_decode_xer,
	FacilityFunction_encode_xer,
	FacilityFunction_decode_uper,
	FacilityFunction_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FacilityFunction_tags_1,
	sizeof(asn_DEF_FacilityFunction_tags_1)
		/sizeof(asn_DEF_FacilityFunction_tags_1[0]), /* 1 */
	asn_DEF_FacilityFunction_tags_1,	/* Same as above */
	sizeof(asn_DEF_FacilityFunction_tags_1)
		/sizeof(asn_DEF_FacilityFunction_tags_1[0]), /* 1 */
	&asn_PER_type_FacilityFunction_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_FacilityFunction_specs_1	/* Additional specs */
};

