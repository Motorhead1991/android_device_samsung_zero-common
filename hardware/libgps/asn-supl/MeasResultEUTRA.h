/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_MeasResultEUTRA_H_
#define	_MeasResultEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "CellGlobalIdEUTRA.h"
#include "TrackingAreaCode.h"
#include <constr_SEQUENCE.h>
#include "RSRP-Range.h"
#include "RSRQ-Range.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultEUTRA */
typedef struct MeasResultEUTRA {
	PhysCellId_t	 physCellId;
	struct MeasResultEUTRA__cgi_Info {
		CellGlobalIdEUTRA_t	 cellGlobalId;
		TrackingAreaCode_t	 trackingAreaCode;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_Info;
	struct MeasResultEUTRA__measResult {
		RSRP_Range_t	*rsrpResult	/* OPTIONAL */;
		RSRQ_Range_t	*rsrqResult	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultEUTRA_H_ */
#include <asn_internal.h>