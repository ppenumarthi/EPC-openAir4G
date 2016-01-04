/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasResultServFreq_r10_H_
#define	_MeasResultServFreq_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex-r10.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "PhysCellId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultServFreq-r10 */
typedef struct MeasResultServFreq_r10 {
	ServCellIndex_r10_t	 servFreqId_r10;
	struct MeasResultServFreq_r10__measResultSCell_r10 {
		RSRP_Range_t	 rsrpResultSCell_r10;
		RSRQ_Range_t	 rsrqResultSCell_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultSCell_r10;
	struct MeasResultServFreq_r10__measResultBestNeighCell_r10 {
		PhysCellId_t	 physCellId_r10;
		RSRP_Range_t	 rsrpResultNCell_r10;
		RSRQ_Range_t	 rsrqResultNCell_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultBestNeighCell_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServFreq_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServFreq_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultServFreq_r10_H_ */
#include <asn_internal.h>
