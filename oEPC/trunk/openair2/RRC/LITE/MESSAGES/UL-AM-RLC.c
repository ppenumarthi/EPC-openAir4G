/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "UL-AM-RLC.h"

static int
maxRetxThreshold_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
maxRetxThreshold_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
maxRetxThreshold_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
maxRetxThreshold_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
maxRetxThreshold_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
maxRetxThreshold_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
maxRetxThreshold_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
maxRetxThreshold_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
maxRetxThreshold_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
maxRetxThreshold_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
maxRetxThreshold_5_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
maxRetxThreshold_5_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	maxRetxThreshold_5_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_maxRetxThreshold_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_maxRetxThreshold_value2enum_5[] = {
	{ 0,	2,	"t1" },
	{ 1,	2,	"t2" },
	{ 2,	2,	"t3" },
	{ 3,	2,	"t4" },
	{ 4,	2,	"t6" },
	{ 5,	2,	"t8" },
	{ 6,	3,	"t16" },
	{ 7,	3,	"t32" }
};
static unsigned int asn_MAP_maxRetxThreshold_enum2value_5[] = {
	0,	/* t1(0) */
	6,	/* t16(6) */
	1,	/* t2(1) */
	2,	/* t3(2) */
	7,	/* t32(7) */
	3,	/* t4(3) */
	4,	/* t6(4) */
	5	/* t8(5) */
};
static asn_INTEGER_specifics_t asn_SPC_maxRetxThreshold_specs_5 = {
	asn_MAP_maxRetxThreshold_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_maxRetxThreshold_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_maxRetxThreshold_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxRetxThreshold_5 = {
	"maxRetxThreshold",
	"maxRetxThreshold",
	maxRetxThreshold_5_free,
	maxRetxThreshold_5_print,
	maxRetxThreshold_5_constraint,
	maxRetxThreshold_5_decode_ber,
	maxRetxThreshold_5_encode_der,
	maxRetxThreshold_5_decode_xer,
	maxRetxThreshold_5_encode_xer,
	maxRetxThreshold_5_decode_uper,
	maxRetxThreshold_5_encode_uper,
	maxRetxThreshold_5_decode_aper,
	maxRetxThreshold_5_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_maxRetxThreshold_tags_5,
	sizeof(asn_DEF_maxRetxThreshold_tags_5)
		/sizeof(asn_DEF_maxRetxThreshold_tags_5[0]) - 1, /* 1 */
	asn_DEF_maxRetxThreshold_tags_5,	/* Same as above */
	sizeof(asn_DEF_maxRetxThreshold_tags_5)
		/sizeof(asn_DEF_maxRetxThreshold_tags_5[0]), /* 2 */
	&asn_PER_type_maxRetxThreshold_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxRetxThreshold_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_AM_RLC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC, t_PollRetransmit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_PollRetransmit,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-PollRetransmit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC, pollPDU),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PollPDU,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pollPDU"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC, pollByte),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PollByte,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pollByte"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_AM_RLC, maxRetxThreshold),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxRetxThreshold_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxRetxThreshold"
		},
};
static ber_tlv_tag_t asn_DEF_UL_AM_RLC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UL_AM_RLC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-PollRetransmit at 2539 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pollPDU at 2540 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pollByte at 2541 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxRetxThreshold at 2543 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UL_AM_RLC_specs_1 = {
	sizeof(struct UL_AM_RLC),
	offsetof(struct UL_AM_RLC, _asn_ctx),
	asn_MAP_UL_AM_RLC_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UL_AM_RLC = {
	"UL-AM-RLC",
	"UL-AM-RLC",
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
	asn_DEF_UL_AM_RLC_tags_1,
	sizeof(asn_DEF_UL_AM_RLC_tags_1)
		/sizeof(asn_DEF_UL_AM_RLC_tags_1[0]), /* 1 */
	asn_DEF_UL_AM_RLC_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_AM_RLC_tags_1)
		/sizeof(asn_DEF_UL_AM_RLC_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UL_AM_RLC_1,
	4,	/* Elements count */
	&asn_SPC_UL_AM_RLC_specs_1	/* Additional specs */
};

