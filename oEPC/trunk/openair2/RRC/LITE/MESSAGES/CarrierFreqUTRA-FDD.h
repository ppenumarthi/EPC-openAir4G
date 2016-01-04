/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CarrierFreqUTRA_FDD_H_
#define	_CarrierFreqUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueUTRA.h"
#include "CellReselectionPriority.h"
#include "ReselectionThreshold.h"
#include <NativeInteger.h>
#include "ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqUTRA-FDD */
typedef struct CarrierFreqUTRA_FDD {
	ARFCN_ValueUTRA_t	 carrierFreq;
	CellReselectionPriority_t	*cellReselectionPriority	/* OPTIONAL */;
	ReselectionThreshold_t	 threshX_High;
	ReselectionThreshold_t	 threshX_Low;
	long	 q_RxLevMin;
	long	 p_MaxUTRA;
	long	 q_QualMin;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CarrierFreqUTRA_FDD__threshX_Q_r9 {
		ReselectionThresholdQ_r9_t	 threshX_HighQ_r9;
		ReselectionThresholdQ_r9_t	 threshX_LowQ_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqUTRA_FDD;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqUTRA_FDD_H_ */
#include <asn_internal.h>
