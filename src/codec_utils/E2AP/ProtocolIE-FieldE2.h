/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "codeathon/E2AP.asn1"
 * 	`asn1c -D ./newE2AP -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ProtocolIE_FieldE2_H_
#define	_ProtocolIE_FieldE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-IDE2.h"
#include "CriticalityE2.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "RICaction-ToBeSetup-Item.h"
#include "PresenceE2.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "RICaction-Admitted-Item.h"
#include "RICaction-NotAdmitted-Item.h"
#include "RANfunction-Item.h"
#include "RANfunctionID-Item.h"
#include "RANfunctionIDcause-Item.h"
#include "RICrequestID.h"
#include "RANfunctionID.h"
#include "RICsubscriptionDetails.h"
#include "RICaction-Admitted-List.h"
#include "RICaction-NotAdmitted-List.h"
#include "CriticalityDiagnosticsE2.h"
#include "CauseE2.h"
#include "RICactionID.h"
#include "RICindicationSN.h"
#include "RICindicationType.h"
#include "RICindicationHeader.h"
#include "RICindicationMessage.h"
#include "RICcallProcessID.h"
#include "RICcontrolHeader.h"
#include "RICcontrolMessage.h"
#include "RICcontrolAckRequest.h"
#include "RICcontrolStatus.h"
#include "RICcontrolOutcome.h"
#include "GlobalE2node-ID.h"
#include "RANfunctions-List.h"
#include "GlobalRIC-ID.h"
#include "RANfunctionsID-List.h"
#include "RANfunctionsIDcause-List.h"
#include "TimeToWaitE2.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RICaction_ToBeSetup_ItemIEs__value_PR {
	RICaction_ToBeSetup_ItemIEs__value_PR_NOTHING,	/* No components present */
	RICaction_ToBeSetup_ItemIEs__value_PR_RICaction_ToBeSetup_Item
} RICaction_ToBeSetup_ItemIEs__value_PR;
typedef enum RICaction_Admitted_ItemIEs__value_PR {
	RICaction_Admitted_ItemIEs__value_PR_NOTHING,	/* No components present */
	RICaction_Admitted_ItemIEs__value_PR_RICaction_Admitted_Item
} RICaction_Admitted_ItemIEs__value_PR;
typedef enum RICaction_NotAdmitted_ItemIEs__value_PR {
	RICaction_NotAdmitted_ItemIEs__value_PR_NOTHING,	/* No components present */
	RICaction_NotAdmitted_ItemIEs__value_PR_RICaction_NotAdmitted_Item
} RICaction_NotAdmitted_ItemIEs__value_PR;
typedef enum RANfunction_ItemIEs__value_PR {
	RANfunction_ItemIEs__value_PR_NOTHING,	/* No components present */
	RANfunction_ItemIEs__value_PR_RANfunction_Item
} RANfunction_ItemIEs__value_PR;
typedef enum RANfunctionID_ItemIEs__value_PR {
	RANfunctionID_ItemIEs__value_PR_NOTHING,	/* No components present */
	RANfunctionID_ItemIEs__value_PR_RANfunctionID_Item
} RANfunctionID_ItemIEs__value_PR;
typedef enum RANfunctionIDcause_ItemIEs__value_PR {
	RANfunctionIDcause_ItemIEs__value_PR_NOTHING,	/* No components present */
	RANfunctionIDcause_ItemIEs__value_PR_RANfunctionIDcause_Item
} RANfunctionIDcause_ItemIEs__value_PR;
typedef enum RICsubscriptionRequest_IEs__value_PR {
	RICsubscriptionRequest_IEs__value_PR_NOTHING,	/* No components present */
	RICsubscriptionRequest_IEs__value_PR_RICrequestID,
	RICsubscriptionRequest_IEs__value_PR_RANfunctionID,
	RICsubscriptionRequest_IEs__value_PR_RICsubscriptionDetails
} RICsubscriptionRequest_IEs__value_PR;
typedef enum RICsubscriptionResponse_IEs__value_PR {
	RICsubscriptionResponse_IEs__value_PR_NOTHING,	/* No components present */
	RICsubscriptionResponse_IEs__value_PR_RICrequestID,
	RICsubscriptionResponse_IEs__value_PR_RANfunctionID,
	RICsubscriptionResponse_IEs__value_PR_RICaction_Admitted_List,
	RICsubscriptionResponse_IEs__value_PR_RICaction_NotAdmitted_List
} RICsubscriptionResponse_IEs__value_PR;
typedef enum RICsubscriptionFailure_IEs__value_PR {
	RICsubscriptionFailure_IEs__value_PR_NOTHING,	/* No components present */
	RICsubscriptionFailure_IEs__value_PR_RICrequestID,
	RICsubscriptionFailure_IEs__value_PR_RANfunctionID,
	RICsubscriptionFailure_IEs__value_PR_RICaction_NotAdmitted_List,
	RICsubscriptionFailure_IEs__value_PR_CriticalityDiagnosticsE2
} RICsubscriptionFailure_IEs__value_PR;
typedef enum RICsubscriptionDeleteRequest_IEs__value_PR {
	RICsubscriptionDeleteRequest_IEs__value_PR_NOTHING,	/* No components present */
	RICsubscriptionDeleteRequest_IEs__value_PR_RICrequestID,
	RICsubscriptionDeleteRequest_IEs__value_PR_RANfunctionID
} RICsubscriptionDeleteRequest_IEs__value_PR;
typedef enum RICsubscriptionDeleteResponse_IEs__value_PR {
	RICsubscriptionDeleteResponse_IEs__value_PR_NOTHING,	/* No components present */
	RICsubscriptionDeleteResponse_IEs__value_PR_RICrequestID,
	RICsubscriptionDeleteResponse_IEs__value_PR_RANfunctionID
} RICsubscriptionDeleteResponse_IEs__value_PR;
typedef enum RICsubscriptionDeleteFailure_IEs__value_PR {
	RICsubscriptionDeleteFailure_IEs__value_PR_NOTHING,	/* No components present */
	RICsubscriptionDeleteFailure_IEs__value_PR_RICrequestID,
	RICsubscriptionDeleteFailure_IEs__value_PR_RANfunctionID,
	RICsubscriptionDeleteFailure_IEs__value_PR_CauseE2,
	RICsubscriptionDeleteFailure_IEs__value_PR_CriticalityDiagnosticsE2
} RICsubscriptionDeleteFailure_IEs__value_PR;
typedef enum RICindication_IEs__value_PR {
	RICindication_IEs__value_PR_NOTHING,	/* No components present */
	RICindication_IEs__value_PR_RICrequestID,
	RICindication_IEs__value_PR_RANfunctionID,
	RICindication_IEs__value_PR_RICactionID,
	RICindication_IEs__value_PR_RICindicationSN,
	RICindication_IEs__value_PR_RICindicationType,
	RICindication_IEs__value_PR_RICindicationHeader,
	RICindication_IEs__value_PR_RICindicationMessage,
	RICindication_IEs__value_PR_RICcallProcessID
} RICindication_IEs__value_PR;
typedef enum RICcontrolRequest_IEs__value_PR {
	RICcontrolRequest_IEs__value_PR_NOTHING,	/* No components present */
	RICcontrolRequest_IEs__value_PR_RICrequestID,
	RICcontrolRequest_IEs__value_PR_RANfunctionID,
	RICcontrolRequest_IEs__value_PR_RICcallProcessID,
	RICcontrolRequest_IEs__value_PR_RICcontrolHeader,
	RICcontrolRequest_IEs__value_PR_RICcontrolMessage,
	RICcontrolRequest_IEs__value_PR_RICcontrolAckRequest
} RICcontrolRequest_IEs__value_PR;
typedef enum RICcontrolAcknowledge_IEs__value_PR {
	RICcontrolAcknowledge_IEs__value_PR_NOTHING,	/* No components present */
	RICcontrolAcknowledge_IEs__value_PR_RICrequestID,
	RICcontrolAcknowledge_IEs__value_PR_RANfunctionID,
	RICcontrolAcknowledge_IEs__value_PR_RICcallProcessID,
	RICcontrolAcknowledge_IEs__value_PR_RICcontrolStatus,
	RICcontrolAcknowledge_IEs__value_PR_RICcontrolOutcome
} RICcontrolAcknowledge_IEs__value_PR;
typedef enum RICcontrolFailure_IEs__value_PR {
	RICcontrolFailure_IEs__value_PR_NOTHING,	/* No components present */
	RICcontrolFailure_IEs__value_PR_RICrequestID,
	RICcontrolFailure_IEs__value_PR_RANfunctionID,
	RICcontrolFailure_IEs__value_PR_RICcallProcessID,
	RICcontrolFailure_IEs__value_PR_CauseE2,
	RICcontrolFailure_IEs__value_PR_RICcontrolOutcome
} RICcontrolFailure_IEs__value_PR;
typedef enum ErrorIndicationE2_IEs__value_PR {
	ErrorIndicationE2_IEs__value_PR_NOTHING,	/* No components present */
	ErrorIndicationE2_IEs__value_PR_RICrequestID,
	ErrorIndicationE2_IEs__value_PR_RANfunctionID,
	ErrorIndicationE2_IEs__value_PR_CauseE2,
	ErrorIndicationE2_IEs__value_PR_CriticalityDiagnosticsE2
} ErrorIndicationE2_IEs__value_PR;
typedef enum E2setupRequestIEs__value_PR {
	E2setupRequestIEs__value_PR_NOTHING,	/* No components present */
	E2setupRequestIEs__value_PR_GlobalE2node_ID,
	E2setupRequestIEs__value_PR_RANfunctions_List
} E2setupRequestIEs__value_PR;
typedef enum E2setupResponseIEs__value_PR {
	E2setupResponseIEs__value_PR_NOTHING,	/* No components present */
	E2setupResponseIEs__value_PR_GlobalRIC_ID,
	E2setupResponseIEs__value_PR_RANfunctionsID_List,
	E2setupResponseIEs__value_PR_RANfunctionsIDcause_List
} E2setupResponseIEs__value_PR;
typedef enum E2setupFailureIEs__value_PR {
	E2setupFailureIEs__value_PR_NOTHING,	/* No components present */
	E2setupFailureIEs__value_PR_CauseE2,
	E2setupFailureIEs__value_PR_TimeToWaitE2,
	E2setupFailureIEs__value_PR_CriticalityDiagnosticsE2
} E2setupFailureIEs__value_PR;
typedef enum ResetRequestIEs__value_PR {
	ResetRequestIEs__value_PR_NOTHING,	/* No components present */
	ResetRequestIEs__value_PR_CauseE2
} ResetRequestIEs__value_PR;
typedef enum ResetResponseIEs__value_PR {
	ResetResponseIEs__value_PR_NOTHING,	/* No components present */
	ResetResponseIEs__value_PR_CriticalityDiagnosticsE2
} ResetResponseIEs__value_PR;
typedef enum RICserviceUpdate_IEs__value_PR {
	RICserviceUpdate_IEs__value_PR_NOTHING,	/* No components present */
	RICserviceUpdate_IEs__value_PR_RANfunctions_List,
	RICserviceUpdate_IEs__value_PR_RANfunctionsID_List
} RICserviceUpdate_IEs__value_PR;
typedef enum RICserviceUpdateAcknowledge_IEs__value_PR {
	RICserviceUpdateAcknowledge_IEs__value_PR_NOTHING,	/* No components present */
	RICserviceUpdateAcknowledge_IEs__value_PR_RANfunctionsID_List,
	RICserviceUpdateAcknowledge_IEs__value_PR_RANfunctionsIDcause_List
} RICserviceUpdateAcknowledge_IEs__value_PR;
typedef enum RICserviceUpdateFailure_IEs__value_PR {
	RICserviceUpdateFailure_IEs__value_PR_NOTHING,	/* No components present */
	RICserviceUpdateFailure_IEs__value_PR_RANfunctionsIDcause_List,
	RICserviceUpdateFailure_IEs__value_PR_TimeToWaitE2,
	RICserviceUpdateFailure_IEs__value_PR_CriticalityDiagnosticsE2
} RICserviceUpdateFailure_IEs__value_PR;
typedef enum RICserviceQuery_IEs__value_PR {
	RICserviceQuery_IEs__value_PR_NOTHING,	/* No components present */
	RICserviceQuery_IEs__value_PR_RANfunctionsID_List
} RICserviceQuery_IEs__value_PR;

/* ProtocolIE-FieldE2 */
typedef struct RICaction_ToBeSetup_ItemIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICaction_ToBeSetup_ItemIEs__value {
		RICaction_ToBeSetup_ItemIEs__value_PR present;
		union RICaction_ToBeSetup_ItemIEs__value_u {
			RICaction_ToBeSetup_Item_t	 RICaction_ToBeSetup_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICaction_ToBeSetup_ItemIEs_t;
typedef struct RICaction_Admitted_ItemIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICaction_Admitted_ItemIEs__value {
		RICaction_Admitted_ItemIEs__value_PR present;
		union RICaction_Admitted_ItemIEs__value_u {
			RICaction_Admitted_Item_t	 RICaction_Admitted_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICaction_Admitted_ItemIEs_t;
typedef struct RICaction_NotAdmitted_ItemIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICaction_NotAdmitted_ItemIEs__value {
		RICaction_NotAdmitted_ItemIEs__value_PR present;
		union RICaction_NotAdmitted_ItemIEs__value_u {
			RICaction_NotAdmitted_Item_t	 RICaction_NotAdmitted_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICaction_NotAdmitted_ItemIEs_t;
typedef struct RANfunction_ItemIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RANfunction_ItemIEs__value {
		RANfunction_ItemIEs__value_PR present;
		union RANfunction_ItemIEs__value_u {
			RANfunction_Item_t	 RANfunction_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANfunction_ItemIEs_t;
typedef struct RANfunctionID_ItemIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RANfunctionID_ItemIEs__value {
		RANfunctionID_ItemIEs__value_PR present;
		union RANfunctionID_ItemIEs__value_u {
			RANfunctionID_Item_t	 RANfunctionID_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANfunctionID_ItemIEs_t;
typedef struct RANfunctionIDcause_ItemIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RANfunctionIDcause_ItemIEs__value {
		RANfunctionIDcause_ItemIEs__value_PR present;
		union RANfunctionIDcause_ItemIEs__value_u {
			RANfunctionIDcause_Item_t	 RANfunctionIDcause_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANfunctionIDcause_ItemIEs_t;
typedef struct RICsubscriptionRequest_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICsubscriptionRequest_IEs__value {
		RICsubscriptionRequest_IEs__value_PR present;
		union RICsubscriptionRequest_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			RICsubscriptionDetails_t	 RICsubscriptionDetails;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionRequest_IEs_t;
typedef struct RICsubscriptionResponse_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICsubscriptionResponse_IEs__value {
		RICsubscriptionResponse_IEs__value_PR present;
		union RICsubscriptionResponse_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			RICaction_Admitted_List_t	 RICaction_Admitted_List;
			RICaction_NotAdmitted_List_t	 RICaction_NotAdmitted_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionResponse_IEs_t;
typedef struct RICsubscriptionFailure_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICsubscriptionFailure_IEs__value {
		RICsubscriptionFailure_IEs__value_PR present;
		union RICsubscriptionFailure_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			RICaction_NotAdmitted_List_t	 RICaction_NotAdmitted_List;
			CriticalityDiagnosticsE2_t	 CriticalityDiagnosticsE2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionFailure_IEs_t;
typedef struct RICsubscriptionDeleteRequest_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICsubscriptionDeleteRequest_IEs__value {
		RICsubscriptionDeleteRequest_IEs__value_PR present;
		union RICsubscriptionDeleteRequest_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionDeleteRequest_IEs_t;
typedef struct RICsubscriptionDeleteResponse_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICsubscriptionDeleteResponse_IEs__value {
		RICsubscriptionDeleteResponse_IEs__value_PR present;
		union RICsubscriptionDeleteResponse_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionDeleteResponse_IEs_t;
typedef struct RICsubscriptionDeleteFailure_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICsubscriptionDeleteFailure_IEs__value {
		RICsubscriptionDeleteFailure_IEs__value_PR present;
		union RICsubscriptionDeleteFailure_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			CauseE2_t	 CauseE2;
			CriticalityDiagnosticsE2_t	 CriticalityDiagnosticsE2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionDeleteFailure_IEs_t;
typedef struct RICindication_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICindication_IEs__value {
		RICindication_IEs__value_PR present;
		union RICindication_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			RICactionID_t	 RICactionID;
			RICindicationSN_t	 RICindicationSN;
			RICindicationType_t	 RICindicationType;
			RICindicationHeader_t	 RICindicationHeader;
			RICindicationMessage_t	 RICindicationMessage;
			RICcallProcessID_t	 RICcallProcessID;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICindication_IEs_t;
typedef struct RICcontrolRequest_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICcontrolRequest_IEs__value {
		RICcontrolRequest_IEs__value_PR present;
		union RICcontrolRequest_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			RICcallProcessID_t	 RICcallProcessID;
			RICcontrolHeader_t	 RICcontrolHeader;
			RICcontrolMessage_t	 RICcontrolMessage;
			RICcontrolAckRequest_t	 RICcontrolAckRequest;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICcontrolRequest_IEs_t;
typedef struct RICcontrolAcknowledge_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICcontrolAcknowledge_IEs__value {
		RICcontrolAcknowledge_IEs__value_PR present;
		union RICcontrolAcknowledge_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			RICcallProcessID_t	 RICcallProcessID;
			RICcontrolStatus_t	 RICcontrolStatus;
			RICcontrolOutcome_t	 RICcontrolOutcome;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICcontrolAcknowledge_IEs_t;
typedef struct RICcontrolFailure_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICcontrolFailure_IEs__value {
		RICcontrolFailure_IEs__value_PR present;
		union RICcontrolFailure_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			RICcallProcessID_t	 RICcallProcessID;
			CauseE2_t	 CauseE2;
			RICcontrolOutcome_t	 RICcontrolOutcome;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICcontrolFailure_IEs_t;
typedef struct ErrorIndicationE2_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct ErrorIndicationE2_IEs__value {
		ErrorIndicationE2_IEs__value_PR present;
		union ErrorIndicationE2_IEs__value_u {
			RICrequestID_t	 RICrequestID;
			RANfunctionID_t	 RANfunctionID;
			CauseE2_t	 CauseE2;
			CriticalityDiagnosticsE2_t	 CriticalityDiagnosticsE2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ErrorIndicationE2_IEs_t;
typedef struct E2setupRequestIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct E2setupRequestIEs__value {
		E2setupRequestIEs__value_PR present;
		union E2setupRequestIEs__value_u {
			GlobalE2node_ID_t	 GlobalE2node_ID;
			RANfunctions_List_t	 RANfunctions_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2setupRequestIEs_t;
typedef struct E2setupResponseIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct E2setupResponseIEs__value {
		E2setupResponseIEs__value_PR present;
		union E2setupResponseIEs__value_u {
			GlobalRIC_ID_t	 GlobalRIC_ID;
			RANfunctionsID_List_t	 RANfunctionsID_List;
			RANfunctionsIDcause_List_t	 RANfunctionsIDcause_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2setupResponseIEs_t;
typedef struct E2setupFailureIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct E2setupFailureIEs__value {
		E2setupFailureIEs__value_PR present;
		union E2setupFailureIEs__value_u {
			CauseE2_t	 CauseE2;
			TimeToWaitE2_t	 TimeToWaitE2;
			CriticalityDiagnosticsE2_t	 CriticalityDiagnosticsE2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2setupFailureIEs_t;
typedef struct ResetRequestIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct ResetRequestIEs__value {
		ResetRequestIEs__value_PR present;
		union ResetRequestIEs__value_u {
			CauseE2_t	 CauseE2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResetRequestIEs_t;
typedef struct ResetResponseIEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct ResetResponseIEs__value {
		ResetResponseIEs__value_PR present;
		union ResetResponseIEs__value_u {
			CriticalityDiagnosticsE2_t	 CriticalityDiagnosticsE2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResetResponseIEs_t;
typedef struct RICserviceUpdate_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICserviceUpdate_IEs__value {
		RICserviceUpdate_IEs__value_PR present;
		union RICserviceUpdate_IEs__value_u {
			RANfunctions_List_t	 RANfunctions_List;
			RANfunctionsID_List_t	 RANfunctionsID_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICserviceUpdate_IEs_t;
typedef struct RICserviceUpdateAcknowledge_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICserviceUpdateAcknowledge_IEs__value {
		RICserviceUpdateAcknowledge_IEs__value_PR present;
		union RICserviceUpdateAcknowledge_IEs__value_u {
			RANfunctionsID_List_t	 RANfunctionsID_List;
			RANfunctionsIDcause_List_t	 RANfunctionsIDcause_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICserviceUpdateAcknowledge_IEs_t;
typedef struct RICserviceUpdateFailure_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICserviceUpdateFailure_IEs__value {
		RICserviceUpdateFailure_IEs__value_PR present;
		union RICserviceUpdateFailure_IEs__value_u {
			RANfunctionsIDcause_List_t	 RANfunctionsIDcause_List;
			TimeToWaitE2_t	 TimeToWaitE2;
			CriticalityDiagnosticsE2_t	 CriticalityDiagnosticsE2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICserviceUpdateFailure_IEs_t;
typedef struct RICserviceQuery_IEs {
	ProtocolIE_IDE2_t	 id;
	CriticalityE2_t	 criticality;
	struct RICserviceQuery_IEs__value {
		RICserviceQuery_IEs__value_PR present;
		union RICserviceQuery_IEs__value_u {
			RANfunctionsID_List_t	 RANfunctionsID_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICserviceQuery_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICaction_ToBeSetup_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICaction_ToBeSetup_ItemIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RICaction_ToBeSetup_ItemIEs_1[3];
extern asn_TYPE_descriptor_t asn_DEF_RICaction_Admitted_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICaction_Admitted_ItemIEs_specs_5;
extern asn_TYPE_member_t asn_MBR_RICaction_Admitted_ItemIEs_5[3];
extern asn_TYPE_descriptor_t asn_DEF_RICaction_NotAdmitted_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICaction_NotAdmitted_ItemIEs_specs_9;
extern asn_TYPE_member_t asn_MBR_RICaction_NotAdmitted_ItemIEs_9[3];
extern asn_TYPE_descriptor_t asn_DEF_RANfunction_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RANfunction_ItemIEs_specs_13;
extern asn_TYPE_member_t asn_MBR_RANfunction_ItemIEs_13[3];
extern asn_TYPE_descriptor_t asn_DEF_RANfunctionID_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RANfunctionID_ItemIEs_specs_17;
extern asn_TYPE_member_t asn_MBR_RANfunctionID_ItemIEs_17[3];
extern asn_TYPE_descriptor_t asn_DEF_RANfunctionIDcause_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RANfunctionIDcause_ItemIEs_specs_21;
extern asn_TYPE_member_t asn_MBR_RANfunctionIDcause_ItemIEs_21[3];
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionRequest_IEs_specs_25;
extern asn_TYPE_member_t asn_MBR_RICsubscriptionRequest_IEs_25[3];
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionResponse_IEs_specs_29;
extern asn_TYPE_member_t asn_MBR_RICsubscriptionResponse_IEs_29[3];
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionFailure_IEs_specs_33;
extern asn_TYPE_member_t asn_MBR_RICsubscriptionFailure_IEs_33[3];
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionDeleteRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionDeleteRequest_IEs_specs_37;
extern asn_TYPE_member_t asn_MBR_RICsubscriptionDeleteRequest_IEs_37[3];
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionDeleteResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionDeleteResponse_IEs_specs_41;
extern asn_TYPE_member_t asn_MBR_RICsubscriptionDeleteResponse_IEs_41[3];
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionDeleteFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionDeleteFailure_IEs_specs_45;
extern asn_TYPE_member_t asn_MBR_RICsubscriptionDeleteFailure_IEs_45[3];
extern asn_TYPE_descriptor_t asn_DEF_RICindication_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICindication_IEs_specs_49;
extern asn_TYPE_member_t asn_MBR_RICindication_IEs_49[3];
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICcontrolRequest_IEs_specs_53;
extern asn_TYPE_member_t asn_MBR_RICcontrolRequest_IEs_53[3];
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolAcknowledge_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICcontrolAcknowledge_IEs_specs_57;
extern asn_TYPE_member_t asn_MBR_RICcontrolAcknowledge_IEs_57[3];
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICcontrolFailure_IEs_specs_61;
extern asn_TYPE_member_t asn_MBR_RICcontrolFailure_IEs_61[3];
extern asn_TYPE_descriptor_t asn_DEF_ErrorIndicationE2_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ErrorIndicationE2_IEs_specs_65;
extern asn_TYPE_member_t asn_MBR_ErrorIndicationE2_IEs_65[3];
extern asn_TYPE_descriptor_t asn_DEF_E2setupRequestIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2setupRequestIEs_specs_69;
extern asn_TYPE_member_t asn_MBR_E2setupRequestIEs_69[3];
extern asn_TYPE_descriptor_t asn_DEF_E2setupResponseIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2setupResponseIEs_specs_73;
extern asn_TYPE_member_t asn_MBR_E2setupResponseIEs_73[3];
extern asn_TYPE_descriptor_t asn_DEF_E2setupFailureIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2setupFailureIEs_specs_77;
extern asn_TYPE_member_t asn_MBR_E2setupFailureIEs_77[3];
extern asn_TYPE_descriptor_t asn_DEF_ResetRequestIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ResetRequestIEs_specs_81;
extern asn_TYPE_member_t asn_MBR_ResetRequestIEs_81[3];
extern asn_TYPE_descriptor_t asn_DEF_ResetResponseIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ResetResponseIEs_specs_85;
extern asn_TYPE_member_t asn_MBR_ResetResponseIEs_85[3];
extern asn_TYPE_descriptor_t asn_DEF_RICserviceUpdate_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICserviceUpdate_IEs_specs_89;
extern asn_TYPE_member_t asn_MBR_RICserviceUpdate_IEs_89[3];
extern asn_TYPE_descriptor_t asn_DEF_RICserviceUpdateAcknowledge_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICserviceUpdateAcknowledge_IEs_specs_93;
extern asn_TYPE_member_t asn_MBR_RICserviceUpdateAcknowledge_IEs_93[3];
extern asn_TYPE_descriptor_t asn_DEF_RICserviceUpdateFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICserviceUpdateFailure_IEs_specs_97;
extern asn_TYPE_member_t asn_MBR_RICserviceUpdateFailure_IEs_97[3];
extern asn_TYPE_descriptor_t asn_DEF_RICserviceQuery_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RICserviceQuery_IEs_specs_101;
extern asn_TYPE_member_t asn_MBR_RICserviceQuery_IEs_101[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_FieldE2_H_ */
#include <asn_internal.h>
