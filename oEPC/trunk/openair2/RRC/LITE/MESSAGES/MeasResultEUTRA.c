/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "MeasResultEUTRA.h"

static asn_TYPE_member_t asn_MBR_cgi_Info_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultEUTRA__cgi_Info, cellGlobalId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultEUTRA__cgi_Info, trackingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrackingAreaCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trackingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultEUTRA__cgi_Info, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-IdentityList"
		},
};
static int asn_MAP_cgi_Info_oms_3[] = { 2 };
static ber_tlv_tag_t asn_DEF_cgi_Info_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cgi_Info_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId at 3389 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode at 3390 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* plmn-IdentityList at 3391 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cgi_Info_specs_3 = {
	sizeof(struct MeasResultEUTRA__cgi_Info),
	offsetof(struct MeasResultEUTRA__cgi_Info, _asn_ctx),
	asn_MAP_cgi_Info_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_cgi_Info_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cgi_Info_3 = {
	"cgi-Info",
	"cgi-Info",
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
	asn_DEF_cgi_Info_tags_3,
	sizeof(asn_DEF_cgi_Info_tags_3)
		/sizeof(asn_DEF_cgi_Info_tags_3[0]) - 1, /* 1 */
	asn_DEF_cgi_Info_tags_3,	/* Same as above */
	sizeof(asn_DEF_cgi_Info_tags_3)
		/sizeof(asn_DEF_cgi_Info_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cgi_Info_3,
	3,	/* Elements count */
	&asn_SPC_cgi_Info_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResult_7[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasResultEUTRA__measResult, rsrpResult),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrpResult"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultEUTRA__measResult, rsrqResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrqResult"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultEUTRA__measResult, additionalSI_Info_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSI_Info_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalSI-Info-r9"
		},
};
static int asn_MAP_measResult_oms_7[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_measResult_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResult_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult at 3394 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrqResult at 3395 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSI-Info-r9 at 3397 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_specs_7 = {
	sizeof(struct MeasResultEUTRA__measResult),
	offsetof(struct MeasResultEUTRA__measResult, _asn_ctx),
	asn_MAP_measResult_tag2el_7,
	3,	/* Count of tags in the map */
	asn_MAP_measResult_oms_7,	/* Optional members */
	2, 1,	/* Root/Additions */
	1,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_7 = {
	"measResult",
	"measResult",
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
	asn_DEF_measResult_tags_7,
	sizeof(asn_DEF_measResult_tags_7)
		/sizeof(asn_DEF_measResult_tags_7[0]) - 1, /* 1 */
	asn_DEF_measResult_tags_7,	/* Same as above */
	sizeof(asn_DEF_measResult_tags_7)
		/sizeof(asn_DEF_measResult_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResult_7,
	3,	/* Elements count */
	&asn_SPC_measResult_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasResultEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultEUTRA, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultEUTRA, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cgi_Info_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cgi-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultEUTRA, measResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResult_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResult"
		},
};
static int asn_MAP_MeasResultEUTRA_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_MeasResultEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasResultEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId at 3387 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cgi-Info at 3389 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResult at 3394 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultEUTRA_specs_1 = {
	sizeof(struct MeasResultEUTRA),
	offsetof(struct MeasResultEUTRA, _asn_ctx),
	asn_MAP_MeasResultEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultEUTRA = {
	"MeasResultEUTRA",
	"MeasResultEUTRA",
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
	asn_DEF_MeasResultEUTRA_tags_1,
	sizeof(asn_DEF_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultEUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasResultEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasResultEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultEUTRA_specs_1	/* Additional specs */
};

