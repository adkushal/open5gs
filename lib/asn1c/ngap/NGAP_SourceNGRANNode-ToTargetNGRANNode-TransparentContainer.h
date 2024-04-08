/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_H_
#define	_NGAP_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_RRCContainer.h"
#include "NGAP_NGRAN-CGI.h"
#include "NGAP_IndexToRFSP.h"
#include "NGAP_UEHistoryInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_PDUSessionResourceInformationList;
struct NGAP_E_RABInformationList;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_SourceNGRANNode-ToTargetNGRANNode-TransparentContainer */
typedef struct NGAP_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer {
	NGAP_RRCContainer_t	 rRCContainer;
	struct NGAP_PDUSessionResourceInformationList	*pDUSessionResourceInformationList;	/* OPTIONAL */
	struct NGAP_E_RABInformationList	*e_RABInformationList;	/* OPTIONAL */
	NGAP_NGRAN_CGI_t	 targetCell_ID;
	NGAP_IndexToRFSP_t	*indexToRFSP;	/* OPTIONAL */
	NGAP_UEHistoryInformation_t	 uEHistoryInformation;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_H_ */
#include <asn_internal.h>
