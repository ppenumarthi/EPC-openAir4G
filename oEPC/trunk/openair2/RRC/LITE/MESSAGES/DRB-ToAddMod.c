/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "DRB-ToAddMod.h"

static int
memb_eps_BearerIdentity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_logicalChannelIdentity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 3 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_eps_BearerIdentity_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  3,  10 }	/* (3..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DRB_ToAddMod_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, eps_BearerIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_eps_BearerIdentity_constraint_1,
		&asn_PER_memb_eps_BearerIdentity_constr_2,
		0,
		"eps-BearerIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_ToAddMod, drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-Identity"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_ToAddMod, pdcp_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Config"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod, logicalChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_logicalChannelIdentity_constraint_1,
		&asn_PER_memb_logicalChannelIdentity_constr_6,
		0,
		"logicalChannelIdentity"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, logicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChannelConfig"
		},
};
static int asn_MAP_DRB_ToAddMod_oms_1[] = { 0, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_DRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity at 2503 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Identity at 2504 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Config at 2505 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config at 2506 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logicalChannelIdentity at 2507 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* logicalChannelConfig at 2508 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_specs_1 = {
	sizeof(struct DRB_ToAddMod),
	offsetof(struct DRB_ToAddMod, _asn_ctx),
	asn_MAP_DRB_ToAddMod_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_DRB_ToAddMod_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod = {
	"DRB-ToAddMod",
	"DRB-ToAddMod",
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
	asn_DEF_DRB_ToAddMod_tags_1,
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_DRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DRB_ToAddMod_1,
	6,	/* Elements count */
	&asn_SPC_DRB_ToAddMod_specs_1	/* Additional specs */
};

