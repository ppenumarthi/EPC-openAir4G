/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_AdditionalReestabInfo_H_
#define	_AdditionalReestabInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include "Key-eNodeB-Star.h"
#include "ShortMAC-I.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AdditionalReestabInfo */
typedef struct AdditionalReestabInfo {
	CellIdentity_t	 cellIdentity;
	Key_eNodeB_Star_t	 key_eNodeB_Star;
	ShortMAC_I_t	 shortMAC_I;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalReestabInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalReestabInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalReestabInfo_H_ */
#include <asn_internal.h>
