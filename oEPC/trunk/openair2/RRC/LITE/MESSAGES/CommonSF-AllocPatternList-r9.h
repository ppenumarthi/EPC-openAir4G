/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CommonSF_AllocPatternList_r9_H_
#define	_CommonSF_AllocPatternList_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_SubframeConfig;

/* CommonSF-AllocPatternList-r9 */
typedef struct CommonSF_AllocPatternList_r9 {
	A_SEQUENCE_OF(struct MBSFN_SubframeConfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommonSF_AllocPatternList_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonSF_AllocPatternList_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBSFN-SubframeConfig.h"

#endif	/* _CommonSF_AllocPatternList_r9_H_ */
#include <asn_internal.h>
