/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ReportConfigToAddMod_H_
#define	_ReportConfigToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReportConfigId.h"
#include "ReportConfigEUTRA.h"
#include "ReportConfigInterRAT.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportConfigToAddMod__reportConfig_PR {
	ReportConfigToAddMod__reportConfig_PR_NOTHING,	/* No components present */
	ReportConfigToAddMod__reportConfig_PR_reportConfigEUTRA,
	ReportConfigToAddMod__reportConfig_PR_reportConfigInterRAT
} ReportConfigToAddMod__reportConfig_PR;

/* ReportConfigToAddMod */
typedef struct ReportConfigToAddMod {
	ReportConfigId_t	 reportConfigId;
	struct ReportConfigToAddMod__reportConfig {
		ReportConfigToAddMod__reportConfig_PR present;
		union ReportConfigToAddMod__reportConfig_u {
			ReportConfigEUTRA_t	 reportConfigEUTRA;
			ReportConfigInterRAT_t	 reportConfigInterRAT;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportConfig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportConfigToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportConfigToAddMod;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportConfigToAddMod_H_ */
#include <asn_internal.h>
