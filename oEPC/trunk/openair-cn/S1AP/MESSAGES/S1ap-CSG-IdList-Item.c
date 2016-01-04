/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/nfvepc/oEPC/trunk/openair-cn/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -fhave_native64`
 */

#include "S1ap-CSG-IdList-Item.h"

static asn_TYPE_member_t asn_MBR_S1ap_CSG_IdList_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_CSG_IdList_Item, cSG_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CSG_Id,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cSG-Id"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_CSG_IdList_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_CSG_IdList_Item_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_S1ap_CSG_IdList_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_CSG_IdList_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cSG-Id at 333 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions at 334 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_CSG_IdList_Item_specs_1 = {
	sizeof(struct S1ap_CSG_IdList_Item),
	offsetof(struct S1ap_CSG_IdList_Item, _asn_ctx),
	asn_MAP_S1ap_CSG_IdList_Item_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S1ap_CSG_IdList_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_CSG_IdList_Item = {
	"S1ap-CSG-IdList-Item",
	"S1ap-CSG-IdList-Item",
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
	asn_DEF_S1ap_CSG_IdList_Item_tags_1,
	sizeof(asn_DEF_S1ap_CSG_IdList_Item_tags_1)
		/sizeof(asn_DEF_S1ap_CSG_IdList_Item_tags_1[0]), /* 1 */
	asn_DEF_S1ap_CSG_IdList_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_CSG_IdList_Item_tags_1)
		/sizeof(asn_DEF_S1ap_CSG_IdList_Item_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_CSG_IdList_Item_1,
	2,	/* Elements count */
	&asn_SPC_S1ap_CSG_IdList_Item_specs_1	/* Additional specs */
};

