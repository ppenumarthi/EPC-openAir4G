/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasResultListUTRA_H_
#define	_MeasResultListUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultUTRA;

/* MeasResultListUTRA */
typedef struct MeasResultListUTRA {
	A_SEQUENCE_OF(struct MeasResultUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultListUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultListUTRA;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultUTRA.h"

#endif	/* _MeasResultListUTRA_H_ */
#include <asn_internal.h>
