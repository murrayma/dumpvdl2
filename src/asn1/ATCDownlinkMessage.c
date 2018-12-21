/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "ATCDownlinkMessage.h"

static asn_TYPE_member_t asn_MBR_ATCDownlinkMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ATCDownlinkMessage, header),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ATCMessageHeader,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"header"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ATCDownlinkMessage, messageData),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ATCDownlinkMessageData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"messageData"
		},
};
static const ber_tlv_tag_t asn_DEF_ATCDownlinkMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ATCDownlinkMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* header */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* messageData */
};
static asn_SEQUENCE_specifics_t asn_SPC_ATCDownlinkMessage_specs_1 = {
	sizeof(struct ATCDownlinkMessage),
	offsetof(struct ATCDownlinkMessage, _asn_ctx),
	asn_MAP_ATCDownlinkMessage_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ATCDownlinkMessage = {
	"ATCDownlinkMessage",
	"ATCDownlinkMessage",
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
	asn_DEF_ATCDownlinkMessage_tags_1,
	sizeof(asn_DEF_ATCDownlinkMessage_tags_1)
		/sizeof(asn_DEF_ATCDownlinkMessage_tags_1[0]), /* 1 */
	asn_DEF_ATCDownlinkMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_ATCDownlinkMessage_tags_1)
		/sizeof(asn_DEF_ATCDownlinkMessage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ATCDownlinkMessage_1,
	2,	/* Elements count */
	&asn_SPC_ATCDownlinkMessage_specs_1	/* Additional specs */
};

