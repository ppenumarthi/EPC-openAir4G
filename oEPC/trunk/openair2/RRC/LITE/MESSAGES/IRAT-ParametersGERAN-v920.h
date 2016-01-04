/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_IRAT_ParametersGERAN_v920_H_
#define	_IRAT_ParametersGERAN_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersGERAN_v920__dtm_r9 {
	IRAT_ParametersGERAN_v920__dtm_r9_supported	= 0
} e_IRAT_ParametersGERAN_v920__dtm_r9;
typedef enum IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9 {
	IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9_supported	= 0
} e_IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9;

/* IRAT-ParametersGERAN-v920 */
typedef struct IRAT_ParametersGERAN_v920 {
	long	*dtm_r9	/* OPTIONAL */;
	long	*e_RedirectionGERAN_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersGERAN_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dtm_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_e_RedirectionGERAN_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersGERAN_v920;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersGERAN_v920_H_ */
#include <asn_internal.h>
