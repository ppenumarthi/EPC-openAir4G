/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CSG_AllowedReportingCells_r9_H_
#define	_CSG_AllowedReportingCells_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysCellIdRangeUTRA_FDDList_r9;

/* CSG-AllowedReportingCells-r9 */
typedef struct CSG_AllowedReportingCells_r9 {
	struct PhysCellIdRangeUTRA_FDDList_r9	*physCellIdRangeUTRA_FDDList_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSG_AllowedReportingCells_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSG_AllowedReportingCells_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysCellIdRangeUTRA-FDDList-r9.h"

#endif	/* _CSG_AllowedReportingCells_r9_H_ */
#include <asn_internal.h>