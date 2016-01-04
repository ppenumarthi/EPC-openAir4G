/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_Paging_v920_IEs_H_
#define	_Paging_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Paging_v920_IEs__cmas_Indication_r9 {
	Paging_v920_IEs__cmas_Indication_r9_true	= 0
} e_Paging_v920_IEs__cmas_Indication_r9;

/* Paging-v920-IEs */
typedef struct Paging_v920_IEs {
	long	*cmas_Indication_r9	/* OPTIONAL */;
	struct Paging_v920_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Paging_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cmas_Indication_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Paging_v920_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _Paging_v920_IEs_H_ */
#include <asn_internal.h>
