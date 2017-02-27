#ifndef __S6A_APP_H__
#define __S6A_APP_H__

#include "core_errno.h"

#include "freeDiameter/freeDiameter-host.h"
#include "freeDiameter/libfdcore.h"
#include "freeDiameter/extension.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Mode for the extension */
#define MODE_SERV	0x1
#define	MODE_CLI	0x2

/* The module configuration */
struct s6a_conf {
    c_uint32_t vendor_id;    /* default 999999 */
    c_uint32_t appli_id;    /* default 123456 */
    int mode;        /* default MODE_SERV | MODE_CLI */
    char *dest_realm;    /* default local realm */
    char *dest_host;    /* default NULL */
    char *user_name;    /* default NULL */
    struct ta_stats {
        c_uint64_t nb_echoed; /* server */
        c_uint64_t nb_sent;   /* client */
        c_uint64_t nb_recv;   /* client */
        c_uint64_t nb_errs;   /* client */
    } stats;
    pthread_mutex_t        stats_lock;
};
extern struct s6a_conf *s6a_conf;

/* Some global variables for dictionary */
extern struct dict_object *s6a_vendor;
extern struct dict_object *s6a_appli;

extern struct dict_object *s6a_cmd_air;
extern struct dict_object *s6a_cmd_aia;
extern struct dict_object *s6a_cmd_ulr;
extern struct dict_object *s6a_cmd_ula;
extern struct dict_object *s6a_cmd_pur;
extern struct dict_object *s6a_cmd_pua;
extern struct dict_object *s6a_cmd_clr;
extern struct dict_object *s6a_cmd_cla;

extern struct dict_object *s6a_origin_host;
extern struct dict_object *s6a_origin_realm;
extern struct dict_object *s6a_destination_host;
extern struct dict_object *s6a_destination_realm;
extern struct dict_object *s6a_user_name;
extern struct dict_object *s6a_session_id;
extern struct dict_object *s6a_auth_session_state;
extern struct dict_object *s6a_result_code;
extern struct dict_object *s6a_experimental_result;
extern struct dict_object *s6a_vendor_id;
extern struct dict_object *s6a_experimental_result_code;

extern struct dict_object *s6a_visited_plmn_id;
extern struct dict_object *s6a_rat_type;
extern struct dict_object *s6a_ulr_flags;
extern struct dict_object *s6a_ula_flags;
extern struct dict_object *s6a_subscription_data;
extern struct dict_object *s6a_req_eutran_auth_info;
extern struct dict_object *s6a_number_of_requested_vectors;
extern struct dict_object *s6a_immediate_response_pref;
extern struct dict_object *s6a_authentication_info;
extern struct dict_object *s6a_re_synchronization_info;
extern struct dict_object *s6a_service_selection;
extern struct dict_object *s6a_ue_srvcc_cap;
extern struct dict_object *s6a_imsi;
extern struct dict_object *s6a_imei;
extern struct dict_object *s6a_software_version;
extern struct dict_object *s6a_supported_features;
extern struct dict_object *s6a_req_e_utran_auth_info;
extern struct dict_object *s6a_req_resync_info;
extern struct dict_object *s6a_req_nb_of_req_vectors;
extern struct dict_object *s6a_req_geran_auth_info;
extern struct dict_object *s6a_immediate_response_pref;
extern struct dict_object *s6a_e_utran_vector;
extern struct dict_object *s6a_rand;
extern struct dict_object *s6a_xres;
extern struct dict_object *s6a_autn;
extern struct dict_object *s6a_kasme;
extern struct dict_object *s6a_pur_flags;
extern struct dict_object *s6a_pua_flags;
extern struct dict_object *s6a_terminal_info;
extern struct dict_object *s6a_gmlc_addr;
extern struct dict_object *s6a_subscriber_status;
extern struct dict_object *s6a_msisdn;
extern struct dict_object *s6a_ambr;
extern struct dict_object *s6a_network_access_mode;
extern struct dict_object *s6a_access_restriction_data;
extern struct dict_object *s6a_apn_configuration_profile;
extern struct dict_object *s6a_subscribed_rau_tau_timer;
extern struct dict_object *s6a_context_identifier;
extern struct dict_object *s6a_all_apn_conf_inc_ind;
extern struct dict_object *s6a_apn_configuration;
extern struct dict_object *s6a_max_bandwidth_ul;
extern struct dict_object *s6a_max_bandwidth_dl;
extern struct dict_object *s6a_pdn_type;
extern struct dict_object *s6a_eps_subscribed_qos_profile;
extern struct dict_object *s6a_qos_class_identifier;
extern struct dict_object *s6a_allocation_retention_priority;
extern struct dict_object *s6a_priority_level;
extern struct dict_object *s6a_pre_emption_capability;
extern struct dict_object *s6a_pre_emption_vulnerability;
extern struct dict_object *s6a_served_party_ip_addr;

CORE_DECLARE(int) s6a_app_init(void);
CORE_DECLARE(void) s6a_app_final(void);

/* Initialize dictionary definitions */
CORE_DECLARE(int) s6a_dict_init(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* ! __S6A_APP_H__ */

#if 0
/* Handle incoming messages (server) */
int ta_serv_init(void);
void ta_serv_fini(void);

/* Create outgoing message (client) */
int ta_cli_init(void);
void ta_cli_fini(void);

#endif
