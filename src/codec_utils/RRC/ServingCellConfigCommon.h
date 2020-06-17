/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ServingCellConfigCommon_H_
#define	_ServingCellConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include <NativeEnumerated.h>
#include "SubcarrierSpacing.h"
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "RateMatchPatternId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServingCellConfigCommon__n_TimingAdvanceOffset {
	ServingCellConfigCommon__n_TimingAdvanceOffset_n0	= 0,
	ServingCellConfigCommon__n_TimingAdvanceOffset_n25600	= 1,
	ServingCellConfigCommon__n_TimingAdvanceOffset_n39936	= 2
} e_ServingCellConfigCommon__n_TimingAdvanceOffset;
typedef enum ServingCellConfigCommon__ssb_PositionsInBurst_PR {
	ServingCellConfigCommon__ssb_PositionsInBurst_PR_NOTHING,	/* No components present */
	ServingCellConfigCommon__ssb_PositionsInBurst_PR_shortBitmap,
	ServingCellConfigCommon__ssb_PositionsInBurst_PR_mediumBitmap,
	ServingCellConfigCommon__ssb_PositionsInBurst_PR_longBitmap
} ServingCellConfigCommon__ssb_PositionsInBurst_PR;
typedef enum ServingCellConfigCommon__ssb_periodicityServingCell {
	ServingCellConfigCommon__ssb_periodicityServingCell_ms5	= 0,
	ServingCellConfigCommon__ssb_periodicityServingCell_ms10	= 1,
	ServingCellConfigCommon__ssb_periodicityServingCell_ms20	= 2,
	ServingCellConfigCommon__ssb_periodicityServingCell_ms40	= 3,
	ServingCellConfigCommon__ssb_periodicityServingCell_ms80	= 4,
	ServingCellConfigCommon__ssb_periodicityServingCell_ms160	= 5,
	ServingCellConfigCommon__ssb_periodicityServingCell_spare2	= 6,
	ServingCellConfigCommon__ssb_periodicityServingCell_spare1	= 7
} e_ServingCellConfigCommon__ssb_periodicityServingCell;
typedef enum ServingCellConfigCommon__dmrs_TypeA_Position {
	ServingCellConfigCommon__dmrs_TypeA_Position_pos2	= 0,
	ServingCellConfigCommon__dmrs_TypeA_Position_pos3	= 1
} e_ServingCellConfigCommon__dmrs_TypeA_Position;
typedef enum ServingCellConfigCommon__lte_CRS_ToMatchAround_PR {
	ServingCellConfigCommon__lte_CRS_ToMatchAround_PR_NOTHING,	/* No components present */
	ServingCellConfigCommon__lte_CRS_ToMatchAround_PR_release,
	ServingCellConfigCommon__lte_CRS_ToMatchAround_PR_setup
} ServingCellConfigCommon__lte_CRS_ToMatchAround_PR;

/* Forward declarations */
struct DownlinkConfigCommon;
struct UplinkConfigCommon;
struct TDD_UL_DL_ConfigCommon;
struct RateMatchPatternLTE_CRS;
struct RateMatchPattern;

/* ServingCellConfigCommon */
typedef struct ServingCellConfigCommon {
	PhysCellId_t	*physCellId;	/* OPTIONAL */
	struct DownlinkConfigCommon	*downlinkConfigCommon;	/* OPTIONAL */
	struct UplinkConfigCommon	*uplinkConfigCommon;	/* OPTIONAL */
	struct UplinkConfigCommon	*supplementaryUplinkConfig;	/* OPTIONAL */
	long	*n_TimingAdvanceOffset;	/* OPTIONAL */
	struct ServingCellConfigCommon__ssb_PositionsInBurst {
		ServingCellConfigCommon__ssb_PositionsInBurst_PR present;
		union ServingCellConfigCommon__ssb_PositionsInBurst_u {
			BIT_STRING_t	 shortBitmap;
			BIT_STRING_t	 mediumBitmap;
			BIT_STRING_t	 longBitmap;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ssb_PositionsInBurst;
	long	*ssb_periodicityServingCell;	/* OPTIONAL */
	long	 dmrs_TypeA_Position;
	struct ServingCellConfigCommon__lte_CRS_ToMatchAround {
		ServingCellConfigCommon__lte_CRS_ToMatchAround_PR present;
		union ServingCellConfigCommon__lte_CRS_ToMatchAround_u {
			NULL_t	 release;
			struct RateMatchPatternLTE_CRS	*setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *lte_CRS_ToMatchAround;
	struct ServingCellConfigCommon__rateMatchPatternToAddModList {
		A_SEQUENCE_OF(struct RateMatchPattern) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rateMatchPatternToAddModList;
	struct ServingCellConfigCommon__rateMatchPatternToReleaseList {
		A_SEQUENCE_OF(RateMatchPatternId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rateMatchPatternToReleaseList;
	SubcarrierSpacing_t	*ssbSubcarrierSpacing;	/* OPTIONAL */
	struct TDD_UL_DL_ConfigCommon	*tdd_UL_DL_ConfigurationCommon;	/* OPTIONAL */
	long	 ss_PBCH_BlockPower;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServingCellConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_n_TimingAdvanceOffset_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ssb_periodicityServingCell_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_TypeA_Position_23;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ServingCellConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_ServingCellConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_ServingCellConfigCommon_1[14];

#ifdef __cplusplus
}
#endif

#endif	/* _ServingCellConfigCommon_H_ */
#include <asn_internal.h>