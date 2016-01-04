/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UERadioAccessCapabilityInformation_r8_IEs_H_
#define	_UERadioAccessCapabilityInformation_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UERadioAccessCapabilityInformation-r8-IEs */
typedef struct UERadioAccessCapabilityInformation_r8_IEs {
	OCTET_STRING_t	 ue_RadioAccessCapabilityInfo;
	struct UERadioAccessCapabilityInformation_r8_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioAccessCapabilityInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioAccessCapabilityInformation_r8_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UERadioAccessCapabilityInformation_r8_IEs_H_ */
#include <asn_internal.h>
