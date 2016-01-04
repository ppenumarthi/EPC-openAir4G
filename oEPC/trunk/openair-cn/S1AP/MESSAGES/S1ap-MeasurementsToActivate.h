/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/nfvepc/oEPC/trunk/openair-cn/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -fhave_native64`
 */

#ifndef	_S1ap_MeasurementsToActivate_H_
#define	_S1ap_MeasurementsToActivate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap-MeasurementsToActivate */
typedef BIT_STRING_t	 S1ap_MeasurementsToActivate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_MeasurementsToActivate;
asn_struct_free_f S1ap_MeasurementsToActivate_free;
asn_struct_print_f S1ap_MeasurementsToActivate_print;
asn_constr_check_f S1ap_MeasurementsToActivate_constraint;
ber_type_decoder_f S1ap_MeasurementsToActivate_decode_ber;
der_type_encoder_f S1ap_MeasurementsToActivate_encode_der;
xer_type_decoder_f S1ap_MeasurementsToActivate_decode_xer;
xer_type_encoder_f S1ap_MeasurementsToActivate_encode_xer;
per_type_decoder_f S1ap_MeasurementsToActivate_decode_uper;
per_type_encoder_f S1ap_MeasurementsToActivate_encode_uper;
per_type_decoder_f S1ap_MeasurementsToActivate_decode_aper;
per_type_encoder_f S1ap_MeasurementsToActivate_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_MeasurementsToActivate_H_ */
#include <asn_internal.h>
