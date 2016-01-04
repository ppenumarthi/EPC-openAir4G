/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellsTriggeredList_H_
#define	_CellsTriggeredList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "PhysCellId.h"
#include "PhysCellIdCDMA2000.h"
#include "PhysCellIdUTRA-FDD.h"
#include "PhysCellIdUTRA-TDD.h"
#include <constr_CHOICE.h>
#include "CarrierFreqGERAN.h"
#include "PhysCellIdGERAN.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellsTriggeredList__Member_PR {
	CellsTriggeredList__Member_PR_NOTHING,	/* No components present */
	CellsTriggeredList__Member_PR_physCellIdEUTRA,
	CellsTriggeredList__Member_PR_physCellIdUTRA,
	CellsTriggeredList__Member_PR_physCellIdGERAN,
	CellsTriggeredList__Member_PR_physCellIdCDMA2000
} CellsTriggeredList__Member_PR;
typedef enum physCellIdUTRA_PR {
	physCellIdUTRA_PR_NOTHING,	/* No components present */
	physCellIdUTRA_PR_fdd,
	physCellIdUTRA_PR_tdd
} physCellIdUTRA_PR;

/* CellsTriggeredList */
typedef struct CellsTriggeredList {
	A_SEQUENCE_OF(struct CellsTriggeredList__Member {
		CellsTriggeredList__Member_PR present;
		union CellsTriggeredList__Member_u {
			PhysCellId_t	 physCellIdEUTRA;
			struct physCellIdUTRA {
				physCellIdUTRA_PR present;
				union physCellIdUTRA_u {
					PhysCellIdUTRA_FDD_t	 fdd;
					PhysCellIdUTRA_TDD_t	 tdd;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} physCellIdUTRA;
			struct physCellIdGERAN {
				CarrierFreqGERAN_t	 carrierFreq;
				PhysCellIdGERAN_t	 physCellId;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} physCellIdGERAN;
			PhysCellIdCDMA2000_t	 physCellIdCDMA2000;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsTriggeredList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsTriggeredList;

#ifdef __cplusplus
}
#endif

#endif	/* _CellsTriggeredList_H_ */
#include <asn_internal.h>
