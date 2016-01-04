/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_QuantityConfigUTRA_H_
#define	_QuantityConfigUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QuantityConfigUTRA__measQuantityUTRA_FDD {
	QuantityConfigUTRA__measQuantityUTRA_FDD_cpich_RSCP	= 0,
	QuantityConfigUTRA__measQuantityUTRA_FDD_cpich_EcN0	= 1
} e_QuantityConfigUTRA__measQuantityUTRA_FDD;
typedef enum QuantityConfigUTRA__measQuantityUTRA_TDD {
	QuantityConfigUTRA__measQuantityUTRA_TDD_pccpch_RSCP	= 0
} e_QuantityConfigUTRA__measQuantityUTRA_TDD;

/* QuantityConfigUTRA */
typedef struct QuantityConfigUTRA {
	long	 measQuantityUTRA_FDD;
	long	 measQuantityUTRA_TDD;
	FilterCoefficient_t	*filterCoefficient	/* DEFAULT 4 */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measQuantityUTRA_FDD_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_measQuantityUTRA_TDD_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigUTRA_H_ */
#include <asn_internal.h>
