/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PRACH_ConfigSCell_r10_H_
#define	_PRACH_ConfigSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-ConfigSCell-r10 */
typedef struct PRACH_ConfigSCell_r10 {
	long	 prach_ConfigIndex_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ConfigSCell_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ConfigSCell_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_ConfigSCell_r10_H_ */
#include <asn_internal.h>
