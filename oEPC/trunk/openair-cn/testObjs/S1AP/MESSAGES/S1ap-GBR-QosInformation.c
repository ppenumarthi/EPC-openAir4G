/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../../../S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-GBR-QosInformation.h"

static asn_TYPE_member_t asn_MBR_S1ap_GBR_QosInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_GBR_QosInformation, e_RAB_MaximumBitrateDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_BitRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-MaximumBitrateDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_GBR_QosInformation, e_RAB_MaximumBitrateUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_BitRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-MaximumBitrateUL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_GBR_QosInformation, e_RAB_GuaranteedBitrateDL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_BitRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-GuaranteedBitrateDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_GBR_QosInformation, e_RAB_GuaranteedBitrateUL),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_BitRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-GuaranteedBitrateUL"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_GBR_QosInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_GBR_QosInformation_oms_1[] = { 4 };
static ber_tlv_tag_t asn_DEF_S1ap_GBR_QosInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_GBR_QosInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-MaximumBitrateDL at 693 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-RAB-MaximumBitrateUL at 694 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* e-RAB-GuaranteedBitrateDL at 695 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-RAB-GuaranteedBitrateUL at 696 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 698 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_GBR_QosInformation_specs_1 = {
	sizeof(struct S1ap_GBR_QosInformation),
	offsetof(struct S1ap_GBR_QosInformation, _asn_ctx),
	asn_MAP_S1ap_GBR_QosInformation_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_S1ap_GBR_QosInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_GBR_QosInformation = {
	"S1ap-GBR-QosInformation",
	"S1ap-GBR-QosInformation",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_GBR_QosInformation_tags_1,
	sizeof(asn_DEF_S1ap_GBR_QosInformation_tags_1)
		/sizeof(asn_DEF_S1ap_GBR_QosInformation_tags_1[0]), /* 1 */
	asn_DEF_S1ap_GBR_QosInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_GBR_QosInformation_tags_1)
		/sizeof(asn_DEF_S1ap_GBR_QosInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_GBR_QosInformation_1,
	5,	/* Elements count */
	&asn_SPC_S1ap_GBR_QosInformation_specs_1	/* Additional specs */
};

