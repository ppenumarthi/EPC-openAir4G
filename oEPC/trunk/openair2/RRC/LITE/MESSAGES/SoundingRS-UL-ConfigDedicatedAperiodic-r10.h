/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SoundingRS_UL_ConfigDedicatedAperiodic_r10_H_
#define	_SoundingRS_UL_ConfigDedicatedAperiodic_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "SRS-ConfigAp-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR {
	SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR;
typedef enum SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR {
	SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR;

/* Forward declarations */
struct SRS_ConfigAp_r10;

/* SoundingRS-UL-ConfigDedicatedAperiodic-r10 */
typedef struct SoundingRS_UL_ConfigDedicatedAperiodic_r10 {
	SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR present;
	union SoundingRS_UL_ConfigDedicatedAperiodic_r10_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup {
			long	 srs_ConfigIndexAp_r10;
			struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ConfigApDCI_Format4_r10 {
				A_SEQUENCE_OF(struct SRS_ConfigAp_r10) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ConfigApDCI_Format4_r10;
			struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10 {
				SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR present;
				union SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_u {
					NULL_t	 release;
					struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10__setup {
						SRS_ConfigAp_r10_t	 srs_ConfigApDCI_Format0_r10;
						SRS_ConfigAp_r10_t	 srs_ConfigApDCI_Format1a2b2c_r10;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ActivateAp_r10;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicatedAperiodic_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRS-ConfigAp-r10.h"

#endif	/* _SoundingRS_UL_ConfigDedicatedAperiodic_r10_H_ */
#include <asn_internal.h>
