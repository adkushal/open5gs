/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_AMFConfigurationUpdate_H_
#define	_NGAP_AMFConfigurationUpdate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_AMFConfigurationUpdate */
typedef struct NGAP_AMFConfigurationUpdate {
	NGAP_ProtocolIE_Container_11854P57_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_AMFConfigurationUpdate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_AMFConfigurationUpdate;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_AMFConfigurationUpdate_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_AMFConfigurationUpdate_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_AMFConfigurationUpdate_H_ */
#include <asn_internal.h>
