/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MobilityFromEUTRACommand_v930_IEs_H_
#define	_MobilityFromEUTRACommand_v930_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MobilityFromEUTRACommand_v960_IEs;

/* MobilityFromEUTRACommand-v930-IEs */
typedef struct MobilityFromEUTRACommand_v930_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct MobilityFromEUTRACommand_v960_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityFromEUTRACommand_v930_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromEUTRACommand_v930_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MobilityFromEUTRACommand-v960-IEs.h"

#endif	/* _MobilityFromEUTRACommand_v930_IEs_H_ */
#include <asn_internal.h>
