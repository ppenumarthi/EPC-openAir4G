/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RadioResourceConfigCommonSCell-r10.h"

static int
dl_Bandwidth_r10_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dl_Bandwidth_r10_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dl_Bandwidth_r10_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dl_Bandwidth_r10_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dl_Bandwidth_r10_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dl_Bandwidth_r10_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dl_Bandwidth_r10_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dl_Bandwidth_r10_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dl_Bandwidth_r10_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dl_Bandwidth_r10_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
dl_Bandwidth_r10_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
dl_Bandwidth_r10_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_Bandwidth_r10_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
ul_Bandwidth_r10_18_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ul_Bandwidth_r10_18_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ul_Bandwidth_r10_18_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ul_Bandwidth_r10_18_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_r10_18_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ul_Bandwidth_r10_18_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_r10_18_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ul_Bandwidth_r10_18_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_r10_18_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ul_Bandwidth_r10_18_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ul_Bandwidth_r10_18_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
ul_Bandwidth_r10_18_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ul_Bandwidth_r10_18_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_dl_Bandwidth_r10_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_Bandwidth_r10_constr_18 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_dl_Bandwidth_r10_value2enum_3[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static unsigned int asn_MAP_dl_Bandwidth_r10_enum2value_3[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static asn_INTEGER_specifics_t asn_SPC_dl_Bandwidth_r10_specs_3 = {
	asn_MAP_dl_Bandwidth_r10_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_Bandwidth_r10_enum2value_3,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dl_Bandwidth_r10_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_Bandwidth_r10_3 = {
	"dl-Bandwidth-r10",
	"dl-Bandwidth-r10",
	dl_Bandwidth_r10_3_free,
	dl_Bandwidth_r10_3_print,
	dl_Bandwidth_r10_3_constraint,
	dl_Bandwidth_r10_3_decode_ber,
	dl_Bandwidth_r10_3_encode_der,
	dl_Bandwidth_r10_3_decode_xer,
	dl_Bandwidth_r10_3_encode_xer,
	dl_Bandwidth_r10_3_decode_uper,
	dl_Bandwidth_r10_3_encode_uper,
	dl_Bandwidth_r10_3_decode_aper,
	dl_Bandwidth_r10_3_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dl_Bandwidth_r10_tags_3,
	sizeof(asn_DEF_dl_Bandwidth_r10_tags_3)
		/sizeof(asn_DEF_dl_Bandwidth_r10_tags_3[0]) - 1, /* 1 */
	asn_DEF_dl_Bandwidth_r10_tags_3,	/* Same as above */
	sizeof(asn_DEF_dl_Bandwidth_r10_tags_3)
		/sizeof(asn_DEF_dl_Bandwidth_r10_tags_3[0]), /* 2 */
	&asn_PER_type_dl_Bandwidth_r10_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_Bandwidth_r10_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nonUL_Configuration_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, dl_Bandwidth_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_Bandwidth_r10_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-Bandwidth-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, antennaInfoCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfoCommon-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, mbsfn_SubframeConfigList_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbsfn-SubframeConfigList-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, phich_Config_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PHICH_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"phich-Config-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, pdsch_ConfigCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-ConfigCommon-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, tdd_Config_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd-Config-r10"
		},
};
static int asn_MAP_nonUL_Configuration_r10_oms_2[] = { 2, 5 };
static ber_tlv_tag_t asn_DEF_nonUL_Configuration_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_nonUL_Configuration_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-Bandwidth-r10 at 2416 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* antennaInfoCommon-r10 at 2418 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbsfn-SubframeConfigList-r10 at 2419 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* phich-Config-r10 at 2421 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pdsch-ConfigCommon-r10 at 2423 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* tdd-Config-r10 at 2424 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nonUL_Configuration_r10_specs_2 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, _asn_ctx),
	asn_MAP_nonUL_Configuration_r10_tag2el_2,
	6,	/* Count of tags in the map */
	asn_MAP_nonUL_Configuration_r10_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonUL_Configuration_r10_2 = {
	"nonUL-Configuration-r10",
	"nonUL-Configuration-r10",
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
	asn_DEF_nonUL_Configuration_r10_tags_2,
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_nonUL_Configuration_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonUL_Configuration_r10_2,
	6,	/* Elements count */
	&asn_SPC_nonUL_Configuration_r10_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ul_Bandwidth_r10_value2enum_18[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static unsigned int asn_MAP_ul_Bandwidth_r10_enum2value_18[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static asn_INTEGER_specifics_t asn_SPC_ul_Bandwidth_r10_specs_18 = {
	asn_MAP_ul_Bandwidth_r10_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_Bandwidth_r10_enum2value_18,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ul_Bandwidth_r10_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_r10_18 = {
	"ul-Bandwidth-r10",
	"ul-Bandwidth-r10",
	ul_Bandwidth_r10_18_free,
	ul_Bandwidth_r10_18_print,
	ul_Bandwidth_r10_18_constraint,
	ul_Bandwidth_r10_18_decode_ber,
	ul_Bandwidth_r10_18_encode_der,
	ul_Bandwidth_r10_18_decode_xer,
	ul_Bandwidth_r10_18_encode_xer,
	ul_Bandwidth_r10_18_decode_uper,
	ul_Bandwidth_r10_18_encode_uper,
	ul_Bandwidth_r10_18_decode_aper,
	ul_Bandwidth_r10_18_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ul_Bandwidth_r10_tags_18,
	sizeof(asn_DEF_ul_Bandwidth_r10_tags_18)
		/sizeof(asn_DEF_ul_Bandwidth_r10_tags_18[0]) - 1, /* 1 */
	asn_DEF_ul_Bandwidth_r10_tags_18,	/* Same as above */
	sizeof(asn_DEF_ul_Bandwidth_r10_tags_18)
		/sizeof(asn_DEF_ul_Bandwidth_r10_tags_18[0]), /* 2 */
	&asn_PER_type_ul_Bandwidth_r10_constr_18,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_Bandwidth_r10_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_FreqInfo_r10_16[] = {
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, ul_CarrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CarrierFreq-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, ul_Bandwidth_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_Bandwidth_r10_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-Bandwidth-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, additionalSpectrumEmission_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalSpectrumEmission-r10"
		},
};
static int asn_MAP_ul_FreqInfo_r10_oms_16[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_ul_FreqInfo_r10_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ul_FreqInfo_r10_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq-r10 at 2429 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Bandwidth-r10 at 2430 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSpectrumEmission-r10 at 2433 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_FreqInfo_r10_specs_16 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, _asn_ctx),
	asn_MAP_ul_FreqInfo_r10_tag2el_16,
	3,	/* Count of tags in the map */
	asn_MAP_ul_FreqInfo_r10_oms_16,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_FreqInfo_r10_16 = {
	"ul-FreqInfo-r10",
	"ul-FreqInfo-r10",
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
	asn_DEF_ul_FreqInfo_r10_tags_16,
	sizeof(asn_DEF_ul_FreqInfo_r10_tags_16)
		/sizeof(asn_DEF_ul_FreqInfo_r10_tags_16[0]) - 1, /* 1 */
	asn_DEF_ul_FreqInfo_r10_tags_16,	/* Same as above */
	sizeof(asn_DEF_ul_FreqInfo_r10_tags_16)
		/sizeof(asn_DEF_ul_FreqInfo_r10_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ul_FreqInfo_r10_16,
	3,	/* Elements count */
	&asn_SPC_ul_FreqInfo_r10_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_Configuration_r10_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, ul_FreqInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_FreqInfo_r10_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-FreqInfo-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, p_Max_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p-Max-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, uplinkPowerControlCommonSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommonSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlCommonSCell-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigCommon-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, ul_CyclicPrefixLength_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CyclicPrefixLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CyclicPrefixLength-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, prach_ConfigSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_ConfigSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-ConfigSCell-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, pusch_ConfigCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-ConfigCommon-r10"
		},
};
static int asn_MAP_ul_Configuration_r10_oms_15[] = { 1, 5 };
static ber_tlv_tag_t asn_DEF_ul_Configuration_r10_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ul_Configuration_r10_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-FreqInfo-r10 at 2429 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p-Max-r10 at 2434 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkPowerControlCommonSCell-r10 at 2435 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* soundingRS-UL-ConfigCommon-r10 at 2438 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ul-CyclicPrefixLength-r10 at 2439 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* prach-ConfigSCell-r10 at 2441 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* pusch-ConfigCommon-r10 at 2443 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_Configuration_r10_specs_15 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, _asn_ctx),
	asn_MAP_ul_Configuration_r10_tag2el_15,
	7,	/* Count of tags in the map */
	asn_MAP_ul_Configuration_r10_oms_15,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Configuration_r10_15 = {
	"ul-Configuration-r10",
	"ul-Configuration-r10",
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
	asn_DEF_ul_Configuration_r10_tags_15,
	sizeof(asn_DEF_ul_Configuration_r10_tags_15)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_15[0]) - 1, /* 1 */
	asn_DEF_ul_Configuration_r10_tags_15,	/* Same as above */
	sizeof(asn_DEF_ul_Configuration_r10_tags_15)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ul_Configuration_r10_15,
	7,	/* Elements count */
	&asn_SPC_ul_Configuration_r10_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSCell_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10, nonUL_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nonUL_Configuration_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonUL-Configuration-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10, ul_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ul_Configuration_r10_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-Configuration-r10"
		},
};
static int asn_MAP_RadioResourceConfigCommonSCell_r10_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommonSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonUL-Configuration-r10 at 2416 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-Configuration-r10 at 2433 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSCell_r10_specs_1 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10, _asn_ctx),
	asn_MAP_RadioResourceConfigCommonSCell_r10_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommonSCell_r10_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSCell_r10 = {
	"RadioResourceConfigCommonSCell-r10",
	"RadioResourceConfigCommonSCell-r10",
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
	asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioResourceConfigCommonSCell_r10_1,
	2,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommonSCell_r10_specs_1	/* Additional specs */
};

