/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _SystemInfoAssistBTS_R98_ExpOTD_H_
#define _SystemInfoAssistBTS_R98_ExpOTD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "AssistBTSData-R98-ExpOTD.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum SystemInfoAssistBTS_R98_ExpOTD_PR
    {
        SystemInfoAssistBTS_R98_ExpOTD_PR_NOTHING, /* No components present */
        SystemInfoAssistBTS_R98_ExpOTD_PR_notPresent,
        SystemInfoAssistBTS_R98_ExpOTD_PR_present
    } SystemInfoAssistBTS_R98_ExpOTD_PR;

    /* SystemInfoAssistBTS-R98-ExpOTD */
    typedef struct SystemInfoAssistBTS_R98_ExpOTD
    {
        SystemInfoAssistBTS_R98_ExpOTD_PR present;
        union SystemInfoAssistBTS_R98_ExpOTD_u
        {
            NULL_t notPresent;
            AssistBTSData_R98_ExpOTD_t present;
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } SystemInfoAssistBTS_R98_ExpOTD_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_SystemInfoAssistBTS_R98_ExpOTD;
    extern asn_CHOICE_specifics_t asn_SPC_SystemInfoAssistBTS_R98_ExpOTD_specs_1;
    extern asn_TYPE_member_t asn_MBR_SystemInfoAssistBTS_R98_ExpOTD_1[2];
    extern asn_per_constraints_t asn_PER_type_SystemInfoAssistBTS_R98_ExpOTD_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _SystemInfoAssistBTS_R98_ExpOTD_H_ */
#include <asn_internal.h>