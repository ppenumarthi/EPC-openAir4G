/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "CarrierBandwidthEUTRA.h"

static int
dl_Bandwidth_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dl_Bandwidth_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dl_Bandwidth_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dl_Bandwidth_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dl_Bandwidth_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dl_Bandwidth_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dl_Bandwidth_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dl_Bandwidth_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dl_Bandwidth_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dl_Bandwidth_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
dl_Bandwidth_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
dl_Bandwidth_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_Bandwidth_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
ul_Bandwidth_19_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ul_Bandwidth_19_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ul_Bandwidth_19_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ul_Bandwidth_19_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_19_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ul_Bandwidth_19_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_19_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ul_Bandwidth_19_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_19_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ul_Bandwidth_19_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ul_Bandwidth_19_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
ul_Bandwidth_19_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ul_Bandwidth_19_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_dl_Bandwidth_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_Bandwidth_constr_19 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_dl_Bandwidth_value2enum_2[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" },
	{ 6,	7,	"spare10" },
	{ 7,	6,	"spare9" },
	{ 8,	6,	"spare8" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static unsigned int asn_MAP_dl_Bandwidth_enum2value_2[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4,	/* n75(4) */
	15,	/* spare1(15) */
	6,	/* spare10(6) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9,	/* spare7(9) */
	8,	/* spare8(8) */
	7	/* spare9(7) */
};
static asn_INTEGER_specifics_t asn_SPC_dl_Bandwidth_specs_2 = {
	asn_MAP_dl_Bandwidth_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_Bandwidth_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dl_Bandwidth_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_Bandwidth_2 = {
	"dl-Bandwidth",
	"dl-Bandwidth",
	dl_Bandwidth_2_free,
	dl_Bandwidth_2_print,
	dl_Bandwidth_2_constraint,
	dl_Bandwidth_2_decode_ber,
	dl_Bandwidth_2_encode_der,
	dl_Bandwidth_2_decode_xer,
	dl_Bandwidth_2_encode_xer,
	dl_Bandwidth_2_decode_uper,
	dl_Bandwidth_2_encode_uper,
	dl_Bandwidth_2_decode_aper,
	dl_Bandwidth_2_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dl_Bandwidth_tags_2,
	sizeof(asn_DEF_dl_Bandwidth_tags_2)
		/sizeof(asn_DEF_dl_Bandwidth_tags_2[0]) - 1, /* 1 */
	asn_DEF_dl_Bandwidth_tags_2,	/* Same as above */
	sizeof(asn_DEF_dl_Bandwidth_tags_2)
		/sizeof(asn_DEF_dl_Bandwidth_tags_2[0]), /* 2 */
	&asn_PER_type_dl_Bandwidth_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_Bandwidth_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ul_Bandwidth_value2enum_19[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" },
	{ 6,	7,	"spare10" },
	{ 7,	6,	"spare9" },
	{ 8,	6,	"spare8" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static unsigned int asn_MAP_ul_Bandwidth_enum2value_19[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4,	/* n75(4) */
	15,	/* spare1(15) */
	6,	/* spare10(6) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9,	/* spare7(9) */
	8,	/* spare8(8) */
	7	/* spare9(7) */
};
static asn_INTEGER_specifics_t asn_SPC_ul_Bandwidth_specs_19 = {
	asn_MAP_ul_Bandwidth_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_Bandwidth_enum2value_19,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ul_Bandwidth_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_19 = {
	"ul-Bandwidth",
	"ul-Bandwidth",
	ul_Bandwidth_19_free,
	ul_Bandwidth_19_print,
	ul_Bandwidth_19_constraint,
	ul_Bandwidth_19_decode_ber,
	ul_Bandwidth_19_encode_der,
	ul_Bandwidth_19_decode_xer,
	ul_Bandwidth_19_encode_xer,
	ul_Bandwidth_19_decode_uper,
	ul_Bandwidth_19_encode_uper,
	ul_Bandwidth_19_decode_aper,
	ul_Bandwidth_19_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ul_Bandwidth_tags_19,
	sizeof(asn_DEF_ul_Bandwidth_tags_19)
		/sizeof(asn_DEF_ul_Bandwidth_tags_19[0]) - 1, /* 1 */
	asn_DEF_ul_Bandwidth_tags_19,	/* Same as above */
	sizeof(asn_DEF_ul_Bandwidth_tags_19)
		/sizeof(asn_DEF_ul_Bandwidth_tags_19[0]), /* 2 */
	&asn_PER_type_ul_Bandwidth_constr_19,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_Bandwidth_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CarrierBandwidthEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierBandwidthEUTRA, dl_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_Bandwidth_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-Bandwidth"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierBandwidthEUTRA, ul_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_Bandwidth_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-Bandwidth"
		},
};
static int asn_MAP_CarrierBandwidthEUTRA_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_CarrierBandwidthEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CarrierBandwidthEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-Bandwidth at 3019 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-Bandwidth at 3023 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierBandwidthEUTRA_specs_1 = {
	sizeof(struct CarrierBandwidthEUTRA),
	offsetof(struct CarrierBandwidthEUTRA, _asn_ctx),
	asn_MAP_CarrierBandwidthEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CarrierBandwidthEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierBandwidthEUTRA = {
	"CarrierBandwidthEUTRA",
	"CarrierBandwidthEUTRA",
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
	asn_DEF_CarrierBandwidthEUTRA_tags_1,
	sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1[0]), /* 1 */
	asn_DEF_CarrierBandwidthEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierBandwidthEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_CarrierBandwidthEUTRA_specs_1	/* Additional specs */
};

