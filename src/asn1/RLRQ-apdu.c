/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "atn-ulcs.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "RLRQ-apdu.h"

static asn_TYPE_member_t asn_MBR_RLRQ_apdu_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RLRQ_apdu, reason),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Release_request_reason,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reason"
		},
	{ ATF_POINTER, 1, offsetof(struct RLRQ_apdu, user_information),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Association_information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"user-information"
		},
};
static const int asn_MAP_RLRQ_apdu_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RLRQ_apdu_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RLRQ_apdu_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reason */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 1, 0, 0 } /* user-information */
};
static asn_SEQUENCE_specifics_t asn_SPC_RLRQ_apdu_specs_1 = {
	sizeof(struct RLRQ_apdu),
	offsetof(struct RLRQ_apdu, _asn_ctx),
	asn_MAP_RLRQ_apdu_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RLRQ_apdu_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RLRQ_apdu = {
	"RLRQ-apdu",
	"RLRQ-apdu",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RLRQ_apdu_tags_1,
	sizeof(asn_DEF_RLRQ_apdu_tags_1)
		/sizeof(asn_DEF_RLRQ_apdu_tags_1[0]) - 1, /* 1 */
	asn_DEF_RLRQ_apdu_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLRQ_apdu_tags_1)
		/sizeof(asn_DEF_RLRQ_apdu_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_RLRQ_apdu_1,
	2,	/* Elements count */
	&asn_SPC_RLRQ_apdu_specs_1	/* Additional specs */
};

