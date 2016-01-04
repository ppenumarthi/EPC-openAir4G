/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasCycleSCell_r10_H_
#define	_MeasCycleSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasCycleSCell_r10 {
	MeasCycleSCell_r10_sf160	= 0,
	MeasCycleSCell_r10_sf256	= 1,
	MeasCycleSCell_r10_sf320	= 2,
	MeasCycleSCell_r10_sf512	= 3,
	MeasCycleSCell_r10_sf640	= 4,
	MeasCycleSCell_r10_sf1024	= 5,
	MeasCycleSCell_r10_sf1280	= 6,
	MeasCycleSCell_r10_spare1	= 7
} e_MeasCycleSCell_r10;

/* MeasCycleSCell-r10 */
typedef long	 MeasCycleSCell_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasCycleSCell_r10;
asn_struct_free_f MeasCycleSCell_r10_free;
asn_struct_print_f MeasCycleSCell_r10_print;
asn_constr_check_f MeasCycleSCell_r10_constraint;
ber_type_decoder_f MeasCycleSCell_r10_decode_ber;
der_type_encoder_f MeasCycleSCell_r10_encode_der;
xer_type_decoder_f MeasCycleSCell_r10_decode_xer;
xer_type_encoder_f MeasCycleSCell_r10_encode_xer;
per_type_decoder_f MeasCycleSCell_r10_decode_uper;
per_type_encoder_f MeasCycleSCell_r10_encode_uper;
per_type_decoder_f MeasCycleSCell_r10_decode_aper;
per_type_encoder_f MeasCycleSCell_r10_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasCycleSCell_r10_H_ */
#include <asn_internal.h>
