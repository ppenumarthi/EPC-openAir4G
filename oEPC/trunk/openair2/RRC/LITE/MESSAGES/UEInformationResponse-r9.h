/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UEInformationResponse_r9_H_
#define	_UEInformationResponse_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UEInformationResponse-r9-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEInformationResponse_r9__criticalExtensions_PR {
	UEInformationResponse_r9__criticalExtensions_PR_NOTHING,	/* No components present */
	UEInformationResponse_r9__criticalExtensions_PR_c1,
	UEInformationResponse_r9__criticalExtensions_PR_criticalExtensionsFuture
} UEInformationResponse_r9__criticalExtensions_PR;
typedef enum UEInformationResponse_r9__criticalExtensions__c1_PR {
	UEInformationResponse_r9__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UEInformationResponse_r9__criticalExtensions__c1_PR_ueInformationResponse_r9,
	UEInformationResponse_r9__criticalExtensions__c1_PR_spare3,
	UEInformationResponse_r9__criticalExtensions__c1_PR_spare2,
	UEInformationResponse_r9__criticalExtensions__c1_PR_spare1
} UEInformationResponse_r9__criticalExtensions__c1_PR;

/* UEInformationResponse-r9 */
typedef struct UEInformationResponse_r9 {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct UEInformationResponse_r9__criticalExtensions {
		UEInformationResponse_r9__criticalExtensions_PR present;
		union UEInformationResponse_r9__criticalExtensions_u {
			struct UEInformationResponse_r9__criticalExtensions__c1 {
				UEInformationResponse_r9__criticalExtensions__c1_PR present;
				union UEInformationResponse_r9__criticalExtensions__c1_u {
					UEInformationResponse_r9_IEs_t	 ueInformationResponse_r9;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UEInformationResponse_r9__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationResponse_r9_H_ */
#include <asn_internal.h>
