#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 821
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 362
#define ALIAS_COUNT 3
#define TOKEN_COUNT 178
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 73

enum {
  aux_sym_host_declaration_token1 = 1,
  anon_sym_BANG = 2,
  aux_sym_match_declaration_token1 = 3,
  aux_sym__all_token1 = 4,
  aux_sym__match_canonical_token1 = 5,
  aux_sym__match_final_token1 = 6,
  aux_sym__match_exec_token1 = 7,
  aux_sym__match_exec_token2 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__match_exec_token3 = 10,
  aux_sym__match_localnetwork_token1 = 11,
  aux_sym__match_localnetwork_token2 = 12,
  anon_sym_COMMA = 13,
  aux_sym__match_localnetwork_token3 = 14,
  aux_sym__match_originalhost_token1 = 15,
  aux_sym__match_tagged_token1 = 16,
  aux_sym__match_user_token1 = 17,
  aux_sym__match_localuser_token1 = 18,
  anon_sym_STAR = 19,
  anon_sym_QMARK = 20,
  aux_sym__add_keys_to_agent_token1 = 21,
  anon_sym_ask = 22,
  anon_sym_confirm = 23,
  aux_sym__address_family_token1 = 24,
  anon_sym_any = 25,
  anon_sym_inet = 26,
  anon_sym_inet6 = 27,
  aux_sym__batch_mode_token1 = 28,
  aux_sym__bind_address_token1 = 29,
  aux_sym__bind_interface_token1 = 30,
  aux_sym__canonical_domains_token1 = 31,
  aux_sym__canonicalize_fallback_local_token1 = 32,
  aux_sym__canonicalize_hostname_token1 = 33,
  aux_sym__canonicalize_max_dots_token1 = 34,
  aux_sym__canonicalize_permitted_cnames_token1 = 35,
  anon_sym_none = 36,
  anon_sym_COLON = 37,
  aux_sym__ca_signature_algorithms_token1 = 38,
  anon_sym_PLUS = 39,
  anon_sym_DASH = 40,
  aux_sym__certificate_file_token1 = 41,
  aux_sym__check_host_ip_token1 = 42,
  aux_sym__ciphers_token1 = 43,
  anon_sym_CARET = 44,
  aux_sym__clear_all_forwardings_token1 = 45,
  aux_sym__compression_token1 = 46,
  aux_sym__connection_attempts_token1 = 47,
  aux_sym__connect_timeout_token1 = 48,
  aux_sym__control_master_token1 = 49,
  anon_sym_auto = 50,
  anon_sym_autoask = 51,
  aux_sym__control_persist_token1 = 52,
  aux_sym__control_path_token1 = 53,
  aux_sym__dynamic_forward_token1 = 54,
  aux_sym__enable_escape_command_line_token1 = 55,
  aux_sym__enable_ssh_keysign_token1 = 56,
  aux_sym__escape_char_token1 = 57,
  aux_sym__escape_char_token2 = 58,
  aux_sym__exit_on_forward_failure_token1 = 59,
  aux_sym__fingerprint_hash_token1 = 60,
  anon_sym_md5 = 61,
  anon_sym_sha256 = 62,
  aux_sym__fork_after_authentication_token1 = 63,
  aux_sym__forward_agent_token1 = 64,
  aux_sym__forward_x11_token1 = 65,
  aux_sym__forward_x11_timeout_token1 = 66,
  aux_sym__forward_x11_trusted_token1 = 67,
  aux_sym__global_known_hosts_file_token1 = 68,
  aux_sym__gssapi_authentication_token1 = 69,
  aux_sym__gssapi_delegate_credentials_token1 = 70,
  aux_sym__hostbased_accepted_algorithms_token1 = 71,
  aux_sym__hostbased_accepted_algorithms_token2 = 72,
  aux_sym__hostbased_authentication_token1 = 73,
  aux_sym__host_key_algorithms_token1 = 74,
  aux_sym__host_key_alias_token1 = 75,
  aux_sym__hostname_token1 = 76,
  aux_sym__identities_only_token1 = 77,
  aux_sym__identity_agent_token1 = 78,
  anon_sym_SSH_AUTH_SOCK = 79,
  aux_sym__identity_file_token1 = 80,
  aux_sym__ignore_unknown_token1 = 81,
  aux_sym__ipqos_token1 = 82,
  aux_sym__kbd_interactive_authentication_token1 = 83,
  aux_sym__kbd_interactive_authentication_token2 = 84,
  aux_sym__kex_algorithms_token1 = 85,
  aux_sym__known_hosts_command_token1 = 86,
  aux_sym__local_command_token1 = 87,
  aux_sym__local_forward_token1 = 88,
  aux_sym__log_level_token1 = 89,
  aux_sym__log_verbose_token1 = 90,
  aux_sym__log_verbose_value_token1 = 91,
  aux_sym__macs_token1 = 92,
  aux_sym__no_host_authentication_for_localhost_token1 = 93,
  aux_sym__number_of_password_prompts_token1 = 94,
  aux_sym__password_authentication_token1 = 95,
  aux_sym__permit_local_command_token1 = 96,
  aux_sym__permit_remote_open_token1 = 97,
  aux_sym__pkcs11_provider_token1 = 98,
  aux_sym__port_token1 = 99,
  aux_sym__preferred_authentications_token1 = 100,
  aux_sym__proxy_command_token1 = 101,
  aux_sym__proxy_jump_token1 = 102,
  anon_sym_AT = 103,
  aux_sym__proxy_jump_arg_token1 = 104,
  aux_sym__proxy_jump_arg_token2 = 105,
  aux_sym__proxy_use_fdpass_token1 = 106,
  aux_sym__pubkey_accepted_algorithms_token1 = 107,
  aux_sym__pubkey_authentication_token1 = 108,
  anon_sym_unbound = 109,
  anon_sym_host_DASHbound = 110,
  aux_sym__rekey_limit_token1 = 111,
  aux_sym__remote_command_token1 = 112,
  aux_sym__remote_command_token2 = 113,
  aux_sym__remote_forward_token1 = 114,
  aux_sym__request_tty_token1 = 115,
  anon_sym_force = 116,
  aux_sym__required_rsa_size_token1 = 117,
  aux_sym__revoked_host_keys_token1 = 118,
  aux_sym__security_key_provider_token1 = 119,
  aux_sym__send_env_token1 = 120,
  aux_sym__send_env_value_token1 = 121,
  aux_sym__server_alive_count_max_token1 = 122,
  aux_sym__server_alive_interval_token1 = 123,
  aux_sym__session_type_token1 = 124,
  anon_sym_subsystem = 125,
  anon_sym_default = 126,
  anon_sym_EQ = 127,
  aux_sym__stdin_null_token1 = 128,
  aux_sym__stream_local_bind_mask_token1 = 129,
  aux_sym__stream_local_bind_mask_token2 = 130,
  aux_sym__stream_local_bind_unlink_token1 = 131,
  aux_sym__strict_host_key_checking_token1 = 132,
  anon_sym_accept_DASHnew = 133,
  anon_sym_off = 134,
  aux_sym__syslog_facility_token1 = 135,
  aux_sym__tcp_keep_alive_token1 = 136,
  aux_sym__tag_token1 = 137,
  aux_sym__tunnel_token1 = 138,
  anon_sym_point_DASHto_DASHpoint = 139,
  anon_sym_ethernet = 140,
  aux_sym__tunnel_device_token1 = 141,
  aux_sym__update_host_keys_token1 = 142,
  aux_sym__user_known_hosts_file_token1 = 143,
  aux_sym__verify_host_key_dns_token1 = 144,
  aux_sym__visual_host_key_token1 = 145,
  aux_sym__xauth_location_token1 = 146,
  sym_ipqos = 147,
  sym_verbosity = 148,
  sym_facility = 149,
  sym_authentication = 150,
  sym_cipher = 151,
  sym_kex = 152,
  sym_key_sig = 153,
  sym_mac = 154,
  sym_sig = 155,
  aux_sym__file_token_token1 = 156,
  aux_sym__hosts_token_token1 = 157,
  aux_sym__hostname_token_token1 = 158,
  aux_sym__proxy_token_token1 = 159,
  sym_token = 160,
  anon_sym_DOLLAR = 161,
  sym__var_name = 162,
  anon_sym_DOLLAR_LBRACE = 163,
  anon_sym_RBRACE = 164,
  anon_sym_yes = 165,
  anon_sym_no = 166,
  sym__number = 167,
  aux_sym_bytes_token1 = 168,
  aux_sym_time_token1 = 169,
  aux_sym_time_token2 = 170,
  aux_sym_time_token3 = 171,
  aux_sym_time_token4 = 172,
  aux_sym_time_token5 = 173,
  sym_comment = 174,
  aux_sym__sep_token1 = 175,
  sym__space = 176,
  sym__eol = 177,
  sym_config = 178,
  sym_host_declaration = 179,
  sym_match_declaration = 180,
  sym_condition = 181,
  sym__all = 182,
  sym__match_canonical = 183,
  sym__match_final = 184,
  sym__match_exec = 185,
  sym__match_localnetwork = 186,
  sym__match_host = 187,
  sym__match_originalhost = 188,
  sym__match_tagged = 189,
  sym__match_user = 190,
  sym__match_localuser = 191,
  sym__match_value = 192,
  sym__declarations = 193,
  sym_parameter = 194,
  sym__add_keys_to_agent = 195,
  sym__address_family = 196,
  sym__batch_mode = 197,
  sym__bind_address = 198,
  sym__bind_interface = 199,
  sym__canonical_domains = 200,
  sym__canonicalize_fallback_local = 201,
  sym__canonicalize_hostname = 202,
  sym__canonicalize_max_dots = 203,
  sym__canonicalize_permitted_cnames = 204,
  sym__cnames_map = 205,
  sym__ca_signature_algorithms = 206,
  sym__certificate_file = 207,
  sym__check_host_ip = 208,
  sym__ciphers = 209,
  sym__clear_all_forwardings = 210,
  sym__compression = 211,
  sym__connection_attempts = 212,
  sym__connect_timeout = 213,
  sym__control_master = 214,
  sym__control_persist = 215,
  sym__control_path = 216,
  sym__dynamic_forward = 217,
  sym__forward_value_inner = 218,
  sym__dynamic_forward_value = 219,
  sym__enable_escape_command_line = 220,
  sym__enable_ssh_keysign = 221,
  sym__escape_char = 222,
  sym__exit_on_forward_failure = 223,
  sym__fingerprint_hash = 224,
  sym__fork_after_authentication = 225,
  sym__forward_agent = 226,
  sym__forward_x11 = 227,
  sym__forward_x11_timeout = 228,
  sym__forward_x11_trusted = 229,
  sym__global_known_hosts_file = 230,
  sym__gssapi_authentication = 231,
  sym__gssapi_delegate_credentials = 232,
  sym__hostbased_accepted_algorithms = 233,
  sym__hostbased_authentication = 234,
  sym__host_key_algorithms = 235,
  sym__host_key_alias = 236,
  sym__hostname = 237,
  sym__identities_only = 238,
  sym__identity_agent = 239,
  sym__identity_file = 240,
  sym__ignore_unknown = 241,
  sym__ipqos = 242,
  sym__kbd_interactive_authentication = 243,
  sym__kex_algorithms = 244,
  sym__known_hosts_command = 245,
  sym__local_command = 246,
  sym__local_forward = 247,
  sym__forward_value1 = 248,
  sym__forward_value2 = 249,
  sym__log_level = 250,
  sym__log_verbose = 251,
  sym__log_verbose_value = 252,
  sym__log_verbose_quoted = 253,
  sym__macs = 254,
  sym__no_host_authentication_for_localhost = 255,
  sym__number_of_password_prompts = 256,
  sym__password_authentication = 257,
  sym__permit_local_command = 258,
  sym__permit_remote_open = 259,
  sym__permit_remote_open_value = 260,
  sym__pkcs11_provider = 261,
  sym__port = 262,
  sym__preferred_authentications = 263,
  sym__proxy_command = 264,
  sym__proxy_jump = 265,
  sym__proxy_use_fdpass = 266,
  sym__pubkey_accepted_algorithms = 267,
  sym__pubkey_authentication = 268,
  sym__pubkey_authentication_arg = 269,
  sym__rekey_limit = 270,
  sym__remote_command = 271,
  sym__remote_forward = 272,
  sym__request_tty = 273,
  sym__required_rsa_size = 274,
  sym__revoked_host_keys = 275,
  sym__security_key_provider = 276,
  sym__send_env = 277,
  sym__send_env_value = 278,
  sym__server_alive_count_max = 279,
  sym__server_alive_interval = 280,
  sym__session_type = 281,
  sym__set_env = 282,
  sym__set_env_value = 283,
  sym__stdin_null = 284,
  sym__stream_local_bind_mask = 285,
  sym__stream_local_bind_unlink = 286,
  sym__strict_host_key_checking = 287,
  sym__syslog_facility = 288,
  sym__tcp_keep_alive = 289,
  sym__tag = 290,
  sym__tunnel = 291,
  sym__tunnel_device = 292,
  sym__update_host_keys = 293,
  sym__user = 294,
  sym__user_known_hosts_file = 295,
  sym__verify_host_key_dns = 296,
  sym__visual_host_key = 297,
  sym__xauth_location = 298,
  sym__file_token = 299,
  sym__hosts_token = 300,
  sym__hostname_token = 301,
  sym__proxy_token = 302,
  sym__var_value = 303,
  sym_variable = 304,
  sym__file_string = 305,
  sym__hosts_string = 306,
  sym__hostname_string = 307,
  sym__proxy_string = 308,
  sym__token_string = 309,
  sym__string = 310,
  sym__file_pattern_vars = 311,
  sym__pattern = 312,
  sym__boolean = 313,
  sym_number = 314,
  sym_bytes = 315,
  sym_time = 316,
  sym__sep = 317,
  aux_sym_config_repeat1 = 318,
  aux_sym_host_declaration_repeat1 = 319,
  aux_sym_match_declaration_repeat1 = 320,
  aux_sym__match_exec_repeat1 = 321,
  aux_sym__match_exec_repeat2 = 322,
  aux_sym__match_localnetwork_repeat1 = 323,
  aux_sym__match_localnetwork_repeat2 = 324,
  aux_sym__match_value_repeat1 = 325,
  aux_sym__match_value_repeat2 = 326,
  aux_sym__match_value_repeat3 = 327,
  aux_sym__match_value_repeat4 = 328,
  aux_sym__declarations_repeat1 = 329,
  aux_sym__canonical_domains_repeat1 = 330,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 331,
  aux_sym__cnames_map_repeat1 = 332,
  aux_sym__ca_signature_algorithms_repeat1 = 333,
  aux_sym__ciphers_repeat1 = 334,
  aux_sym__dynamic_forward_repeat1 = 335,
  aux_sym__global_known_hosts_file_repeat1 = 336,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 337,
  aux_sym__ignore_unknown_repeat1 = 338,
  aux_sym__kex_algorithms_repeat1 = 339,
  aux_sym__log_verbose_repeat1 = 340,
  aux_sym__log_verbose_repeat2 = 341,
  aux_sym__log_verbose_value_repeat1 = 342,
  aux_sym__macs_repeat1 = 343,
  aux_sym__permit_remote_open_repeat1 = 344,
  aux_sym__preferred_authentications_repeat1 = 345,
  aux_sym__remote_command_repeat1 = 346,
  aux_sym__send_env_repeat1 = 347,
  aux_sym__send_env_value_repeat1 = 348,
  aux_sym__set_env_repeat1 = 349,
  aux_sym__user_known_hosts_file_repeat1 = 350,
  aux_sym__file_string_repeat1 = 351,
  aux_sym__file_string_repeat2 = 352,
  aux_sym__hosts_string_repeat1 = 353,
  aux_sym__hostname_string_repeat1 = 354,
  aux_sym__hostname_string_repeat2 = 355,
  aux_sym__proxy_string_repeat1 = 356,
  aux_sym__token_string_repeat1 = 357,
  aux_sym__string_repeat1 = 358,
  aux_sym__string_repeat2 = 359,
  aux_sym__file_pattern_vars_repeat1 = 360,
  aux_sym__file_pattern_vars_repeat2 = 361,
  anon_alias_sym_User = 362,
  anon_alias_sym_host = 363,
  alias_sym_pattern = 364,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_host_declaration_token1] = "Host",
  [anon_sym_BANG] = "!",
  [aux_sym_match_declaration_token1] = "Match",
  [aux_sym__all_token1] = "all",
  [aux_sym__match_canonical_token1] = "canonical",
  [aux_sym__match_final_token1] = "final",
  [aux_sym__match_exec_token1] = "exec",
  [aux_sym__match_exec_token2] = "_match_exec_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__match_exec_token3] = "_match_exec_token3",
  [aux_sym__match_localnetwork_token1] = "localnetwork",
  [aux_sym__match_localnetwork_token2] = "string",
  [anon_sym_COMMA] = ",",
  [aux_sym__match_localnetwork_token3] = "string",
  [aux_sym__match_originalhost_token1] = "originalhost",
  [aux_sym__match_tagged_token1] = "tagged",
  [aux_sym__match_user_token1] = "user",
  [aux_sym__match_localuser_token1] = "localuser",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [aux_sym__add_keys_to_agent_token1] = "AddKeysToAgent",
  [anon_sym_ask] = "ask",
  [anon_sym_confirm] = "confirm",
  [aux_sym__address_family_token1] = "AddressFamily",
  [anon_sym_any] = "any",
  [anon_sym_inet] = "inet",
  [anon_sym_inet6] = "inet6",
  [aux_sym__batch_mode_token1] = "BatchMode",
  [aux_sym__bind_address_token1] = "BindAddress",
  [aux_sym__bind_interface_token1] = "BindInterface",
  [aux_sym__canonical_domains_token1] = "CanonicalDomains",
  [aux_sym__canonicalize_fallback_local_token1] = "CanonicalizeFallbackLocal",
  [aux_sym__canonicalize_hostname_token1] = "CanonicalizeHostname",
  [aux_sym__canonicalize_max_dots_token1] = "CanonicalizeMaxDots",
  [aux_sym__canonicalize_permitted_cnames_token1] = "CanonicalizePermittedCNAMEs",
  [anon_sym_none] = "none",
  [anon_sym_COLON] = ":",
  [aux_sym__ca_signature_algorithms_token1] = "CASignatureAlgorithms",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym__certificate_file_token1] = "CertificateFile",
  [aux_sym__check_host_ip_token1] = "CheckHostIP",
  [aux_sym__ciphers_token1] = "Ciphers",
  [anon_sym_CARET] = "^",
  [aux_sym__clear_all_forwardings_token1] = "ClearAllForwardings",
  [aux_sym__compression_token1] = "Compression",
  [aux_sym__connection_attempts_token1] = "ConnectionAttempts",
  [aux_sym__connect_timeout_token1] = "ConnectTimeout",
  [aux_sym__control_master_token1] = "ControlMaster",
  [anon_sym_auto] = "auto",
  [anon_sym_autoask] = "autoask",
  [aux_sym__control_persist_token1] = "ControlPersist",
  [aux_sym__control_path_token1] = "ControlPath",
  [aux_sym__dynamic_forward_token1] = "DynamicForward",
  [aux_sym__enable_escape_command_line_token1] = "EnableEscapeCommandline",
  [aux_sym__enable_ssh_keysign_token1] = "EnableSSHKeysign",
  [aux_sym__escape_char_token1] = "EscapeChar",
  [aux_sym__escape_char_token2] = "_escape_char_token2",
  [aux_sym__exit_on_forward_failure_token1] = "ExitOnForwardFailure",
  [aux_sym__fingerprint_hash_token1] = "FingerprintHash",
  [anon_sym_md5] = "md5",
  [anon_sym_sha256] = "sha256",
  [aux_sym__fork_after_authentication_token1] = "ForkAfterAuthentication",
  [aux_sym__forward_agent_token1] = "ForwardAgent",
  [aux_sym__forward_x11_token1] = "ForwardX11",
  [aux_sym__forward_x11_timeout_token1] = "ForwardX11Timeout",
  [aux_sym__forward_x11_trusted_token1] = "ForwardX11Trusted",
  [aux_sym__global_known_hosts_file_token1] = "GlobalKnownHostsFile",
  [aux_sym__gssapi_authentication_token1] = "GSSAPIAuthentication",
  [aux_sym__gssapi_delegate_credentials_token1] = "GSSAPIDelegateCredentials",
  [aux_sym__hostbased_accepted_algorithms_token1] = "HostbasedAcceptedAlgorithms",
  [aux_sym__hostbased_accepted_algorithms_token2] = "HostbasedKeyTypes",
  [aux_sym__hostbased_authentication_token1] = "HostbasedAuthentication",
  [aux_sym__host_key_algorithms_token1] = "HostKeyAlgorithms",
  [aux_sym__host_key_alias_token1] = "HostKeyAlias",
  [aux_sym__hostname_token1] = "Hostname",
  [aux_sym__identities_only_token1] = "IdentitiesOnly",
  [aux_sym__identity_agent_token1] = "IdentityAgent",
  [anon_sym_SSH_AUTH_SOCK] = "SSH_AUTH_SOCK",
  [aux_sym__identity_file_token1] = "IdentityFile",
  [aux_sym__ignore_unknown_token1] = "IgnoreUnknown",
  [aux_sym__ipqos_token1] = "IPQoS",
  [aux_sym__kbd_interactive_authentication_token1] = "KbdInteractiveAuthentication",
  [aux_sym__kbd_interactive_authentication_token2] = "ChallengeResponseAuthentication",
  [aux_sym__kex_algorithms_token1] = "KexAlgorithms",
  [aux_sym__known_hosts_command_token1] = "KnownHostsCommand",
  [aux_sym__local_command_token1] = "LocalCommand",
  [aux_sym__local_forward_token1] = "LocalForward",
  [aux_sym__log_level_token1] = "LogLevel",
  [aux_sym__log_verbose_token1] = "LogVerbose",
  [aux_sym__log_verbose_value_token1] = "_log_verbose_value_token1",
  [aux_sym__macs_token1] = "MACs",
  [aux_sym__no_host_authentication_for_localhost_token1] = "NoHostAuthenticationForLocalhost",
  [aux_sym__number_of_password_prompts_token1] = "NumberOfPasswordPrompts",
  [aux_sym__password_authentication_token1] = "PasswordAuthentication",
  [aux_sym__permit_local_command_token1] = "PermitLocalCommand",
  [aux_sym__permit_remote_open_token1] = "PermitRemoteOpen",
  [aux_sym__pkcs11_provider_token1] = "PKCS11Provider",
  [aux_sym__port_token1] = "Port",
  [aux_sym__preferred_authentications_token1] = "PreferredAuthentications",
  [aux_sym__proxy_command_token1] = "ProxyCommand",
  [aux_sym__proxy_jump_token1] = "ProxyJump",
  [anon_sym_AT] = "@",
  [aux_sym__proxy_jump_arg_token1] = "string",
  [aux_sym__proxy_jump_arg_token2] = "uri",
  [aux_sym__proxy_use_fdpass_token1] = "ProxyUseFdpass",
  [aux_sym__pubkey_accepted_algorithms_token1] = "PubkeyAcceptedAlgorithms",
  [aux_sym__pubkey_authentication_token1] = "PubkeyAuthentication",
  [anon_sym_unbound] = "unbound",
  [anon_sym_host_DASHbound] = "host-bound",
  [aux_sym__rekey_limit_token1] = "RekeyLimit",
  [aux_sym__remote_command_token1] = "RemoteCommand",
  [aux_sym__remote_command_token2] = "_remote_command_token2",
  [aux_sym__remote_forward_token1] = "RemoteForward",
  [aux_sym__request_tty_token1] = "RequestTTY",
  [anon_sym_force] = "force",
  [aux_sym__required_rsa_size_token1] = "RequiredRSASize",
  [aux_sym__revoked_host_keys_token1] = "RevokedHostKeys",
  [aux_sym__security_key_provider_token1] = "SecurityKeyProvider",
  [aux_sym__send_env_token1] = "SendEnv",
  [aux_sym__send_env_value_token1] = "_send_env_value_token1",
  [aux_sym__server_alive_count_max_token1] = "ServerAliveCountMax",
  [aux_sym__server_alive_interval_token1] = "ServerAliveInterval",
  [aux_sym__session_type_token1] = "SessionType",
  [anon_sym_subsystem] = "subsystem",
  [anon_sym_default] = "default",
  [anon_sym_EQ] = "=",
  [aux_sym__stdin_null_token1] = "StdinNull",
  [aux_sym__stream_local_bind_mask_token1] = "StreamLocalBindMask",
  [aux_sym__stream_local_bind_mask_token2] = "number",
  [aux_sym__stream_local_bind_unlink_token1] = "StreamLocalBindUnlink",
  [aux_sym__strict_host_key_checking_token1] = "StrictHostKeyChecking",
  [anon_sym_accept_DASHnew] = "accept-new",
  [anon_sym_off] = "off",
  [aux_sym__syslog_facility_token1] = "SyslogFacility",
  [aux_sym__tcp_keep_alive_token1] = "TCPKeepAlive",
  [aux_sym__tag_token1] = "Tag",
  [aux_sym__tunnel_token1] = "Tunnel",
  [anon_sym_point_DASHto_DASHpoint] = "point-to-point",
  [anon_sym_ethernet] = "ethernet",
  [aux_sym__tunnel_device_token1] = "TunnelDevice",
  [aux_sym__update_host_keys_token1] = "UpdateHostKeys",
  [aux_sym__user_known_hosts_file_token1] = "UserKnownHostsFile",
  [aux_sym__verify_host_key_dns_token1] = "VerifyHostKeyDNS",
  [aux_sym__visual_host_key_token1] = "VisualHostKey",
  [aux_sym__xauth_location_token1] = "XAuthLocation",
  [sym_ipqos] = "ipqos",
  [sym_verbosity] = "verbosity",
  [sym_facility] = "facility",
  [sym_authentication] = "authentication",
  [sym_cipher] = "cipher",
  [sym_kex] = "kex",
  [sym_key_sig] = "key_sig",
  [sym_mac] = "mac",
  [sym_sig] = "sig",
  [aux_sym__file_token_token1] = "token",
  [aux_sym__hosts_token_token1] = "token",
  [aux_sym__hostname_token_token1] = "token",
  [aux_sym__proxy_token_token1] = "token",
  [sym_token] = "token",
  [anon_sym_DOLLAR] = "variable",
  [sym__var_name] = "_var_name",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym__number] = "_number",
  [aux_sym_bytes_token1] = "bytes_token1",
  [aux_sym_time_token1] = "time_token1",
  [aux_sym_time_token2] = "time_token2",
  [aux_sym_time_token3] = "time_token3",
  [aux_sym_time_token4] = "time_token4",
  [aux_sym_time_token5] = "time_token5",
  [sym_comment] = "comment",
  [aux_sym__sep_token1] = "=",
  [sym__space] = "_space",
  [sym__eol] = "_eol",
  [sym_config] = "config",
  [sym_host_declaration] = "host_declaration",
  [sym_match_declaration] = "match_declaration",
  [sym_condition] = "condition",
  [sym__all] = "_all",
  [sym__match_canonical] = "_match_canonical",
  [sym__match_final] = "_match_final",
  [sym__match_exec] = "_match_exec",
  [sym__match_localnetwork] = "_match_localnetwork",
  [sym__match_host] = "_match_host",
  [sym__match_originalhost] = "_match_originalhost",
  [sym__match_tagged] = "_match_tagged",
  [sym__match_user] = "_match_user",
  [sym__match_localuser] = "_match_localuser",
  [sym__match_value] = "_match_value",
  [sym__declarations] = "_declarations",
  [sym_parameter] = "parameter",
  [sym__add_keys_to_agent] = "_add_keys_to_agent",
  [sym__address_family] = "_address_family",
  [sym__batch_mode] = "_batch_mode",
  [sym__bind_address] = "_bind_address",
  [sym__bind_interface] = "_bind_interface",
  [sym__canonical_domains] = "_canonical_domains",
  [sym__canonicalize_fallback_local] = "_canonicalize_fallback_local",
  [sym__canonicalize_hostname] = "_canonicalize_hostname",
  [sym__canonicalize_max_dots] = "_canonicalize_max_dots",
  [sym__canonicalize_permitted_cnames] = "_canonicalize_permitted_cnames",
  [sym__cnames_map] = "_cnames_map",
  [sym__ca_signature_algorithms] = "_ca_signature_algorithms",
  [sym__certificate_file] = "_certificate_file",
  [sym__check_host_ip] = "_check_host_ip",
  [sym__ciphers] = "_ciphers",
  [sym__clear_all_forwardings] = "_clear_all_forwardings",
  [sym__compression] = "_compression",
  [sym__connection_attempts] = "_connection_attempts",
  [sym__connect_timeout] = "_connect_timeout",
  [sym__control_master] = "_control_master",
  [sym__control_persist] = "_control_persist",
  [sym__control_path] = "_control_path",
  [sym__dynamic_forward] = "_dynamic_forward",
  [sym__forward_value_inner] = "_forward_value_inner",
  [sym__dynamic_forward_value] = "_dynamic_forward_value",
  [sym__enable_escape_command_line] = "_enable_escape_command_line",
  [sym__enable_ssh_keysign] = "_enable_ssh_keysign",
  [sym__escape_char] = "_escape_char",
  [sym__exit_on_forward_failure] = "_exit_on_forward_failure",
  [sym__fingerprint_hash] = "_fingerprint_hash",
  [sym__fork_after_authentication] = "_fork_after_authentication",
  [sym__forward_agent] = "_forward_agent",
  [sym__forward_x11] = "_forward_x11",
  [sym__forward_x11_timeout] = "_forward_x11_timeout",
  [sym__forward_x11_trusted] = "_forward_x11_trusted",
  [sym__global_known_hosts_file] = "_global_known_hosts_file",
  [sym__gssapi_authentication] = "_gssapi_authentication",
  [sym__gssapi_delegate_credentials] = "_gssapi_delegate_credentials",
  [sym__hostbased_accepted_algorithms] = "_hostbased_accepted_algorithms",
  [sym__hostbased_authentication] = "_hostbased_authentication",
  [sym__host_key_algorithms] = "_host_key_algorithms",
  [sym__host_key_alias] = "_host_key_alias",
  [sym__hostname] = "_hostname",
  [sym__identities_only] = "_identities_only",
  [sym__identity_agent] = "_identity_agent",
  [sym__identity_file] = "_identity_file",
  [sym__ignore_unknown] = "_ignore_unknown",
  [sym__ipqos] = "_ipqos",
  [sym__kbd_interactive_authentication] = "_kbd_interactive_authentication",
  [sym__kex_algorithms] = "_kex_algorithms",
  [sym__known_hosts_command] = "_known_hosts_command",
  [sym__local_command] = "_local_command",
  [sym__local_forward] = "_local_forward",
  [sym__forward_value1] = "_forward_value1",
  [sym__forward_value2] = "_forward_value2",
  [sym__log_level] = "_log_level",
  [sym__log_verbose] = "_log_verbose",
  [sym__log_verbose_value] = "_log_verbose_value",
  [sym__log_verbose_quoted] = "_log_verbose_quoted",
  [sym__macs] = "_macs",
  [sym__no_host_authentication_for_localhost] = "_no_host_authentication_for_localhost",
  [sym__number_of_password_prompts] = "_number_of_password_prompts",
  [sym__password_authentication] = "_password_authentication",
  [sym__permit_local_command] = "_permit_local_command",
  [sym__permit_remote_open] = "_permit_remote_open",
  [sym__permit_remote_open_value] = "_permit_remote_open_value",
  [sym__pkcs11_provider] = "_pkcs11_provider",
  [sym__port] = "_port",
  [sym__preferred_authentications] = "_preferred_authentications",
  [sym__proxy_command] = "_proxy_command",
  [sym__proxy_jump] = "_proxy_jump",
  [sym__proxy_use_fdpass] = "_proxy_use_fdpass",
  [sym__pubkey_accepted_algorithms] = "_pubkey_accepted_algorithms",
  [sym__pubkey_authentication] = "_pubkey_authentication",
  [sym__pubkey_authentication_arg] = "_pubkey_authentication_arg",
  [sym__rekey_limit] = "_rekey_limit",
  [sym__remote_command] = "_remote_command",
  [sym__remote_forward] = "_remote_forward",
  [sym__request_tty] = "_request_tty",
  [sym__required_rsa_size] = "_required_rsa_size",
  [sym__revoked_host_keys] = "_revoked_host_keys",
  [sym__security_key_provider] = "_security_key_provider",
  [sym__send_env] = "_send_env",
  [sym__send_env_value] = "_send_env_value",
  [sym__server_alive_count_max] = "_server_alive_count_max",
  [sym__server_alive_interval] = "_server_alive_interval",
  [sym__session_type] = "_session_type",
  [sym__set_env] = "_set_env",
  [sym__set_env_value] = "_set_env_value",
  [sym__stdin_null] = "_stdin_null",
  [sym__stream_local_bind_mask] = "_stream_local_bind_mask",
  [sym__stream_local_bind_unlink] = "_stream_local_bind_unlink",
  [sym__strict_host_key_checking] = "_strict_host_key_checking",
  [sym__syslog_facility] = "_syslog_facility",
  [sym__tcp_keep_alive] = "_tcp_keep_alive",
  [sym__tag] = "_tag",
  [sym__tunnel] = "_tunnel",
  [sym__tunnel_device] = "_tunnel_device",
  [sym__update_host_keys] = "_update_host_keys",
  [sym__user] = "_user",
  [sym__user_known_hosts_file] = "_user_known_hosts_file",
  [sym__verify_host_key_dns] = "_verify_host_key_dns",
  [sym__visual_host_key] = "_visual_host_key",
  [sym__xauth_location] = "_xauth_location",
  [sym__file_token] = "_file_token",
  [sym__hosts_token] = "_hosts_token",
  [sym__hostname_token] = "_hostname_token",
  [sym__proxy_token] = "_proxy_token",
  [sym__var_value] = "_var_value",
  [sym_variable] = "variable",
  [sym__file_string] = "_file_string",
  [sym__hosts_string] = "_hosts_string",
  [sym__hostname_string] = "_hostname_string",
  [sym__proxy_string] = "_proxy_string",
  [sym__token_string] = "_token_string",
  [sym__string] = "_string",
  [sym__file_pattern_vars] = "_file_pattern_vars",
  [sym__pattern] = "_pattern",
  [sym__boolean] = "_boolean",
  [sym_number] = "number",
  [sym_bytes] = "bytes",
  [sym_time] = "time",
  [sym__sep] = "_sep",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_host_declaration_repeat1] = "host_declaration_repeat1",
  [aux_sym_match_declaration_repeat1] = "match_declaration_repeat1",
  [aux_sym__match_exec_repeat1] = "_match_exec_repeat1",
  [aux_sym__match_exec_repeat2] = "_match_exec_repeat2",
  [aux_sym__match_localnetwork_repeat1] = "_match_localnetwork_repeat1",
  [aux_sym__match_localnetwork_repeat2] = "_match_localnetwork_repeat2",
  [aux_sym__match_value_repeat1] = "_match_value_repeat1",
  [aux_sym__match_value_repeat2] = "_match_value_repeat2",
  [aux_sym__match_value_repeat3] = "_match_value_repeat3",
  [aux_sym__match_value_repeat4] = "_match_value_repeat4",
  [aux_sym__declarations_repeat1] = "_declarations_repeat1",
  [aux_sym__canonical_domains_repeat1] = "_canonical_domains_repeat1",
  [aux_sym__canonicalize_permitted_cnames_repeat1] = "_canonicalize_permitted_cnames_repeat1",
  [aux_sym__cnames_map_repeat1] = "_cnames_map_repeat1",
  [aux_sym__ca_signature_algorithms_repeat1] = "_ca_signature_algorithms_repeat1",
  [aux_sym__ciphers_repeat1] = "_ciphers_repeat1",
  [aux_sym__dynamic_forward_repeat1] = "_dynamic_forward_repeat1",
  [aux_sym__global_known_hosts_file_repeat1] = "_global_known_hosts_file_repeat1",
  [aux_sym__hostbased_accepted_algorithms_repeat1] = "_hostbased_accepted_algorithms_repeat1",
  [aux_sym__ignore_unknown_repeat1] = "_ignore_unknown_repeat1",
  [aux_sym__kex_algorithms_repeat1] = "_kex_algorithms_repeat1",
  [aux_sym__log_verbose_repeat1] = "_log_verbose_repeat1",
  [aux_sym__log_verbose_repeat2] = "_log_verbose_repeat2",
  [aux_sym__log_verbose_value_repeat1] = "_log_verbose_value_repeat1",
  [aux_sym__macs_repeat1] = "_macs_repeat1",
  [aux_sym__permit_remote_open_repeat1] = "_permit_remote_open_repeat1",
  [aux_sym__preferred_authentications_repeat1] = "_preferred_authentications_repeat1",
  [aux_sym__remote_command_repeat1] = "_remote_command_repeat1",
  [aux_sym__send_env_repeat1] = "_send_env_repeat1",
  [aux_sym__send_env_value_repeat1] = "_send_env_value_repeat1",
  [aux_sym__set_env_repeat1] = "_set_env_repeat1",
  [aux_sym__user_known_hosts_file_repeat1] = "_user_known_hosts_file_repeat1",
  [aux_sym__file_string_repeat1] = "_file_string_repeat1",
  [aux_sym__file_string_repeat2] = "_file_string_repeat2",
  [aux_sym__hosts_string_repeat1] = "_hosts_string_repeat1",
  [aux_sym__hostname_string_repeat1] = "_hostname_string_repeat1",
  [aux_sym__hostname_string_repeat2] = "_hostname_string_repeat2",
  [aux_sym__proxy_string_repeat1] = "_proxy_string_repeat1",
  [aux_sym__token_string_repeat1] = "_token_string_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__string_repeat2] = "_string_repeat2",
  [aux_sym__file_pattern_vars_repeat1] = "_file_pattern_vars_repeat1",
  [aux_sym__file_pattern_vars_repeat2] = "_file_pattern_vars_repeat2",
  [anon_alias_sym_User] = "User",
  [anon_alias_sym_host] = "host",
  [alias_sym_pattern] = "pattern",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_host_declaration_token1] = aux_sym_host_declaration_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_match_declaration_token1] = aux_sym_match_declaration_token1,
  [aux_sym__all_token1] = aux_sym__all_token1,
  [aux_sym__match_canonical_token1] = aux_sym__match_canonical_token1,
  [aux_sym__match_final_token1] = aux_sym__match_final_token1,
  [aux_sym__match_exec_token1] = aux_sym__match_exec_token1,
  [aux_sym__match_exec_token2] = aux_sym__match_exec_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__match_exec_token3] = aux_sym__match_exec_token3,
  [aux_sym__match_localnetwork_token1] = aux_sym__match_localnetwork_token1,
  [aux_sym__match_localnetwork_token2] = aux_sym__match_localnetwork_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__match_localnetwork_token3] = aux_sym__match_localnetwork_token2,
  [aux_sym__match_originalhost_token1] = aux_sym__match_originalhost_token1,
  [aux_sym__match_tagged_token1] = aux_sym__match_tagged_token1,
  [aux_sym__match_user_token1] = aux_sym__match_user_token1,
  [aux_sym__match_localuser_token1] = aux_sym__match_localuser_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym__add_keys_to_agent_token1] = aux_sym__add_keys_to_agent_token1,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_confirm] = anon_sym_confirm,
  [aux_sym__address_family_token1] = aux_sym__address_family_token1,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_inet] = anon_sym_inet,
  [anon_sym_inet6] = anon_sym_inet6,
  [aux_sym__batch_mode_token1] = aux_sym__batch_mode_token1,
  [aux_sym__bind_address_token1] = aux_sym__bind_address_token1,
  [aux_sym__bind_interface_token1] = aux_sym__bind_interface_token1,
  [aux_sym__canonical_domains_token1] = aux_sym__canonical_domains_token1,
  [aux_sym__canonicalize_fallback_local_token1] = aux_sym__canonicalize_fallback_local_token1,
  [aux_sym__canonicalize_hostname_token1] = aux_sym__canonicalize_hostname_token1,
  [aux_sym__canonicalize_max_dots_token1] = aux_sym__canonicalize_max_dots_token1,
  [aux_sym__canonicalize_permitted_cnames_token1] = aux_sym__canonicalize_permitted_cnames_token1,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__ca_signature_algorithms_token1] = aux_sym__ca_signature_algorithms_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__certificate_file_token1] = aux_sym__certificate_file_token1,
  [aux_sym__check_host_ip_token1] = aux_sym__check_host_ip_token1,
  [aux_sym__ciphers_token1] = aux_sym__ciphers_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym__clear_all_forwardings_token1] = aux_sym__clear_all_forwardings_token1,
  [aux_sym__compression_token1] = aux_sym__compression_token1,
  [aux_sym__connection_attempts_token1] = aux_sym__connection_attempts_token1,
  [aux_sym__connect_timeout_token1] = aux_sym__connect_timeout_token1,
  [aux_sym__control_master_token1] = aux_sym__control_master_token1,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_autoask] = anon_sym_autoask,
  [aux_sym__control_persist_token1] = aux_sym__control_persist_token1,
  [aux_sym__control_path_token1] = aux_sym__control_path_token1,
  [aux_sym__dynamic_forward_token1] = aux_sym__dynamic_forward_token1,
  [aux_sym__enable_escape_command_line_token1] = aux_sym__enable_escape_command_line_token1,
  [aux_sym__enable_ssh_keysign_token1] = aux_sym__enable_ssh_keysign_token1,
  [aux_sym__escape_char_token1] = aux_sym__escape_char_token1,
  [aux_sym__escape_char_token2] = aux_sym__escape_char_token2,
  [aux_sym__exit_on_forward_failure_token1] = aux_sym__exit_on_forward_failure_token1,
  [aux_sym__fingerprint_hash_token1] = aux_sym__fingerprint_hash_token1,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_sha256] = anon_sym_sha256,
  [aux_sym__fork_after_authentication_token1] = aux_sym__fork_after_authentication_token1,
  [aux_sym__forward_agent_token1] = aux_sym__forward_agent_token1,
  [aux_sym__forward_x11_token1] = aux_sym__forward_x11_token1,
  [aux_sym__forward_x11_timeout_token1] = aux_sym__forward_x11_timeout_token1,
  [aux_sym__forward_x11_trusted_token1] = aux_sym__forward_x11_trusted_token1,
  [aux_sym__global_known_hosts_file_token1] = aux_sym__global_known_hosts_file_token1,
  [aux_sym__gssapi_authentication_token1] = aux_sym__gssapi_authentication_token1,
  [aux_sym__gssapi_delegate_credentials_token1] = aux_sym__gssapi_delegate_credentials_token1,
  [aux_sym__hostbased_accepted_algorithms_token1] = aux_sym__hostbased_accepted_algorithms_token1,
  [aux_sym__hostbased_accepted_algorithms_token2] = aux_sym__hostbased_accepted_algorithms_token2,
  [aux_sym__hostbased_authentication_token1] = aux_sym__hostbased_authentication_token1,
  [aux_sym__host_key_algorithms_token1] = aux_sym__host_key_algorithms_token1,
  [aux_sym__host_key_alias_token1] = aux_sym__host_key_alias_token1,
  [aux_sym__hostname_token1] = aux_sym__hostname_token1,
  [aux_sym__identities_only_token1] = aux_sym__identities_only_token1,
  [aux_sym__identity_agent_token1] = aux_sym__identity_agent_token1,
  [anon_sym_SSH_AUTH_SOCK] = anon_sym_SSH_AUTH_SOCK,
  [aux_sym__identity_file_token1] = aux_sym__identity_file_token1,
  [aux_sym__ignore_unknown_token1] = aux_sym__ignore_unknown_token1,
  [aux_sym__ipqos_token1] = aux_sym__ipqos_token1,
  [aux_sym__kbd_interactive_authentication_token1] = aux_sym__kbd_interactive_authentication_token1,
  [aux_sym__kbd_interactive_authentication_token2] = aux_sym__kbd_interactive_authentication_token2,
  [aux_sym__kex_algorithms_token1] = aux_sym__kex_algorithms_token1,
  [aux_sym__known_hosts_command_token1] = aux_sym__known_hosts_command_token1,
  [aux_sym__local_command_token1] = aux_sym__local_command_token1,
  [aux_sym__local_forward_token1] = aux_sym__local_forward_token1,
  [aux_sym__log_level_token1] = aux_sym__log_level_token1,
  [aux_sym__log_verbose_token1] = aux_sym__log_verbose_token1,
  [aux_sym__log_verbose_value_token1] = aux_sym__log_verbose_value_token1,
  [aux_sym__macs_token1] = aux_sym__macs_token1,
  [aux_sym__no_host_authentication_for_localhost_token1] = aux_sym__no_host_authentication_for_localhost_token1,
  [aux_sym__number_of_password_prompts_token1] = aux_sym__number_of_password_prompts_token1,
  [aux_sym__password_authentication_token1] = aux_sym__password_authentication_token1,
  [aux_sym__permit_local_command_token1] = aux_sym__permit_local_command_token1,
  [aux_sym__permit_remote_open_token1] = aux_sym__permit_remote_open_token1,
  [aux_sym__pkcs11_provider_token1] = aux_sym__pkcs11_provider_token1,
  [aux_sym__port_token1] = aux_sym__port_token1,
  [aux_sym__preferred_authentications_token1] = aux_sym__preferred_authentications_token1,
  [aux_sym__proxy_command_token1] = aux_sym__proxy_command_token1,
  [aux_sym__proxy_jump_token1] = aux_sym__proxy_jump_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__proxy_jump_arg_token1] = aux_sym__match_localnetwork_token2,
  [aux_sym__proxy_jump_arg_token2] = aux_sym__proxy_jump_arg_token2,
  [aux_sym__proxy_use_fdpass_token1] = aux_sym__proxy_use_fdpass_token1,
  [aux_sym__pubkey_accepted_algorithms_token1] = aux_sym__pubkey_accepted_algorithms_token1,
  [aux_sym__pubkey_authentication_token1] = aux_sym__pubkey_authentication_token1,
  [anon_sym_unbound] = anon_sym_unbound,
  [anon_sym_host_DASHbound] = anon_sym_host_DASHbound,
  [aux_sym__rekey_limit_token1] = aux_sym__rekey_limit_token1,
  [aux_sym__remote_command_token1] = aux_sym__remote_command_token1,
  [aux_sym__remote_command_token2] = aux_sym__remote_command_token2,
  [aux_sym__remote_forward_token1] = aux_sym__remote_forward_token1,
  [aux_sym__request_tty_token1] = aux_sym__request_tty_token1,
  [anon_sym_force] = anon_sym_force,
  [aux_sym__required_rsa_size_token1] = aux_sym__required_rsa_size_token1,
  [aux_sym__revoked_host_keys_token1] = aux_sym__revoked_host_keys_token1,
  [aux_sym__security_key_provider_token1] = aux_sym__security_key_provider_token1,
  [aux_sym__send_env_token1] = aux_sym__send_env_token1,
  [aux_sym__send_env_value_token1] = aux_sym__send_env_value_token1,
  [aux_sym__server_alive_count_max_token1] = aux_sym__server_alive_count_max_token1,
  [aux_sym__server_alive_interval_token1] = aux_sym__server_alive_interval_token1,
  [aux_sym__session_type_token1] = aux_sym__session_type_token1,
  [anon_sym_subsystem] = anon_sym_subsystem,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__stdin_null_token1] = aux_sym__stdin_null_token1,
  [aux_sym__stream_local_bind_mask_token1] = aux_sym__stream_local_bind_mask_token1,
  [aux_sym__stream_local_bind_mask_token2] = sym_number,
  [aux_sym__stream_local_bind_unlink_token1] = aux_sym__stream_local_bind_unlink_token1,
  [aux_sym__strict_host_key_checking_token1] = aux_sym__strict_host_key_checking_token1,
  [anon_sym_accept_DASHnew] = anon_sym_accept_DASHnew,
  [anon_sym_off] = anon_sym_off,
  [aux_sym__syslog_facility_token1] = aux_sym__syslog_facility_token1,
  [aux_sym__tcp_keep_alive_token1] = aux_sym__tcp_keep_alive_token1,
  [aux_sym__tag_token1] = aux_sym__tag_token1,
  [aux_sym__tunnel_token1] = aux_sym__tunnel_token1,
  [anon_sym_point_DASHto_DASHpoint] = anon_sym_point_DASHto_DASHpoint,
  [anon_sym_ethernet] = anon_sym_ethernet,
  [aux_sym__tunnel_device_token1] = aux_sym__tunnel_device_token1,
  [aux_sym__update_host_keys_token1] = aux_sym__update_host_keys_token1,
  [aux_sym__user_known_hosts_file_token1] = aux_sym__user_known_hosts_file_token1,
  [aux_sym__verify_host_key_dns_token1] = aux_sym__verify_host_key_dns_token1,
  [aux_sym__visual_host_key_token1] = aux_sym__visual_host_key_token1,
  [aux_sym__xauth_location_token1] = aux_sym__xauth_location_token1,
  [sym_ipqos] = sym_ipqos,
  [sym_verbosity] = sym_verbosity,
  [sym_facility] = sym_facility,
  [sym_authentication] = sym_authentication,
  [sym_cipher] = sym_cipher,
  [sym_kex] = sym_kex,
  [sym_key_sig] = sym_key_sig,
  [sym_mac] = sym_mac,
  [sym_sig] = sym_sig,
  [aux_sym__file_token_token1] = sym_token,
  [aux_sym__hosts_token_token1] = sym_token,
  [aux_sym__hostname_token_token1] = sym_token,
  [aux_sym__proxy_token_token1] = sym_token,
  [sym_token] = sym_token,
  [anon_sym_DOLLAR] = sym_variable,
  [sym__var_name] = sym__var_name,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym__number] = sym__number,
  [aux_sym_bytes_token1] = aux_sym_bytes_token1,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [aux_sym_time_token2] = aux_sym_time_token2,
  [aux_sym_time_token3] = aux_sym_time_token3,
  [aux_sym_time_token4] = aux_sym_time_token4,
  [aux_sym_time_token5] = aux_sym_time_token5,
  [sym_comment] = sym_comment,
  [aux_sym__sep_token1] = anon_sym_EQ,
  [sym__space] = sym__space,
  [sym__eol] = sym__eol,
  [sym_config] = sym_config,
  [sym_host_declaration] = sym_host_declaration,
  [sym_match_declaration] = sym_match_declaration,
  [sym_condition] = sym_condition,
  [sym__all] = sym__all,
  [sym__match_canonical] = sym__match_canonical,
  [sym__match_final] = sym__match_final,
  [sym__match_exec] = sym__match_exec,
  [sym__match_localnetwork] = sym__match_localnetwork,
  [sym__match_host] = sym__match_host,
  [sym__match_originalhost] = sym__match_originalhost,
  [sym__match_tagged] = sym__match_tagged,
  [sym__match_user] = sym__match_user,
  [sym__match_localuser] = sym__match_localuser,
  [sym__match_value] = sym__match_value,
  [sym__declarations] = sym__declarations,
  [sym_parameter] = sym_parameter,
  [sym__add_keys_to_agent] = sym__add_keys_to_agent,
  [sym__address_family] = sym__address_family,
  [sym__batch_mode] = sym__batch_mode,
  [sym__bind_address] = sym__bind_address,
  [sym__bind_interface] = sym__bind_interface,
  [sym__canonical_domains] = sym__canonical_domains,
  [sym__canonicalize_fallback_local] = sym__canonicalize_fallback_local,
  [sym__canonicalize_hostname] = sym__canonicalize_hostname,
  [sym__canonicalize_max_dots] = sym__canonicalize_max_dots,
  [sym__canonicalize_permitted_cnames] = sym__canonicalize_permitted_cnames,
  [sym__cnames_map] = sym__cnames_map,
  [sym__ca_signature_algorithms] = sym__ca_signature_algorithms,
  [sym__certificate_file] = sym__certificate_file,
  [sym__check_host_ip] = sym__check_host_ip,
  [sym__ciphers] = sym__ciphers,
  [sym__clear_all_forwardings] = sym__clear_all_forwardings,
  [sym__compression] = sym__compression,
  [sym__connection_attempts] = sym__connection_attempts,
  [sym__connect_timeout] = sym__connect_timeout,
  [sym__control_master] = sym__control_master,
  [sym__control_persist] = sym__control_persist,
  [sym__control_path] = sym__control_path,
  [sym__dynamic_forward] = sym__dynamic_forward,
  [sym__forward_value_inner] = sym__forward_value_inner,
  [sym__dynamic_forward_value] = sym__dynamic_forward_value,
  [sym__enable_escape_command_line] = sym__enable_escape_command_line,
  [sym__enable_ssh_keysign] = sym__enable_ssh_keysign,
  [sym__escape_char] = sym__escape_char,
  [sym__exit_on_forward_failure] = sym__exit_on_forward_failure,
  [sym__fingerprint_hash] = sym__fingerprint_hash,
  [sym__fork_after_authentication] = sym__fork_after_authentication,
  [sym__forward_agent] = sym__forward_agent,
  [sym__forward_x11] = sym__forward_x11,
  [sym__forward_x11_timeout] = sym__forward_x11_timeout,
  [sym__forward_x11_trusted] = sym__forward_x11_trusted,
  [sym__global_known_hosts_file] = sym__global_known_hosts_file,
  [sym__gssapi_authentication] = sym__gssapi_authentication,
  [sym__gssapi_delegate_credentials] = sym__gssapi_delegate_credentials,
  [sym__hostbased_accepted_algorithms] = sym__hostbased_accepted_algorithms,
  [sym__hostbased_authentication] = sym__hostbased_authentication,
  [sym__host_key_algorithms] = sym__host_key_algorithms,
  [sym__host_key_alias] = sym__host_key_alias,
  [sym__hostname] = sym__hostname,
  [sym__identities_only] = sym__identities_only,
  [sym__identity_agent] = sym__identity_agent,
  [sym__identity_file] = sym__identity_file,
  [sym__ignore_unknown] = sym__ignore_unknown,
  [sym__ipqos] = sym__ipqos,
  [sym__kbd_interactive_authentication] = sym__kbd_interactive_authentication,
  [sym__kex_algorithms] = sym__kex_algorithms,
  [sym__known_hosts_command] = sym__known_hosts_command,
  [sym__local_command] = sym__local_command,
  [sym__local_forward] = sym__local_forward,
  [sym__forward_value1] = sym__forward_value1,
  [sym__forward_value2] = sym__forward_value2,
  [sym__log_level] = sym__log_level,
  [sym__log_verbose] = sym__log_verbose,
  [sym__log_verbose_value] = sym__log_verbose_value,
  [sym__log_verbose_quoted] = sym__log_verbose_quoted,
  [sym__macs] = sym__macs,
  [sym__no_host_authentication_for_localhost] = sym__no_host_authentication_for_localhost,
  [sym__number_of_password_prompts] = sym__number_of_password_prompts,
  [sym__password_authentication] = sym__password_authentication,
  [sym__permit_local_command] = sym__permit_local_command,
  [sym__permit_remote_open] = sym__permit_remote_open,
  [sym__permit_remote_open_value] = sym__permit_remote_open_value,
  [sym__pkcs11_provider] = sym__pkcs11_provider,
  [sym__port] = sym__port,
  [sym__preferred_authentications] = sym__preferred_authentications,
  [sym__proxy_command] = sym__proxy_command,
  [sym__proxy_jump] = sym__proxy_jump,
  [sym__proxy_use_fdpass] = sym__proxy_use_fdpass,
  [sym__pubkey_accepted_algorithms] = sym__pubkey_accepted_algorithms,
  [sym__pubkey_authentication] = sym__pubkey_authentication,
  [sym__pubkey_authentication_arg] = sym__pubkey_authentication_arg,
  [sym__rekey_limit] = sym__rekey_limit,
  [sym__remote_command] = sym__remote_command,
  [sym__remote_forward] = sym__remote_forward,
  [sym__request_tty] = sym__request_tty,
  [sym__required_rsa_size] = sym__required_rsa_size,
  [sym__revoked_host_keys] = sym__revoked_host_keys,
  [sym__security_key_provider] = sym__security_key_provider,
  [sym__send_env] = sym__send_env,
  [sym__send_env_value] = sym__send_env_value,
  [sym__server_alive_count_max] = sym__server_alive_count_max,
  [sym__server_alive_interval] = sym__server_alive_interval,
  [sym__session_type] = sym__session_type,
  [sym__set_env] = sym__set_env,
  [sym__set_env_value] = sym__set_env_value,
  [sym__stdin_null] = sym__stdin_null,
  [sym__stream_local_bind_mask] = sym__stream_local_bind_mask,
  [sym__stream_local_bind_unlink] = sym__stream_local_bind_unlink,
  [sym__strict_host_key_checking] = sym__strict_host_key_checking,
  [sym__syslog_facility] = sym__syslog_facility,
  [sym__tcp_keep_alive] = sym__tcp_keep_alive,
  [sym__tag] = sym__tag,
  [sym__tunnel] = sym__tunnel,
  [sym__tunnel_device] = sym__tunnel_device,
  [sym__update_host_keys] = sym__update_host_keys,
  [sym__user] = sym__user,
  [sym__user_known_hosts_file] = sym__user_known_hosts_file,
  [sym__verify_host_key_dns] = sym__verify_host_key_dns,
  [sym__visual_host_key] = sym__visual_host_key,
  [sym__xauth_location] = sym__xauth_location,
  [sym__file_token] = sym__file_token,
  [sym__hosts_token] = sym__hosts_token,
  [sym__hostname_token] = sym__hostname_token,
  [sym__proxy_token] = sym__proxy_token,
  [sym__var_value] = sym__var_value,
  [sym_variable] = sym_variable,
  [sym__file_string] = sym__file_string,
  [sym__hosts_string] = sym__hosts_string,
  [sym__hostname_string] = sym__hostname_string,
  [sym__proxy_string] = sym__proxy_string,
  [sym__token_string] = sym__token_string,
  [sym__string] = sym__string,
  [sym__file_pattern_vars] = sym__file_pattern_vars,
  [sym__pattern] = sym__pattern,
  [sym__boolean] = sym__boolean,
  [sym_number] = sym_number,
  [sym_bytes] = sym_bytes,
  [sym_time] = sym_time,
  [sym__sep] = sym__sep,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_host_declaration_repeat1] = aux_sym_host_declaration_repeat1,
  [aux_sym_match_declaration_repeat1] = aux_sym_match_declaration_repeat1,
  [aux_sym__match_exec_repeat1] = aux_sym__match_exec_repeat1,
  [aux_sym__match_exec_repeat2] = aux_sym__match_exec_repeat2,
  [aux_sym__match_localnetwork_repeat1] = aux_sym__match_localnetwork_repeat1,
  [aux_sym__match_localnetwork_repeat2] = aux_sym__match_localnetwork_repeat2,
  [aux_sym__match_value_repeat1] = aux_sym__match_value_repeat1,
  [aux_sym__match_value_repeat2] = aux_sym__match_value_repeat2,
  [aux_sym__match_value_repeat3] = aux_sym__match_value_repeat3,
  [aux_sym__match_value_repeat4] = aux_sym__match_value_repeat4,
  [aux_sym__declarations_repeat1] = aux_sym__declarations_repeat1,
  [aux_sym__canonical_domains_repeat1] = aux_sym__canonical_domains_repeat1,
  [aux_sym__canonicalize_permitted_cnames_repeat1] = aux_sym__canonicalize_permitted_cnames_repeat1,
  [aux_sym__cnames_map_repeat1] = aux_sym__cnames_map_repeat1,
  [aux_sym__ca_signature_algorithms_repeat1] = aux_sym__ca_signature_algorithms_repeat1,
  [aux_sym__ciphers_repeat1] = aux_sym__ciphers_repeat1,
  [aux_sym__dynamic_forward_repeat1] = aux_sym__dynamic_forward_repeat1,
  [aux_sym__global_known_hosts_file_repeat1] = aux_sym__global_known_hosts_file_repeat1,
  [aux_sym__hostbased_accepted_algorithms_repeat1] = aux_sym__hostbased_accepted_algorithms_repeat1,
  [aux_sym__ignore_unknown_repeat1] = aux_sym__ignore_unknown_repeat1,
  [aux_sym__kex_algorithms_repeat1] = aux_sym__kex_algorithms_repeat1,
  [aux_sym__log_verbose_repeat1] = aux_sym__log_verbose_repeat1,
  [aux_sym__log_verbose_repeat2] = aux_sym__log_verbose_repeat2,
  [aux_sym__log_verbose_value_repeat1] = aux_sym__log_verbose_value_repeat1,
  [aux_sym__macs_repeat1] = aux_sym__macs_repeat1,
  [aux_sym__permit_remote_open_repeat1] = aux_sym__permit_remote_open_repeat1,
  [aux_sym__preferred_authentications_repeat1] = aux_sym__preferred_authentications_repeat1,
  [aux_sym__remote_command_repeat1] = aux_sym__remote_command_repeat1,
  [aux_sym__send_env_repeat1] = aux_sym__send_env_repeat1,
  [aux_sym__send_env_value_repeat1] = aux_sym__send_env_value_repeat1,
  [aux_sym__set_env_repeat1] = aux_sym__set_env_repeat1,
  [aux_sym__user_known_hosts_file_repeat1] = aux_sym__user_known_hosts_file_repeat1,
  [aux_sym__file_string_repeat1] = aux_sym__file_string_repeat1,
  [aux_sym__file_string_repeat2] = aux_sym__file_string_repeat2,
  [aux_sym__hosts_string_repeat1] = aux_sym__hosts_string_repeat1,
  [aux_sym__hostname_string_repeat1] = aux_sym__hostname_string_repeat1,
  [aux_sym__hostname_string_repeat2] = aux_sym__hostname_string_repeat2,
  [aux_sym__proxy_string_repeat1] = aux_sym__proxy_string_repeat1,
  [aux_sym__token_string_repeat1] = aux_sym__token_string_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym__string_repeat2] = aux_sym__string_repeat2,
  [aux_sym__file_pattern_vars_repeat1] = aux_sym__file_pattern_vars_repeat1,
  [aux_sym__file_pattern_vars_repeat2] = aux_sym__file_pattern_vars_repeat2,
  [anon_alias_sym_User] = anon_alias_sym_User,
  [anon_alias_sym_host] = anon_alias_sym_host,
  [alias_sym_pattern] = alias_sym_pattern,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_host_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_match_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__all_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_canonical_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_final_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localnetwork_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localnetwork_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__match_originalhost_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_tagged_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localuser_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_keys_to_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_confirm] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__address_family_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__batch_mode_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bind_address_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bind_interface_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonical_domains_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_fallback_local_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_hostname_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_max_dots_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_permitted_cnames_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ca_signature_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__certificate_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__check_host_ip_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ciphers_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__clear_all_forwardings_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__compression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__connection_attempts_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__connect_timeout_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_master_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoask] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_persist_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_path_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__dynamic_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__enable_escape_command_line_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__enable_ssh_keysign_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_char_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exit_on_forward_failure_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__fingerprint_hash_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__fork_after_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_timeout_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_trusted_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__global_known_hosts_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__gssapi_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__gssapi_delegate_credentials_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__host_key_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__host_key_alias_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostname_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identities_only_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identity_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SSH_AUTH_SOCK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identity_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ignore_unknown_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ipqos_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kbd_interactive_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kbd_interactive_authentication_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kex_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__known_hosts_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__local_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__local_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_level_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_verbose_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_verbose_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macs_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__no_host_authentication_for_localhost_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_of_password_prompts_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__password_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__permit_local_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__permit_remote_open_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pkcs11_provider_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__port_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__preferred_authentications_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_jump_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_jump_arg_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_jump_arg_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_use_fdpass_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pubkey_accepted_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pubkey_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host_DASHbound] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rekey_limit_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__remote_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__remote_command_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remote_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__request_tty_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__required_rsa_size_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__revoked_host_keys_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__security_key_provider_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__send_env_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__send_env_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__server_alive_count_max_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__server_alive_interval_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__session_type_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subsystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stdin_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stream_local_bind_mask_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stream_local_bind_mask_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stream_local_bind_unlink_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__strict_host_key_checking_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept_DASHnew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__syslog_facility_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tcp_keep_alive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tag_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tunnel_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_point_DASHto_DASHpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ethernet] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tunnel_device_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__update_host_keys_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_known_hosts_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__verify_host_key_dns_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__visual_host_key_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__xauth_location_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_ipqos] = {
    .visible = true,
    .named = true,
  },
  [sym_verbosity] = {
    .visible = true,
    .named = true,
  },
  [sym_facility] = {
    .visible = true,
    .named = true,
  },
  [sym_authentication] = {
    .visible = true,
    .named = true,
  },
  [sym_cipher] = {
    .visible = true,
    .named = true,
  },
  [sym_kex] = {
    .visible = true,
    .named = true,
  },
  [sym_key_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_mac] = {
    .visible = true,
    .named = true,
  },
  [sym_sig] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__file_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__hosts_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__hostname_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_token_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [sym__var_name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_bytes_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sep_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_host_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_match_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__all] = {
    .visible = false,
    .named = true,
  },
  [sym__match_canonical] = {
    .visible = false,
    .named = true,
  },
  [sym__match_final] = {
    .visible = false,
    .named = true,
  },
  [sym__match_exec] = {
    .visible = false,
    .named = true,
  },
  [sym__match_localnetwork] = {
    .visible = false,
    .named = true,
  },
  [sym__match_host] = {
    .visible = false,
    .named = true,
  },
  [sym__match_originalhost] = {
    .visible = false,
    .named = true,
  },
  [sym__match_tagged] = {
    .visible = false,
    .named = true,
  },
  [sym__match_user] = {
    .visible = false,
    .named = true,
  },
  [sym__match_localuser] = {
    .visible = false,
    .named = true,
  },
  [sym__match_value] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__add_keys_to_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__address_family] = {
    .visible = false,
    .named = true,
  },
  [sym__batch_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__bind_address] = {
    .visible = false,
    .named = true,
  },
  [sym__bind_interface] = {
    .visible = false,
    .named = true,
  },
  [sym__canonical_domains] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_fallback_local] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_hostname] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_max_dots] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_permitted_cnames] = {
    .visible = false,
    .named = true,
  },
  [sym__cnames_map] = {
    .visible = false,
    .named = true,
  },
  [sym__ca_signature_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__certificate_file] = {
    .visible = false,
    .named = true,
  },
  [sym__check_host_ip] = {
    .visible = false,
    .named = true,
  },
  [sym__ciphers] = {
    .visible = false,
    .named = true,
  },
  [sym__clear_all_forwardings] = {
    .visible = false,
    .named = true,
  },
  [sym__compression] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attempts] = {
    .visible = false,
    .named = true,
  },
  [sym__connect_timeout] = {
    .visible = false,
    .named = true,
  },
  [sym__control_master] = {
    .visible = false,
    .named = true,
  },
  [sym__control_persist] = {
    .visible = false,
    .named = true,
  },
  [sym__control_path] = {
    .visible = false,
    .named = true,
  },
  [sym__dynamic_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__dynamic_forward_value] = {
    .visible = false,
    .named = true,
  },
  [sym__enable_escape_command_line] = {
    .visible = false,
    .named = true,
  },
  [sym__enable_ssh_keysign] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_char] = {
    .visible = false,
    .named = true,
  },
  [sym__exit_on_forward_failure] = {
    .visible = false,
    .named = true,
  },
  [sym__fingerprint_hash] = {
    .visible = false,
    .named = true,
  },
  [sym__fork_after_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11_timeout] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11_trusted] = {
    .visible = false,
    .named = true,
  },
  [sym__global_known_hosts_file] = {
    .visible = false,
    .named = true,
  },
  [sym__gssapi_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__gssapi_delegate_credentials] = {
    .visible = false,
    .named = true,
  },
  [sym__hostbased_accepted_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__hostbased_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__host_key_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__host_key_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname] = {
    .visible = false,
    .named = true,
  },
  [sym__identities_only] = {
    .visible = false,
    .named = true,
  },
  [sym__identity_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__identity_file] = {
    .visible = false,
    .named = true,
  },
  [sym__ignore_unknown] = {
    .visible = false,
    .named = true,
  },
  [sym__ipqos] = {
    .visible = false,
    .named = true,
  },
  [sym__kbd_interactive_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__kex_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__known_hosts_command] = {
    .visible = false,
    .named = true,
  },
  [sym__local_command] = {
    .visible = false,
    .named = true,
  },
  [sym__local_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value1] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value2] = {
    .visible = false,
    .named = true,
  },
  [sym__log_level] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose_value] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose_quoted] = {
    .visible = false,
    .named = true,
  },
  [sym__macs] = {
    .visible = false,
    .named = true,
  },
  [sym__no_host_authentication_for_localhost] = {
    .visible = false,
    .named = true,
  },
  [sym__number_of_password_prompts] = {
    .visible = false,
    .named = true,
  },
  [sym__password_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_local_command] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_remote_open] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_remote_open_value] = {
    .visible = false,
    .named = true,
  },
  [sym__pkcs11_provider] = {
    .visible = false,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [sym__preferred_authentications] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_command] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_jump] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_use_fdpass] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_accepted_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_authentication_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__rekey_limit] = {
    .visible = false,
    .named = true,
  },
  [sym__remote_command] = {
    .visible = false,
    .named = true,
  },
  [sym__remote_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__request_tty] = {
    .visible = false,
    .named = true,
  },
  [sym__required_rsa_size] = {
    .visible = false,
    .named = true,
  },
  [sym__revoked_host_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__security_key_provider] = {
    .visible = false,
    .named = true,
  },
  [sym__send_env] = {
    .visible = false,
    .named = true,
  },
  [sym__send_env_value] = {
    .visible = false,
    .named = true,
  },
  [sym__server_alive_count_max] = {
    .visible = false,
    .named = true,
  },
  [sym__server_alive_interval] = {
    .visible = false,
    .named = true,
  },
  [sym__session_type] = {
    .visible = false,
    .named = true,
  },
  [sym__set_env] = {
    .visible = false,
    .named = true,
  },
  [sym__set_env_value] = {
    .visible = false,
    .named = true,
  },
  [sym__stdin_null] = {
    .visible = false,
    .named = true,
  },
  [sym__stream_local_bind_mask] = {
    .visible = false,
    .named = true,
  },
  [sym__stream_local_bind_unlink] = {
    .visible = false,
    .named = true,
  },
  [sym__strict_host_key_checking] = {
    .visible = false,
    .named = true,
  },
  [sym__syslog_facility] = {
    .visible = false,
    .named = true,
  },
  [sym__tcp_keep_alive] = {
    .visible = false,
    .named = true,
  },
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [sym__tunnel] = {
    .visible = false,
    .named = true,
  },
  [sym__tunnel_device] = {
    .visible = false,
    .named = true,
  },
  [sym__update_host_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__user] = {
    .visible = false,
    .named = true,
  },
  [sym__user_known_hosts_file] = {
    .visible = false,
    .named = true,
  },
  [sym__verify_host_key_dns] = {
    .visible = false,
    .named = true,
  },
  [sym__visual_host_key] = {
    .visible = false,
    .named = true,
  },
  [sym__xauth_location] = {
    .visible = false,
    .named = true,
  },
  [sym__file_token] = {
    .visible = false,
    .named = true,
  },
  [sym__hosts_token] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_token] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_token] = {
    .visible = false,
    .named = true,
  },
  [sym__var_value] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__file_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hosts_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_string] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_string] = {
    .visible = false,
    .named = true,
  },
  [sym__token_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__file_pattern_vars] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_exec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_exec_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__canonical_domains_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__canonicalize_permitted_cnames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cnames_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ca_signature_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ciphers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dynamic_forward_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__global_known_hosts_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ignore_unknown_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__kex_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__permit_remote_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__preferred_authentications_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remote_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__send_env_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__send_env_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__set_env_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__user_known_hosts_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hosts_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostname_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostname_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__proxy_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__token_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_pattern_vars_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_pattern_vars_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_User] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_host] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_pattern] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument = 1,
  field_bind_address = 2,
  field_criteria = 3,
  field_file = 4,
  field_function = 5,
  field_host = 6,
  field_keyword = 7,
  field_line = 8,
  field_local_tun = 9,
  field_name = 10,
  field_port = 11,
  field_remote_tun = 12,
  field_source_domain_list = 13,
  field_target_domain_list = 14,
  field_uri = 15,
  field_user = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_bind_address] = "bind_address",
  [field_criteria] = "criteria",
  [field_file] = "file",
  [field_function] = "function",
  [field_host] = "host",
  [field_keyword] = "keyword",
  [field_line] = "line",
  [field_local_tun] = "local_tun",
  [field_name] = "name",
  [field_port] = "port",
  [field_remote_tun] = "remote_tun",
  [field_source_domain_list] = "source_domain_list",
  [field_target_domain_list] = "target_domain_list",
  [field_uri] = "uri",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 4},
  [4] = {.index = 10, .length = 3},
  [5] = {.index = 13, .length = 5},
  [6] = {.index = 18, .length = 4},
  [7] = {.index = 22, .length = 6},
  [8] = {.index = 28, .length = 4},
  [10] = {.index = 32, .length = 1},
  [11] = {.index = 33, .length = 1},
  [12] = {.index = 34, .length = 2},
  [13] = {.index = 36, .length = 2},
  [15] = {.index = 36, .length = 2},
  [16] = {.index = 38, .length = 1},
  [17] = {.index = 39, .length = 4},
  [18] = {.index = 43, .length = 2},
  [19] = {.index = 45, .length = 4},
  [20] = {.index = 49, .length = 1},
  [21] = {.index = 50, .length = 3},
  [22] = {.index = 53, .length = 5},
  [23] = {.index = 58, .length = 4},
  [24] = {.index = 36, .length = 2},
  [26] = {.index = 62, .length = 3},
  [27] = {.index = 65, .length = 7},
  [28] = {.index = 72, .length = 3},
  [29] = {.index = 75, .length = 7},
  [30] = {.index = 82, .length = 1},
  [31] = {.index = 83, .length = 9},
  [32] = {.index = 92, .length = 7},
  [35] = {.index = 99, .length = 1},
  [36] = {.index = 100, .length = 2},
  [37] = {.index = 102, .length = 2},
  [38] = {.index = 102, .length = 2},
  [39] = {.index = 102, .length = 2},
  [41] = {.index = 104, .length = 4},
  [42] = {.index = 108, .length = 3},
  [43] = {.index = 111, .length = 6},
  [44] = {.index = 117, .length = 2},
  [45] = {.index = 82, .length = 1},
  [46] = {.index = 119, .length = 2},
  [47] = {.index = 121, .length = 2},
  [48] = {.index = 123, .length = 3},
  [49] = {.index = 126, .length = 6},
  [50] = {.index = 132, .length = 3},
  [51] = {.index = 135, .length = 7},
  [52] = {.index = 142, .length = 7},
  [53] = {.index = 149, .length = 3},
  [54] = {.index = 152, .length = 6},
  [55] = {.index = 158, .length = 2},
  [56] = {.index = 160, .length = 2},
  [57] = {.index = 162, .length = 4},
  [58] = {.index = 166, .length = 2},
  [60] = {.index = 168, .length = 3},
  [61] = {.index = 171, .length = 3},
  [62] = {.index = 174, .length = 3},
  [63] = {.index = 177, .length = 11},
  [64] = {.index = 188, .length = 4},
  [65] = {.index = 192, .length = 4},
  [66] = {.index = 192, .length = 4},
  [67] = {.index = 196, .length = 4},
  [68] = {.index = 200, .length = 3},
  [69] = {.index = 203, .length = 2},
  [70] = {.index = 205, .length = 6},
  [72] = {.index = 211, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
  [2] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
  [6] =
    {field_argument, 0, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [10] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [13] =
    {field_argument, 0, .inherited = true},
    {field_file, 0, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_line, 0, .inherited = true},
  [18] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [22] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_uri, 0, .inherited = true},
    {field_user, 0, .inherited = true},
  [28] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_local_tun, 0, .inherited = true},
    {field_remote_tun, 0, .inherited = true},
  [32] =
    {field_criteria, 0},
  [33] =
    {field_criteria, 0, .inherited = true},
  [34] =
    {field_argument, 0, .inherited = true},
    {field_criteria, 0, .inherited = true},
  [36] =
    {field_argument, 2},
    {field_keyword, 0},
  [38] =
    {field_keyword, 0},
  [39] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [43] =
    {field_bind_address, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [45] =
    {field_argument, 2},
    {field_bind_address, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [49] =
    {field_port, 0},
  [50] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [53] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [58] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [62] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [65] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [72] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [75] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [82] =
    {field_name, 1},
  [83] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [92] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [99] =
    {field_argument, 1},
  [100] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [102] =
    {field_argument, 2},
    {field_criteria, 0},
  [104] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [108] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [111] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [117] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [119] =
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [121] =
    {field_bind_address, 0},
    {field_port, 2},
  [123] =
    {field_argument, 1},
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [126] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_bind_address, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [132] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [135] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
  [142] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [149] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [152] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [158] =
    {field_host, 0},
    {field_port, 2},
  [160] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [162] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [166] =
    {field_argument, 1},
    {field_argument, 2},
  [168] =
    {field_argument, 2},
    {field_argument, 3},
    {field_criteria, 0},
  [171] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [174] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [177] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_file, 3, .inherited = true},
    {field_file, 4, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_function, 4, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
    {field_line, 4, .inherited = true},
  [188] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [192] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_criteria, 0},
  [196] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [200] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [203] =
    {field_host, 1},
    {field_port, 3},
  [205] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_argument, 6},
    {field_keyword, 0},
  [211] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_criteria, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = alias_sym_pattern,
  },
  [13] = {
    [0] = anon_alias_sym_User,
  },
  [14] = {
    [0] = aux_sym__match_localnetwork_token2,
  },
  [24] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [25] = {
    [0] = sym_variable,
  },
  [30] = {
    [1] = sym_variable,
  },
  [33] = {
    [1] = sym_variable,
  },
  [34] = {
    [1] = alias_sym_pattern,
  },
  [37] = {
    [0] = anon_alias_sym_host,
  },
  [38] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [40] = {
    [1] = aux_sym__match_localnetwork_token2,
  },
  [59] = {
    [0] = alias_sym_pattern,
    [1] = alias_sym_pattern,
  },
  [65] = {
    [3] = aux_sym__match_localnetwork_token2,
  },
  [71] = {
    [1] = alias_sym_pattern,
    [2] = alias_sym_pattern,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__match_exec_repeat1, 2,
    aux_sym__match_exec_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__match_exec_repeat2, 2,
    aux_sym__match_exec_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__match_value_repeat1, 2,
    aux_sym__match_value_repeat1,
    alias_sym_pattern,
  aux_sym__match_value_repeat3, 2,
    aux_sym__match_value_repeat3,
    alias_sym_pattern,
  aux_sym__remote_command_repeat1, 2,
    aux_sym__remote_command_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__send_env_value_repeat1, 2,
    aux_sym__send_env_value_repeat1,
    sym_variable,
  aux_sym__file_string_repeat1, 2,
    aux_sym__file_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__file_string_repeat2, 2,
    aux_sym__file_string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__hosts_string_repeat1, 2,
    aux_sym__hosts_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__hostname_string_repeat1, 2,
    aux_sym__hostname_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__hostname_string_repeat2, 2,
    aux_sym__hostname_string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__proxy_string_repeat1, 2,
    aux_sym__proxy_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__token_string_repeat1, 2,
    aux_sym__token_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__string_repeat1, 2,
    aux_sym__string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__string_repeat2, 2,
    aux_sym__string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__file_pattern_vars_repeat1, 2,
    aux_sym__file_pattern_vars_repeat1,
    alias_sym_pattern,
  aux_sym__file_pattern_vars_repeat2, 2,
    aux_sym__file_pattern_vars_repeat2,
    alias_sym_pattern,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 79,
  [104] = 104,
  [105] = 81,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 81,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 79,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 108,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 84,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 84,
  [145] = 145,
  [146] = 146,
  [147] = 84,
  [148] = 148,
  [149] = 84,
  [150] = 150,
  [151] = 134,
  [152] = 125,
  [153] = 153,
  [154] = 125,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 134,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 148,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 148,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 84,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 214,
  [310] = 310,
  [311] = 311,
  [312] = 237,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 216,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 317,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 766,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 766,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 766,
  [813] = 813,
  [814] = 766,
  [815] = 766,
  [816] = 791,
  [817] = 791,
  [818] = 791,
  [819] = 791,
  [820] = 791,
};

static inline bool aux_sym__file_token_token1_character_set_1(int32_t c) {
  return (c < 'k'
    ? (c < 'L'
      ? (c < 'C'
        ? c == '%'
        : c <= 'C')
      : (c <= 'L' || (c < 'h'
        ? c == 'd'
        : c <= 'i')))
    : (c <= 'l' || (c < 'r'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'p')
      : (c <= 'r' || c == 'u'))));
}

static inline bool aux_sym__hosts_token_token1_character_set_1(int32_t c) {
  return (c < 'h'
    ? (c < 'K'
      ? (c < 'C'
        ? c == '%'
        : (c <= 'C' || (c >= 'H' && c <= 'I')))
      : (c <= 'L' || (c < 'f'
        ? c == 'd'
        : c <= 'f')))
    : (c <= 'i' || (c < 'p'
      ? (c < 'n'
        ? (c >= 'k' && c <= 'l')
        : c <= 'n')
      : (c <= 'p' || (c < 't'
        ? c == 'r'
        : c <= 'u')))));
}

static inline bool sym_token_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < 'K'
      ? (c < 'C'
        ? c == '%'
        : (c <= 'C' || (c >= 'H' && c <= 'I')))
      : (c <= 'L' || (c < 'd'
        ? c == 'T'
        : c <= 'd')))
    : (c <= 'f' || (c < 'p'
      ? (c < 'k'
        ? (c >= 'h' && c <= 'i')
        : (c <= 'l' || c == 'n'))
      : (c <= 'p' || (c < 't'
        ? c == 'r'
        : c <= 'u')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1812);
      if (lookahead == '!') ADVANCE(1815);
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(2019);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '+') ADVANCE(1882);
      if (lookahead == ',') ADVANCE(1850);
      if (lookahead == '-') ADVANCE(1883);
      if (lookahead == ':') ADVANCE(1880);
      if (lookahead == '=') ADVANCE(1978);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead == '@') ADVANCE(1948);
      if (lookahead == 'S') ADVANCE(1822);
      if (lookahead == '^') ADVANCE(1887);
      if (lookahead == 's') ADVANCE(1822);
      if (lookahead == '}') ADVANCE(2039);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1833);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1833);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1822);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1822);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1822);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1822);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'g' ||
          lookahead == 'k') ADVANCE(1822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1822);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2054);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1815);
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '+') ADVANCE(1882);
      if (lookahead == '-') ADVANCE(1883);
      if (lookahead == '0') ADVANCE(2042);
      if (lookahead == ':') ADVANCE(1880);
      if (lookahead == '=') ADVANCE(2051);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead == 'A') ADVANCE(1207);
      if (lookahead == 'C') ADVANCE(779);
      if (lookahead == 'E') ADVANCE(1777);
      if (lookahead == 'F') ADVANCE(1146);
      if (lookahead == 'O') ADVANCE(1535);
      if (lookahead == 'S') ADVANCE(1936);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(659);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 'w') ADVANCE(425);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2052);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1439);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1615);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2043);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == ':') ADVANCE(1880);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1959);
      if (lookahead == '%') ADVANCE(1963);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1960);
      if (lookahead != 0) ADVANCE(1957);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1959);
      if (lookahead == '%') ADVANCE(1962);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1960);
      if (lookahead != 0) ADVANCE(1957);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1828);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1961);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1960);
      if (lookahead != 0) ADVANCE(1957);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1964);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1960);
      if (lookahead != 0) ADVANCE(1957);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == ',') ADVANCE(1850);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '-') ADVANCE(1883);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1972);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(2042);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2046);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2047);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2048);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2049);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2045);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2043);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(243);
      if (lookahead == 'L') ADVANCE(272);
      if (lookahead == 'S') ADVANCE(1949);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == 'h') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'G' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(2044);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(1815);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(1815);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1833);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(1816);
      if (lookahead == '"') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(1816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(2019);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == 'S') ADVANCE(1823);
      if (lookahead == 'n') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '0') ADVANCE(1822);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1833);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead == 'n') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(1827);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(1834);
      if (lookahead == '%') ADVANCE(1836);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0) ADVANCE(1833);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(1834);
      if (lookahead == '%') ADVANCE(1836);
      if (lookahead != 0) ADVANCE(1833);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(2018);
      if (lookahead == 'n') ADVANCE(1825);
      if (lookahead == 'y') ADVANCE(1824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '$') ADVANCE(2018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1836);
      if (lookahead != 0) ADVANCE(1833);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1835);
      if (lookahead != 0) ADVANCE(1833);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == ',') ADVANCE(1850);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0) ADVANCE(1833);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '0') ADVANCE(1822);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead == 'n') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0) ADVANCE(1833);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1833);
      if (lookahead != 0) ADVANCE(1822);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead != 0) ADVANCE(1833);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1832);
      if (lookahead == '*') ADVANCE(1858);
      if (lookahead == 'a') ADVANCE(1844);
      if (lookahead == 'n') ADVANCE(1846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(1959);
      if (lookahead == '%') ADVANCE(1963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1957);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(1959);
      if (lookahead == '%') ADVANCE(1962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1957);
      END_STATE();
    case 48:
      if (lookahead == '%') ADVANCE(1961);
      if (lookahead == 'n') ADVANCE(1958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1957);
      END_STATE();
    case 49:
      if (lookahead == '%') ADVANCE(1964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1957);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == ',') ADVANCE(1850);
      if (lookahead == ':') ADVANCE(1880);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(1857);
      if (lookahead == ':') ADVANCE(1880);
      if (lookahead == '?') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1833);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(1859);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1851);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(398);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(375);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(516);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(434);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(698);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(445);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(704);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(415);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '@') ADVANCE(572);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '@') ADVANCE(550);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(518);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(399);
      if (lookahead == '1') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(676);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(489);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(338);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(646);
      if (lookahead == '4') ADVANCE(90);
      if (lookahead == '6') ADVANCE(91);
      if (lookahead == '8') ADVANCE(91);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(662);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(664);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(558);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(351);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(354);
      END_STATE();
    case 107:
      if (lookahead == '.') ADVANCE(356);
      END_STATE();
    case 108:
      if (lookahead == '.') ADVANCE(357);
      END_STATE();
    case 109:
      if (lookahead == '.') ADVANCE(359);
      END_STATE();
    case 110:
      if (lookahead == '0') ADVANCE(61);
      END_STATE();
    case 111:
      if (lookahead == '0') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == '0') ADVANCE(184);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(2008);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(2010);
      if (lookahead == '2') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(229);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(706);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(1910);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(176);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(2005);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(2005);
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(2012);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(1801);
      if (lookahead == '2') ADVANCE(1801);
      if (lookahead == '3') ADVANCE(1801);
      if (lookahead == '4') ADVANCE(1801);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(225);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(227);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(144);
      if (lookahead == '6') ADVANCE(178);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(226);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == '1') ADVANCE(118);
      END_STATE();
    case 131:
      if (lookahead == '1') ADVANCE(231);
      END_STATE();
    case 132:
      if (lookahead == '1') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == '1') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == '1') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == '1') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == '1') ADVANCE(1483);
      END_STATE();
    case 137:
      if (lookahead == '1') ADVANCE(230);
      END_STATE();
    case 138:
      if (lookahead == '1') ADVANCE(235);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(224);
      if (lookahead == '9') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(110);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(2008);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(2005);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(2012);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(220);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(2011);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(189);
      if (lookahead == '3') ADVANCE(222);
      if (lookahead == '5') ADVANCE(157);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(189);
      if (lookahead == '5') ADVANCE(129);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == '5') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(191);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(120);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(193);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '5') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(114);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(196);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(198);
      if (lookahead == '3') ADVANCE(223);
      if (lookahead == '5') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(198);
      if (lookahead == '5') ADVANCE(135);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(122);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(77);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(80);
      END_STATE();
    case 167:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 168:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 170:
      if (lookahead == '2') ADVANCE(86);
      END_STATE();
    case 171:
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 172:
      if (lookahead == '2') ADVANCE(206);
      END_STATE();
    case 173:
      if (lookahead == '2') ADVANCE(236);
      END_STATE();
    case 174:
      if (lookahead == '2') ADVANCE(207);
      END_STATE();
    case 175:
      if (lookahead == '2') ADVANCE(100);
      END_STATE();
    case 176:
      if (lookahead == '3') ADVANCE(112);
      END_STATE();
    case 177:
      if (lookahead == '4') ADVANCE(2008);
      END_STATE();
    case 178:
      if (lookahead == '4') ADVANCE(70);
      END_STATE();
    case 179:
      if (lookahead == '4') ADVANCE(2005);
      END_STATE();
    case 180:
      if (lookahead == '4') ADVANCE(2012);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(1906);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(216);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(2010);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(234);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(208);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(214);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(186);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(209);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(210);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(190);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(211);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(213);
      END_STATE();
    case 195:
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 196:
      if (lookahead == '5') ADVANCE(217);
      END_STATE();
    case 197:
      if (lookahead == '5') ADVANCE(195);
      END_STATE();
    case 198:
      if (lookahead == '5') ADVANCE(212);
      END_STATE();
    case 199:
      if (lookahead == '5') ADVANCE(133);
      END_STATE();
    case 200:
      if (lookahead == '5') ADVANCE(134);
      END_STATE();
    case 201:
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 202:
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 203:
      if (lookahead == '5') ADVANCE(201);
      END_STATE();
    case 204:
      if (lookahead == '5') ADVANCE(202);
      END_STATE();
    case 205:
      if (lookahead == '5') ADVANCE(137);
      END_STATE();
    case 206:
      if (lookahead == '5') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == '5') ADVANCE(218);
      END_STATE();
    case 208:
      if (lookahead == '6') ADVANCE(1907);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(2008);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(2006);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(2005);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(2012);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(69);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(2011);
      END_STATE();
    case 215:
      if (lookahead == '6') ADVANCE(117);
      END_STATE();
    case 216:
      if (lookahead == '6') ADVANCE(57);
      END_STATE();
    case 217:
      if (lookahead == '6') ADVANCE(235);
      END_STATE();
    case 218:
      if (lookahead == '6') ADVANCE(237);
      END_STATE();
    case 219:
      if (lookahead == '7') ADVANCE(215);
      END_STATE();
    case 220:
      if (lookahead == '8') ADVANCE(70);
      END_STATE();
    case 221:
      if (lookahead == '8') ADVANCE(179);
      END_STATE();
    case 222:
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 223:
      if (lookahead == '8') ADVANCE(180);
      END_STATE();
    case 224:
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 225:
      if (lookahead == '9') ADVANCE(2008);
      END_STATE();
    case 226:
      if (lookahead == '9') ADVANCE(2012);
      END_STATE();
    case 227:
      if (lookahead == '9') ADVANCE(69);
      END_STATE();
    case 228:
      if (lookahead == '9') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 229:
      if (lookahead == '9') ADVANCE(84);
      END_STATE();
    case 230:
      if (lookahead == '9') ADVANCE(88);
      END_STATE();
    case 231:
      if (lookahead == '9') ADVANCE(237);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(1880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1822);
      END_STATE();
    case 233:
      if (lookahead == '@') ADVANCE(550);
      END_STATE();
    case 234:
      if (lookahead == '@') ADVANCE(571);
      END_STATE();
    case 235:
      if (lookahead == '@') ADVANCE(572);
      END_STATE();
    case 236:
      if (lookahead == '@') ADVANCE(573);
      END_STATE();
    case 237:
      if (lookahead == '@') ADVANCE(574);
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(282);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1313);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1492);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(262);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(1223);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(263);
      END_STATE();
    case 242:
      if (lookahead == 'A') ADVANCE(288);
      END_STATE();
    case 243:
      if (lookahead == 'A') ADVANCE(251);
      END_STATE();
    case 244:
      if (lookahead == 'B') ADVANCE(287);
      END_STATE();
    case 245:
      if (lookahead == 'B') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1035);
      END_STATE();
    case 246:
      if (lookahead == 'C') ADVANCE(261);
      END_STATE();
    case 247:
      if (lookahead == 'C') ADVANCE(241);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1316);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(1503);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(2000);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(283);
      END_STATE();
    case 253:
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 254:
      if (lookahead == 'F') ADVANCE(267);
      END_STATE();
    case 255:
      if (lookahead == 'G') ADVANCE(2001);
      END_STATE();
    case 256:
      if (lookahead == 'H') ADVANCE(718);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(593);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1470);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(940);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1262);
      END_STATE();
    case 257:
      if (lookahead == 'H') ADVANCE(291);
      END_STATE();
    case 258:
      if (lookahead == 'H') ADVANCE(2002);
      END_STATE();
    case 259:
      if (lookahead == 'H') ADVANCE(292);
      END_STATE();
    case 260:
      if (lookahead == 'I') ADVANCE(252);
      END_STATE();
    case 261:
      if (lookahead == 'K') ADVANCE(1924);
      END_STATE();
    case 262:
      if (lookahead == 'L') ADVANCE(2000);
      END_STATE();
    case 263:
      if (lookahead == 'L') ADVANCE(1805);
      END_STATE();
    case 264:
      if (lookahead == 'M') ADVANCE(270);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(944);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1319);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1491);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(2002);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(2000);
      END_STATE();
    case 268:
      if (lookahead == 'O') ADVANCE(279);
      END_STATE();
    case 269:
      if (lookahead == 'O') ADVANCE(246);
      END_STATE();
    case 270:
      if (lookahead == 'O') ADVANCE(266);
      END_STATE();
    case 271:
      if (lookahead == 'O') ADVANCE(276);
      END_STATE();
    case 272:
      if (lookahead == 'O') ADVANCE(247);
      END_STATE();
    case 273:
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(719);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1112);
      END_STATE();
    case 274:
      if (lookahead == 'R') ADVANCE(271);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(2000);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(2002);
      END_STATE();
    case 278:
      if (lookahead == 'S') ADVANCE(1841);
      if (lookahead == 'n') ADVANCE(1846);
      if (lookahead == 's') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 279:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 280:
      if (lookahead == 'S') ADVANCE(269);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(253);
      END_STATE();
    case 282:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(2000);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(259);
      END_STATE();
    case 286:
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 287:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 288:
      if (lookahead == 'U') ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == 'U') ADVANCE(284);
      END_STATE();
    case 290:
      if (lookahead == '^') ADVANCE(1903);
      if (lookahead == 'n') ADVANCE(1902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1901);
      END_STATE();
    case 291:
      if (lookahead == '_') ADVANCE(242);
      END_STATE();
    case 292:
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(2008);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(2012);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 331:
      if (lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 332:
      if (lookahead == 'b') ADVANCE(343);
      END_STATE();
    case 333:
      if (lookahead == 'b') ADVANCE(343);
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(488);
      END_STATE();
    case 335:
      if (lookahead == 'b') ADVANCE(554);
      END_STATE();
    case 336:
      if (lookahead == 'b') ADVANCE(310);
      END_STATE();
    case 337:
      if (lookahead == 'b') ADVANCE(565);
      END_STATE();
    case 338:
      if (lookahead == 'b') ADVANCE(568);
      END_STATE();
    case 339:
      if (lookahead == 'b') ADVANCE(506);
      END_STATE();
    case 340:
      if (lookahead == 'b') ADVANCE(623);
      END_STATE();
    case 341:
      if (lookahead == 'b') ADVANCE(330);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(719);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1112);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(2004);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'g') ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(2003);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(497);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(561);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(674);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1208);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(974);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(1953);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(1954);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(2022);
      if (lookahead == 'n') ADVANCE(2029);
      if (lookahead == 's') ADVANCE(2034);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(2003);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1803);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(657);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(626);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(625);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(658);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(660);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1208);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(1967);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(1877);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1999);
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(2003);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 426:
      if (lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 427:
      if (lookahead == 'f') ADVANCE(1986);
      END_STATE();
    case 428:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 429:
      if (lookahead == 'f') ADVANCE(1999);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(426);
      END_STATE();
    case 431:
      if (lookahead == 'f') ADVANCE(427);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1118);
      END_STATE();
    case 432:
      if (lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 433:
      if (lookahead == 'g') ADVANCE(2005);
      END_STATE();
    case 434:
      if (lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 435:
      if (lookahead == 'g') ADVANCE(447);
      END_STATE();
    case 436:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 437:
      if (lookahead == 'g') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(564);
      if (lookahead == 'k') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(534);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1579);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(302);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(390);
      END_STATE();
    case 446:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(582);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(603);
      END_STATE();
    case 449:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 450:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 451:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 468:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 469:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 470:
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 471:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 472:
      if (lookahead == 'h') ADVANCE(546);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1316);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(700);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(1862);
      END_STATE();
    case 495:
      if (lookahead == 'k') ADVANCE(1894);
      END_STATE();
    case 496:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 497:
      if (lookahead == 'k') ADVANCE(404);
      END_STATE();
    case 498:
      if (lookahead == 'k') ADVANCE(99);
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 499:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(710);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1580);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(2004);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(2005);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(2009);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(2007);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(1863);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(2012);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(891);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(941);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(944);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1319);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1491);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(2041);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(1893);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1366);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(552);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(486);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(696);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(567);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(679);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(419);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(2004);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(2008);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(2040);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(2012);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(703);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(1804);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(672);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(682);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(627);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(686);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 660:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 664:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(1867);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(1992);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(1991);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(1999);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 692:
      if (lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(577);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 695:
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 696:
      if (lookahead == 'u') ADVANCE(668);
      END_STATE();
    case 697:
      if (lookahead == 'u') ADVANCE(689);
      END_STATE();
    case 698:
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 699:
      if (lookahead == 'v') ADVANCE(414);
      END_STATE();
    case 700:
      if (lookahead == 'v') ADVANCE(395);
      END_STATE();
    case 701:
      if (lookahead == 'w') ADVANCE(1985);
      END_STATE();
    case 702:
      if (lookahead == 'w') ADVANCE(378);
      END_STATE();
    case 703:
      if (lookahead == 'w') ADVANCE(562);
      END_STATE();
    case 704:
      if (lookahead == 'w') ADVANCE(482);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 707:
      if (lookahead == 'y') ADVANCE(1865);
      END_STATE();
    case 708:
      if (lookahead == 'y') ADVANCE(1999);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(2003);
      END_STATE();
    case 710:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 711:
      if (lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 712:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(718);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1470);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(940);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1262);
      END_STATE();
    case 713:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 714:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1317);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1053);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1480);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1321);
      END_STATE();
    case 716:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1732);
      END_STATE();
    case 717:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1223);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 719:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 720:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1776);
      END_STATE();
    case 721:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1265);
      END_STATE();
    case 722:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1473);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1773);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1291);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1224);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1472);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1587);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1501);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(832);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1505);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(814);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1363);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1209);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1514);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1270);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1255);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1222);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1060);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1508);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1598);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1213);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1214);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 743:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1225);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1675);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1261);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1559);
      END_STATE();
    case 747:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1494);
      END_STATE();
    case 748:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1595);
      END_STATE();
    case 749:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1651);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1516);
      END_STATE();
    case 751:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1520);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1216);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1522);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1588);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1239);
      END_STATE();
    case 756:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1217);
      END_STATE();
    case 757:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1524);
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1687);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1532);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1218);
      END_STATE();
    case 761:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1219);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 763:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1582);
      END_STATE();
    case 764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1737);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1004);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1229);
      END_STATE();
    case 766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1285);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1331);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1230);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1659);
      END_STATE();
    case 771:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1700);
      END_STATE();
    case 772:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1478);
      END_STATE();
    case 773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1332);
      END_STATE();
    case 774:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 775:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1664);
      END_STATE();
    case 776:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 777:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1127);
      END_STATE();
    case 778:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1237);
      END_STATE();
    case 779:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1366);
      END_STATE();
    case 780:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1125);
      END_STATE();
    case 781:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1334);
      END_STATE();
    case 782:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1282);
      END_STATE();
    case 783:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1601);
      END_STATE();
    case 784:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1339);
      END_STATE();
    case 785:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1341);
      END_STATE();
    case 786:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1670);
      END_STATE();
    case 787:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1624);
      END_STATE();
    case 788:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1343);
      END_STATE();
    case 789:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1249);
      END_STATE();
    case 790:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1621);
      END_STATE();
    case 791:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1066);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1148);
      END_STATE();
    case 792:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1703);
      END_STATE();
    case 793:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1068);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1704);
      END_STATE();
    case 795:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1705);
      END_STATE();
    case 796:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1706);
      END_STATE();
    case 797:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1707);
      END_STATE();
    case 798:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1708);
      END_STATE();
    case 799:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1709);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1710);
      END_STATE();
    case 801:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1711);
      END_STATE();
    case 802:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1256);
      END_STATE();
    case 803:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1257);
      END_STATE();
    case 804:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1258);
      END_STATE();
    case 805:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1259);
      END_STATE();
    case 806:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1260);
      END_STATE();
    case 807:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1745);
      END_STATE();
    case 808:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1746);
      END_STATE();
    case 809:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(958);
      END_STATE();
    case 810:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1747);
      END_STATE();
    case 811:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1748);
      END_STATE();
    case 812:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1749);
      END_STATE();
    case 813:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1750);
      END_STATE();
    case 814:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1191);
      END_STATE();
    case 815:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(899);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1775);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1384);
      END_STATE();
    case 816:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(734);
      END_STATE();
    case 817:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(742);
      END_STATE();
    case 818:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1234);
      END_STATE();
    case 819:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1423);
      END_STATE();
    case 820:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1154);
      END_STATE();
    case 821:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1001);
      END_STATE();
    case 822:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1821);
      END_STATE();
    case 823:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1205);
      END_STATE();
    case 824:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1073);
      END_STATE();
    case 825:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1734);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1759);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1583);
      END_STATE();
    case 826:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1076);
      END_STATE();
    case 827:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1203);
      END_STATE();
    case 828:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(722);
      END_STATE();
    case 829:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(824);
      END_STATE();
    case 830:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1084);
      END_STATE();
    case 831:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1204);
      END_STATE();
    case 832:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1555);
      END_STATE();
    case 833:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1712);
      END_STATE();
    case 834:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1227);
      END_STATE();
    case 835:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(844);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1724);
      END_STATE();
    case 836:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1387);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1400);
      END_STATE();
    case 837:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1634);
      END_STATE();
    case 838:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1124);
      END_STATE();
    case 839:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1418);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1365);
      END_STATE();
    case 840:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 841:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(771);
      END_STATE();
    case 842:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 843:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 844:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(953);
      END_STATE();
    case 845:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(756);
      END_STATE();
    case 846:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(761);
      END_STATE();
    case 847:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 848:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(928);
      END_STATE();
    case 849:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(929);
      END_STATE();
    case 850:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      END_STATE();
    case 851:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1079);
      END_STATE();
    case 852:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1702);
      END_STATE();
    case 853:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1529);
      END_STATE();
    case 854:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(775);
      END_STATE();
    case 855:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1362);
      END_STATE();
    case 856:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1051);
      END_STATE();
    case 857:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1459);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1733);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1600);
      END_STATE();
    case 858:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(802);
      END_STATE();
    case 859:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      END_STATE();
    case 860:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1461);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1450);
      END_STATE();
    case 861:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(794);
      END_STATE();
    case 862:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1462);
      END_STATE();
    case 863:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      END_STATE();
    case 864:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1463);
      END_STATE();
    case 865:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      END_STATE();
    case 866:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1464);
      END_STATE();
    case 867:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(797);
      END_STATE();
    case 868:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(798);
      END_STATE();
    case 869:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 870:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      END_STATE();
    case 871:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      END_STATE();
    case 872:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1031);
      END_STATE();
    case 873:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1727);
      END_STATE();
    case 874:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1208);
      END_STATE();
    case 875:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1190);
      END_STATE();
    case 876:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(766);
      END_STATE();
    case 877:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(809);
      END_STATE();
    case 878:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1932);
      END_STATE();
    case 879:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1933);
      END_STATE();
    case 880:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1946);
      END_STATE();
    case 881:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1956);
      END_STATE();
    case 882:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1965);
      END_STATE();
    case 883:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1897);
      END_STATE();
    case 884:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1275);
      END_STATE();
    case 885:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1912);
      END_STATE();
    case 886:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1931);
      END_STATE();
    case 887:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1941);
      END_STATE();
    case 888:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1853);
      END_STATE();
    case 889:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 890:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1137);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 891:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 892:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(909);
      END_STATE();
    case 893:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 894:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1419);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1799);
      END_STATE();
    case 895:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1533);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1136);
      END_STATE();
    case 897:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(921);
      END_STATE();
    case 898:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(956);
      END_STATE();
    case 899:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 900:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1414);
      END_STATE();
    case 901:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1345);
      END_STATE();
    case 902:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1039);
      END_STATE();
    case 903:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1482);
      END_STATE();
    case 904:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(983);
      END_STATE();
    case 905:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(987);
      END_STATE();
    case 906:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1247);
      END_STATE();
    case 907:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1485);
      END_STATE();
    case 908:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1015);
      END_STATE();
    case 909:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1545);
      END_STATE();
    case 910:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1096);
      END_STATE();
    case 911:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(805);
      END_STATE();
    case 912:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(806);
      END_STATE();
    case 913:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      END_STATE();
    case 914:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(811);
      END_STATE();
    case 915:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1579);
      END_STATE();
    case 917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1043);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1774);
      END_STATE();
    case 918:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1784);
      END_STATE();
    case 919:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1921);
      END_STATE();
    case 921:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1869);
      END_STATE();
    case 922:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1935);
      END_STATE();
    case 923:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 924:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1975);
      END_STATE();
    case 925:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 926:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1925);
      END_STATE();
    case 927:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1988);
      END_STATE();
    case 928:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1993);
      END_STATE();
    case 929:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1871);
      END_STATE();
    case 930:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1884);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1968);
      END_STATE();
    case 932:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1995);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1874);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1904);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1913);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1898);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1503);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1752);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1793);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1493);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1736);
      END_STATE();
    case 943:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1786);
      END_STATE();
    case 944:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1798);
      END_STATE();
    case 951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1210);
      END_STATE();
    case 953:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1486);
      END_STATE();
    case 954:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1789);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1512);
      END_STATE();
    case 956:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1314);
      END_STATE();
    case 957:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1796);
      END_STATE();
    case 959:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(833);
      END_STATE();
    case 960:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1785);
      END_STATE();
    case 964:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1506);
      END_STATE();
    case 965:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1617);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1584);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1788);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1536);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 970:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1781);
      END_STATE();
    case 971:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1357);
      END_STATE();
    case 972:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1613);
      END_STATE();
    case 973:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1553);
      END_STATE();
    case 974:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 975:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1420);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(946);
      END_STATE();
    case 977:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1534);
      END_STATE();
    case 978:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1589);
      END_STATE();
    case 979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1305);
      END_STATE();
    case 981:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1495);
      END_STATE();
    case 982:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 983:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 984:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 985:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1504);
      END_STATE();
    case 986:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 987:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1497);
      END_STATE();
    case 988:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 989:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 990:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 991:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1576);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1699);
      END_STATE();
    case 993:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1754);
      END_STATE();
    case 994:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 995:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1046);
      END_STATE();
    case 996:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1590);
      END_STATE();
    case 997:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1288);
      END_STATE();
    case 998:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1787);
      END_STATE();
    case 999:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 1000:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 1001:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1513);
      END_STATE();
    case 1002:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1790);
      END_STATE();
    case 1003:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1593);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1521);
      END_STATE();
    case 1004:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 1005:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1620);
      END_STATE();
    case 1006:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1525);
      END_STATE();
    case 1007:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1791);
      END_STATE();
    case 1008:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1596);
      END_STATE();
    case 1009:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 1010:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1340);
      END_STATE();
    case 1011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1342);
      END_STATE();
    case 1012:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1346);
      END_STATE();
    case 1013:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 1014:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1543);
      END_STATE();
    case 1015:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 1016:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 1017:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 1018:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1359);
      END_STATE();
    case 1019:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1093);
      END_STATE();
    case 1020:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 1021:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 1022:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 1023:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1373);
      END_STATE();
    case 1024:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1374);
      END_STATE();
    case 1025:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1375);
      END_STATE();
    case 1026:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1376);
      END_STATE();
    case 1027:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 1028:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1378);
      END_STATE();
    case 1029:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 1030:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1380);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1490);
      END_STATE();
    case 1032:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 1033:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 1034:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 1035:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1797);
      END_STATE();
    case 1036:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(903);
      END_STATE();
    case 1037:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(735);
      END_STATE();
    case 1038:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(776);
      END_STATE();
    case 1039:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(777);
      END_STATE();
    case 1040:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(767);
      END_STATE();
    case 1041:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1474);
      END_STATE();
    case 1042:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 1043:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(968);
      END_STATE();
    case 1044:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1142);
      END_STATE();
    case 1045:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1692);
      END_STATE();
    case 1046:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1153);
      END_STATE();
    case 1047:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(778);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1437);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(720);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1014);
      END_STATE();
    case 1048:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1445);
      END_STATE();
    case 1049:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1155);
      END_STATE();
    case 1050:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1157);
      END_STATE();
    case 1051:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1453);
      END_STATE();
    case 1052:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1456);
      END_STATE();
    case 1053:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1989);
      END_STATE();
    case 1054:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1984);
      END_STATE();
    case 1055:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1037);
      END_STATE();
    case 1056:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1304);
      END_STATE();
    case 1057:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1570);
      END_STATE();
    case 1058:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(986);
      END_STATE();
    case 1059:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1353);
      END_STATE();
    case 1060:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1058);
      END_STATE();
    case 1061:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(960);
      END_STATE();
    case 1062:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1442);
      END_STATE();
    case 1063:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1009);
      END_STATE();
    case 1064:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1010);
      END_STATE();
    case 1065:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1151);
      END_STATE();
    case 1066:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1011);
      END_STATE();
    case 1067:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(786);
      END_STATE();
    case 1068:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1012);
      END_STATE();
    case 1069:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1449);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      END_STATE();
    case 1070:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1452);
      END_STATE();
    case 1071:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1455);
      END_STATE();
    case 1072:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1458);
      END_STATE();
    case 1073:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1817);
      END_STATE();
    case 1074:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1896);
      END_STATE();
    case 1075:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1905);
      END_STATE();
    case 1076:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1267);
      END_STATE();
    case 1077:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1271);
      END_STATE();
    case 1078:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(754);
      END_STATE();
    case 1079:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(969);
      END_STATE();
    case 1080:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1233);
      END_STATE();
    case 1081:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(955);
      END_STATE();
    case 1082:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1273);
      END_STATE();
    case 1083:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(971);
      END_STATE();
    case 1084:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(747);
      END_STATE();
    case 1085:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1277);
      END_STATE();
    case 1086:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1279);
      END_STATE();
    case 1087:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1196);
      END_STATE();
    case 1088:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1280);
      END_STATE();
    case 1089:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1415);
      END_STATE();
    case 1090:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1429);
      END_STATE();
    case 1091:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1431);
      END_STATE();
    case 1092:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1433);
      END_STATE();
    case 1093:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1448);
      END_STATE();
    case 1094:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1451);
      END_STATE();
    case 1095:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1454);
      END_STATE();
    case 1096:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1457);
      END_STATE();
    case 1097:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1436);
      END_STATE();
    case 1098:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1438);
      END_STATE();
    case 1099:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1440);
      END_STATE();
    case 1100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1460);
      END_STATE();
    case 1101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1023);
      END_STATE();
    case 1102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1024);
      END_STATE();
    case 1103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1025);
      END_STATE();
    case 1104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1026);
      END_STATE();
    case 1105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1027);
      END_STATE();
    case 1106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1028);
      END_STATE();
    case 1107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1029);
      END_STATE();
    case 1108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1030);
      END_STATE();
    case 1109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 1110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1313);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1492);
      END_STATE();
    case 1111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1035);
      END_STATE();
    case 1112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1677);
      END_STATE();
    case 1113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1059);
      END_STATE();
    case 1114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1044);
      END_STATE();
    case 1115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      END_STATE();
    case 1116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1056);
      END_STATE();
    case 1117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1468);
      END_STATE();
    case 1118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1065);
      END_STATE();
    case 1119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1633);
      END_STATE();
    case 1120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1635);
      END_STATE();
    case 1121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 1122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1649);
      END_STATE();
    case 1123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(904);
      END_STATE();
    case 1124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 1125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1344);
      END_STATE();
    case 1126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1231);
      END_STATE();
    case 1127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1245);
      END_STATE();
    case 1128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1324);
      END_STATE();
    case 1129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1636);
      END_STATE();
    case 1130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1676);
      END_STATE();
    case 1131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(972);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(791);
      END_STATE();
    case 1132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1658);
      END_STATE();
    case 1133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      END_STATE();
    case 1134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      END_STATE();
    case 1135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1800);
      END_STATE();
    case 1136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1326);
      END_STATE();
    case 1137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1330);
      END_STATE();
    case 1138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1328);
      END_STATE();
    case 1139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1276);
      END_STATE();
    case 1140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1350);
      END_STATE();
    case 1141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 1143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1756);
      END_STATE();
    case 1144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1327);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1422);
      END_STATE();
    case 1146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 1147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1757);
      END_STATE();
    case 1148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1240);
      END_STATE();
    case 1149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1397);
      END_STATE();
    case 1150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1338);
      END_STATE();
    case 1151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1370);
      END_STATE();
    case 1152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1758);
      END_STATE();
    case 1153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1241);
      END_STATE();
    case 1154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1336);
      END_STATE();
    case 1155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1242);
      END_STATE();
    case 1156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1401);
      END_STATE();
    case 1157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1243);
      END_STATE();
    case 1158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1403);
      END_STATE();
    case 1159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 1160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      END_STATE();
    case 1161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1605);
      END_STATE();
    case 1162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1406);
      END_STATE();
    case 1163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 1164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1408);
      END_STATE();
    case 1165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1424);
      END_STATE();
    case 1166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1409);
      END_STATE();
    case 1167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 1168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1286);
      END_STATE();
    case 1169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 1170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1681);
      END_STATE();
    case 1171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1693);
      END_STATE();
    case 1172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1443);
      END_STATE();
    case 1173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1744);
      END_STATE();
    case 1174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1683);
      END_STATE();
    case 1175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1684);
      END_STATE();
    case 1176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1686);
      END_STATE();
    case 1177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 1178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 1179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(863);
      END_STATE();
    case 1180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      END_STATE();
    case 1181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 1182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      END_STATE();
    case 1183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      END_STATE();
    case 1184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 1185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 1186:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1980);
      END_STATE();
    case 1187:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1983);
      END_STATE();
    case 1188:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1837);
      END_STATE();
    case 1189:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(918);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1389);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1731);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1421);
      END_STATE();
    case 1190:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(939);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 1191:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(943);
      END_STATE();
    case 1192:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(725);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(738);
      END_STATE();
    case 1193:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(976);
      END_STATE();
    case 1194:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(947);
      END_STATE();
    case 1195:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(950);
      END_STATE();
    case 1196:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(954);
      END_STATE();
    case 1197:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(963);
      END_STATE();
    case 1198:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(967);
      END_STATE();
    case 1199:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(970);
      END_STATE();
    case 1200:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1002);
      END_STATE();
    case 1201:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1352);
      END_STATE();
    case 1202:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1007);
      END_STATE();
    case 1203:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1144);
      END_STATE();
    case 1204:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1252);
      END_STATE();
    case 1205:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1090);
      END_STATE();
    case 1206:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1372);
      END_STATE();
    case 1207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1208);
      END_STATE();
    case 1208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1818);
      END_STATE();
    case 1209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      END_STATE();
    case 1210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1990);
      END_STATE();
    case 1211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1269);
      END_STATE();
    case 1212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1934);
      END_STATE();
    case 1213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(894);
      END_STATE();
    case 1214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1069);
      END_STATE();
    case 1215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1979);
      END_STATE();
    case 1216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1974);
      END_STATE();
    case 1217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1873);
      END_STATE();
    case 1218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1820);
      END_STATE();
    case 1219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1351);
      END_STATE();
    case 1220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1819);
      END_STATE();
    case 1221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1385);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1586);
      END_STATE();
    case 1222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1206);
      END_STATE();
    case 1223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1062);
      END_STATE();
    case 1225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(820);
      END_STATE();
    case 1226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1386);
      END_STATE();
    case 1227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(993);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(964);
      END_STATE();
    case 1228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1168);
      END_STATE();
    case 1229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1254);
      END_STATE();
    case 1230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1143);
      END_STATE();
    case 1231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1780);
      END_STATE();
    case 1232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1018);
      END_STATE();
    case 1233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1425);
      END_STATE();
    case 1234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(919);
      END_STATE();
    case 1235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 1236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1782);
      END_STATE();
    case 1237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1244);
      END_STATE();
    case 1238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(945);
      END_STATE();
    case 1239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1575);
      END_STATE();
    case 1240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(926);
      END_STATE();
    case 1241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(930);
      END_STATE();
    case 1242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 1243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 1244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 1245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1742);
      END_STATE();
    case 1246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1128);
      END_STATE();
    case 1247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1140);
      END_STATE();
    case 1248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1132);
      END_STATE();
    case 1249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1147);
      END_STATE();
    case 1250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1428);
      END_STATE();
    case 1251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1430);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      END_STATE();
    case 1252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1432);
      END_STATE();
    case 1253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1434);
      END_STATE();
    case 1254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1052);
      END_STATE();
    case 1255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1095);
      END_STATE();
    case 1256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1098);
      END_STATE();
    case 1257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1099);
      END_STATE();
    case 1258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1070);
      END_STATE();
    case 1259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1071);
      END_STATE();
    case 1260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1072);
      END_STATE();
    case 1261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(864);
      END_STATE();
    case 1262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1471);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1325);
      END_STATE();
    case 1263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(821);
      END_STATE();
    case 1264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1467);
      END_STATE();
    case 1265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1115);
      END_STATE();
    case 1266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1272);
      END_STATE();
    case 1267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1394);
      END_STATE();
    case 1268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1475);
      END_STATE();
    case 1269:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 1270:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(920);
      END_STATE();
    case 1271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1560);
      END_STATE();
    case 1272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(768);
      END_STATE();
    case 1273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1567);
      END_STATE();
    case 1274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(780);
      END_STATE();
    case 1275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(763);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1337);
      END_STATE();
    case 1276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(975);
      END_STATE();
    case 1277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1571);
      END_STATE();
    case 1278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 1279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1574);
      END_STATE();
    case 1280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1577);
      END_STATE();
    case 1281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(933);
      END_STATE();
    case 1282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(991);
      END_STATE();
    case 1283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1119);
      END_STATE();
    case 1284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1476);
      END_STATE();
    case 1285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1126);
      END_STATE();
    case 1286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1129);
      END_STATE();
    case 1287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1171);
      END_STATE();
    case 1288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1427);
      END_STATE();
    case 1289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(773);
      END_STATE();
    case 1290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1016);
      END_STATE();
    case 1291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1250);
      END_STATE();
    case 1292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(781);
      END_STATE();
    case 1293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(784);
      END_STATE();
    case 1294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(785);
      END_STATE();
    case 1295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(788);
      END_STATE();
    case 1296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1289);
      END_STATE();
    case 1297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1292);
      END_STATE();
    case 1298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1293);
      END_STATE();
    case 1299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1294);
      END_STATE();
    case 1300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1295);
      END_STATE();
    case 1301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1889);
      END_STATE();
    case 1302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1926);
      END_STATE();
    case 1303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1998);
      END_STATE();
    case 1304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1899);
      END_STATE();
    case 1305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1942);
      END_STATE();
    case 1306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1914);
      END_STATE();
    case 1307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1952);
      END_STATE();
    case 1308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1940);
      END_STATE();
    case 1309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1908);
      END_STATE();
    case 1310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1918);
      END_STATE();
    case 1311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1928);
      END_STATE();
    case 1312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1929);
      END_STATE();
    case 1313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1061);
      END_STATE();
    case 1314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1751);
      END_STATE();
    case 1315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1388);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1113);
      END_STATE();
    case 1316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 1317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 1318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      END_STATE();
    case 1319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1391);
      END_STATE();
    case 1320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1741);
      END_STATE();
    case 1321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1329);
      END_STATE();
    case 1322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1134);
      END_STATE();
    case 1323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1680);
      END_STATE();
    case 1324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 1325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1000);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1510);
      END_STATE();
    case 1326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1057);
      END_STATE();
    case 1327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1054);
      END_STATE();
    case 1328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1690);
      END_STATE();
    case 1329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(952);
      END_STATE();
    case 1330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1320);
      END_STATE();
    case 1331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(878);
      END_STATE();
    case 1332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 1333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1650);
      END_STATE();
    case 1334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 1335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1236);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 1337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1246);
      END_STATE();
    case 1338:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1653);
      END_STATE();
    case 1339:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 1340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1637);
      END_STATE();
    case 1341:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 1342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1638);
      END_STATE();
    case 1343:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      END_STATE();
    case 1344:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1564);
      END_STATE();
    case 1345:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1565);
      END_STATE();
    case 1346:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1639);
      END_STATE();
    case 1347:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1682);
      END_STATE();
    case 1348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1573);
      END_STATE();
    case 1349:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 1350:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(936);
      END_STATE();
    case 1351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(992);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1616);
      END_STATE();
    case 1352:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 1353:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 1354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 1355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(758);
      END_STATE();
    case 1356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1630);
      END_STATE();
    case 1357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1701);
      END_STATE();
    case 1358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1661);
      END_STATE();
    case 1359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1063);
      END_STATE();
    case 1360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1201);
      END_STATE();
    case 1361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1042);
      END_STATE();
    case 1362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 1363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1695);
      END_STATE();
    case 1364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 1365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1697);
      END_STATE();
    case 1366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1441);
      END_STATE();
    case 1367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1091);
      END_STATE();
    case 1368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1097);
      END_STATE();
    case 1369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1100);
      END_STATE();
    case 1370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 1371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1465);
      END_STATE();
    case 1372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1466);
      END_STATE();
    case 1373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1714);
      END_STATE();
    case 1374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1715);
      END_STATE();
    case 1375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1716);
      END_STATE();
    case 1376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1717);
      END_STATE();
    case 1377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1718);
      END_STATE();
    case 1378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1719);
      END_STATE();
    case 1379:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1720);
      END_STATE();
    case 1380:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1721);
      END_STATE();
    case 1381:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1580);
      END_STATE();
    case 1382:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 1383:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1263);
      END_STATE();
    case 1384:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1761);
      END_STATE();
    case 1385:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 1386:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1055);
      END_STATE();
    case 1387:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1266);
      END_STATE();
    case 1388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1322);
      END_STATE();
    case 1389:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1656);
      END_STATE();
    case 1390:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1041);
      END_STATE();
    case 1391:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1515);
      END_STATE();
    case 1392:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1318);
      END_STATE();
    case 1393:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1556);
      END_STATE();
    case 1394:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 1395:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1211);
      END_STATE();
    case 1396:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1484);
      END_STATE();
    case 1397:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1301);
      END_STATE();
    case 1398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1335);
      END_STATE();
    case 1399:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1511);
      END_STATE();
    case 1400:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1502);
      END_STATE();
    case 1401:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1303);
      END_STATE();
    case 1402:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1356);
      END_STATE();
    case 1403:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1306);
      END_STATE();
    case 1404:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1307);
      END_STATE();
    case 1405:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(793);
      END_STATE();
    case 1406:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1308);
      END_STATE();
    case 1407:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1309);
      END_STATE();
    case 1408:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1310);
      END_STATE();
    case 1409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1311);
      END_STATE();
    case 1410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1526);
      END_STATE();
    case 1411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1312);
      END_STATE();
    case 1412:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1552);
      END_STATE();
    case 1413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1509);
      END_STATE();
    case 1414:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1665);
      END_STATE();
    case 1415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1591);
      END_STATE();
    case 1416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1762);
      END_STATE();
    case 1417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1753);
      END_STATE();
    case 1418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1743);
      END_STATE();
    case 1419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1274);
      END_STATE();
    case 1420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1739);
      END_STATE();
    case 1421:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1194);
      END_STATE();
    case 1422:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1423:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1604);
      END_STATE();
    case 1424:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1348);
      END_STATE();
    case 1425:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(841);
      END_STATE();
    case 1426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1740);
      END_STATE();
    case 1427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1667);
      END_STATE();
    case 1428:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 1429:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1611);
      END_STATE();
    case 1430:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(843);
      END_STATE();
    case 1431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1597);
      END_STATE();
    case 1432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 1433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1599);
      END_STATE();
    case 1434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 1435:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 1436:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1602);
      END_STATE();
    case 1437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1606);
      END_STATE();
    case 1438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1607);
      END_STATE();
    case 1439:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1608);
      END_STATE();
    case 1440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1609);
      END_STATE();
    case 1441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1364);
      END_STATE();
    case 1442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1538);
      END_STATE();
    case 1443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1361);
      END_STATE();
    case 1444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1284);
      END_STATE();
    case 1445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1539);
      END_STATE();
    case 1446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1355);
      END_STATE();
    case 1447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1760);
      END_STATE();
    case 1448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1622);
      END_STATE();
    case 1449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1542);
      END_STATE();
    case 1450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1544);
      END_STATE();
    case 1451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1623);
      END_STATE();
    case 1452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1546);
      END_STATE();
    case 1453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1547);
      END_STATE();
    case 1454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1625);
      END_STATE();
    case 1455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1548);
      END_STATE();
    case 1456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1549);
      END_STATE();
    case 1457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1626);
      END_STATE();
    case 1458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1550);
      END_STATE();
    case 1459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1296);
      END_STATE();
    case 1460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1629);
      END_STATE();
    case 1461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1297);
      END_STATE();
    case 1462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1298);
      END_STATE();
    case 1463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1299);
      END_STATE();
    case 1464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1300);
      END_STATE();
    case 1465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1771);
      END_STATE();
    case 1466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1772);
      END_STATE();
    case 1467:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1947);
      END_STATE();
    case 1468:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1885);
      END_STATE();
    case 1469:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(891);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(941);
      END_STATE();
    case 1470:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1081);
      END_STATE();
    case 1471:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1540);
      END_STATE();
    case 1472:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1109);
      END_STATE();
    case 1473:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(948);
      END_STATE();
    case 1474:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(790);
      END_STATE();
    case 1475:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1663);
      END_STATE();
    case 1476:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1666);
      END_STATE();
    case 1477:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(924);
      END_STATE();
    case 1478:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 1479:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(988);
      END_STATE();
    case 1480:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1193);
      END_STATE();
    case 1481:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1541);
      END_STATE();
    case 1482:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(783);
      END_STATE();
    case 1483:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1517);
      END_STATE();
    case 1484:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(980);
      END_STATE();
    case 1485:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1523);
      END_STATE();
    case 1486:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1668);
      END_STATE();
    case 1487:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1402);
      END_STATE();
    case 1488:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(789);
      END_STATE();
    case 1489:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1551);
      END_STATE();
    case 1490:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1722);
      END_STATE();
    case 1491:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1393);
      END_STATE();
    case 1492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1192);
      END_STATE();
    case 1493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1855);
      END_STATE();
    case 1494:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1900);
      END_STATE();
    case 1495:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1892);
      END_STATE();
    case 1496:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1943);
      END_STATE();
    case 1497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1970);
      END_STATE();
    case 1498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1854);
      END_STATE();
    case 1499:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1856);
      END_STATE();
    case 1500:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1647);
      END_STATE();
    case 1501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1283);
      END_STATE();
    case 1502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1764);
      END_STATE();
    case 1503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1755);
      END_STATE();
    case 1505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1632);
      END_STATE();
    case 1506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(819);
      END_STATE();
    case 1507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1481);
      END_STATE();
    case 1508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 1509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1188);
      END_STATE();
    case 1510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1395);
      END_STATE();
    case 1511:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 1512:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1557);
      END_STATE();
    case 1513:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1390);
      END_STATE();
    case 1514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 1515:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 1516:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 1517:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1417);
      END_STATE();
    case 1518:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 1519:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1594);
      END_STATE();
    case 1520:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(902);
      END_STATE();
    case 1521:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 1522:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 1523:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1444);
      END_STATE();
    case 1524:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 1525:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 1526:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 1527:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 1528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 1529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1013);
      END_STATE();
    case 1530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 1531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1020);
      END_STATE();
    case 1532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 1533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1603);
      END_STATE();
    case 1534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 1535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1118);
      END_STATE();
    case 1536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1527);
      END_STATE();
    case 1537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      END_STATE();
    case 1538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1130);
      END_STATE();
    case 1539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1765);
      END_STATE();
    case 1540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1005);
      END_STATE();
    case 1541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1150);
      END_STATE();
    case 1542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 1543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1287);
      END_STATE();
    case 1544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1767);
      END_STATE();
    case 1545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1008);
      END_STATE();
    case 1546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1174);
      END_STATE();
    case 1547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1768);
      END_STATE();
    case 1548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1770);
      END_STATE();
    case 1550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 1551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1447);
      END_STATE();
    case 1552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1253);
      END_STATE();
    case 1553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      END_STATE();
    case 1554:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1937);
      END_STATE();
    case 1555:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 1556:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1927);
      END_STATE();
    case 1557:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1886);
      END_STATE();
    case 1558:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1870);
      END_STATE();
    case 1559:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1920);
      END_STATE();
    case 1560:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1930);
      END_STATE();
    case 1561:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1994);
      END_STATE();
    case 1562:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1950);
      END_STATE();
    case 1563:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1969);
      END_STATE();
    case 1564:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1872);
      END_STATE();
    case 1565:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1996);
      END_STATE();
    case 1566:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1917);
      END_STATE();
    case 1567:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 1568:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1890);
      END_STATE();
    case 1569:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1875);
      END_STATE();
    case 1570:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1888);
      END_STATE();
    case 1571:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1881);
      END_STATE();
    case 1572:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1939);
      END_STATE();
    case 1573:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1945);
      END_STATE();
    case 1574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1951);
      END_STATE();
    case 1575:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1915);
      END_STATE();
    case 1576:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1876);
      END_STATE();
    case 1577:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1916);
      END_STATE();
    case 1578:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1763);
      END_STATE();
    case 1579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1226);
      END_STATE();
    case 1580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1631);
      END_STATE();
    case 1581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1735);
      END_STATE();
    case 1582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1186);
      END_STATE();
    case 1583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1145);
      END_STATE();
    case 1584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1087);
      END_STATE();
    case 1585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1040);
      END_STATE();
    case 1586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(727);
      END_STATE();
    case 1587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1578);
      END_STATE();
    case 1588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 1589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1487);
      END_STATE();
    case 1590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1585);
      END_STATE();
    case 1591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1673);
      END_STATE();
    case 1592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      END_STATE();
    case 1593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1678);
      END_STATE();
    case 1594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1161);
      END_STATE();
    case 1595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 1596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1558);
      END_STATE();
    case 1597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(961);
      END_STATE();
    case 1599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1685);
      END_STATE();
    case 1600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(949);
      END_STATE();
    case 1601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1562);
      END_STATE();
    case 1602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1662);
      END_STATE();
    case 1603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(748);
      END_STATE();
    case 1604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      END_STATE();
    case 1605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1641);
      END_STATE();
    case 1606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1679);
      END_STATE();
    case 1607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1643);
      END_STATE();
    case 1608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1644);
      END_STATE();
    case 1609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1645);
      END_STATE();
    case 1610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1116);
      END_STATE();
    case 1611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1654);
      END_STATE();
    case 1612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1655);
      END_STATE();
    case 1613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1398);
      END_STATE();
    case 1614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1671);
      END_STATE();
    case 1615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(989);
      END_STATE();
    case 1616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(990);
      END_STATE();
    case 1617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(850);
      END_STATE();
    case 1618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1766);
      END_STATE();
    case 1619:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1149);
      END_STATE();
    case 1620:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1619);
      END_STATE();
    case 1621:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1618);
      END_STATE();
    case 1622:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1688);
      END_STATE();
    case 1623:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1689);
      END_STATE();
    case 1624:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1696);
      END_STATE();
    case 1625:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1691);
      END_STATE();
    case 1626:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1694);
      END_STATE();
    case 1627:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1049);
      END_STATE();
    case 1628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1050);
      END_STATE();
    case 1629:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1713);
      END_STATE();
    case 1630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      END_STATE();
    case 1631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1814);
      END_STATE();
    case 1632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1944);
      END_STATE();
    case 1633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1251);
      END_STATE();
    case 1634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 1635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 1636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1955);
      END_STATE();
    case 1637:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1909);
      END_STATE();
    case 1638:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1923);
      END_STATE();
    case 1639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1861);
      END_STATE();
    case 1640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1891);
      END_STATE();
    case 1641:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1895);
      END_STATE();
    case 1642:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1911);
      END_STATE();
    case 1643:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1938);
      END_STATE();
    case 1644:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1813);
      END_STATE();
    case 1645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1852);
      END_STATE();
    case 1646:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(826);
      END_STATE();
    case 1647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 1648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 1649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1794);
      END_STATE();
    case 1650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1792);
      END_STATE();
    case 1651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1074);
      END_STATE();
    case 1652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1779);
      END_STATE();
    case 1653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1078);
      END_STATE();
    case 1654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      END_STATE();
    case 1655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1405);
      END_STATE();
    case 1656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 1657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1592);
      END_STATE();
    case 1658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 1659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 1660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1652);
      END_STATE();
    case 1661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1627);
      END_STATE();
    case 1663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1568);
      END_STATE();
    case 1664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      END_STATE();
    case 1665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1569);
      END_STATE();
    case 1666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1572);
      END_STATE();
    case 1667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(979);
      END_STATE();
    case 1668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(994);
      END_STATE();
    case 1669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(957);
      END_STATE();
    case 1670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      END_STATE();
    case 1671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(982);
      END_STATE();
    case 1672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(984);
      END_STATE();
    case 1673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      END_STATE();
    case 1674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 1675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1738);
      END_STATE();
    case 1676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 1677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 1678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1660);
      END_STATE();
    case 1679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1354);
      END_STATE();
    case 1680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1120);
      END_STATE();
    case 1681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1082);
      END_STATE();
    case 1682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1278);
      END_STATE();
    case 1683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1085);
      END_STATE();
    case 1684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1086);
      END_STATE();
    case 1685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 1686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1088);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1669);
      END_STATE();
    case 1688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1200);
      END_STATE();
    case 1689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1198);
      END_STATE();
    case 1690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1006);
      END_STATE();
    case 1691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1672);
      END_STATE();
    case 1694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 1695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(977);
      END_STATE();
    case 1696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(981);
      END_STATE();
    case 1697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      END_STATE();
    case 1698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1795);
      END_STATE();
    case 1699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1769);
      END_STATE();
    case 1700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1156);
      END_STATE();
    case 1701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1177);
      END_STATE();
    case 1702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1152);
      END_STATE();
    case 1703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1158);
      END_STATE();
    case 1704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      END_STATE();
    case 1705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1159);
      END_STATE();
    case 1706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1162);
      END_STATE();
    case 1707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1163);
      END_STATE();
    case 1708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1164);
      END_STATE();
    case 1709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1092);
      END_STATE();
    case 1713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1628);
      END_STATE();
    case 1714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1178);
      END_STATE();
    case 1715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1179);
      END_STATE();
    case 1716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 1717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1181);
      END_STATE();
    case 1718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 1719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1183);
      END_STATE();
    case 1720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1184);
      END_STATE();
    case 1721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 1722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 1723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1101);
      END_STATE();
    case 1724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1102);
      END_STATE();
    case 1725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 1726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 1727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 1728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1106);
      END_STATE();
    case 1729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 1730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 1731:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1003);
      END_STATE();
    case 1732:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1648);
      END_STATE();
    case 1733:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1264);
      END_STATE();
    case 1734:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1537);
      END_STATE();
    case 1735:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(733);
      END_STATE();
    case 1736:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1360);
      END_STATE();
    case 1737:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1674);
      END_STATE();
    case 1738:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1531);
      END_STATE();
    case 1739:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1640);
      END_STATE();
    case 1740:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1642);
      END_STATE();
    case 1741:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1235);
      END_STATE();
    case 1742:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1530);
      END_STATE();
    case 1743:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1347);
      END_STATE();
    case 1744:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1614);
      END_STATE();
    case 1745:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1723);
      END_STATE();
    case 1746:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1725);
      END_STATE();
    case 1747:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1726);
      END_STATE();
    case 1748:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1728);
      END_STATE();
    case 1749:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1729);
      END_STATE();
    case 1750:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1730);
      END_STATE();
    case 1751:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1971);
      END_STATE();
    case 1752:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1141);
      END_STATE();
    case 1753:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1123);
      END_STATE();
    case 1754:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(962);
      END_STATE();
    case 1755:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(752);
      END_STATE();
    case 1756:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(923);
      END_STATE();
    case 1757:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(927);
      END_STATE();
    case 1758:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1032);
      END_STATE();
    case 1759:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(999);
      END_STATE();
    case 1760:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1169);
      END_STATE();
    case 1761:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1367);
      END_STATE();
    case 1762:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1302);
      END_STATE();
    case 1763:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1399);
      END_STATE();
    case 1764:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(750);
      END_STATE();
    case 1765:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(751);
      END_STATE();
    case 1766:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1410);
      END_STATE();
    case 1767:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(753);
      END_STATE();
    case 1768:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(757);
      END_STATE();
    case 1769:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1413);
      END_STATE();
    case 1770:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(759);
      END_STATE();
    case 1771:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1368);
      END_STATE();
    case 1772:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1369);
      END_STATE();
    case 1773:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1973);
      END_STATE();
    case 1774:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1778);
      END_STATE();
    case 1775:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(726);
      END_STATE();
    case 1776:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(900);
      END_STATE();
    case 1777:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(974);
      END_STATE();
    case 1778:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(857);
      END_STATE();
    case 1779:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1966);
      END_STATE();
    case 1780:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1864);
      END_STATE();
    case 1781:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1997);
      END_STATE();
    case 1782:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1922);
      END_STATE();
    case 1783:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1987);
      END_STATE();
    case 1784:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1228);
      END_STATE();
    case 1785:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(851);
      END_STATE();
    case 1786:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(717);
      END_STATE();
    case 1787:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 1788:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(901);
      END_STATE();
    case 1789:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1610);
      END_STATE();
    case 1790:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1561);
      END_STATE();
    case 1791:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1563);
      END_STATE();
    case 1792:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1477);
      END_STATE();
    case 1793:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1612);
      END_STATE();
    case 1794:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1195);
      END_STATE();
    case 1795:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1479);
      END_STATE();
    case 1796:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1698);
      END_STATE();
    case 1797:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1094);
      END_STATE();
    case 1798:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1489);
      END_STATE();
    case 1799:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(925);
      END_STATE();
    case 1800:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(931);
      END_STATE();
    case 1801:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1999);
      END_STATE();
    case 1802:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1982);
      END_STATE();
    case 1803:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1981);
      END_STATE();
    case 1804:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1999);
      END_STATE();
    case 1805:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2002);
      END_STATE();
    case 1806:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1802);
      END_STATE();
    case 1807:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1803);
      END_STATE();
    case 1808:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 1809:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1810:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1851);
      END_STATE();
    case 1811:
      if (eof) ADVANCE(1812);
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '#') ADVANCE(2050);
      if (lookahead == '+') ADVANCE(1882);
      if (lookahead == ',') ADVANCE(1850);
      if (lookahead == '-') ADVANCE(1883);
      if (lookahead == '0') ADVANCE(1806);
      if (lookahead == '3') ADVANCE(374);
      if (lookahead == ':') ADVANCE(1880);
      if (lookahead == '=') ADVANCE(1978);
      if (lookahead == '@') ADVANCE(1948);
      if (lookahead == 'A') ADVANCE(874);
      if (lookahead == 'C') ADVANCE(712);
      if (lookahead == 'D') ADVANCE(248);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'F') ADVANCE(238);
      if (lookahead == 'H') ADVANCE(1381);
      if (lookahead == 'I') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(713);
      if (lookahead == 'Q') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'S') ADVANCE(916);
      if (lookahead == 'U') ADVANCE(1469);
      if (lookahead == 'V') ADVANCE(249);
      if (lookahead == '^') ADVANCE(1887);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(1110);
      if (lookahead == 'h') ADVANCE(508);
      if (lookahead == 'i') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == 'u') ADVANCE(519);
      if (lookahead == 'v') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(389);
      if (lookahead == '}') ADVANCE(2039);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(714);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1221);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(815);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(728);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(716);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1807);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(739);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(998);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym_match_declaration_token1);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__all_token1);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__match_canonical_token1);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__match_final_token1);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__match_exec_token1);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'S') ADVANCE(257);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(2041);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2038);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2015);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2043);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2013);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2038);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2015);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2013);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token1);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == ':') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'S') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'h') ADVANCE(1840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 's') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'y') ADVANCE(1866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1851);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__match_originalhost_token1);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__match_tagged_token1);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1371);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym__match_localuser_token1);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1851);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1868);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1849);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym__dynamic_forward_token1);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1173);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__proxy_jump_arg_token1);
      if (lookahead == 'S') ADVANCE(1949);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '{') ADVANCE(2038);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2016);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2013);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(2014);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (sym_token_character_set_1(lookahead)) ADVANCE(2017);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_subsystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1981);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__syslog_facility_token1);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(938);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2000);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_facility);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(503);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(403);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(2038);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'a') ADVANCE(2035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'b') ADVANCE(2030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'f') ADVANCE(2020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'l') ADVANCE(2032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'm') ADVANCE(1976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'n') ADVANCE(2023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'o') ADVANCE(2028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(2024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'y') ADVANCE(2031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2037);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2043);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2050);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2051);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(2051);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2052);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1811},
  [2] = {.lex_state = 1811},
  [3] = {.lex_state = 1811},
  [4] = {.lex_state = 1811},
  [5] = {.lex_state = 1811},
  [6] = {.lex_state = 1811},
  [7] = {.lex_state = 1811},
  [8] = {.lex_state = 1811},
  [9] = {.lex_state = 1811},
  [10] = {.lex_state = 1811},
  [11] = {.lex_state = 1811},
  [12] = {.lex_state = 1811},
  [13] = {.lex_state = 1811},
  [14] = {.lex_state = 1811},
  [15] = {.lex_state = 1811},
  [16] = {.lex_state = 1811},
  [17] = {.lex_state = 1811},
  [18] = {.lex_state = 1811},
  [19] = {.lex_state = 1811},
  [20] = {.lex_state = 1811},
  [21] = {.lex_state = 1811},
  [22] = {.lex_state = 1811},
  [23] = {.lex_state = 1811},
  [24] = {.lex_state = 1811},
  [25] = {.lex_state = 1811},
  [26] = {.lex_state = 1811},
  [27] = {.lex_state = 1811},
  [28] = {.lex_state = 1811},
  [29] = {.lex_state = 1811},
  [30] = {.lex_state = 1811},
  [31] = {.lex_state = 1811},
  [32] = {.lex_state = 1811},
  [33] = {.lex_state = 1811},
  [34] = {.lex_state = 1811},
  [35] = {.lex_state = 1811},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 40},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 37},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 40},
  [107] = {.lex_state = 45},
  [108] = {.lex_state = 40},
  [109] = {.lex_state = 40},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 48},
  [114] = {.lex_state = 50},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 40},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 50},
  [121] = {.lex_state = 47},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 45},
  [127] = {.lex_state = 30},
  [128] = {.lex_state = 40},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 40},
  [131] = {.lex_state = 40},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 40},
  [134] = {.lex_state = 37},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 40},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 372},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 37},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 50},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 1811},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 33},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 41},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 41},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 1811},
  [183] = {.lex_state = 1811},
  [184] = {.lex_state = 1811},
  [185] = {.lex_state = 16},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 1811},
  [188] = {.lex_state = 1811},
  [189] = {.lex_state = 43},
  [190] = {.lex_state = 1811},
  [191] = {.lex_state = 1811},
  [192] = {.lex_state = 1811},
  [193] = {.lex_state = 1811},
  [194] = {.lex_state = 1811},
  [195] = {.lex_state = 1811},
  [196] = {.lex_state = 43},
  [197] = {.lex_state = 1811},
  [198] = {.lex_state = 1811},
  [199] = {.lex_state = 1811},
  [200] = {.lex_state = 1811},
  [201] = {.lex_state = 1811},
  [202] = {.lex_state = 1811},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 1811},
  [205] = {.lex_state = 1811},
  [206] = {.lex_state = 1811},
  [207] = {.lex_state = 1811},
  [208] = {.lex_state = 1811},
  [209] = {.lex_state = 1811},
  [210] = {.lex_state = 1811},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 1811},
  [213] = {.lex_state = 1811},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 1811},
  [216] = {.lex_state = 1811},
  [217] = {.lex_state = 1811},
  [218] = {.lex_state = 1811},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 1811},
  [222] = {.lex_state = 1811},
  [223] = {.lex_state = 1811},
  [224] = {.lex_state = 1811},
  [225] = {.lex_state = 41},
  [226] = {.lex_state = 1811},
  [227] = {.lex_state = 1811},
  [228] = {.lex_state = 1811},
  [229] = {.lex_state = 43},
  [230] = {.lex_state = 1811},
  [231] = {.lex_state = 1811},
  [232] = {.lex_state = 1811},
  [233] = {.lex_state = 1811},
  [234] = {.lex_state = 1811},
  [235] = {.lex_state = 43},
  [236] = {.lex_state = 1811},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 1811},
  [239] = {.lex_state = 1811},
  [240] = {.lex_state = 30},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 1811},
  [244] = {.lex_state = 1811},
  [245] = {.lex_state = 49},
  [246] = {.lex_state = 43},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 1811},
  [250] = {.lex_state = 1811},
  [251] = {.lex_state = 41},
  [252] = {.lex_state = 1811},
  [253] = {.lex_state = 1811},
  [254] = {.lex_state = 1811},
  [255] = {.lex_state = 43},
  [256] = {.lex_state = 1811},
  [257] = {.lex_state = 1811},
  [258] = {.lex_state = 41},
  [259] = {.lex_state = 278},
  [260] = {.lex_state = 1811},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 51},
  [263] = {.lex_state = 43},
  [264] = {.lex_state = 1811},
  [265] = {.lex_state = 1811},
  [266] = {.lex_state = 1811},
  [267] = {.lex_state = 1811},
  [268] = {.lex_state = 30},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 43},
  [271] = {.lex_state = 1811},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 30},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 3},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 1811},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 3},
  [306] = {.lex_state = 1811},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 3},
  [309] = {.lex_state = 232},
  [310] = {.lex_state = 3},
  [311] = {.lex_state = 3},
  [312] = {.lex_state = 232},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 3},
  [315] = {.lex_state = 16},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 18},
  [318] = {.lex_state = 16},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 1811},
  [321] = {.lex_state = 1811},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 1811},
  [325] = {.lex_state = 3},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 1811},
  [328] = {.lex_state = 1811},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 1811},
  [333] = {.lex_state = 3},
  [334] = {.lex_state = 1811},
  [335] = {.lex_state = 1811},
  [336] = {.lex_state = 3},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 3},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 3},
  [342] = {.lex_state = 3},
  [343] = {.lex_state = 1811},
  [344] = {.lex_state = 1811},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 3},
  [347] = {.lex_state = 3},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 3},
  [350] = {.lex_state = 3},
  [351] = {.lex_state = 1811},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 3},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 3},
  [356] = {.lex_state = 1811},
  [357] = {.lex_state = 3},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 3},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 3},
  [362] = {.lex_state = 3},
  [363] = {.lex_state = 3},
  [364] = {.lex_state = 1811},
  [365] = {.lex_state = 3},
  [366] = {.lex_state = 3},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 16},
  [370] = {.lex_state = 1811},
  [371] = {.lex_state = 3},
  [372] = {.lex_state = 3},
  [373] = {.lex_state = 3},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 1811},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 3},
  [379] = {.lex_state = 3},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 34},
  [382] = {.lex_state = 3},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 3},
  [388] = {.lex_state = 3},
  [389] = {.lex_state = 3},
  [390] = {.lex_state = 1811},
  [391] = {.lex_state = 3},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 3},
  [398] = {.lex_state = 3},
  [399] = {.lex_state = 3},
  [400] = {.lex_state = 3},
  [401] = {.lex_state = 3},
  [402] = {.lex_state = 1811},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 3},
  [406] = {.lex_state = 1811},
  [407] = {.lex_state = 1811},
  [408] = {.lex_state = 1811},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 1811},
  [411] = {.lex_state = 3},
  [412] = {.lex_state = 1811},
  [413] = {.lex_state = 1811},
  [414] = {.lex_state = 3},
  [415] = {.lex_state = 3},
  [416] = {.lex_state = 1811},
  [417] = {.lex_state = 3},
  [418] = {.lex_state = 1811},
  [419] = {.lex_state = 3},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 1811},
  [422] = {.lex_state = 3},
  [423] = {.lex_state = 1811},
  [424] = {.lex_state = 3},
  [425] = {.lex_state = 3},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 1811},
  [428] = {.lex_state = 1811},
  [429] = {.lex_state = 3},
  [430] = {.lex_state = 1811},
  [431] = {.lex_state = 3},
  [432] = {.lex_state = 3},
  [433] = {.lex_state = 17},
  [434] = {.lex_state = 3},
  [435] = {.lex_state = 3},
  [436] = {.lex_state = 1811},
  [437] = {.lex_state = 3},
  [438] = {.lex_state = 1811},
  [439] = {.lex_state = 1811},
  [440] = {.lex_state = 1811},
  [441] = {.lex_state = 3},
  [442] = {.lex_state = 1811},
  [443] = {.lex_state = 3},
  [444] = {.lex_state = 3},
  [445] = {.lex_state = 1811},
  [446] = {.lex_state = 3},
  [447] = {.lex_state = 3},
  [448] = {.lex_state = 1811},
  [449] = {.lex_state = 3},
  [450] = {.lex_state = 1811},
  [451] = {.lex_state = 1811},
  [452] = {.lex_state = 3},
  [453] = {.lex_state = 3},
  [454] = {.lex_state = 3},
  [455] = {.lex_state = 1811},
  [456] = {.lex_state = 1811},
  [457] = {.lex_state = 16},
  [458] = {.lex_state = 3},
  [459] = {.lex_state = 44},
  [460] = {.lex_state = 1811},
  [461] = {.lex_state = 1811},
  [462] = {.lex_state = 1811},
  [463] = {.lex_state = 1811},
  [464] = {.lex_state = 3},
  [465] = {.lex_state = 3},
  [466] = {.lex_state = 3},
  [467] = {.lex_state = 1811},
  [468] = {.lex_state = 1811},
  [469] = {.lex_state = 1811},
  [470] = {.lex_state = 1811},
  [471] = {.lex_state = 3},
  [472] = {.lex_state = 1811},
  [473] = {.lex_state = 1811},
  [474] = {.lex_state = 1811},
  [475] = {.lex_state = 3},
  [476] = {.lex_state = 1811},
  [477] = {.lex_state = 3},
  [478] = {.lex_state = 3},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 1811},
  [481] = {.lex_state = 16},
  [482] = {.lex_state = 16},
  [483] = {.lex_state = 1811},
  [484] = {.lex_state = 1811},
  [485] = {.lex_state = 1811},
  [486] = {.lex_state = 1811},
  [487] = {.lex_state = 1811},
  [488] = {.lex_state = 1811},
  [489] = {.lex_state = 44},
  [490] = {.lex_state = 1811},
  [491] = {.lex_state = 36},
  [492] = {.lex_state = 16},
  [493] = {.lex_state = 1811},
  [494] = {.lex_state = 1811},
  [495] = {.lex_state = 1811},
  [496] = {.lex_state = 1811},
  [497] = {.lex_state = 1811},
  [498] = {.lex_state = 1811},
  [499] = {.lex_state = 3},
  [500] = {.lex_state = 44},
  [501] = {.lex_state = 1811},
  [502] = {.lex_state = 3},
  [503] = {.lex_state = 1811},
  [504] = {.lex_state = 1811},
  [505] = {.lex_state = 1811},
  [506] = {.lex_state = 1811},
  [507] = {.lex_state = 1811},
  [508] = {.lex_state = 1811},
  [509] = {.lex_state = 3},
  [510] = {.lex_state = 1811},
  [511] = {.lex_state = 1811},
  [512] = {.lex_state = 1811},
  [513] = {.lex_state = 3},
  [514] = {.lex_state = 1811},
  [515] = {.lex_state = 1811},
  [516] = {.lex_state = 1811},
  [517] = {.lex_state = 1811},
  [518] = {.lex_state = 3},
  [519] = {.lex_state = 3},
  [520] = {.lex_state = 1811},
  [521] = {.lex_state = 1811},
  [522] = {.lex_state = 1811},
  [523] = {.lex_state = 1811},
  [524] = {.lex_state = 3},
  [525] = {.lex_state = 1811},
  [526] = {.lex_state = 1811},
  [527] = {.lex_state = 1811},
  [528] = {.lex_state = 1811},
  [529] = {.lex_state = 1811},
  [530] = {.lex_state = 1811},
  [531] = {.lex_state = 1811},
  [532] = {.lex_state = 1811},
  [533] = {.lex_state = 1811},
  [534] = {.lex_state = 1811},
  [535] = {.lex_state = 1811},
  [536] = {.lex_state = 1811},
  [537] = {.lex_state = 1811},
  [538] = {.lex_state = 1811},
  [539] = {.lex_state = 1811},
  [540] = {.lex_state = 1811},
  [541] = {.lex_state = 1811},
  [542] = {.lex_state = 1811},
  [543] = {.lex_state = 1811},
  [544] = {.lex_state = 1811},
  [545] = {.lex_state = 1811},
  [546] = {.lex_state = 1811},
  [547] = {.lex_state = 1811},
  [548] = {.lex_state = 1811},
  [549] = {.lex_state = 1811},
  [550] = {.lex_state = 1811},
  [551] = {.lex_state = 1811},
  [552] = {.lex_state = 1811},
  [553] = {.lex_state = 1811},
  [554] = {.lex_state = 1811},
  [555] = {.lex_state = 1811},
  [556] = {.lex_state = 1811},
  [557] = {.lex_state = 1811},
  [558] = {.lex_state = 1811},
  [559] = {.lex_state = 1811},
  [560] = {.lex_state = 3},
  [561] = {.lex_state = 1811},
  [562] = {.lex_state = 1811},
  [563] = {.lex_state = 1811},
  [564] = {.lex_state = 3},
  [565] = {.lex_state = 1811},
  [566] = {.lex_state = 1811},
  [567] = {.lex_state = 1811},
  [568] = {.lex_state = 1811},
  [569] = {.lex_state = 1811},
  [570] = {.lex_state = 1811},
  [571] = {.lex_state = 1811},
  [572] = {.lex_state = 1808},
  [573] = {.lex_state = 1811},
  [574] = {.lex_state = 1811},
  [575] = {.lex_state = 1811},
  [576] = {.lex_state = 1811},
  [577] = {.lex_state = 1811},
  [578] = {.lex_state = 1811},
  [579] = {.lex_state = 1811},
  [580] = {.lex_state = 1811},
  [581] = {.lex_state = 1811},
  [582] = {.lex_state = 1811},
  [583] = {.lex_state = 1811},
  [584] = {.lex_state = 1811},
  [585] = {.lex_state = 1811},
  [586] = {.lex_state = 1811},
  [587] = {.lex_state = 1811},
  [588] = {.lex_state = 1811},
  [589] = {.lex_state = 1811},
  [590] = {.lex_state = 1811},
  [591] = {.lex_state = 1811},
  [592] = {.lex_state = 1811},
  [593] = {.lex_state = 1811},
  [594] = {.lex_state = 1811},
  [595] = {.lex_state = 1811},
  [596] = {.lex_state = 1811},
  [597] = {.lex_state = 1811},
  [598] = {.lex_state = 1811},
  [599] = {.lex_state = 1811},
  [600] = {.lex_state = 1811},
  [601] = {.lex_state = 1811},
  [602] = {.lex_state = 232},
  [603] = {.lex_state = 1811},
  [604] = {.lex_state = 1811},
  [605] = {.lex_state = 1811},
  [606] = {.lex_state = 1811},
  [607] = {.lex_state = 1811},
  [608] = {.lex_state = 1811},
  [609] = {.lex_state = 1811},
  [610] = {.lex_state = 1811},
  [611] = {.lex_state = 1811},
  [612] = {.lex_state = 1811},
  [613] = {.lex_state = 1811},
  [614] = {.lex_state = 1811},
  [615] = {.lex_state = 1811},
  [616] = {.lex_state = 1811},
  [617] = {.lex_state = 1811},
  [618] = {.lex_state = 1811},
  [619] = {.lex_state = 16},
  [620] = {.lex_state = 1811},
  [621] = {.lex_state = 1811},
  [622] = {.lex_state = 1811},
  [623] = {.lex_state = 1811},
  [624] = {.lex_state = 1811},
  [625] = {.lex_state = 1811},
  [626] = {.lex_state = 1811},
  [627] = {.lex_state = 1811},
  [628] = {.lex_state = 1811},
  [629] = {.lex_state = 1811},
  [630] = {.lex_state = 1811},
  [631] = {.lex_state = 1811},
  [632] = {.lex_state = 1811},
  [633] = {.lex_state = 1811},
  [634] = {.lex_state = 1811},
  [635] = {.lex_state = 1811},
  [636] = {.lex_state = 1811},
  [637] = {.lex_state = 1811},
  [638] = {.lex_state = 1811},
  [639] = {.lex_state = 1811},
  [640] = {.lex_state = 1811},
  [641] = {.lex_state = 1811},
  [642] = {.lex_state = 1811},
  [643] = {.lex_state = 1811},
  [644] = {.lex_state = 1811},
  [645] = {.lex_state = 1811},
  [646] = {.lex_state = 1811},
  [647] = {.lex_state = 1811},
  [648] = {.lex_state = 1811},
  [649] = {.lex_state = 1811},
  [650] = {.lex_state = 1811},
  [651] = {.lex_state = 1811},
  [652] = {.lex_state = 1811},
  [653] = {.lex_state = 1811},
  [654] = {.lex_state = 1811},
  [655] = {.lex_state = 1811},
  [656] = {.lex_state = 16},
  [657] = {.lex_state = 1811},
  [658] = {.lex_state = 1811},
  [659] = {.lex_state = 1811},
  [660] = {.lex_state = 1811},
  [661] = {.lex_state = 1811},
  [662] = {.lex_state = 1811},
  [663] = {.lex_state = 44},
  [664] = {.lex_state = 1811},
  [665] = {.lex_state = 1811},
  [666] = {.lex_state = 1811},
  [667] = {.lex_state = 1811},
  [668] = {.lex_state = 1811},
  [669] = {.lex_state = 1811},
  [670] = {.lex_state = 1811},
  [671] = {.lex_state = 52},
  [672] = {.lex_state = 1811},
  [673] = {.lex_state = 1811},
  [674] = {.lex_state = 1811},
  [675] = {.lex_state = 1811},
  [676] = {.lex_state = 1811},
  [677] = {.lex_state = 1811},
  [678] = {.lex_state = 1811},
  [679] = {.lex_state = 1811},
  [680] = {.lex_state = 1811},
  [681] = {.lex_state = 1811},
  [682] = {.lex_state = 1811},
  [683] = {.lex_state = 1811},
  [684] = {.lex_state = 1811},
  [685] = {.lex_state = 1811},
  [686] = {.lex_state = 1811},
  [687] = {.lex_state = 1811},
  [688] = {.lex_state = 1811},
  [689] = {.lex_state = 1811},
  [690] = {.lex_state = 1811},
  [691] = {.lex_state = 1811},
  [692] = {.lex_state = 1811},
  [693] = {.lex_state = 1811},
  [694] = {.lex_state = 1811},
  [695] = {.lex_state = 1811},
  [696] = {.lex_state = 1811},
  [697] = {.lex_state = 1811},
  [698] = {.lex_state = 3},
  [699] = {.lex_state = 1811},
  [700] = {.lex_state = 1811},
  [701] = {.lex_state = 1811},
  [702] = {.lex_state = 1811},
  [703] = {.lex_state = 1811},
  [704] = {.lex_state = 1811},
  [705] = {.lex_state = 1811},
  [706] = {.lex_state = 1811},
  [707] = {.lex_state = 3},
  [708] = {.lex_state = 3},
  [709] = {.lex_state = 1811},
  [710] = {.lex_state = 1811},
  [711] = {.lex_state = 290},
  [712] = {.lex_state = 1811},
  [713] = {.lex_state = 1811},
  [714] = {.lex_state = 22},
  [715] = {.lex_state = 1811},
  [716] = {.lex_state = 1811},
  [717] = {.lex_state = 1811},
  [718] = {.lex_state = 1811},
  [719] = {.lex_state = 1811},
  [720] = {.lex_state = 1811},
  [721] = {.lex_state = 1811},
  [722] = {.lex_state = 1811},
  [723] = {.lex_state = 1811},
  [724] = {.lex_state = 1811},
  [725] = {.lex_state = 1811},
  [726] = {.lex_state = 1811},
  [727] = {.lex_state = 1811},
  [728] = {.lex_state = 1811},
  [729] = {.lex_state = 1811},
  [730] = {.lex_state = 1811},
  [731] = {.lex_state = 1811},
  [732] = {.lex_state = 3},
  [733] = {.lex_state = 1811},
  [734] = {.lex_state = 1811},
  [735] = {.lex_state = 1811},
  [736] = {.lex_state = 1811},
  [737] = {.lex_state = 1811},
  [738] = {.lex_state = 1811},
  [739] = {.lex_state = 1811},
  [740] = {.lex_state = 1811},
  [741] = {.lex_state = 1811},
  [742] = {.lex_state = 1811},
  [743] = {.lex_state = 1811},
  [744] = {.lex_state = 1811},
  [745] = {.lex_state = 1811},
  [746] = {.lex_state = 1811},
  [747] = {.lex_state = 1811},
  [748] = {.lex_state = 1811},
  [749] = {.lex_state = 1811},
  [750] = {.lex_state = 1811},
  [751] = {.lex_state = 1811},
  [752] = {.lex_state = 1811},
  [753] = {.lex_state = 1811},
  [754] = {.lex_state = 1811},
  [755] = {.lex_state = 1811},
  [756] = {.lex_state = 3},
  [757] = {.lex_state = 1811},
  [758] = {.lex_state = 16},
  [759] = {.lex_state = 1811},
  [760] = {.lex_state = 1811},
  [761] = {.lex_state = 1811},
  [762] = {.lex_state = 1811},
  [763] = {.lex_state = 1811},
  [764] = {.lex_state = 1811},
  [765] = {.lex_state = 1809},
  [766] = {.lex_state = 1811},
  [767] = {.lex_state = 16},
  [768] = {.lex_state = 1811},
  [769] = {.lex_state = 1809},
  [770] = {.lex_state = 1810},
  [771] = {.lex_state = 1811},
  [772] = {.lex_state = 1811},
  [773] = {.lex_state = 1811},
  [774] = {.lex_state = 1808},
  [775] = {.lex_state = 1811},
  [776] = {.lex_state = 1811},
  [777] = {.lex_state = 1811},
  [778] = {.lex_state = 1811},
  [779] = {.lex_state = 1811},
  [780] = {.lex_state = 1811},
  [781] = {.lex_state = 17},
  [782] = {.lex_state = 1811},
  [783] = {.lex_state = 1811},
  [784] = {.lex_state = 1811},
  [785] = {.lex_state = 1811},
  [786] = {.lex_state = 16},
  [787] = {.lex_state = 1811},
  [788] = {.lex_state = 16},
  [789] = {.lex_state = 16},
  [790] = {.lex_state = 1811},
  [791] = {.lex_state = 1808},
  [792] = {.lex_state = 1811},
  [793] = {.lex_state = 1811},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 17},
  [796] = {.lex_state = 437},
  [797] = {.lex_state = 1811},
  [798] = {.lex_state = 1811},
  [799] = {.lex_state = 1811},
  [800] = {.lex_state = 1811},
  [801] = {.lex_state = 1811},
  [802] = {.lex_state = 1811},
  [803] = {.lex_state = 1811},
  [804] = {.lex_state = 437},
  [805] = {.lex_state = 1811},
  [806] = {.lex_state = 1811},
  [807] = {.lex_state = 1811},
  [808] = {.lex_state = 1811},
  [809] = {.lex_state = 3},
  [810] = {.lex_state = 1810},
  [811] = {.lex_state = 1811},
  [812] = {.lex_state = 1811},
  [813] = {.lex_state = 3},
  [814] = {.lex_state = 1811},
  [815] = {.lex_state = 1811},
  [816] = {.lex_state = 1808},
  [817] = {.lex_state = 1808},
  [818] = {.lex_state = 1808},
  [819] = {.lex_state = 1808},
  [820] = {.lex_state = 1808},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym__match_exec_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__match_exec_token3] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym__log_verbose_value_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__remote_command_token2] = ACTIONS(1),
    [aux_sym__send_env_value_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_bytes_token1] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(794),
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(600),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(193),
    [sym__space] = ACTIONS(195),
    [sym__eol] = ACTIONS(197),
  },
  [2] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(600),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(193),
    [sym__space] = ACTIONS(195),
    [sym__eol] = ACTIONS(201),
  },
  [3] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(600),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_host_declaration_token1] = ACTIONS(205),
    [aux_sym_match_declaration_token1] = ACTIONS(208),
    [aux_sym__match_user_token1] = ACTIONS(211),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(214),
    [aux_sym__address_family_token1] = ACTIONS(217),
    [aux_sym__batch_mode_token1] = ACTIONS(220),
    [aux_sym__bind_address_token1] = ACTIONS(223),
    [aux_sym__bind_interface_token1] = ACTIONS(226),
    [aux_sym__canonical_domains_token1] = ACTIONS(229),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(232),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(235),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(238),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(241),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(244),
    [aux_sym__certificate_file_token1] = ACTIONS(247),
    [aux_sym__check_host_ip_token1] = ACTIONS(250),
    [aux_sym__ciphers_token1] = ACTIONS(253),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(256),
    [aux_sym__compression_token1] = ACTIONS(259),
    [aux_sym__connection_attempts_token1] = ACTIONS(262),
    [aux_sym__connect_timeout_token1] = ACTIONS(265),
    [aux_sym__control_master_token1] = ACTIONS(268),
    [aux_sym__control_persist_token1] = ACTIONS(271),
    [aux_sym__control_path_token1] = ACTIONS(274),
    [aux_sym__dynamic_forward_token1] = ACTIONS(277),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(280),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(283),
    [aux_sym__escape_char_token1] = ACTIONS(286),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(289),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(292),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(295),
    [aux_sym__forward_agent_token1] = ACTIONS(298),
    [aux_sym__forward_x11_token1] = ACTIONS(301),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(304),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(307),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(310),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(313),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(316),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(319),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(319),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(322),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(325),
    [aux_sym__host_key_alias_token1] = ACTIONS(328),
    [aux_sym__hostname_token1] = ACTIONS(331),
    [aux_sym__identities_only_token1] = ACTIONS(334),
    [aux_sym__identity_agent_token1] = ACTIONS(337),
    [aux_sym__identity_file_token1] = ACTIONS(340),
    [aux_sym__ignore_unknown_token1] = ACTIONS(343),
    [aux_sym__ipqos_token1] = ACTIONS(346),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(349),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(349),
    [aux_sym__kex_algorithms_token1] = ACTIONS(352),
    [aux_sym__known_hosts_command_token1] = ACTIONS(355),
    [aux_sym__local_command_token1] = ACTIONS(358),
    [aux_sym__local_forward_token1] = ACTIONS(361),
    [aux_sym__log_level_token1] = ACTIONS(364),
    [aux_sym__log_verbose_token1] = ACTIONS(367),
    [aux_sym__macs_token1] = ACTIONS(370),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(373),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(376),
    [aux_sym__password_authentication_token1] = ACTIONS(379),
    [aux_sym__permit_local_command_token1] = ACTIONS(382),
    [aux_sym__permit_remote_open_token1] = ACTIONS(385),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(388),
    [aux_sym__port_token1] = ACTIONS(391),
    [aux_sym__preferred_authentications_token1] = ACTIONS(394),
    [aux_sym__proxy_command_token1] = ACTIONS(397),
    [aux_sym__proxy_jump_token1] = ACTIONS(400),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(403),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(406),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(409),
    [aux_sym__rekey_limit_token1] = ACTIONS(412),
    [aux_sym__remote_command_token1] = ACTIONS(415),
    [aux_sym__remote_forward_token1] = ACTIONS(418),
    [aux_sym__request_tty_token1] = ACTIONS(421),
    [aux_sym__required_rsa_size_token1] = ACTIONS(424),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(427),
    [aux_sym__security_key_provider_token1] = ACTIONS(430),
    [aux_sym__send_env_token1] = ACTIONS(433),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(436),
    [aux_sym__server_alive_interval_token1] = ACTIONS(439),
    [aux_sym__session_type_token1] = ACTIONS(442),
    [aux_sym__stdin_null_token1] = ACTIONS(445),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(448),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(451),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(454),
    [aux_sym__syslog_facility_token1] = ACTIONS(457),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(460),
    [aux_sym__tag_token1] = ACTIONS(463),
    [aux_sym__tunnel_token1] = ACTIONS(466),
    [aux_sym__tunnel_device_token1] = ACTIONS(469),
    [aux_sym__update_host_keys_token1] = ACTIONS(472),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(475),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(478),
    [aux_sym__visual_host_key_token1] = ACTIONS(481),
    [aux_sym__xauth_location_token1] = ACTIONS(484),
    [sym_comment] = ACTIONS(487),
    [sym__space] = ACTIONS(490),
    [sym__eol] = ACTIONS(493),
  },
  [4] = {
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_host_declaration_token1] = ACTIONS(498),
    [aux_sym_match_declaration_token1] = ACTIONS(496),
    [aux_sym__match_user_token1] = ACTIONS(500),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(503),
    [aux_sym__address_family_token1] = ACTIONS(506),
    [aux_sym__batch_mode_token1] = ACTIONS(509),
    [aux_sym__bind_address_token1] = ACTIONS(512),
    [aux_sym__bind_interface_token1] = ACTIONS(515),
    [aux_sym__canonical_domains_token1] = ACTIONS(518),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(521),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(524),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(527),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(530),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(533),
    [aux_sym__certificate_file_token1] = ACTIONS(536),
    [aux_sym__check_host_ip_token1] = ACTIONS(539),
    [aux_sym__ciphers_token1] = ACTIONS(542),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(545),
    [aux_sym__compression_token1] = ACTIONS(548),
    [aux_sym__connection_attempts_token1] = ACTIONS(551),
    [aux_sym__connect_timeout_token1] = ACTIONS(554),
    [aux_sym__control_master_token1] = ACTIONS(557),
    [aux_sym__control_persist_token1] = ACTIONS(560),
    [aux_sym__control_path_token1] = ACTIONS(563),
    [aux_sym__dynamic_forward_token1] = ACTIONS(566),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(569),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(572),
    [aux_sym__escape_char_token1] = ACTIONS(575),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(578),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(581),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(584),
    [aux_sym__forward_agent_token1] = ACTIONS(587),
    [aux_sym__forward_x11_token1] = ACTIONS(590),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(593),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(596),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(599),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(602),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(605),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(608),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(608),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(611),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(614),
    [aux_sym__host_key_alias_token1] = ACTIONS(617),
    [aux_sym__hostname_token1] = ACTIONS(620),
    [aux_sym__identities_only_token1] = ACTIONS(623),
    [aux_sym__identity_agent_token1] = ACTIONS(626),
    [aux_sym__identity_file_token1] = ACTIONS(629),
    [aux_sym__ignore_unknown_token1] = ACTIONS(632),
    [aux_sym__ipqos_token1] = ACTIONS(635),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(638),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(638),
    [aux_sym__kex_algorithms_token1] = ACTIONS(641),
    [aux_sym__known_hosts_command_token1] = ACTIONS(644),
    [aux_sym__local_command_token1] = ACTIONS(647),
    [aux_sym__local_forward_token1] = ACTIONS(650),
    [aux_sym__log_level_token1] = ACTIONS(653),
    [aux_sym__log_verbose_token1] = ACTIONS(656),
    [aux_sym__macs_token1] = ACTIONS(659),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(662),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(665),
    [aux_sym__password_authentication_token1] = ACTIONS(668),
    [aux_sym__permit_local_command_token1] = ACTIONS(671),
    [aux_sym__permit_remote_open_token1] = ACTIONS(674),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(677),
    [aux_sym__port_token1] = ACTIONS(680),
    [aux_sym__preferred_authentications_token1] = ACTIONS(683),
    [aux_sym__proxy_command_token1] = ACTIONS(686),
    [aux_sym__proxy_jump_token1] = ACTIONS(689),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(692),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(695),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(698),
    [aux_sym__rekey_limit_token1] = ACTIONS(701),
    [aux_sym__remote_command_token1] = ACTIONS(704),
    [aux_sym__remote_forward_token1] = ACTIONS(707),
    [aux_sym__request_tty_token1] = ACTIONS(710),
    [aux_sym__required_rsa_size_token1] = ACTIONS(713),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(716),
    [aux_sym__security_key_provider_token1] = ACTIONS(719),
    [aux_sym__send_env_token1] = ACTIONS(722),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(725),
    [aux_sym__server_alive_interval_token1] = ACTIONS(728),
    [aux_sym__session_type_token1] = ACTIONS(731),
    [aux_sym__stdin_null_token1] = ACTIONS(734),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(737),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(740),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(743),
    [aux_sym__syslog_facility_token1] = ACTIONS(746),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(749),
    [aux_sym__tag_token1] = ACTIONS(752),
    [aux_sym__tunnel_token1] = ACTIONS(755),
    [aux_sym__tunnel_device_token1] = ACTIONS(758),
    [aux_sym__update_host_keys_token1] = ACTIONS(761),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(764),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(767),
    [aux_sym__visual_host_key_token1] = ACTIONS(770),
    [aux_sym__xauth_location_token1] = ACTIONS(773),
    [sym_comment] = ACTIONS(776),
    [sym__space] = ACTIONS(779),
    [sym__eol] = ACTIONS(496),
  },
  [5] = {
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(782),
    [aux_sym_host_declaration_token1] = ACTIONS(784),
    [aux_sym_match_declaration_token1] = ACTIONS(782),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
    [sym__eol] = ACTIONS(782),
  },
  [6] = {
    [sym_host_declaration] = STATE(27),
    [sym_match_declaration] = STATE(27),
    [sym_parameter] = STATE(516),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(790),
    [sym__eol] = ACTIONS(792),
  },
  [7] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [8] = {
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [9] = {
    [sym__declarations] = STATE(30),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [10] = {
    [sym__declarations] = STATE(19),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [11] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [12] = {
    [sym__declarations] = STATE(34),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [13] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [14] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [15] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [16] = {
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [17] = {
    [sym__declarations] = STATE(23),
    [sym_parameter] = STATE(586),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(786),
    [sym__space] = ACTIONS(788),
  },
  [18] = {
    [sym_parameter] = STATE(699),
    [sym__add_keys_to_agent] = STATE(599),
    [sym__address_family] = STATE(596),
    [sym__batch_mode] = STATE(594),
    [sym__bind_address] = STATE(593),
    [sym__bind_interface] = STATE(591),
    [sym__canonical_domains] = STATE(590),
    [sym__canonicalize_fallback_local] = STATE(589),
    [sym__canonicalize_hostname] = STATE(588),
    [sym__canonicalize_max_dots] = STATE(587),
    [sym__canonicalize_permitted_cnames] = STATE(584),
    [sym__ca_signature_algorithms] = STATE(583),
    [sym__certificate_file] = STATE(582),
    [sym__check_host_ip] = STATE(581),
    [sym__ciphers] = STATE(579),
    [sym__clear_all_forwardings] = STATE(578),
    [sym__compression] = STATE(577),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(571),
    [sym__control_master] = STATE(570),
    [sym__control_persist] = STATE(568),
    [sym__control_path] = STATE(567),
    [sym__dynamic_forward] = STATE(566),
    [sym__enable_escape_command_line] = STATE(565),
    [sym__enable_ssh_keysign] = STATE(562),
    [sym__escape_char] = STATE(561),
    [sym__exit_on_forward_failure] = STATE(558),
    [sym__fingerprint_hash] = STATE(493),
    [sym__fork_after_authentication] = STATE(554),
    [sym__forward_agent] = STATE(551),
    [sym__forward_x11] = STATE(549),
    [sym__forward_x11_timeout] = STATE(655),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(546),
    [sym__gssapi_authentication] = STATE(545),
    [sym__gssapi_delegate_credentials] = STATE(544),
    [sym__hostbased_accepted_algorithms] = STATE(542),
    [sym__hostbased_authentication] = STATE(540),
    [sym__host_key_algorithms] = STATE(539),
    [sym__host_key_alias] = STATE(538),
    [sym__hostname] = STATE(537),
    [sym__identities_only] = STATE(535),
    [sym__identity_agent] = STATE(534),
    [sym__identity_file] = STATE(533),
    [sym__ignore_unknown] = STATE(532),
    [sym__ipqos] = STATE(531),
    [sym__kbd_interactive_authentication] = STATE(530),
    [sym__kex_algorithms] = STATE(529),
    [sym__known_hosts_command] = STATE(528),
    [sym__local_command] = STATE(527),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(522),
    [sym__no_host_authentication_for_localhost] = STATE(520),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(512),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(508),
    [sym__proxy_command] = STATE(507),
    [sym__proxy_jump] = STATE(506),
    [sym__proxy_use_fdpass] = STATE(505),
    [sym__pubkey_accepted_algorithms] = STATE(504),
    [sym__pubkey_authentication] = STATE(501),
    [sym__rekey_limit] = STATE(498),
    [sym__remote_command] = STATE(497),
    [sym__remote_forward] = STATE(496),
    [sym__request_tty] = STATE(495),
    [sym__required_rsa_size] = STATE(657),
    [sym__revoked_host_keys] = STATE(548),
    [sym__security_key_provider] = STATE(553),
    [sym__send_env] = STATE(569),
    [sym__server_alive_count_max] = STATE(573),
    [sym__server_alive_interval] = STATE(574),
    [sym__session_type] = STATE(576),
    [sym__set_env] = STATE(580),
    [sym__stdin_null] = STATE(592),
    [sym__stream_local_bind_mask] = STATE(611),
    [sym__stream_local_bind_unlink] = STATE(634),
    [sym__strict_host_key_checking] = STATE(635),
    [sym__syslog_facility] = STATE(636),
    [sym__tcp_keep_alive] = STATE(646),
    [sym__tag] = STATE(647),
    [sym__tunnel] = STATE(697),
    [sym__tunnel_device] = STATE(664),
    [sym__update_host_keys] = STATE(665),
    [sym__user] = STATE(667),
    [sym__user_known_hosts_file] = STATE(678),
    [sym__verify_host_key_dns] = STATE(557),
    [sym__visual_host_key] = STATE(687),
    [sym__xauth_location] = STATE(690),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__ipqos_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(101),
    [aux_sym__kex_algorithms_token1] = ACTIONS(103),
    [aux_sym__known_hosts_command_token1] = ACTIONS(105),
    [aux_sym__local_command_token1] = ACTIONS(107),
    [aux_sym__local_forward_token1] = ACTIONS(109),
    [aux_sym__log_level_token1] = ACTIONS(111),
    [aux_sym__log_verbose_token1] = ACTIONS(113),
    [aux_sym__macs_token1] = ACTIONS(115),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(117),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(119),
    [aux_sym__password_authentication_token1] = ACTIONS(121),
    [aux_sym__permit_local_command_token1] = ACTIONS(123),
    [aux_sym__permit_remote_open_token1] = ACTIONS(125),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(127),
    [aux_sym__port_token1] = ACTIONS(129),
    [aux_sym__preferred_authentications_token1] = ACTIONS(131),
    [aux_sym__proxy_command_token1] = ACTIONS(133),
    [aux_sym__proxy_jump_token1] = ACTIONS(135),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(137),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(139),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(141),
    [aux_sym__rekey_limit_token1] = ACTIONS(143),
    [aux_sym__remote_command_token1] = ACTIONS(145),
    [aux_sym__remote_forward_token1] = ACTIONS(147),
    [aux_sym__request_tty_token1] = ACTIONS(149),
    [aux_sym__required_rsa_size_token1] = ACTIONS(151),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(153),
    [aux_sym__security_key_provider_token1] = ACTIONS(155),
    [aux_sym__send_env_token1] = ACTIONS(157),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(159),
    [aux_sym__server_alive_interval_token1] = ACTIONS(161),
    [aux_sym__session_type_token1] = ACTIONS(163),
    [aux_sym__stdin_null_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(169),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(171),
    [aux_sym__syslog_facility_token1] = ACTIONS(173),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(175),
    [aux_sym__tag_token1] = ACTIONS(177),
    [aux_sym__tunnel_token1] = ACTIONS(179),
    [aux_sym__tunnel_device_token1] = ACTIONS(181),
    [aux_sym__update_host_keys_token1] = ACTIONS(183),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(185),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(187),
    [aux_sym__visual_host_key_token1] = ACTIONS(189),
    [aux_sym__xauth_location_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(794),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(796),
    [aux_sym_host_declaration_token1] = ACTIONS(798),
    [aux_sym_match_declaration_token1] = ACTIONS(796),
    [aux_sym__match_user_token1] = ACTIONS(798),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(796),
    [aux_sym__address_family_token1] = ACTIONS(796),
    [aux_sym__batch_mode_token1] = ACTIONS(796),
    [aux_sym__bind_address_token1] = ACTIONS(796),
    [aux_sym__bind_interface_token1] = ACTIONS(796),
    [aux_sym__canonical_domains_token1] = ACTIONS(796),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(796),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(796),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(796),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(796),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(796),
    [aux_sym__certificate_file_token1] = ACTIONS(796),
    [aux_sym__check_host_ip_token1] = ACTIONS(796),
    [aux_sym__ciphers_token1] = ACTIONS(796),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(796),
    [aux_sym__compression_token1] = ACTIONS(796),
    [aux_sym__connection_attempts_token1] = ACTIONS(796),
    [aux_sym__connect_timeout_token1] = ACTIONS(796),
    [aux_sym__control_master_token1] = ACTIONS(796),
    [aux_sym__control_persist_token1] = ACTIONS(796),
    [aux_sym__control_path_token1] = ACTIONS(796),
    [aux_sym__dynamic_forward_token1] = ACTIONS(796),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(796),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(796),
    [aux_sym__escape_char_token1] = ACTIONS(796),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(796),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(796),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(796),
    [aux_sym__forward_agent_token1] = ACTIONS(796),
    [aux_sym__forward_x11_token1] = ACTIONS(798),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(796),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(796),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(796),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(796),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(796),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(796),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(796),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(796),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(796),
    [aux_sym__host_key_alias_token1] = ACTIONS(796),
    [aux_sym__hostname_token1] = ACTIONS(796),
    [aux_sym__identities_only_token1] = ACTIONS(796),
    [aux_sym__identity_agent_token1] = ACTIONS(796),
    [aux_sym__identity_file_token1] = ACTIONS(796),
    [aux_sym__ignore_unknown_token1] = ACTIONS(796),
    [aux_sym__ipqos_token1] = ACTIONS(796),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(796),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(796),
    [aux_sym__kex_algorithms_token1] = ACTIONS(796),
    [aux_sym__known_hosts_command_token1] = ACTIONS(796),
    [aux_sym__local_command_token1] = ACTIONS(796),
    [aux_sym__local_forward_token1] = ACTIONS(796),
    [aux_sym__log_level_token1] = ACTIONS(796),
    [aux_sym__log_verbose_token1] = ACTIONS(796),
    [aux_sym__macs_token1] = ACTIONS(796),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(796),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(796),
    [aux_sym__password_authentication_token1] = ACTIONS(796),
    [aux_sym__permit_local_command_token1] = ACTIONS(796),
    [aux_sym__permit_remote_open_token1] = ACTIONS(796),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(796),
    [aux_sym__port_token1] = ACTIONS(796),
    [aux_sym__preferred_authentications_token1] = ACTIONS(796),
    [aux_sym__proxy_command_token1] = ACTIONS(796),
    [aux_sym__proxy_jump_token1] = ACTIONS(796),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(796),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(796),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(796),
    [aux_sym__rekey_limit_token1] = ACTIONS(796),
    [aux_sym__remote_command_token1] = ACTIONS(796),
    [aux_sym__remote_forward_token1] = ACTIONS(796),
    [aux_sym__request_tty_token1] = ACTIONS(796),
    [aux_sym__required_rsa_size_token1] = ACTIONS(796),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(796),
    [aux_sym__security_key_provider_token1] = ACTIONS(796),
    [aux_sym__send_env_token1] = ACTIONS(796),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(796),
    [aux_sym__server_alive_interval_token1] = ACTIONS(796),
    [aux_sym__session_type_token1] = ACTIONS(796),
    [aux_sym__stdin_null_token1] = ACTIONS(796),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(796),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(796),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(796),
    [aux_sym__syslog_facility_token1] = ACTIONS(796),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(796),
    [aux_sym__tag_token1] = ACTIONS(796),
    [aux_sym__tunnel_token1] = ACTIONS(798),
    [aux_sym__tunnel_device_token1] = ACTIONS(796),
    [aux_sym__update_host_keys_token1] = ACTIONS(796),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(796),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(796),
    [aux_sym__visual_host_key_token1] = ACTIONS(796),
    [aux_sym__xauth_location_token1] = ACTIONS(796),
    [sym_comment] = ACTIONS(796),
    [sym__space] = ACTIONS(796),
    [sym__eol] = ACTIONS(796),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(800),
    [aux_sym_host_declaration_token1] = ACTIONS(802),
    [aux_sym_match_declaration_token1] = ACTIONS(800),
    [aux_sym__match_user_token1] = ACTIONS(802),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(800),
    [aux_sym__address_family_token1] = ACTIONS(800),
    [aux_sym__batch_mode_token1] = ACTIONS(800),
    [aux_sym__bind_address_token1] = ACTIONS(800),
    [aux_sym__bind_interface_token1] = ACTIONS(800),
    [aux_sym__canonical_domains_token1] = ACTIONS(800),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(800),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(800),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(800),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(800),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(800),
    [aux_sym__certificate_file_token1] = ACTIONS(800),
    [aux_sym__check_host_ip_token1] = ACTIONS(800),
    [aux_sym__ciphers_token1] = ACTIONS(800),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(800),
    [aux_sym__compression_token1] = ACTIONS(800),
    [aux_sym__connection_attempts_token1] = ACTIONS(800),
    [aux_sym__connect_timeout_token1] = ACTIONS(800),
    [aux_sym__control_master_token1] = ACTIONS(800),
    [aux_sym__control_persist_token1] = ACTIONS(800),
    [aux_sym__control_path_token1] = ACTIONS(800),
    [aux_sym__dynamic_forward_token1] = ACTIONS(800),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(800),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(800),
    [aux_sym__escape_char_token1] = ACTIONS(800),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(800),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(800),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(800),
    [aux_sym__forward_agent_token1] = ACTIONS(800),
    [aux_sym__forward_x11_token1] = ACTIONS(802),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(800),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(800),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(800),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(800),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(800),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(800),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(800),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(800),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(800),
    [aux_sym__host_key_alias_token1] = ACTIONS(800),
    [aux_sym__hostname_token1] = ACTIONS(800),
    [aux_sym__identities_only_token1] = ACTIONS(800),
    [aux_sym__identity_agent_token1] = ACTIONS(800),
    [aux_sym__identity_file_token1] = ACTIONS(800),
    [aux_sym__ignore_unknown_token1] = ACTIONS(800),
    [aux_sym__ipqos_token1] = ACTIONS(800),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(800),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(800),
    [aux_sym__kex_algorithms_token1] = ACTIONS(800),
    [aux_sym__known_hosts_command_token1] = ACTIONS(800),
    [aux_sym__local_command_token1] = ACTIONS(800),
    [aux_sym__local_forward_token1] = ACTIONS(800),
    [aux_sym__log_level_token1] = ACTIONS(800),
    [aux_sym__log_verbose_token1] = ACTIONS(800),
    [aux_sym__macs_token1] = ACTIONS(800),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(800),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(800),
    [aux_sym__password_authentication_token1] = ACTIONS(800),
    [aux_sym__permit_local_command_token1] = ACTIONS(800),
    [aux_sym__permit_remote_open_token1] = ACTIONS(800),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(800),
    [aux_sym__port_token1] = ACTIONS(800),
    [aux_sym__preferred_authentications_token1] = ACTIONS(800),
    [aux_sym__proxy_command_token1] = ACTIONS(800),
    [aux_sym__proxy_jump_token1] = ACTIONS(800),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(800),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(800),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(800),
    [aux_sym__rekey_limit_token1] = ACTIONS(800),
    [aux_sym__remote_command_token1] = ACTIONS(800),
    [aux_sym__remote_forward_token1] = ACTIONS(800),
    [aux_sym__request_tty_token1] = ACTIONS(800),
    [aux_sym__required_rsa_size_token1] = ACTIONS(800),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(800),
    [aux_sym__security_key_provider_token1] = ACTIONS(800),
    [aux_sym__send_env_token1] = ACTIONS(800),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(800),
    [aux_sym__server_alive_interval_token1] = ACTIONS(800),
    [aux_sym__session_type_token1] = ACTIONS(800),
    [aux_sym__stdin_null_token1] = ACTIONS(800),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(800),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(800),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(800),
    [aux_sym__syslog_facility_token1] = ACTIONS(800),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(800),
    [aux_sym__tag_token1] = ACTIONS(800),
    [aux_sym__tunnel_token1] = ACTIONS(802),
    [aux_sym__tunnel_device_token1] = ACTIONS(800),
    [aux_sym__update_host_keys_token1] = ACTIONS(800),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(800),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(800),
    [aux_sym__visual_host_key_token1] = ACTIONS(800),
    [aux_sym__xauth_location_token1] = ACTIONS(800),
    [sym_comment] = ACTIONS(800),
    [sym__space] = ACTIONS(800),
    [sym__eol] = ACTIONS(800),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(804),
    [aux_sym_host_declaration_token1] = ACTIONS(806),
    [aux_sym_match_declaration_token1] = ACTIONS(804),
    [aux_sym__match_user_token1] = ACTIONS(806),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(804),
    [aux_sym__address_family_token1] = ACTIONS(804),
    [aux_sym__batch_mode_token1] = ACTIONS(804),
    [aux_sym__bind_address_token1] = ACTIONS(804),
    [aux_sym__bind_interface_token1] = ACTIONS(804),
    [aux_sym__canonical_domains_token1] = ACTIONS(804),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(804),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(804),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(804),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(804),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(804),
    [aux_sym__certificate_file_token1] = ACTIONS(804),
    [aux_sym__check_host_ip_token1] = ACTIONS(804),
    [aux_sym__ciphers_token1] = ACTIONS(804),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(804),
    [aux_sym__compression_token1] = ACTIONS(804),
    [aux_sym__connection_attempts_token1] = ACTIONS(804),
    [aux_sym__connect_timeout_token1] = ACTIONS(804),
    [aux_sym__control_master_token1] = ACTIONS(804),
    [aux_sym__control_persist_token1] = ACTIONS(804),
    [aux_sym__control_path_token1] = ACTIONS(804),
    [aux_sym__dynamic_forward_token1] = ACTIONS(804),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(804),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(804),
    [aux_sym__escape_char_token1] = ACTIONS(804),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(804),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(804),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(804),
    [aux_sym__forward_agent_token1] = ACTIONS(804),
    [aux_sym__forward_x11_token1] = ACTIONS(806),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(804),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(804),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(804),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(804),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(804),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(804),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(804),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(804),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(804),
    [aux_sym__host_key_alias_token1] = ACTIONS(804),
    [aux_sym__hostname_token1] = ACTIONS(804),
    [aux_sym__identities_only_token1] = ACTIONS(804),
    [aux_sym__identity_agent_token1] = ACTIONS(804),
    [aux_sym__identity_file_token1] = ACTIONS(804),
    [aux_sym__ignore_unknown_token1] = ACTIONS(804),
    [aux_sym__ipqos_token1] = ACTIONS(804),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(804),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(804),
    [aux_sym__kex_algorithms_token1] = ACTIONS(804),
    [aux_sym__known_hosts_command_token1] = ACTIONS(804),
    [aux_sym__local_command_token1] = ACTIONS(804),
    [aux_sym__local_forward_token1] = ACTIONS(804),
    [aux_sym__log_level_token1] = ACTIONS(804),
    [aux_sym__log_verbose_token1] = ACTIONS(804),
    [aux_sym__macs_token1] = ACTIONS(804),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(804),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(804),
    [aux_sym__password_authentication_token1] = ACTIONS(804),
    [aux_sym__permit_local_command_token1] = ACTIONS(804),
    [aux_sym__permit_remote_open_token1] = ACTIONS(804),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(804),
    [aux_sym__port_token1] = ACTIONS(804),
    [aux_sym__preferred_authentications_token1] = ACTIONS(804),
    [aux_sym__proxy_command_token1] = ACTIONS(804),
    [aux_sym__proxy_jump_token1] = ACTIONS(804),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(804),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(804),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(804),
    [aux_sym__rekey_limit_token1] = ACTIONS(804),
    [aux_sym__remote_command_token1] = ACTIONS(804),
    [aux_sym__remote_forward_token1] = ACTIONS(804),
    [aux_sym__request_tty_token1] = ACTIONS(804),
    [aux_sym__required_rsa_size_token1] = ACTIONS(804),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(804),
    [aux_sym__security_key_provider_token1] = ACTIONS(804),
    [aux_sym__send_env_token1] = ACTIONS(804),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(804),
    [aux_sym__server_alive_interval_token1] = ACTIONS(804),
    [aux_sym__session_type_token1] = ACTIONS(804),
    [aux_sym__stdin_null_token1] = ACTIONS(804),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(804),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(804),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(804),
    [aux_sym__syslog_facility_token1] = ACTIONS(804),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(804),
    [aux_sym__tag_token1] = ACTIONS(804),
    [aux_sym__tunnel_token1] = ACTIONS(806),
    [aux_sym__tunnel_device_token1] = ACTIONS(804),
    [aux_sym__update_host_keys_token1] = ACTIONS(804),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(804),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(804),
    [aux_sym__visual_host_key_token1] = ACTIONS(804),
    [aux_sym__xauth_location_token1] = ACTIONS(804),
    [sym_comment] = ACTIONS(804),
    [sym__space] = ACTIONS(804),
    [sym__eol] = ACTIONS(804),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(808),
    [aux_sym_host_declaration_token1] = ACTIONS(810),
    [aux_sym_match_declaration_token1] = ACTIONS(808),
    [aux_sym__match_user_token1] = ACTIONS(810),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(808),
    [aux_sym__address_family_token1] = ACTIONS(808),
    [aux_sym__batch_mode_token1] = ACTIONS(808),
    [aux_sym__bind_address_token1] = ACTIONS(808),
    [aux_sym__bind_interface_token1] = ACTIONS(808),
    [aux_sym__canonical_domains_token1] = ACTIONS(808),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(808),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(808),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(808),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(808),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(808),
    [aux_sym__certificate_file_token1] = ACTIONS(808),
    [aux_sym__check_host_ip_token1] = ACTIONS(808),
    [aux_sym__ciphers_token1] = ACTIONS(808),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(808),
    [aux_sym__compression_token1] = ACTIONS(808),
    [aux_sym__connection_attempts_token1] = ACTIONS(808),
    [aux_sym__connect_timeout_token1] = ACTIONS(808),
    [aux_sym__control_master_token1] = ACTIONS(808),
    [aux_sym__control_persist_token1] = ACTIONS(808),
    [aux_sym__control_path_token1] = ACTIONS(808),
    [aux_sym__dynamic_forward_token1] = ACTIONS(808),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(808),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(808),
    [aux_sym__escape_char_token1] = ACTIONS(808),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(808),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(808),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(808),
    [aux_sym__forward_agent_token1] = ACTIONS(808),
    [aux_sym__forward_x11_token1] = ACTIONS(810),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(808),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(808),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(808),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(808),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(808),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(808),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(808),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(808),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(808),
    [aux_sym__host_key_alias_token1] = ACTIONS(808),
    [aux_sym__hostname_token1] = ACTIONS(808),
    [aux_sym__identities_only_token1] = ACTIONS(808),
    [aux_sym__identity_agent_token1] = ACTIONS(808),
    [aux_sym__identity_file_token1] = ACTIONS(808),
    [aux_sym__ignore_unknown_token1] = ACTIONS(808),
    [aux_sym__ipqos_token1] = ACTIONS(808),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(808),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(808),
    [aux_sym__kex_algorithms_token1] = ACTIONS(808),
    [aux_sym__known_hosts_command_token1] = ACTIONS(808),
    [aux_sym__local_command_token1] = ACTIONS(808),
    [aux_sym__local_forward_token1] = ACTIONS(808),
    [aux_sym__log_level_token1] = ACTIONS(808),
    [aux_sym__log_verbose_token1] = ACTIONS(808),
    [aux_sym__macs_token1] = ACTIONS(808),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(808),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(808),
    [aux_sym__password_authentication_token1] = ACTIONS(808),
    [aux_sym__permit_local_command_token1] = ACTIONS(808),
    [aux_sym__permit_remote_open_token1] = ACTIONS(808),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(808),
    [aux_sym__port_token1] = ACTIONS(808),
    [aux_sym__preferred_authentications_token1] = ACTIONS(808),
    [aux_sym__proxy_command_token1] = ACTIONS(808),
    [aux_sym__proxy_jump_token1] = ACTIONS(808),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(808),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(808),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(808),
    [aux_sym__rekey_limit_token1] = ACTIONS(808),
    [aux_sym__remote_command_token1] = ACTIONS(808),
    [aux_sym__remote_forward_token1] = ACTIONS(808),
    [aux_sym__request_tty_token1] = ACTIONS(808),
    [aux_sym__required_rsa_size_token1] = ACTIONS(808),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(808),
    [aux_sym__security_key_provider_token1] = ACTIONS(808),
    [aux_sym__send_env_token1] = ACTIONS(808),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(808),
    [aux_sym__server_alive_interval_token1] = ACTIONS(808),
    [aux_sym__session_type_token1] = ACTIONS(808),
    [aux_sym__stdin_null_token1] = ACTIONS(808),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(808),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(808),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(808),
    [aux_sym__syslog_facility_token1] = ACTIONS(808),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(808),
    [aux_sym__tag_token1] = ACTIONS(808),
    [aux_sym__tunnel_token1] = ACTIONS(810),
    [aux_sym__tunnel_device_token1] = ACTIONS(808),
    [aux_sym__update_host_keys_token1] = ACTIONS(808),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(808),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(808),
    [aux_sym__visual_host_key_token1] = ACTIONS(808),
    [aux_sym__xauth_location_token1] = ACTIONS(808),
    [sym_comment] = ACTIONS(808),
    [sym__space] = ACTIONS(808),
    [sym__eol] = ACTIONS(808),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(812),
    [aux_sym_host_declaration_token1] = ACTIONS(814),
    [aux_sym_match_declaration_token1] = ACTIONS(812),
    [aux_sym__match_user_token1] = ACTIONS(814),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(812),
    [aux_sym__address_family_token1] = ACTIONS(812),
    [aux_sym__batch_mode_token1] = ACTIONS(812),
    [aux_sym__bind_address_token1] = ACTIONS(812),
    [aux_sym__bind_interface_token1] = ACTIONS(812),
    [aux_sym__canonical_domains_token1] = ACTIONS(812),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(812),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(812),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(812),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(812),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(812),
    [aux_sym__certificate_file_token1] = ACTIONS(812),
    [aux_sym__check_host_ip_token1] = ACTIONS(812),
    [aux_sym__ciphers_token1] = ACTIONS(812),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(812),
    [aux_sym__compression_token1] = ACTIONS(812),
    [aux_sym__connection_attempts_token1] = ACTIONS(812),
    [aux_sym__connect_timeout_token1] = ACTIONS(812),
    [aux_sym__control_master_token1] = ACTIONS(812),
    [aux_sym__control_persist_token1] = ACTIONS(812),
    [aux_sym__control_path_token1] = ACTIONS(812),
    [aux_sym__dynamic_forward_token1] = ACTIONS(812),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(812),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(812),
    [aux_sym__escape_char_token1] = ACTIONS(812),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(812),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(812),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(812),
    [aux_sym__forward_agent_token1] = ACTIONS(812),
    [aux_sym__forward_x11_token1] = ACTIONS(814),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(812),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(812),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(812),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(812),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(812),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(812),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(812),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(812),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(812),
    [aux_sym__host_key_alias_token1] = ACTIONS(812),
    [aux_sym__hostname_token1] = ACTIONS(812),
    [aux_sym__identities_only_token1] = ACTIONS(812),
    [aux_sym__identity_agent_token1] = ACTIONS(812),
    [aux_sym__identity_file_token1] = ACTIONS(812),
    [aux_sym__ignore_unknown_token1] = ACTIONS(812),
    [aux_sym__ipqos_token1] = ACTIONS(812),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(812),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(812),
    [aux_sym__kex_algorithms_token1] = ACTIONS(812),
    [aux_sym__known_hosts_command_token1] = ACTIONS(812),
    [aux_sym__local_command_token1] = ACTIONS(812),
    [aux_sym__local_forward_token1] = ACTIONS(812),
    [aux_sym__log_level_token1] = ACTIONS(812),
    [aux_sym__log_verbose_token1] = ACTIONS(812),
    [aux_sym__macs_token1] = ACTIONS(812),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(812),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(812),
    [aux_sym__password_authentication_token1] = ACTIONS(812),
    [aux_sym__permit_local_command_token1] = ACTIONS(812),
    [aux_sym__permit_remote_open_token1] = ACTIONS(812),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(812),
    [aux_sym__port_token1] = ACTIONS(812),
    [aux_sym__preferred_authentications_token1] = ACTIONS(812),
    [aux_sym__proxy_command_token1] = ACTIONS(812),
    [aux_sym__proxy_jump_token1] = ACTIONS(812),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(812),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(812),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(812),
    [aux_sym__rekey_limit_token1] = ACTIONS(812),
    [aux_sym__remote_command_token1] = ACTIONS(812),
    [aux_sym__remote_forward_token1] = ACTIONS(812),
    [aux_sym__request_tty_token1] = ACTIONS(812),
    [aux_sym__required_rsa_size_token1] = ACTIONS(812),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(812),
    [aux_sym__security_key_provider_token1] = ACTIONS(812),
    [aux_sym__send_env_token1] = ACTIONS(812),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(812),
    [aux_sym__server_alive_interval_token1] = ACTIONS(812),
    [aux_sym__session_type_token1] = ACTIONS(812),
    [aux_sym__stdin_null_token1] = ACTIONS(812),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(812),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(812),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(812),
    [aux_sym__syslog_facility_token1] = ACTIONS(812),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(812),
    [aux_sym__tag_token1] = ACTIONS(812),
    [aux_sym__tunnel_token1] = ACTIONS(814),
    [aux_sym__tunnel_device_token1] = ACTIONS(812),
    [aux_sym__update_host_keys_token1] = ACTIONS(812),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(812),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(812),
    [aux_sym__visual_host_key_token1] = ACTIONS(812),
    [aux_sym__xauth_location_token1] = ACTIONS(812),
    [sym_comment] = ACTIONS(812),
    [sym__space] = ACTIONS(812),
    [sym__eol] = ACTIONS(812),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(816),
    [aux_sym_host_declaration_token1] = ACTIONS(818),
    [aux_sym_match_declaration_token1] = ACTIONS(816),
    [aux_sym__match_user_token1] = ACTIONS(818),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(816),
    [aux_sym__address_family_token1] = ACTIONS(816),
    [aux_sym__batch_mode_token1] = ACTIONS(816),
    [aux_sym__bind_address_token1] = ACTIONS(816),
    [aux_sym__bind_interface_token1] = ACTIONS(816),
    [aux_sym__canonical_domains_token1] = ACTIONS(816),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(816),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(816),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(816),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(816),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(816),
    [aux_sym__certificate_file_token1] = ACTIONS(816),
    [aux_sym__check_host_ip_token1] = ACTIONS(816),
    [aux_sym__ciphers_token1] = ACTIONS(816),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(816),
    [aux_sym__compression_token1] = ACTIONS(816),
    [aux_sym__connection_attempts_token1] = ACTIONS(816),
    [aux_sym__connect_timeout_token1] = ACTIONS(816),
    [aux_sym__control_master_token1] = ACTIONS(816),
    [aux_sym__control_persist_token1] = ACTIONS(816),
    [aux_sym__control_path_token1] = ACTIONS(816),
    [aux_sym__dynamic_forward_token1] = ACTIONS(816),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(816),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(816),
    [aux_sym__escape_char_token1] = ACTIONS(816),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(816),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(816),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(816),
    [aux_sym__forward_agent_token1] = ACTIONS(816),
    [aux_sym__forward_x11_token1] = ACTIONS(818),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(816),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(816),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(816),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(816),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(816),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(816),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(816),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(816),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(816),
    [aux_sym__host_key_alias_token1] = ACTIONS(816),
    [aux_sym__hostname_token1] = ACTIONS(816),
    [aux_sym__identities_only_token1] = ACTIONS(816),
    [aux_sym__identity_agent_token1] = ACTIONS(816),
    [aux_sym__identity_file_token1] = ACTIONS(816),
    [aux_sym__ignore_unknown_token1] = ACTIONS(816),
    [aux_sym__ipqos_token1] = ACTIONS(816),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(816),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(816),
    [aux_sym__kex_algorithms_token1] = ACTIONS(816),
    [aux_sym__known_hosts_command_token1] = ACTIONS(816),
    [aux_sym__local_command_token1] = ACTIONS(816),
    [aux_sym__local_forward_token1] = ACTIONS(816),
    [aux_sym__log_level_token1] = ACTIONS(816),
    [aux_sym__log_verbose_token1] = ACTIONS(816),
    [aux_sym__macs_token1] = ACTIONS(816),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(816),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(816),
    [aux_sym__password_authentication_token1] = ACTIONS(816),
    [aux_sym__permit_local_command_token1] = ACTIONS(816),
    [aux_sym__permit_remote_open_token1] = ACTIONS(816),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(816),
    [aux_sym__port_token1] = ACTIONS(816),
    [aux_sym__preferred_authentications_token1] = ACTIONS(816),
    [aux_sym__proxy_command_token1] = ACTIONS(816),
    [aux_sym__proxy_jump_token1] = ACTIONS(816),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(816),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(816),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(816),
    [aux_sym__rekey_limit_token1] = ACTIONS(816),
    [aux_sym__remote_command_token1] = ACTIONS(816),
    [aux_sym__remote_forward_token1] = ACTIONS(816),
    [aux_sym__request_tty_token1] = ACTIONS(816),
    [aux_sym__required_rsa_size_token1] = ACTIONS(816),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(816),
    [aux_sym__security_key_provider_token1] = ACTIONS(816),
    [aux_sym__send_env_token1] = ACTIONS(816),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(816),
    [aux_sym__server_alive_interval_token1] = ACTIONS(816),
    [aux_sym__session_type_token1] = ACTIONS(816),
    [aux_sym__stdin_null_token1] = ACTIONS(816),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(816),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(816),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(816),
    [aux_sym__syslog_facility_token1] = ACTIONS(816),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(816),
    [aux_sym__tag_token1] = ACTIONS(816),
    [aux_sym__tunnel_token1] = ACTIONS(818),
    [aux_sym__tunnel_device_token1] = ACTIONS(816),
    [aux_sym__update_host_keys_token1] = ACTIONS(816),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(816),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(816),
    [aux_sym__visual_host_key_token1] = ACTIONS(816),
    [aux_sym__xauth_location_token1] = ACTIONS(816),
    [sym_comment] = ACTIONS(816),
    [sym__space] = ACTIONS(816),
    [sym__eol] = ACTIONS(816),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(820),
    [aux_sym_host_declaration_token1] = ACTIONS(822),
    [aux_sym_match_declaration_token1] = ACTIONS(820),
    [aux_sym__match_user_token1] = ACTIONS(822),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(820),
    [aux_sym__address_family_token1] = ACTIONS(820),
    [aux_sym__batch_mode_token1] = ACTIONS(820),
    [aux_sym__bind_address_token1] = ACTIONS(820),
    [aux_sym__bind_interface_token1] = ACTIONS(820),
    [aux_sym__canonical_domains_token1] = ACTIONS(820),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(820),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(820),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(820),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(820),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(820),
    [aux_sym__certificate_file_token1] = ACTIONS(820),
    [aux_sym__check_host_ip_token1] = ACTIONS(820),
    [aux_sym__ciphers_token1] = ACTIONS(820),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(820),
    [aux_sym__compression_token1] = ACTIONS(820),
    [aux_sym__connection_attempts_token1] = ACTIONS(820),
    [aux_sym__connect_timeout_token1] = ACTIONS(820),
    [aux_sym__control_master_token1] = ACTIONS(820),
    [aux_sym__control_persist_token1] = ACTIONS(820),
    [aux_sym__control_path_token1] = ACTIONS(820),
    [aux_sym__dynamic_forward_token1] = ACTIONS(820),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(820),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(820),
    [aux_sym__escape_char_token1] = ACTIONS(820),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(820),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(820),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(820),
    [aux_sym__forward_agent_token1] = ACTIONS(820),
    [aux_sym__forward_x11_token1] = ACTIONS(822),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(820),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(820),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(820),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(820),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(820),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(820),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(820),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(820),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(820),
    [aux_sym__host_key_alias_token1] = ACTIONS(820),
    [aux_sym__hostname_token1] = ACTIONS(820),
    [aux_sym__identities_only_token1] = ACTIONS(820),
    [aux_sym__identity_agent_token1] = ACTIONS(820),
    [aux_sym__identity_file_token1] = ACTIONS(820),
    [aux_sym__ignore_unknown_token1] = ACTIONS(820),
    [aux_sym__ipqos_token1] = ACTIONS(820),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(820),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(820),
    [aux_sym__kex_algorithms_token1] = ACTIONS(820),
    [aux_sym__known_hosts_command_token1] = ACTIONS(820),
    [aux_sym__local_command_token1] = ACTIONS(820),
    [aux_sym__local_forward_token1] = ACTIONS(820),
    [aux_sym__log_level_token1] = ACTIONS(820),
    [aux_sym__log_verbose_token1] = ACTIONS(820),
    [aux_sym__macs_token1] = ACTIONS(820),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(820),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(820),
    [aux_sym__password_authentication_token1] = ACTIONS(820),
    [aux_sym__permit_local_command_token1] = ACTIONS(820),
    [aux_sym__permit_remote_open_token1] = ACTIONS(820),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(820),
    [aux_sym__port_token1] = ACTIONS(820),
    [aux_sym__preferred_authentications_token1] = ACTIONS(820),
    [aux_sym__proxy_command_token1] = ACTIONS(820),
    [aux_sym__proxy_jump_token1] = ACTIONS(820),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(820),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(820),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(820),
    [aux_sym__rekey_limit_token1] = ACTIONS(820),
    [aux_sym__remote_command_token1] = ACTIONS(820),
    [aux_sym__remote_forward_token1] = ACTIONS(820),
    [aux_sym__request_tty_token1] = ACTIONS(820),
    [aux_sym__required_rsa_size_token1] = ACTIONS(820),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(820),
    [aux_sym__security_key_provider_token1] = ACTIONS(820),
    [aux_sym__send_env_token1] = ACTIONS(820),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(820),
    [aux_sym__server_alive_interval_token1] = ACTIONS(820),
    [aux_sym__session_type_token1] = ACTIONS(820),
    [aux_sym__stdin_null_token1] = ACTIONS(820),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(820),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(820),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(820),
    [aux_sym__syslog_facility_token1] = ACTIONS(820),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(820),
    [aux_sym__tag_token1] = ACTIONS(820),
    [aux_sym__tunnel_token1] = ACTIONS(822),
    [aux_sym__tunnel_device_token1] = ACTIONS(820),
    [aux_sym__update_host_keys_token1] = ACTIONS(820),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(820),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(820),
    [aux_sym__visual_host_key_token1] = ACTIONS(820),
    [aux_sym__xauth_location_token1] = ACTIONS(820),
    [sym_comment] = ACTIONS(820),
    [sym__space] = ACTIONS(820),
    [sym__eol] = ACTIONS(820),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(824),
    [aux_sym_host_declaration_token1] = ACTIONS(826),
    [aux_sym_match_declaration_token1] = ACTIONS(824),
    [aux_sym__match_user_token1] = ACTIONS(826),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(824),
    [aux_sym__address_family_token1] = ACTIONS(824),
    [aux_sym__batch_mode_token1] = ACTIONS(824),
    [aux_sym__bind_address_token1] = ACTIONS(824),
    [aux_sym__bind_interface_token1] = ACTIONS(824),
    [aux_sym__canonical_domains_token1] = ACTIONS(824),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(824),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(824),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(824),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(824),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(824),
    [aux_sym__certificate_file_token1] = ACTIONS(824),
    [aux_sym__check_host_ip_token1] = ACTIONS(824),
    [aux_sym__ciphers_token1] = ACTIONS(824),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(824),
    [aux_sym__compression_token1] = ACTIONS(824),
    [aux_sym__connection_attempts_token1] = ACTIONS(824),
    [aux_sym__connect_timeout_token1] = ACTIONS(824),
    [aux_sym__control_master_token1] = ACTIONS(824),
    [aux_sym__control_persist_token1] = ACTIONS(824),
    [aux_sym__control_path_token1] = ACTIONS(824),
    [aux_sym__dynamic_forward_token1] = ACTIONS(824),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(824),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(824),
    [aux_sym__escape_char_token1] = ACTIONS(824),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(824),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(824),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(824),
    [aux_sym__forward_agent_token1] = ACTIONS(824),
    [aux_sym__forward_x11_token1] = ACTIONS(826),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(824),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(824),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(824),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(824),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(824),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(824),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(824),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(824),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(824),
    [aux_sym__host_key_alias_token1] = ACTIONS(824),
    [aux_sym__hostname_token1] = ACTIONS(824),
    [aux_sym__identities_only_token1] = ACTIONS(824),
    [aux_sym__identity_agent_token1] = ACTIONS(824),
    [aux_sym__identity_file_token1] = ACTIONS(824),
    [aux_sym__ignore_unknown_token1] = ACTIONS(824),
    [aux_sym__ipqos_token1] = ACTIONS(824),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(824),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(824),
    [aux_sym__kex_algorithms_token1] = ACTIONS(824),
    [aux_sym__known_hosts_command_token1] = ACTIONS(824),
    [aux_sym__local_command_token1] = ACTIONS(824),
    [aux_sym__local_forward_token1] = ACTIONS(824),
    [aux_sym__log_level_token1] = ACTIONS(824),
    [aux_sym__log_verbose_token1] = ACTIONS(824),
    [aux_sym__macs_token1] = ACTIONS(824),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(824),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(824),
    [aux_sym__password_authentication_token1] = ACTIONS(824),
    [aux_sym__permit_local_command_token1] = ACTIONS(824),
    [aux_sym__permit_remote_open_token1] = ACTIONS(824),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(824),
    [aux_sym__port_token1] = ACTIONS(824),
    [aux_sym__preferred_authentications_token1] = ACTIONS(824),
    [aux_sym__proxy_command_token1] = ACTIONS(824),
    [aux_sym__proxy_jump_token1] = ACTIONS(824),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(824),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(824),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(824),
    [aux_sym__rekey_limit_token1] = ACTIONS(824),
    [aux_sym__remote_command_token1] = ACTIONS(824),
    [aux_sym__remote_forward_token1] = ACTIONS(824),
    [aux_sym__request_tty_token1] = ACTIONS(824),
    [aux_sym__required_rsa_size_token1] = ACTIONS(824),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(824),
    [aux_sym__security_key_provider_token1] = ACTIONS(824),
    [aux_sym__send_env_token1] = ACTIONS(824),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(824),
    [aux_sym__server_alive_interval_token1] = ACTIONS(824),
    [aux_sym__session_type_token1] = ACTIONS(824),
    [aux_sym__stdin_null_token1] = ACTIONS(824),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(824),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(824),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(824),
    [aux_sym__syslog_facility_token1] = ACTIONS(824),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(824),
    [aux_sym__tag_token1] = ACTIONS(824),
    [aux_sym__tunnel_token1] = ACTIONS(826),
    [aux_sym__tunnel_device_token1] = ACTIONS(824),
    [aux_sym__update_host_keys_token1] = ACTIONS(824),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(824),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(824),
    [aux_sym__visual_host_key_token1] = ACTIONS(824),
    [aux_sym__xauth_location_token1] = ACTIONS(824),
    [sym_comment] = ACTIONS(824),
    [sym__space] = ACTIONS(824),
    [sym__eol] = ACTIONS(824),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_host_declaration_token1] = ACTIONS(828),
    [aux_sym_match_declaration_token1] = ACTIONS(203),
    [aux_sym__match_user_token1] = ACTIONS(828),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(203),
    [aux_sym__address_family_token1] = ACTIONS(203),
    [aux_sym__batch_mode_token1] = ACTIONS(203),
    [aux_sym__bind_address_token1] = ACTIONS(203),
    [aux_sym__bind_interface_token1] = ACTIONS(203),
    [aux_sym__canonical_domains_token1] = ACTIONS(203),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(203),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(203),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(203),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(203),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(203),
    [aux_sym__certificate_file_token1] = ACTIONS(203),
    [aux_sym__check_host_ip_token1] = ACTIONS(203),
    [aux_sym__ciphers_token1] = ACTIONS(203),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(203),
    [aux_sym__compression_token1] = ACTIONS(203),
    [aux_sym__connection_attempts_token1] = ACTIONS(203),
    [aux_sym__connect_timeout_token1] = ACTIONS(203),
    [aux_sym__control_master_token1] = ACTIONS(203),
    [aux_sym__control_persist_token1] = ACTIONS(203),
    [aux_sym__control_path_token1] = ACTIONS(203),
    [aux_sym__dynamic_forward_token1] = ACTIONS(203),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(203),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(203),
    [aux_sym__escape_char_token1] = ACTIONS(203),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(203),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(203),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(203),
    [aux_sym__forward_agent_token1] = ACTIONS(203),
    [aux_sym__forward_x11_token1] = ACTIONS(828),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(203),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(203),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(203),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(203),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(203),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(203),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(203),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(203),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(203),
    [aux_sym__host_key_alias_token1] = ACTIONS(203),
    [aux_sym__hostname_token1] = ACTIONS(203),
    [aux_sym__identities_only_token1] = ACTIONS(203),
    [aux_sym__identity_agent_token1] = ACTIONS(203),
    [aux_sym__identity_file_token1] = ACTIONS(203),
    [aux_sym__ignore_unknown_token1] = ACTIONS(203),
    [aux_sym__ipqos_token1] = ACTIONS(203),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(203),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(203),
    [aux_sym__kex_algorithms_token1] = ACTIONS(203),
    [aux_sym__known_hosts_command_token1] = ACTIONS(203),
    [aux_sym__local_command_token1] = ACTIONS(203),
    [aux_sym__local_forward_token1] = ACTIONS(203),
    [aux_sym__log_level_token1] = ACTIONS(203),
    [aux_sym__log_verbose_token1] = ACTIONS(203),
    [aux_sym__macs_token1] = ACTIONS(203),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(203),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(203),
    [aux_sym__password_authentication_token1] = ACTIONS(203),
    [aux_sym__permit_local_command_token1] = ACTIONS(203),
    [aux_sym__permit_remote_open_token1] = ACTIONS(203),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(203),
    [aux_sym__port_token1] = ACTIONS(203),
    [aux_sym__preferred_authentications_token1] = ACTIONS(203),
    [aux_sym__proxy_command_token1] = ACTIONS(203),
    [aux_sym__proxy_jump_token1] = ACTIONS(203),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(203),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(203),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(203),
    [aux_sym__rekey_limit_token1] = ACTIONS(203),
    [aux_sym__remote_command_token1] = ACTIONS(203),
    [aux_sym__remote_forward_token1] = ACTIONS(203),
    [aux_sym__request_tty_token1] = ACTIONS(203),
    [aux_sym__required_rsa_size_token1] = ACTIONS(203),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(203),
    [aux_sym__security_key_provider_token1] = ACTIONS(203),
    [aux_sym__send_env_token1] = ACTIONS(203),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(203),
    [aux_sym__server_alive_interval_token1] = ACTIONS(203),
    [aux_sym__session_type_token1] = ACTIONS(203),
    [aux_sym__stdin_null_token1] = ACTIONS(203),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(203),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(203),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(203),
    [aux_sym__syslog_facility_token1] = ACTIONS(203),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(203),
    [aux_sym__tag_token1] = ACTIONS(203),
    [aux_sym__tunnel_token1] = ACTIONS(828),
    [aux_sym__tunnel_device_token1] = ACTIONS(203),
    [aux_sym__update_host_keys_token1] = ACTIONS(203),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(203),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(203),
    [aux_sym__visual_host_key_token1] = ACTIONS(203),
    [aux_sym__xauth_location_token1] = ACTIONS(203),
    [sym_comment] = ACTIONS(203),
    [sym__space] = ACTIONS(203),
    [sym__eol] = ACTIONS(203),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(830),
    [aux_sym_host_declaration_token1] = ACTIONS(832),
    [aux_sym_match_declaration_token1] = ACTIONS(830),
    [aux_sym__match_user_token1] = ACTIONS(832),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(830),
    [aux_sym__address_family_token1] = ACTIONS(830),
    [aux_sym__batch_mode_token1] = ACTIONS(830),
    [aux_sym__bind_address_token1] = ACTIONS(830),
    [aux_sym__bind_interface_token1] = ACTIONS(830),
    [aux_sym__canonical_domains_token1] = ACTIONS(830),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(830),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(830),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(830),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(830),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(830),
    [aux_sym__certificate_file_token1] = ACTIONS(830),
    [aux_sym__check_host_ip_token1] = ACTIONS(830),
    [aux_sym__ciphers_token1] = ACTIONS(830),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(830),
    [aux_sym__compression_token1] = ACTIONS(830),
    [aux_sym__connection_attempts_token1] = ACTIONS(830),
    [aux_sym__connect_timeout_token1] = ACTIONS(830),
    [aux_sym__control_master_token1] = ACTIONS(830),
    [aux_sym__control_persist_token1] = ACTIONS(830),
    [aux_sym__control_path_token1] = ACTIONS(830),
    [aux_sym__dynamic_forward_token1] = ACTIONS(830),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(830),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(830),
    [aux_sym__escape_char_token1] = ACTIONS(830),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(830),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(830),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(830),
    [aux_sym__forward_agent_token1] = ACTIONS(830),
    [aux_sym__forward_x11_token1] = ACTIONS(832),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(830),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(830),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(830),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(830),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(830),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(830),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(830),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(830),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(830),
    [aux_sym__host_key_alias_token1] = ACTIONS(830),
    [aux_sym__hostname_token1] = ACTIONS(830),
    [aux_sym__identities_only_token1] = ACTIONS(830),
    [aux_sym__identity_agent_token1] = ACTIONS(830),
    [aux_sym__identity_file_token1] = ACTIONS(830),
    [aux_sym__ignore_unknown_token1] = ACTIONS(830),
    [aux_sym__ipqos_token1] = ACTIONS(830),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(830),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(830),
    [aux_sym__kex_algorithms_token1] = ACTIONS(830),
    [aux_sym__known_hosts_command_token1] = ACTIONS(830),
    [aux_sym__local_command_token1] = ACTIONS(830),
    [aux_sym__local_forward_token1] = ACTIONS(830),
    [aux_sym__log_level_token1] = ACTIONS(830),
    [aux_sym__log_verbose_token1] = ACTIONS(830),
    [aux_sym__macs_token1] = ACTIONS(830),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(830),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(830),
    [aux_sym__password_authentication_token1] = ACTIONS(830),
    [aux_sym__permit_local_command_token1] = ACTIONS(830),
    [aux_sym__permit_remote_open_token1] = ACTIONS(830),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(830),
    [aux_sym__port_token1] = ACTIONS(830),
    [aux_sym__preferred_authentications_token1] = ACTIONS(830),
    [aux_sym__proxy_command_token1] = ACTIONS(830),
    [aux_sym__proxy_jump_token1] = ACTIONS(830),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(830),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(830),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(830),
    [aux_sym__rekey_limit_token1] = ACTIONS(830),
    [aux_sym__remote_command_token1] = ACTIONS(830),
    [aux_sym__remote_forward_token1] = ACTIONS(830),
    [aux_sym__request_tty_token1] = ACTIONS(830),
    [aux_sym__required_rsa_size_token1] = ACTIONS(830),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(830),
    [aux_sym__security_key_provider_token1] = ACTIONS(830),
    [aux_sym__send_env_token1] = ACTIONS(830),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(830),
    [aux_sym__server_alive_interval_token1] = ACTIONS(830),
    [aux_sym__session_type_token1] = ACTIONS(830),
    [aux_sym__stdin_null_token1] = ACTIONS(830),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(830),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(830),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(830),
    [aux_sym__syslog_facility_token1] = ACTIONS(830),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(830),
    [aux_sym__tag_token1] = ACTIONS(830),
    [aux_sym__tunnel_token1] = ACTIONS(832),
    [aux_sym__tunnel_device_token1] = ACTIONS(830),
    [aux_sym__update_host_keys_token1] = ACTIONS(830),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(830),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(830),
    [aux_sym__visual_host_key_token1] = ACTIONS(830),
    [aux_sym__xauth_location_token1] = ACTIONS(830),
    [sym_comment] = ACTIONS(830),
    [sym__space] = ACTIONS(830),
    [sym__eol] = ACTIONS(830),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(834),
    [aux_sym_host_declaration_token1] = ACTIONS(836),
    [aux_sym_match_declaration_token1] = ACTIONS(834),
    [aux_sym__match_user_token1] = ACTIONS(836),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(834),
    [aux_sym__address_family_token1] = ACTIONS(834),
    [aux_sym__batch_mode_token1] = ACTIONS(834),
    [aux_sym__bind_address_token1] = ACTIONS(834),
    [aux_sym__bind_interface_token1] = ACTIONS(834),
    [aux_sym__canonical_domains_token1] = ACTIONS(834),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(834),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(834),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(834),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(834),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(834),
    [aux_sym__certificate_file_token1] = ACTIONS(834),
    [aux_sym__check_host_ip_token1] = ACTIONS(834),
    [aux_sym__ciphers_token1] = ACTIONS(834),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(834),
    [aux_sym__compression_token1] = ACTIONS(834),
    [aux_sym__connection_attempts_token1] = ACTIONS(834),
    [aux_sym__connect_timeout_token1] = ACTIONS(834),
    [aux_sym__control_master_token1] = ACTIONS(834),
    [aux_sym__control_persist_token1] = ACTIONS(834),
    [aux_sym__control_path_token1] = ACTIONS(834),
    [aux_sym__dynamic_forward_token1] = ACTIONS(834),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(834),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(834),
    [aux_sym__escape_char_token1] = ACTIONS(834),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(834),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(834),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(834),
    [aux_sym__forward_agent_token1] = ACTIONS(834),
    [aux_sym__forward_x11_token1] = ACTIONS(836),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(834),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(834),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(834),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(834),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(834),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(834),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(834),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(834),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(834),
    [aux_sym__host_key_alias_token1] = ACTIONS(834),
    [aux_sym__hostname_token1] = ACTIONS(834),
    [aux_sym__identities_only_token1] = ACTIONS(834),
    [aux_sym__identity_agent_token1] = ACTIONS(834),
    [aux_sym__identity_file_token1] = ACTIONS(834),
    [aux_sym__ignore_unknown_token1] = ACTIONS(834),
    [aux_sym__ipqos_token1] = ACTIONS(834),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(834),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(834),
    [aux_sym__kex_algorithms_token1] = ACTIONS(834),
    [aux_sym__known_hosts_command_token1] = ACTIONS(834),
    [aux_sym__local_command_token1] = ACTIONS(834),
    [aux_sym__local_forward_token1] = ACTIONS(834),
    [aux_sym__log_level_token1] = ACTIONS(834),
    [aux_sym__log_verbose_token1] = ACTIONS(834),
    [aux_sym__macs_token1] = ACTIONS(834),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(834),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(834),
    [aux_sym__password_authentication_token1] = ACTIONS(834),
    [aux_sym__permit_local_command_token1] = ACTIONS(834),
    [aux_sym__permit_remote_open_token1] = ACTIONS(834),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(834),
    [aux_sym__port_token1] = ACTIONS(834),
    [aux_sym__preferred_authentications_token1] = ACTIONS(834),
    [aux_sym__proxy_command_token1] = ACTIONS(834),
    [aux_sym__proxy_jump_token1] = ACTIONS(834),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(834),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(834),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(834),
    [aux_sym__rekey_limit_token1] = ACTIONS(834),
    [aux_sym__remote_command_token1] = ACTIONS(834),
    [aux_sym__remote_forward_token1] = ACTIONS(834),
    [aux_sym__request_tty_token1] = ACTIONS(834),
    [aux_sym__required_rsa_size_token1] = ACTIONS(834),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(834),
    [aux_sym__security_key_provider_token1] = ACTIONS(834),
    [aux_sym__send_env_token1] = ACTIONS(834),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(834),
    [aux_sym__server_alive_interval_token1] = ACTIONS(834),
    [aux_sym__session_type_token1] = ACTIONS(834),
    [aux_sym__stdin_null_token1] = ACTIONS(834),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(834),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(834),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(834),
    [aux_sym__syslog_facility_token1] = ACTIONS(834),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(834),
    [aux_sym__tag_token1] = ACTIONS(834),
    [aux_sym__tunnel_token1] = ACTIONS(836),
    [aux_sym__tunnel_device_token1] = ACTIONS(834),
    [aux_sym__update_host_keys_token1] = ACTIONS(834),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(834),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(834),
    [aux_sym__visual_host_key_token1] = ACTIONS(834),
    [aux_sym__xauth_location_token1] = ACTIONS(834),
    [sym_comment] = ACTIONS(834),
    [sym__space] = ACTIONS(834),
    [sym__eol] = ACTIONS(834),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(838),
    [aux_sym_host_declaration_token1] = ACTIONS(840),
    [aux_sym_match_declaration_token1] = ACTIONS(838),
    [aux_sym__match_user_token1] = ACTIONS(840),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(838),
    [aux_sym__address_family_token1] = ACTIONS(838),
    [aux_sym__batch_mode_token1] = ACTIONS(838),
    [aux_sym__bind_address_token1] = ACTIONS(838),
    [aux_sym__bind_interface_token1] = ACTIONS(838),
    [aux_sym__canonical_domains_token1] = ACTIONS(838),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(838),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(838),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(838),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(838),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(838),
    [aux_sym__certificate_file_token1] = ACTIONS(838),
    [aux_sym__check_host_ip_token1] = ACTIONS(838),
    [aux_sym__ciphers_token1] = ACTIONS(838),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(838),
    [aux_sym__compression_token1] = ACTIONS(838),
    [aux_sym__connection_attempts_token1] = ACTIONS(838),
    [aux_sym__connect_timeout_token1] = ACTIONS(838),
    [aux_sym__control_master_token1] = ACTIONS(838),
    [aux_sym__control_persist_token1] = ACTIONS(838),
    [aux_sym__control_path_token1] = ACTIONS(838),
    [aux_sym__dynamic_forward_token1] = ACTIONS(838),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(838),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(838),
    [aux_sym__escape_char_token1] = ACTIONS(838),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(838),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(838),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(838),
    [aux_sym__forward_agent_token1] = ACTIONS(838),
    [aux_sym__forward_x11_token1] = ACTIONS(840),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(838),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(838),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(838),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(838),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(838),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(838),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(838),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(838),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(838),
    [aux_sym__host_key_alias_token1] = ACTIONS(838),
    [aux_sym__hostname_token1] = ACTIONS(838),
    [aux_sym__identities_only_token1] = ACTIONS(838),
    [aux_sym__identity_agent_token1] = ACTIONS(838),
    [aux_sym__identity_file_token1] = ACTIONS(838),
    [aux_sym__ignore_unknown_token1] = ACTIONS(838),
    [aux_sym__ipqos_token1] = ACTIONS(838),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(838),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(838),
    [aux_sym__kex_algorithms_token1] = ACTIONS(838),
    [aux_sym__known_hosts_command_token1] = ACTIONS(838),
    [aux_sym__local_command_token1] = ACTIONS(838),
    [aux_sym__local_forward_token1] = ACTIONS(838),
    [aux_sym__log_level_token1] = ACTIONS(838),
    [aux_sym__log_verbose_token1] = ACTIONS(838),
    [aux_sym__macs_token1] = ACTIONS(838),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(838),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(838),
    [aux_sym__password_authentication_token1] = ACTIONS(838),
    [aux_sym__permit_local_command_token1] = ACTIONS(838),
    [aux_sym__permit_remote_open_token1] = ACTIONS(838),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(838),
    [aux_sym__port_token1] = ACTIONS(838),
    [aux_sym__preferred_authentications_token1] = ACTIONS(838),
    [aux_sym__proxy_command_token1] = ACTIONS(838),
    [aux_sym__proxy_jump_token1] = ACTIONS(838),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(838),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(838),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(838),
    [aux_sym__rekey_limit_token1] = ACTIONS(838),
    [aux_sym__remote_command_token1] = ACTIONS(838),
    [aux_sym__remote_forward_token1] = ACTIONS(838),
    [aux_sym__request_tty_token1] = ACTIONS(838),
    [aux_sym__required_rsa_size_token1] = ACTIONS(838),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(838),
    [aux_sym__security_key_provider_token1] = ACTIONS(838),
    [aux_sym__send_env_token1] = ACTIONS(838),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(838),
    [aux_sym__server_alive_interval_token1] = ACTIONS(838),
    [aux_sym__session_type_token1] = ACTIONS(838),
    [aux_sym__stdin_null_token1] = ACTIONS(838),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(838),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(838),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(838),
    [aux_sym__syslog_facility_token1] = ACTIONS(838),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(838),
    [aux_sym__tag_token1] = ACTIONS(838),
    [aux_sym__tunnel_token1] = ACTIONS(840),
    [aux_sym__tunnel_device_token1] = ACTIONS(838),
    [aux_sym__update_host_keys_token1] = ACTIONS(838),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(838),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(838),
    [aux_sym__visual_host_key_token1] = ACTIONS(838),
    [aux_sym__xauth_location_token1] = ACTIONS(838),
    [sym_comment] = ACTIONS(838),
    [sym__space] = ACTIONS(838),
    [sym__eol] = ACTIONS(838),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_host_declaration_token1] = ACTIONS(498),
    [aux_sym_match_declaration_token1] = ACTIONS(496),
    [aux_sym__match_user_token1] = ACTIONS(498),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(496),
    [aux_sym__address_family_token1] = ACTIONS(496),
    [aux_sym__batch_mode_token1] = ACTIONS(496),
    [aux_sym__bind_address_token1] = ACTIONS(496),
    [aux_sym__bind_interface_token1] = ACTIONS(496),
    [aux_sym__canonical_domains_token1] = ACTIONS(496),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(496),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(496),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(496),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(496),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(496),
    [aux_sym__certificate_file_token1] = ACTIONS(496),
    [aux_sym__check_host_ip_token1] = ACTIONS(496),
    [aux_sym__ciphers_token1] = ACTIONS(496),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(496),
    [aux_sym__compression_token1] = ACTIONS(496),
    [aux_sym__connection_attempts_token1] = ACTIONS(496),
    [aux_sym__connect_timeout_token1] = ACTIONS(496),
    [aux_sym__control_master_token1] = ACTIONS(496),
    [aux_sym__control_persist_token1] = ACTIONS(496),
    [aux_sym__control_path_token1] = ACTIONS(496),
    [aux_sym__dynamic_forward_token1] = ACTIONS(496),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(496),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(496),
    [aux_sym__escape_char_token1] = ACTIONS(496),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(496),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(496),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(496),
    [aux_sym__forward_agent_token1] = ACTIONS(496),
    [aux_sym__forward_x11_token1] = ACTIONS(498),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(496),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(496),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(496),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(496),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(496),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(496),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(496),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(496),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(496),
    [aux_sym__host_key_alias_token1] = ACTIONS(496),
    [aux_sym__hostname_token1] = ACTIONS(496),
    [aux_sym__identities_only_token1] = ACTIONS(496),
    [aux_sym__identity_agent_token1] = ACTIONS(496),
    [aux_sym__identity_file_token1] = ACTIONS(496),
    [aux_sym__ignore_unknown_token1] = ACTIONS(496),
    [aux_sym__ipqos_token1] = ACTIONS(496),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(496),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(496),
    [aux_sym__kex_algorithms_token1] = ACTIONS(496),
    [aux_sym__known_hosts_command_token1] = ACTIONS(496),
    [aux_sym__local_command_token1] = ACTIONS(496),
    [aux_sym__local_forward_token1] = ACTIONS(496),
    [aux_sym__log_level_token1] = ACTIONS(496),
    [aux_sym__log_verbose_token1] = ACTIONS(496),
    [aux_sym__macs_token1] = ACTIONS(496),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(496),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(496),
    [aux_sym__password_authentication_token1] = ACTIONS(496),
    [aux_sym__permit_local_command_token1] = ACTIONS(496),
    [aux_sym__permit_remote_open_token1] = ACTIONS(496),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(496),
    [aux_sym__port_token1] = ACTIONS(496),
    [aux_sym__preferred_authentications_token1] = ACTIONS(496),
    [aux_sym__proxy_command_token1] = ACTIONS(496),
    [aux_sym__proxy_jump_token1] = ACTIONS(496),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(496),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(496),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(496),
    [aux_sym__rekey_limit_token1] = ACTIONS(496),
    [aux_sym__remote_command_token1] = ACTIONS(496),
    [aux_sym__remote_forward_token1] = ACTIONS(496),
    [aux_sym__request_tty_token1] = ACTIONS(496),
    [aux_sym__required_rsa_size_token1] = ACTIONS(496),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(496),
    [aux_sym__security_key_provider_token1] = ACTIONS(496),
    [aux_sym__send_env_token1] = ACTIONS(496),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(496),
    [aux_sym__server_alive_interval_token1] = ACTIONS(496),
    [aux_sym__session_type_token1] = ACTIONS(496),
    [aux_sym__stdin_null_token1] = ACTIONS(496),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(496),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(496),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(496),
    [aux_sym__syslog_facility_token1] = ACTIONS(496),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(496),
    [aux_sym__tag_token1] = ACTIONS(496),
    [aux_sym__tunnel_token1] = ACTIONS(498),
    [aux_sym__tunnel_device_token1] = ACTIONS(496),
    [aux_sym__update_host_keys_token1] = ACTIONS(496),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(496),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(496),
    [aux_sym__visual_host_key_token1] = ACTIONS(496),
    [aux_sym__xauth_location_token1] = ACTIONS(496),
    [sym_comment] = ACTIONS(496),
    [sym__space] = ACTIONS(496),
    [sym__eol] = ACTIONS(496),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(842),
    [aux_sym_host_declaration_token1] = ACTIONS(844),
    [aux_sym_match_declaration_token1] = ACTIONS(842),
    [aux_sym__match_user_token1] = ACTIONS(844),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(842),
    [aux_sym__address_family_token1] = ACTIONS(842),
    [aux_sym__batch_mode_token1] = ACTIONS(842),
    [aux_sym__bind_address_token1] = ACTIONS(842),
    [aux_sym__bind_interface_token1] = ACTIONS(842),
    [aux_sym__canonical_domains_token1] = ACTIONS(842),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(842),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(842),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(842),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(842),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(842),
    [aux_sym__certificate_file_token1] = ACTIONS(842),
    [aux_sym__check_host_ip_token1] = ACTIONS(842),
    [aux_sym__ciphers_token1] = ACTIONS(842),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(842),
    [aux_sym__compression_token1] = ACTIONS(842),
    [aux_sym__connection_attempts_token1] = ACTIONS(842),
    [aux_sym__connect_timeout_token1] = ACTIONS(842),
    [aux_sym__control_master_token1] = ACTIONS(842),
    [aux_sym__control_persist_token1] = ACTIONS(842),
    [aux_sym__control_path_token1] = ACTIONS(842),
    [aux_sym__dynamic_forward_token1] = ACTIONS(842),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(842),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(842),
    [aux_sym__escape_char_token1] = ACTIONS(842),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(842),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(842),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(842),
    [aux_sym__forward_agent_token1] = ACTIONS(842),
    [aux_sym__forward_x11_token1] = ACTIONS(844),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(842),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(842),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(842),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(842),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(842),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(842),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(842),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(842),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(842),
    [aux_sym__host_key_alias_token1] = ACTIONS(842),
    [aux_sym__hostname_token1] = ACTIONS(842),
    [aux_sym__identities_only_token1] = ACTIONS(842),
    [aux_sym__identity_agent_token1] = ACTIONS(842),
    [aux_sym__identity_file_token1] = ACTIONS(842),
    [aux_sym__ignore_unknown_token1] = ACTIONS(842),
    [aux_sym__ipqos_token1] = ACTIONS(842),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(842),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(842),
    [aux_sym__kex_algorithms_token1] = ACTIONS(842),
    [aux_sym__known_hosts_command_token1] = ACTIONS(842),
    [aux_sym__local_command_token1] = ACTIONS(842),
    [aux_sym__local_forward_token1] = ACTIONS(842),
    [aux_sym__log_level_token1] = ACTIONS(842),
    [aux_sym__log_verbose_token1] = ACTIONS(842),
    [aux_sym__macs_token1] = ACTIONS(842),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(842),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(842),
    [aux_sym__password_authentication_token1] = ACTIONS(842),
    [aux_sym__permit_local_command_token1] = ACTIONS(842),
    [aux_sym__permit_remote_open_token1] = ACTIONS(842),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(842),
    [aux_sym__port_token1] = ACTIONS(842),
    [aux_sym__preferred_authentications_token1] = ACTIONS(842),
    [aux_sym__proxy_command_token1] = ACTIONS(842),
    [aux_sym__proxy_jump_token1] = ACTIONS(842),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(842),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(842),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(842),
    [aux_sym__rekey_limit_token1] = ACTIONS(842),
    [aux_sym__remote_command_token1] = ACTIONS(842),
    [aux_sym__remote_forward_token1] = ACTIONS(842),
    [aux_sym__request_tty_token1] = ACTIONS(842),
    [aux_sym__required_rsa_size_token1] = ACTIONS(842),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(842),
    [aux_sym__security_key_provider_token1] = ACTIONS(842),
    [aux_sym__send_env_token1] = ACTIONS(842),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(842),
    [aux_sym__server_alive_interval_token1] = ACTIONS(842),
    [aux_sym__session_type_token1] = ACTIONS(842),
    [aux_sym__stdin_null_token1] = ACTIONS(842),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(842),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(842),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(842),
    [aux_sym__syslog_facility_token1] = ACTIONS(842),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(842),
    [aux_sym__tag_token1] = ACTIONS(842),
    [aux_sym__tunnel_token1] = ACTIONS(844),
    [aux_sym__tunnel_device_token1] = ACTIONS(842),
    [aux_sym__update_host_keys_token1] = ACTIONS(842),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(842),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(842),
    [aux_sym__visual_host_key_token1] = ACTIONS(842),
    [aux_sym__xauth_location_token1] = ACTIONS(842),
    [sym_comment] = ACTIONS(842),
    [sym__space] = ACTIONS(842),
    [sym__eol] = ACTIONS(842),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(846),
    [aux_sym_host_declaration_token1] = ACTIONS(848),
    [aux_sym_match_declaration_token1] = ACTIONS(846),
    [aux_sym__match_user_token1] = ACTIONS(848),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(846),
    [aux_sym__address_family_token1] = ACTIONS(846),
    [aux_sym__batch_mode_token1] = ACTIONS(846),
    [aux_sym__bind_address_token1] = ACTIONS(846),
    [aux_sym__bind_interface_token1] = ACTIONS(846),
    [aux_sym__canonical_domains_token1] = ACTIONS(846),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(846),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(846),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(846),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(846),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(846),
    [aux_sym__certificate_file_token1] = ACTIONS(846),
    [aux_sym__check_host_ip_token1] = ACTIONS(846),
    [aux_sym__ciphers_token1] = ACTIONS(846),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(846),
    [aux_sym__compression_token1] = ACTIONS(846),
    [aux_sym__connection_attempts_token1] = ACTIONS(846),
    [aux_sym__connect_timeout_token1] = ACTIONS(846),
    [aux_sym__control_master_token1] = ACTIONS(846),
    [aux_sym__control_persist_token1] = ACTIONS(846),
    [aux_sym__control_path_token1] = ACTIONS(846),
    [aux_sym__dynamic_forward_token1] = ACTIONS(846),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(846),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(846),
    [aux_sym__escape_char_token1] = ACTIONS(846),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(846),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(846),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(846),
    [aux_sym__forward_agent_token1] = ACTIONS(846),
    [aux_sym__forward_x11_token1] = ACTIONS(848),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(846),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(846),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(846),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(846),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(846),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(846),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(846),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(846),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(846),
    [aux_sym__host_key_alias_token1] = ACTIONS(846),
    [aux_sym__hostname_token1] = ACTIONS(846),
    [aux_sym__identities_only_token1] = ACTIONS(846),
    [aux_sym__identity_agent_token1] = ACTIONS(846),
    [aux_sym__identity_file_token1] = ACTIONS(846),
    [aux_sym__ignore_unknown_token1] = ACTIONS(846),
    [aux_sym__ipqos_token1] = ACTIONS(846),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(846),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(846),
    [aux_sym__kex_algorithms_token1] = ACTIONS(846),
    [aux_sym__known_hosts_command_token1] = ACTIONS(846),
    [aux_sym__local_command_token1] = ACTIONS(846),
    [aux_sym__local_forward_token1] = ACTIONS(846),
    [aux_sym__log_level_token1] = ACTIONS(846),
    [aux_sym__log_verbose_token1] = ACTIONS(846),
    [aux_sym__macs_token1] = ACTIONS(846),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(846),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(846),
    [aux_sym__password_authentication_token1] = ACTIONS(846),
    [aux_sym__permit_local_command_token1] = ACTIONS(846),
    [aux_sym__permit_remote_open_token1] = ACTIONS(846),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(846),
    [aux_sym__port_token1] = ACTIONS(846),
    [aux_sym__preferred_authentications_token1] = ACTIONS(846),
    [aux_sym__proxy_command_token1] = ACTIONS(846),
    [aux_sym__proxy_jump_token1] = ACTIONS(846),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(846),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(846),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(846),
    [aux_sym__rekey_limit_token1] = ACTIONS(846),
    [aux_sym__remote_command_token1] = ACTIONS(846),
    [aux_sym__remote_forward_token1] = ACTIONS(846),
    [aux_sym__request_tty_token1] = ACTIONS(846),
    [aux_sym__required_rsa_size_token1] = ACTIONS(846),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(846),
    [aux_sym__security_key_provider_token1] = ACTIONS(846),
    [aux_sym__send_env_token1] = ACTIONS(846),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(846),
    [aux_sym__server_alive_interval_token1] = ACTIONS(846),
    [aux_sym__session_type_token1] = ACTIONS(846),
    [aux_sym__stdin_null_token1] = ACTIONS(846),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(846),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(846),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(846),
    [aux_sym__syslog_facility_token1] = ACTIONS(846),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(846),
    [aux_sym__tag_token1] = ACTIONS(846),
    [aux_sym__tunnel_token1] = ACTIONS(848),
    [aux_sym__tunnel_device_token1] = ACTIONS(846),
    [aux_sym__update_host_keys_token1] = ACTIONS(846),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(846),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(846),
    [aux_sym__visual_host_key_token1] = ACTIONS(846),
    [aux_sym__xauth_location_token1] = ACTIONS(846),
    [sym_comment] = ACTIONS(846),
    [sym__space] = ACTIONS(846),
    [sym__eol] = ACTIONS(846),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(850),
    [aux_sym_host_declaration_token1] = ACTIONS(852),
    [aux_sym_match_declaration_token1] = ACTIONS(850),
    [aux_sym__match_user_token1] = ACTIONS(852),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(850),
    [aux_sym__address_family_token1] = ACTIONS(850),
    [aux_sym__batch_mode_token1] = ACTIONS(850),
    [aux_sym__bind_address_token1] = ACTIONS(850),
    [aux_sym__bind_interface_token1] = ACTIONS(850),
    [aux_sym__canonical_domains_token1] = ACTIONS(850),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(850),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(850),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(850),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(850),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(850),
    [aux_sym__certificate_file_token1] = ACTIONS(850),
    [aux_sym__check_host_ip_token1] = ACTIONS(850),
    [aux_sym__ciphers_token1] = ACTIONS(850),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(850),
    [aux_sym__compression_token1] = ACTIONS(850),
    [aux_sym__connection_attempts_token1] = ACTIONS(850),
    [aux_sym__connect_timeout_token1] = ACTIONS(850),
    [aux_sym__control_master_token1] = ACTIONS(850),
    [aux_sym__control_persist_token1] = ACTIONS(850),
    [aux_sym__control_path_token1] = ACTIONS(850),
    [aux_sym__dynamic_forward_token1] = ACTIONS(850),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(850),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(850),
    [aux_sym__escape_char_token1] = ACTIONS(850),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(850),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(850),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(850),
    [aux_sym__forward_agent_token1] = ACTIONS(850),
    [aux_sym__forward_x11_token1] = ACTIONS(852),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(850),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(850),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(850),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(850),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(850),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(850),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(850),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(850),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(850),
    [aux_sym__host_key_alias_token1] = ACTIONS(850),
    [aux_sym__hostname_token1] = ACTIONS(850),
    [aux_sym__identities_only_token1] = ACTIONS(850),
    [aux_sym__identity_agent_token1] = ACTIONS(850),
    [aux_sym__identity_file_token1] = ACTIONS(850),
    [aux_sym__ignore_unknown_token1] = ACTIONS(850),
    [aux_sym__ipqos_token1] = ACTIONS(850),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(850),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(850),
    [aux_sym__kex_algorithms_token1] = ACTIONS(850),
    [aux_sym__known_hosts_command_token1] = ACTIONS(850),
    [aux_sym__local_command_token1] = ACTIONS(850),
    [aux_sym__local_forward_token1] = ACTIONS(850),
    [aux_sym__log_level_token1] = ACTIONS(850),
    [aux_sym__log_verbose_token1] = ACTIONS(850),
    [aux_sym__macs_token1] = ACTIONS(850),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(850),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(850),
    [aux_sym__password_authentication_token1] = ACTIONS(850),
    [aux_sym__permit_local_command_token1] = ACTIONS(850),
    [aux_sym__permit_remote_open_token1] = ACTIONS(850),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(850),
    [aux_sym__port_token1] = ACTIONS(850),
    [aux_sym__preferred_authentications_token1] = ACTIONS(850),
    [aux_sym__proxy_command_token1] = ACTIONS(850),
    [aux_sym__proxy_jump_token1] = ACTIONS(850),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(850),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(850),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(850),
    [aux_sym__rekey_limit_token1] = ACTIONS(850),
    [aux_sym__remote_command_token1] = ACTIONS(850),
    [aux_sym__remote_forward_token1] = ACTIONS(850),
    [aux_sym__request_tty_token1] = ACTIONS(850),
    [aux_sym__required_rsa_size_token1] = ACTIONS(850),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(850),
    [aux_sym__security_key_provider_token1] = ACTIONS(850),
    [aux_sym__send_env_token1] = ACTIONS(850),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(850),
    [aux_sym__server_alive_interval_token1] = ACTIONS(850),
    [aux_sym__session_type_token1] = ACTIONS(850),
    [aux_sym__stdin_null_token1] = ACTIONS(850),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(850),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(850),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(850),
    [aux_sym__syslog_facility_token1] = ACTIONS(850),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(850),
    [aux_sym__tag_token1] = ACTIONS(850),
    [aux_sym__tunnel_token1] = ACTIONS(852),
    [aux_sym__tunnel_device_token1] = ACTIONS(850),
    [aux_sym__update_host_keys_token1] = ACTIONS(850),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(850),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(850),
    [aux_sym__visual_host_key_token1] = ACTIONS(850),
    [aux_sym__xauth_location_token1] = ACTIONS(850),
    [sym_comment] = ACTIONS(850),
    [sym__space] = ACTIONS(850),
    [sym__eol] = ACTIONS(850),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(854),
    [aux_sym_host_declaration_token1] = ACTIONS(856),
    [aux_sym_match_declaration_token1] = ACTIONS(854),
    [aux_sym__match_user_token1] = ACTIONS(856),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(854),
    [aux_sym__address_family_token1] = ACTIONS(854),
    [aux_sym__batch_mode_token1] = ACTIONS(854),
    [aux_sym__bind_address_token1] = ACTIONS(854),
    [aux_sym__bind_interface_token1] = ACTIONS(854),
    [aux_sym__canonical_domains_token1] = ACTIONS(854),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(854),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(854),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(854),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(854),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(854),
    [aux_sym__certificate_file_token1] = ACTIONS(854),
    [aux_sym__check_host_ip_token1] = ACTIONS(854),
    [aux_sym__ciphers_token1] = ACTIONS(854),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(854),
    [aux_sym__compression_token1] = ACTIONS(854),
    [aux_sym__connection_attempts_token1] = ACTIONS(854),
    [aux_sym__connect_timeout_token1] = ACTIONS(854),
    [aux_sym__control_master_token1] = ACTIONS(854),
    [aux_sym__control_persist_token1] = ACTIONS(854),
    [aux_sym__control_path_token1] = ACTIONS(854),
    [aux_sym__dynamic_forward_token1] = ACTIONS(854),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(854),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(854),
    [aux_sym__escape_char_token1] = ACTIONS(854),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(854),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(854),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(854),
    [aux_sym__forward_agent_token1] = ACTIONS(854),
    [aux_sym__forward_x11_token1] = ACTIONS(856),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(854),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(854),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(854),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(854),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(854),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(854),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(854),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(854),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(854),
    [aux_sym__host_key_alias_token1] = ACTIONS(854),
    [aux_sym__hostname_token1] = ACTIONS(854),
    [aux_sym__identities_only_token1] = ACTIONS(854),
    [aux_sym__identity_agent_token1] = ACTIONS(854),
    [aux_sym__identity_file_token1] = ACTIONS(854),
    [aux_sym__ignore_unknown_token1] = ACTIONS(854),
    [aux_sym__ipqos_token1] = ACTIONS(854),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(854),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(854),
    [aux_sym__kex_algorithms_token1] = ACTIONS(854),
    [aux_sym__known_hosts_command_token1] = ACTIONS(854),
    [aux_sym__local_command_token1] = ACTIONS(854),
    [aux_sym__local_forward_token1] = ACTIONS(854),
    [aux_sym__log_level_token1] = ACTIONS(854),
    [aux_sym__log_verbose_token1] = ACTIONS(854),
    [aux_sym__macs_token1] = ACTIONS(854),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(854),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(854),
    [aux_sym__password_authentication_token1] = ACTIONS(854),
    [aux_sym__permit_local_command_token1] = ACTIONS(854),
    [aux_sym__permit_remote_open_token1] = ACTIONS(854),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(854),
    [aux_sym__port_token1] = ACTIONS(854),
    [aux_sym__preferred_authentications_token1] = ACTIONS(854),
    [aux_sym__proxy_command_token1] = ACTIONS(854),
    [aux_sym__proxy_jump_token1] = ACTIONS(854),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(854),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(854),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(854),
    [aux_sym__rekey_limit_token1] = ACTIONS(854),
    [aux_sym__remote_command_token1] = ACTIONS(854),
    [aux_sym__remote_forward_token1] = ACTIONS(854),
    [aux_sym__request_tty_token1] = ACTIONS(854),
    [aux_sym__required_rsa_size_token1] = ACTIONS(854),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(854),
    [aux_sym__security_key_provider_token1] = ACTIONS(854),
    [aux_sym__send_env_token1] = ACTIONS(854),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(854),
    [aux_sym__server_alive_interval_token1] = ACTIONS(854),
    [aux_sym__session_type_token1] = ACTIONS(854),
    [aux_sym__stdin_null_token1] = ACTIONS(854),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(854),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(854),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(854),
    [aux_sym__syslog_facility_token1] = ACTIONS(854),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(854),
    [aux_sym__tag_token1] = ACTIONS(854),
    [aux_sym__tunnel_token1] = ACTIONS(856),
    [aux_sym__tunnel_device_token1] = ACTIONS(854),
    [aux_sym__update_host_keys_token1] = ACTIONS(854),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(854),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(854),
    [aux_sym__visual_host_key_token1] = ACTIONS(854),
    [aux_sym__xauth_location_token1] = ACTIONS(854),
    [sym_comment] = ACTIONS(854),
    [sym__space] = ACTIONS(854),
    [sym__eol] = ACTIONS(854),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(858), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(860), 1,
      aux_sym__all_token1,
    ACTIONS(862), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(864), 1,
      aux_sym__match_final_token1,
    ACTIONS(866), 1,
      aux_sym__match_exec_token1,
    ACTIONS(868), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(870), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(872), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(874), 1,
      aux_sym__match_user_token1,
    ACTIONS(876), 1,
      aux_sym__match_localuser_token1,
    STATE(306), 1,
      sym_condition,
    STATE(536), 1,
      sym__all,
    STATE(541), 1,
      sym__match_canonical,
    STATE(550), 1,
      sym__match_final,
    STATE(552), 1,
      sym__match_exec,
    STATE(556), 1,
      sym__match_localnetwork,
    STATE(559), 1,
      sym__match_host,
    STATE(601), 1,
      sym__match_originalhost,
    STATE(603), 1,
      sym__match_tagged,
    STATE(604), 1,
      sym__match_user,
    STATE(629), 1,
      sym__match_localuser,
  [64] = 20,
    ACTIONS(858), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(862), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(864), 1,
      aux_sym__match_final_token1,
    ACTIONS(866), 1,
      aux_sym__match_exec_token1,
    ACTIONS(868), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(870), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(872), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(874), 1,
      aux_sym__match_user_token1,
    ACTIONS(876), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(878), 1,
      sym__eol,
    STATE(541), 1,
      sym__match_canonical,
    STATE(550), 1,
      sym__match_final,
    STATE(552), 1,
      sym__match_exec,
    STATE(556), 1,
      sym__match_localnetwork,
    STATE(559), 1,
      sym__match_host,
    STATE(601), 1,
      sym__match_originalhost,
    STATE(603), 1,
      sym__match_tagged,
    STATE(604), 1,
      sym__match_user,
    STATE(610), 1,
      sym_condition,
    STATE(629), 1,
      sym__match_localuser,
  [125] = 20,
    ACTIONS(858), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(862), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(864), 1,
      aux_sym__match_final_token1,
    ACTIONS(866), 1,
      aux_sym__match_exec_token1,
    ACTIONS(868), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(870), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(872), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(874), 1,
      aux_sym__match_user_token1,
    ACTIONS(876), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(880), 1,
      sym__eol,
    STATE(541), 1,
      sym__match_canonical,
    STATE(550), 1,
      sym__match_final,
    STATE(552), 1,
      sym__match_exec,
    STATE(556), 1,
      sym__match_localnetwork,
    STATE(559), 1,
      sym__match_host,
    STATE(601), 1,
      sym__match_originalhost,
    STATE(603), 1,
      sym__match_tagged,
    STATE(604), 1,
      sym__match_user,
    STATE(610), 1,
      sym_condition,
    STATE(629), 1,
      sym__match_localuser,
  [186] = 19,
    ACTIONS(858), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(862), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(864), 1,
      aux_sym__match_final_token1,
    ACTIONS(866), 1,
      aux_sym__match_exec_token1,
    ACTIONS(868), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(870), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(872), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(874), 1,
      aux_sym__match_user_token1,
    ACTIONS(876), 1,
      aux_sym__match_localuser_token1,
    STATE(541), 1,
      sym__match_canonical,
    STATE(550), 1,
      sym__match_final,
    STATE(552), 1,
      sym__match_exec,
    STATE(556), 1,
      sym__match_localnetwork,
    STATE(559), 1,
      sym__match_host,
    STATE(601), 1,
      sym__match_originalhost,
    STATE(603), 1,
      sym__match_tagged,
    STATE(604), 1,
      sym__match_user,
    STATE(610), 1,
      sym_condition,
    STATE(629), 1,
      sym__match_localuser,
  [244] = 13,
    ACTIONS(882), 1,
      aux_sym__match_exec_token2,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(892), 1,
      sym__number,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(692), 1,
      sym_number,
    STATE(694), 1,
      sym__forward_value_inner,
    STATE(771), 1,
      sym__string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
    STATE(780), 2,
      sym__forward_value1,
      sym__file_string,
  [286] = 13,
    ACTIONS(882), 1,
      aux_sym__match_exec_token2,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(892), 1,
      sym__number,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(692), 1,
      sym_number,
    STATE(694), 1,
      sym__forward_value_inner,
    STATE(771), 1,
      sym__string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
    STATE(645), 2,
      sym__forward_value1,
      sym__file_string,
  [328] = 11,
    ACTIONS(882), 1,
      aux_sym__match_exec_token2,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(660), 1,
      sym__forward_value_inner,
    STATE(771), 1,
      sym__string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
    STATE(661), 2,
      sym__forward_value2,
      sym__file_string,
  [364] = 12,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(900), 1,
      aux_sym__match_exec_token3,
    ACTIONS(902), 1,
      aux_sym__file_token_token1,
    ACTIONS(904), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(78), 1,
      aux_sym__file_string_repeat2,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(489), 1,
      aux_sym__string_repeat2,
    STATE(771), 1,
      sym__string,
    STATE(799), 1,
      sym__forward_value_inner,
    STATE(268), 2,
      sym__file_token,
      sym_variable,
  [402] = 12,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(900), 1,
      aux_sym__match_exec_token3,
    ACTIONS(902), 1,
      aux_sym__file_token_token1,
    ACTIONS(904), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(78), 1,
      aux_sym__file_string_repeat2,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(489), 1,
      aux_sym__string_repeat2,
    STATE(771), 1,
      sym__string,
    STATE(775), 1,
      sym__forward_value_inner,
    STATE(268), 2,
      sym__file_token,
      sym_variable,
  [440] = 11,
    ACTIONS(882), 1,
      aux_sym__match_exec_token2,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(660), 1,
      sym__forward_value_inner,
    STATE(771), 1,
      sym__string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
    STATE(682), 2,
      sym__forward_value2,
      sym__file_string,
  [476] = 10,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(906), 1,
      aux_sym__match_exec_token2,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(912), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(705), 1,
      sym__var_value,
    STATE(706), 1,
      sym__file_string,
    ACTIONS(910), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
  [509] = 6,
    ACTIONS(914), 1,
      aux_sym__match_exec_token2,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(47), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(923), 2,
      sym__space,
      sym__eol,
    STATE(93), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(917), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [532] = 7,
    ACTIONS(925), 1,
      aux_sym__match_exec_token2,
    ACTIONS(927), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(757), 1,
      sym__file_pattern_vars,
    STATE(93), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(929), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [557] = 6,
    ACTIONS(925), 1,
      aux_sym__match_exec_token2,
    ACTIONS(931), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(47), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(933), 2,
      sym__space,
      sym__eol,
    STATE(93), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(929), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [580] = 7,
    ACTIONS(925), 1,
      aux_sym__match_exec_token2,
    ACTIONS(927), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(743), 1,
      sym__file_pattern_vars,
    STATE(93), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(929), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [605] = 9,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym__number,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(640), 1,
      sym__dynamic_forward_value,
    STATE(739), 1,
      sym_number,
    STATE(740), 1,
      sym__forward_value_inner,
    STATE(771), 1,
      sym__string,
  [633] = 8,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(906), 1,
      aux_sym__match_exec_token2,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      anon_sym_none,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(689), 1,
      sym__file_string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
  [659] = 6,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(941), 1,
      aux_sym__match_exec_token3,
    ACTIONS(947), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(132), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [681] = 7,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    ACTIONS(952), 1,
      anon_sym_DOLLAR,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(728), 1,
      sym__var_value,
    ACTIONS(954), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(724), 2,
      sym__string,
      sym__boolean,
  [705] = 8,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(906), 1,
      aux_sym__match_exec_token2,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(956), 1,
      anon_sym_none,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(462), 1,
      sym__file_string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
  [731] = 6,
    ACTIONS(958), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      aux_sym__match_exec_token3,
    ACTIONS(964), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(132), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [753] = 9,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym__number,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(356), 1,
      sym__dynamic_forward_value,
    STATE(739), 1,
      sym_number,
    STATE(740), 1,
      sym__forward_value_inner,
    STATE(771), 1,
      sym__string,
  [781] = 8,
    ACTIONS(886), 1,
      anon_sym_STAR,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(966), 1,
      aux_sym__match_exec_token3,
    STATE(312), 1,
      aux_sym__string_repeat1,
    STATE(489), 1,
      aux_sym__string_repeat2,
    STATE(771), 1,
      sym__string,
    STATE(803), 1,
      sym__forward_value_inner,
  [806] = 7,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(906), 1,
      aux_sym__match_exec_token2,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(704), 1,
      sym__file_string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
  [829] = 6,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym__match_value_repeat1,
    STATE(227), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(974), 2,
      sym__space,
      sym__eol,
  [850] = 7,
    ACTIONS(976), 1,
      anon_sym_BANG,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      sym__eol,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(585), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [873] = 7,
    ACTIONS(986), 1,
      aux_sym__remote_command_token2,
    ACTIONS(988), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(990), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(992), 1,
      sym__space,
    ACTIONS(994), 1,
      sym__eol,
    STATE(65), 1,
      aux_sym__hosts_string_repeat1,
    STATE(166), 2,
      sym__hosts_token,
      sym_variable,
  [896] = 7,
    ACTIONS(976), 1,
      anon_sym_BANG,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(996), 1,
      sym__eol,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(585), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [919] = 7,
    ACTIONS(976), 1,
      anon_sym_BANG,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(998), 1,
      sym__eol,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(585), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [942] = 7,
    ACTIONS(1000), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1003), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1006), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1009), 1,
      sym__space,
    ACTIONS(1011), 1,
      sym__eol,
    STATE(65), 1,
      aux_sym__hosts_string_repeat1,
    STATE(166), 2,
      sym__hosts_token,
      sym_variable,
  [965] = 7,
    ACTIONS(1013), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1016), 1,
      aux_sym__file_token_token1,
    ACTIONS(1019), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1022), 1,
      sym__space,
    ACTIONS(1024), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym__remote_command_repeat1,
    STATE(172), 2,
      sym__file_token,
      sym_variable,
  [988] = 7,
    ACTIONS(976), 1,
      anon_sym_BANG,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(1026), 1,
      sym__eol,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(585), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1011] = 6,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym__match_value_repeat1,
    STATE(244), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1028), 2,
      sym__space,
      sym__eol,
  [1032] = 5,
    ACTIONS(960), 1,
      aux_sym__match_exec_token3,
    ACTIONS(964), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(132), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1051] = 6,
    ACTIONS(1030), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1033), 1,
      aux_sym__file_token_token1,
    ACTIONS(1036), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1039), 2,
      sym__space,
      sym__eol,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
  [1072] = 6,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(906), 1,
      aux_sym__match_exec_token2,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1041), 2,
      sym__space,
      sym__eol,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
  [1093] = 7,
    ACTIONS(1043), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1045), 1,
      aux_sym__file_token_token1,
    ACTIONS(1047), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1049), 1,
      sym__space,
    ACTIONS(1051), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym__remote_command_repeat1,
    STATE(172), 2,
      sym__file_token,
      sym_variable,
  [1116] = 7,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1057), 1,
      anon_sym_none,
    STATE(114), 1,
      aux_sym__match_value_repeat1,
    STATE(334), 1,
      sym__cnames_map,
    STATE(335), 1,
      sym__pattern,
    ACTIONS(1055), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1139] = 7,
    ACTIONS(888), 1,
      aux_sym__file_token_token1,
    ACTIONS(890), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(906), 1,
      aux_sym__match_exec_token2,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(641), 1,
      sym__file_string,
    STATE(165), 2,
      sym__file_token,
      sym_variable,
  [1162] = 6,
    ACTIONS(1059), 1,
      anon_sym_DQUOTE,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym__match_value_repeat3,
    STATE(327), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1182] = 4,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    STATE(79), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1067), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1198] = 6,
    ACTIONS(1069), 1,
      anon_sym_DQUOTE,
    ACTIONS(1071), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1074), 1,
      aux_sym__file_token_token1,
    ACTIONS(1077), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(77), 1,
      aux_sym__file_string_repeat2,
    STATE(268), 2,
      sym__file_token,
      sym_variable,
  [1218] = 6,
    ACTIONS(902), 1,
      aux_sym__file_token_token1,
    ACTIONS(904), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    STATE(77), 1,
      aux_sym__file_string_repeat2,
    STATE(268), 2,
      sym__file_token,
      sym_variable,
  [1238] = 4,
    ACTIONS(1084), 1,
      aux_sym__match_exec_token2,
    STATE(79), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1089), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1087), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1254] = 6,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      aux_sym__match_exec_token2,
    STATE(114), 1,
      aux_sym__match_value_repeat1,
    STATE(335), 1,
      sym__pattern,
    STATE(623), 1,
      sym__cnames_map,
    ACTIONS(1055), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1274] = 4,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    STATE(79), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1092), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1290] = 4,
    ACTIONS(1096), 1,
      anon_sym_confirm,
    ACTIONS(1098), 1,
      sym__number,
    STATE(701), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1094), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1306] = 6,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1100), 1,
      anon_sym_BANG,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__match_value_repeat1,
    STATE(608), 1,
      sym__match_value,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1326] = 2,
    ACTIONS(1104), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1106), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1338] = 6,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1100), 1,
      anon_sym_BANG,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__match_value_repeat1,
    STATE(607), 1,
      sym__match_value,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1358] = 6,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(1108), 1,
      anon_sym_BANG,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(295), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1378] = 6,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1100), 1,
      anon_sym_BANG,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__match_value_repeat1,
    STATE(606), 1,
      sym__match_value,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1398] = 6,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1100), 1,
      anon_sym_BANG,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__match_value_repeat1,
    STATE(605), 1,
      sym__match_value,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1418] = 6,
    ACTIONS(976), 1,
      anon_sym_BANG,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(585), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1438] = 6,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1100), 1,
      anon_sym_BANG,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__match_value_repeat1,
    STATE(595), 1,
      sym__match_value,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1458] = 6,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym__match_value_repeat3,
    STATE(351), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1478] = 6,
    ACTIONS(986), 1,
      aux_sym__remote_command_token2,
    ACTIONS(988), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(990), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(62), 1,
      aux_sym__hosts_string_repeat1,
    STATE(700), 1,
      sym__hosts_string,
    STATE(166), 2,
      sym__hosts_token,
      sym_variable,
  [1498] = 2,
    ACTIONS(1112), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1114), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1510] = 6,
    ACTIONS(1116), 1,
      aux_sym_time_token1,
    ACTIONS(1118), 1,
      aux_sym_time_token2,
    ACTIONS(1120), 1,
      aux_sym_time_token3,
    ACTIONS(1122), 1,
      aux_sym_time_token4,
    ACTIONS(1124), 1,
      aux_sym_time_token5,
    ACTIONS(1126), 2,
      sym__space,
      sym__eol,
  [1530] = 4,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    STATE(79), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1128), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1546] = 4,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    STATE(134), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1130), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1561] = 3,
    STATE(117), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1134), 2,
      sym__space,
      sym__eol,
    ACTIONS(1132), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1574] = 3,
    STATE(117), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1136), 2,
      sym__space,
      sym__eol,
    ACTIONS(1132), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1587] = 5,
    ACTIONS(1138), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1140), 1,
      aux_sym__file_token_token1,
    STATE(119), 1,
      aux_sym__match_exec_repeat1,
    STATE(178), 1,
      sym__file_token,
    ACTIONS(1142), 2,
      sym__space,
      sym__eol,
  [1604] = 6,
    ACTIONS(1144), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1146), 1,
      anon_sym_DQUOTE,
    ACTIONS(1148), 1,
      aux_sym__hostname_token_token1,
    STATE(123), 1,
      aux_sym__hostname_string_repeat1,
    STATE(220), 1,
      sym__hostname_token,
    STATE(710), 1,
      sym__hostname_string,
  [1623] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(390), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1640] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(652), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1657] = 4,
    ACTIONS(1150), 1,
      aux_sym__match_exec_token2,
    STATE(103), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1087), 2,
      sym__space,
      sym__eol,
    ACTIONS(1153), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1672] = 4,
    ACTIONS(1156), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(190), 1,
      sym__log_verbose_value,
    ACTIONS(1158), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1687] = 4,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(103), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1092), 2,
      sym__space,
      sym__eol,
  [1702] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(468), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1719] = 4,
    ACTIONS(1160), 1,
      anon_sym_DQUOTE,
    STATE(418), 1,
      sym__permit_remote_open_value,
    ACTIONS(1162), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1164), 2,
      anon_sym_any,
      anon_sym_none,
  [1734] = 5,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym__match_value_repeat1,
    STATE(192), 1,
      sym__pattern,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1751] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(695), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1768] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(328), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1785] = 6,
    ACTIONS(1166), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1168), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1170), 1,
      sym__space,
    ACTIONS(1172), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__proxy_string_repeat1,
    STATE(186), 1,
      sym__proxy_token,
  [1804] = 4,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    STATE(134), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1174), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1819] = 6,
    ACTIONS(1166), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1168), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1176), 1,
      anon_sym_none,
    STATE(111), 1,
      aux_sym__proxy_string_repeat1,
    STATE(186), 1,
      sym__proxy_token,
    STATE(666), 1,
      sym__proxy_string,
  [1838] = 4,
    ACTIONS(1053), 1,
      aux_sym__match_exec_token2,
    STATE(120), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1055), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1092), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1853] = 2,
    STATE(653), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1178), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [1864] = 5,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym__match_value_repeat1,
    STATE(239), 1,
      sym__pattern,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1881] = 3,
    STATE(117), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1183), 2,
      sym__space,
      sym__eol,
    ACTIONS(1180), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1894] = 4,
    ACTIONS(1185), 1,
      anon_sym_DASH,
    STATE(98), 1,
      aux_sym__send_env_value_repeat1,
    STATE(683), 1,
      sym__send_env_value,
    ACTIONS(1132), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1909] = 5,
    ACTIONS(1187), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 1,
      aux_sym__file_token_token1,
    STATE(119), 1,
      aux_sym__match_exec_repeat1,
    STATE(178), 1,
      sym__file_token,
    ACTIONS(1193), 2,
      sym__space,
      sym__eol,
  [1926] = 4,
    ACTIONS(1195), 1,
      aux_sym__match_exec_token2,
    STATE(120), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1087), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1198), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1941] = 5,
    ACTIONS(1043), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1045), 1,
      aux_sym__file_token_token1,
    ACTIONS(1047), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(72), 1,
      aux_sym__remote_command_repeat1,
    STATE(172), 2,
      sym__file_token,
      sym_variable,
  [1958] = 3,
    ACTIONS(1203), 1,
      anon_sym_auto,
    STATE(745), 1,
      sym__boolean,
    ACTIONS(1201), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1971] = 5,
    ACTIONS(1144), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1148), 1,
      aux_sym__hostname_token_token1,
    STATE(140), 1,
      aux_sym__hostname_string_repeat1,
    STATE(220), 1,
      sym__hostname_token,
    ACTIONS(1205), 2,
      sym__space,
      sym__eol,
  [1988] = 6,
    ACTIONS(1207), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1210), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1213), 1,
      sym__space,
    ACTIONS(1215), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__proxy_string_repeat1,
    STATE(186), 1,
      sym__proxy_token,
  [2007] = 2,
    ACTIONS(1217), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1219), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2018] = 4,
    ACTIONS(1160), 1,
      anon_sym_DQUOTE,
    STATE(674), 1,
      sym__permit_remote_open_value,
    ACTIONS(1162), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1221), 2,
      anon_sym_any,
      anon_sym_none,
  [2033] = 5,
    ACTIONS(902), 1,
      aux_sym__file_token_token1,
    ACTIONS(904), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    STATE(78), 1,
      aux_sym__file_string_repeat2,
    STATE(268), 2,
      sym__file_token,
      sym_variable,
  [2050] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(621), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2067] = 3,
    ACTIONS(1223), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(1228), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2080] = 5,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      aux_sym__match_exec_token2,
    STATE(114), 1,
      aux_sym__match_value_repeat1,
    STATE(192), 1,
      sym__pattern,
    ACTIONS(1055), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2097] = 5,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym__match_value_repeat1,
    STATE(193), 1,
      sym__pattern,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2114] = 2,
    ACTIONS(1232), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1230), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2125] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(742), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2142] = 4,
    ACTIONS(1236), 1,
      aux_sym__match_exec_token3,
    STATE(134), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1234), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1239), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2157] = 6,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    ACTIONS(952), 1,
      anon_sym_DOLLAR,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(637), 1,
      sym__string,
    STATE(639), 1,
      sym__var_value,
  [2176] = 4,
    ACTIONS(1185), 1,
      anon_sym_DASH,
    STATE(98), 1,
      aux_sym__send_env_value_repeat1,
    STATE(445), 1,
      sym__send_env_value,
    ACTIONS(1132), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2191] = 2,
    ACTIONS(1104), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1106), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2202] = 2,
    STATE(625), 1,
      sym__boolean,
    ACTIONS(1242), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [2213] = 5,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__match_value_repeat1,
    STATE(751), 1,
      sym__pattern,
    ACTIONS(982), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2230] = 5,
    ACTIONS(1244), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1247), 1,
      aux_sym__hostname_token_token1,
    STATE(140), 1,
      aux_sym__hostname_string_repeat1,
    STATE(220), 1,
      sym__hostname_token,
    ACTIONS(1250), 2,
      sym__space,
      sym__eol,
  [2247] = 5,
    ACTIONS(1252), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1255), 1,
      sym_token,
    ACTIONS(1258), 1,
      sym__space,
    ACTIONS(1260), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__token_string_repeat1,
  [2263] = 4,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token3,
    STATE(157), 1,
      aux_sym__match_value_repeat3,
    STATE(726), 1,
      sym__log_verbose_quoted,
    ACTIONS(1264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2277] = 2,
    STATE(617), 1,
      sym__boolean,
    ACTIONS(1266), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2287] = 2,
    ACTIONS(1104), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1106), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2297] = 3,
    ACTIONS(1270), 1,
      sym__var_name,
    STATE(451), 1,
      sym__set_env_value,
    ACTIONS(1268), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [2309] = 5,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1276), 1,
      aux_sym__hostname_token_token1,
    STATE(167), 1,
      aux_sym__hostname_string_repeat2,
    STATE(491), 1,
      sym__hostname_token,
  [2325] = 2,
    ACTIONS(1104), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1106), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2335] = 2,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1278), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2345] = 2,
    ACTIONS(1104), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1106), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2355] = 2,
    STATE(644), 1,
      sym__boolean,
    ACTIONS(1282), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2365] = 4,
    ACTIONS(1234), 1,
      anon_sym_COLON,
    ACTIONS(1284), 1,
      aux_sym__match_exec_token3,
    STATE(151), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1287), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2379] = 2,
    ACTIONS(1217), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1219), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2389] = 5,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE,
    ACTIONS(1292), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1295), 1,
      aux_sym__file_token_token1,
    STATE(153), 1,
      aux_sym__match_exec_repeat2,
    STATE(381), 1,
      sym__file_token,
  [2405] = 2,
    ACTIONS(1217), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1219), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2415] = 4,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1298), 1,
      anon_sym_BANG,
    STATE(96), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2429] = 4,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1300), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2443] = 4,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1302), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2457] = 1,
    ACTIONS(1304), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2465] = 5,
    ACTIONS(1306), 1,
      anon_sym_DQUOTE,
    ACTIONS(1308), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1310), 1,
      aux_sym__file_token_token1,
    STATE(153), 1,
      aux_sym__match_exec_repeat2,
    STATE(381), 1,
      sym__file_token,
  [2481] = 3,
    STATE(170), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(421), 1,
      sym__log_verbose_value,
    ACTIONS(1158), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2493] = 4,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1312), 1,
      anon_sym_BANG,
    STATE(95), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2507] = 3,
    ACTIONS(1098), 1,
      sym__number,
    ACTIONS(1314), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(744), 2,
      sym__boolean,
      sym_time,
  [2519] = 3,
    ACTIONS(1319), 1,
      anon_sym_COLON,
    STATE(163), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1316), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2531] = 3,
    ACTIONS(1323), 1,
      anon_sym_COLON,
    STATE(163), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1321), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2543] = 2,
    ACTIONS(1325), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1228), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2553] = 2,
    ACTIONS(1327), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1329), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2563] = 5,
    ACTIONS(1331), 1,
      anon_sym_DQUOTE,
    ACTIONS(1333), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1336), 1,
      aux_sym__hostname_token_token1,
    STATE(167), 1,
      aux_sym__hostname_string_repeat2,
    STATE(491), 1,
      sym__hostname_token,
  [2579] = 5,
    ACTIONS(1339), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1341), 1,
      sym_token,
    ACTIONS(1343), 1,
      sym__space,
    ACTIONS(1345), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__token_string_repeat1,
  [2595] = 4,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token3,
    STATE(157), 1,
      aux_sym__match_value_repeat3,
    STATE(480), 1,
      sym__log_verbose_quoted,
    ACTIONS(1264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2609] = 3,
    ACTIONS(1347), 1,
      anon_sym_COLON,
    STATE(163), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1321), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2621] = 5,
    ACTIONS(1138), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1140), 1,
      aux_sym__file_token_token1,
    ACTIONS(1349), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      aux_sym__match_exec_repeat1,
    STATE(178), 1,
      sym__file_token,
  [2637] = 2,
    ACTIONS(1351), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1353), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2647] = 4,
    ACTIONS(1234), 1,
      anon_sym_DQUOTE,
    ACTIONS(1355), 1,
      aux_sym__match_exec_token3,
    STATE(173), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1358), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2661] = 1,
    ACTIONS(1361), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [2669] = 4,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1363), 1,
      anon_sym_BANG,
    STATE(91), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2683] = 4,
    ACTIONS(1365), 1,
      anon_sym_DQUOTE,
    ACTIONS(1367), 1,
      aux_sym__match_exec_token3,
    STATE(173), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1369), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2697] = 2,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1278), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2706] = 2,
    ACTIONS(1371), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1373), 3,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [2715] = 4,
    ACTIONS(1308), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1310), 1,
      aux_sym__file_token_token1,
    STATE(159), 1,
      aux_sym__match_exec_repeat2,
    STATE(381), 1,
      sym__file_token,
  [2728] = 2,
    STATE(97), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1132), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2737] = 3,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    STATE(68), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2748] = 3,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1377), 2,
      sym__space,
      sym__eol,
  [2759] = 1,
    ACTIONS(1379), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2766] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1383), 2,
      sym__space,
      sym__eol,
  [2777] = 4,
    ACTIONS(1385), 1,
      aux_sym_time_token2,
    ACTIONS(1387), 1,
      aux_sym_time_token3,
    ACTIONS(1389), 1,
      aux_sym_time_token4,
    ACTIONS(1391), 1,
      aux_sym_time_token5,
  [2790] = 2,
    ACTIONS(1393), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1395), 2,
      aux_sym__proxy_token_token1,
      sym__eol,
  [2799] = 3,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1399), 2,
      sym__space,
      sym__eol,
  [2810] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1403), 2,
      sym__space,
      sym__eol,
  [2821] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(685), 1,
      sym__string,
  [2834] = 3,
    ACTIONS(1405), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1407), 2,
      sym__space,
      sym__eol,
  [2845] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1409), 2,
      sym__space,
      sym__eol,
  [2856] = 1,
    ACTIONS(1411), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2863] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1415), 2,
      sym__space,
      sym__eol,
  [2874] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1419), 2,
      sym__space,
      sym__eol,
  [2885] = 3,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1424), 2,
      sym__space,
      sym__eol,
  [2896] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(693), 1,
      sym__string,
  [2909] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1428), 2,
      sym__space,
      sym__eol,
  [2920] = 3,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1433), 2,
      sym__space,
      sym__eol,
  [2931] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1409), 2,
      sym__space,
      sym__eol,
  [2942] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1435), 2,
      sym__space,
      sym__eol,
  [2953] = 3,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1440), 2,
      sym__space,
      sym__eol,
  [2964] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1442), 2,
      sym__space,
      sym__eol,
  [2975] = 2,
    ACTIONS(1444), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1446), 2,
      sym_token,
      sym__eol,
  [2984] = 3,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1448), 2,
      sym__space,
      sym__eol,
  [2995] = 3,
    ACTIONS(1450), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1452), 2,
      sym__space,
      sym__eol,
  [3006] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1457), 2,
      sym__space,
      sym__eol,
  [3017] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1459), 2,
      sym__space,
      sym__eol,
  [3028] = 3,
    ACTIONS(1450), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1461), 2,
      sym__space,
      sym__eol,
  [3039] = 3,
    ACTIONS(1450), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1463), 2,
      sym__space,
      sym__eol,
  [3050] = 2,
    ACTIONS(1467), 1,
      sym_cipher,
    ACTIONS(1465), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3059] = 3,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token3,
    STATE(156), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3070] = 3,
    ACTIONS(1469), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1472), 2,
      sym__space,
      sym__eol,
  [3081] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1459), 2,
      sym__space,
      sym__eol,
  [3092] = 3,
    ACTIONS(1474), 1,
      aux_sym__match_exec_token2,
    STATE(214), 1,
      aux_sym__string_repeat1,
    ACTIONS(1477), 2,
      sym__space,
      sym__eol,
  [3103] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1479), 2,
      sym__space,
      sym__eol,
  [3114] = 3,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1411), 2,
      sym__space,
      sym__eol,
  [3125] = 3,
    ACTIONS(1484), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1487), 2,
      sym__space,
      sym__eol,
  [3136] = 3,
    ACTIONS(1489), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1492), 2,
      sym__space,
      sym__eol,
  [3147] = 4,
    ACTIONS(1274), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1276), 1,
      aux_sym__hostname_token_token1,
    STATE(146), 1,
      aux_sym__hostname_string_repeat2,
    STATE(491), 1,
      sym__hostname_token,
  [3160] = 2,
    ACTIONS(1494), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1496), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [3169] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1498), 2,
      sym__space,
      sym__eol,
  [3180] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1500), 2,
      sym__space,
      sym__eol,
  [3191] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1502), 2,
      sym__space,
      sym__eol,
  [3202] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1504), 2,
      sym__space,
      sym__eol,
  [3213] = 3,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    STATE(75), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3224] = 3,
    ACTIONS(1405), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1506), 2,
      sym__space,
      sym__eol,
  [3235] = 3,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1508), 2,
      sym__space,
      sym__eol,
  [3246] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1510), 2,
      sym__space,
      sym__eol,
  [3257] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(370), 1,
      sym__string,
  [3270] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1512), 2,
      sym__space,
      sym__eol,
  [3281] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1510), 2,
      sym__space,
      sym__eol,
  [3292] = 2,
    ACTIONS(1516), 1,
      sym_key_sig,
    ACTIONS(1514), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3301] = 3,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1518), 2,
      sym__space,
      sym__eol,
  [3312] = 2,
    ACTIONS(1522), 1,
      sym_key_sig,
    ACTIONS(1520), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3321] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(712), 1,
      sym__string,
  [3334] = 3,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1518), 2,
      sym__space,
      sym__eol,
  [3345] = 3,
    ACTIONS(1524), 1,
      aux_sym__match_exec_token2,
    STATE(214), 1,
      aux_sym__string_repeat1,
    ACTIONS(1526), 2,
      sym__space,
      sym__eol,
  [3356] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1528), 2,
      sym__space,
      sym__eol,
  [3367] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1530), 2,
      sym__space,
      sym__eol,
  [3378] = 3,
    ACTIONS(1532), 1,
      anon_sym_DQUOTE,
    ACTIONS(1535), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1538), 2,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3389] = 3,
    ACTIONS(1542), 1,
      sym__number,
    STATE(703), 1,
      sym_number,
    ACTIONS(1540), 2,
      anon_sym_none,
      sym_ipqos,
  [3400] = 4,
    ACTIONS(1544), 1,
      aux_sym__sep_token1,
    ACTIONS(1546), 1,
      sym__space,
    ACTIONS(1548), 1,
      sym__eol,
    STATE(555), 1,
      sym__sep,
  [3413] = 2,
    ACTIONS(1552), 1,
      sym_kex,
    ACTIONS(1550), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3422] = 3,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1554), 2,
      sym__space,
      sym__eol,
  [3433] = 4,
    ACTIONS(1339), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1341), 1,
      sym_token,
    STATE(168), 1,
      aux_sym__token_string_repeat1,
    STATE(696), 1,
      sym__token_string,
  [3446] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(612), 1,
      sym__string,
  [3459] = 4,
    ACTIONS(1556), 1,
      aux_sym__sep_token1,
    ACTIONS(1558), 1,
      sym__space,
    ACTIONS(1560), 1,
      sym__eol,
    STATE(543), 1,
      sym__sep,
  [3472] = 3,
    ACTIONS(968), 1,
      aux_sym__match_exec_token2,
    STATE(76), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(972), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3483] = 2,
    ACTIONS(1564), 1,
      sym_mac,
    ACTIONS(1562), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3492] = 3,
    ACTIONS(1566), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1569), 2,
      sym__space,
      sym__eol,
  [3503] = 3,
    ACTIONS(1367), 1,
      aux_sym__match_exec_token3,
    STATE(176), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1369), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3514] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1571), 2,
      sym__space,
      sym__eol,
  [3525] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1571), 2,
      sym__space,
      sym__eol,
  [3536] = 3,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1573), 2,
      sym__space,
      sym__eol,
  [3547] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(669), 1,
      sym__string,
  [3560] = 3,
    ACTIONS(1575), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1578), 2,
      sym__space,
      sym__eol,
  [3571] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1580), 2,
      sym__space,
      sym__eol,
  [3582] = 3,
    ACTIONS(1061), 1,
      aux_sym__match_exec_token3,
    STATE(112), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1065), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3593] = 3,
    ACTIONS(1582), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1586), 1,
      aux_sym__proxy_jump_arg_token1,
    ACTIONS(1584), 2,
      anon_sym_none,
      aux_sym__proxy_jump_arg_token2,
  [3604] = 2,
    ACTIONS(1590), 1,
      sym_key_sig,
    ACTIONS(1588), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3613] = 2,
    STATE(164), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1592), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [3622] = 2,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1278), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3631] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(642), 1,
      sym__string,
  [3644] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1594), 2,
      sym__space,
      sym__eol,
  [3655] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1594), 2,
      sym__space,
      sym__eol,
  [3666] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1596), 2,
      sym__space,
      sym__eol,
  [3677] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1596), 2,
      sym__space,
      sym__eol,
  [3688] = 2,
    ACTIONS(1598), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1538), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3697] = 3,
    ACTIONS(1542), 1,
      sym__number,
    STATE(654), 1,
      sym_number,
    ACTIONS(1600), 2,
      anon_sym_none,
      sym_ipqos,
  [3708] = 4,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    STATE(237), 1,
      aux_sym__string_repeat1,
    STATE(618), 1,
      sym__string,
  [3721] = 3,
    ACTIONS(1450), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1461), 2,
      sym__space,
      sym__eol,
  [3732] = 2,
    STATE(615), 1,
      sym__boolean,
    ACTIONS(1602), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3741] = 2,
    ACTIONS(1104), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1106), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3750] = 2,
    STATE(614), 1,
      sym__boolean,
    ACTIONS(1604), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3759] = 2,
    STATE(759), 1,
      sym__boolean,
    ACTIONS(1606), 2,
      anon_sym_yes,
      anon_sym_no,
  [3767] = 2,
    ACTIONS(1608), 1,
      sym__number,
    ACTIONS(1610), 2,
      sym__space,
      sym__eol,
  [3775] = 2,
    STATE(494), 1,
      sym__boolean,
    ACTIONS(1612), 2,
      anon_sym_yes,
      anon_sym_no,
  [3783] = 3,
    ACTIONS(1614), 1,
      aux_sym__sep_token1,
    ACTIONS(1616), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [3793] = 2,
    STATE(622), 1,
      sym__boolean,
    ACTIONS(1618), 2,
      anon_sym_yes,
      anon_sym_no,
  [3801] = 3,
    ACTIONS(1620), 1,
      aux_sym__sep_token1,
    ACTIONS(1622), 1,
      sym__space,
    STATE(196), 1,
      sym__sep,
  [3811] = 3,
    ACTIONS(1624), 1,
      aux_sym__sep_token1,
    ACTIONS(1626), 1,
      sym__space,
    STATE(82), 1,
      sym__sep,
  [3821] = 3,
    ACTIONS(1542), 1,
      sym__number,
    ACTIONS(1628), 1,
      anon_sym_any,
    STATE(460), 1,
      sym_number,
  [3831] = 3,
    ACTIONS(1630), 1,
      aux_sym__sep_token1,
    ACTIONS(1632), 1,
      sym__space,
    STATE(402), 1,
      sym__sep,
  [3841] = 3,
    ACTIONS(1634), 1,
      anon_sym_none,
    ACTIONS(1636), 1,
      sym__number,
    STATE(649), 1,
      sym_bytes,
  [3851] = 2,
    STATE(628), 1,
      sym__boolean,
    ACTIONS(1638), 2,
      anon_sym_yes,
      anon_sym_no,
  [3859] = 2,
    STATE(613), 1,
      sym__boolean,
    ACTIONS(1640), 2,
      anon_sym_yes,
      anon_sym_no,
  [3867] = 3,
    ACTIONS(1642), 1,
      aux_sym__sep_token1,
    ACTIONS(1644), 1,
      sym__space,
    STATE(401), 1,
      sym__sep,
  [3877] = 2,
    STATE(702), 1,
      sym__boolean,
    ACTIONS(1646), 2,
      anon_sym_yes,
      anon_sym_no,
  [3885] = 3,
    ACTIONS(1648), 1,
      aux_sym__sep_token1,
    ACTIONS(1650), 1,
      sym__space,
    STATE(133), 1,
      sym__sep,
  [3895] = 3,
    ACTIONS(1652), 1,
      aux_sym__sep_token1,
    ACTIONS(1654), 1,
      sym__space,
    STATE(139), 1,
      sym__sep,
  [3905] = 3,
    ACTIONS(1656), 1,
      aux_sym__sep_token1,
    ACTIONS(1658), 1,
      sym__space,
    STATE(110), 1,
      sym__sep,
  [3915] = 3,
    ACTIONS(1660), 1,
      aux_sym__sep_token1,
    ACTIONS(1662), 1,
      sym__space,
    STATE(400), 1,
      sym__sep,
  [3925] = 2,
    STATE(672), 1,
      sym__boolean,
    ACTIONS(1664), 2,
      anon_sym_yes,
      anon_sym_no,
  [3933] = 2,
    STATE(675), 1,
      sym__boolean,
    ACTIONS(1666), 2,
      anon_sym_yes,
      anon_sym_no,
  [3941] = 3,
    ACTIONS(1668), 1,
      sym__space,
    ACTIONS(1670), 1,
      sym__eol,
    STATE(473), 1,
      aux_sym_host_declaration_repeat1,
  [3951] = 3,
    ACTIONS(1672), 1,
      aux_sym__sep_token1,
    ACTIONS(1674), 1,
      sym__space,
    STATE(275), 1,
      sym__sep,
  [3961] = 3,
    ACTIONS(1676), 1,
      aux_sym__sep_token1,
    ACTIONS(1678), 1,
      sym__space,
    STATE(90), 1,
      sym__sep,
  [3971] = 2,
    STATE(677), 1,
      sym__boolean,
    ACTIONS(1680), 2,
      anon_sym_yes,
      anon_sym_no,
  [3979] = 3,
    ACTIONS(1682), 1,
      aux_sym__sep_token1,
    ACTIONS(1684), 1,
      sym__space,
    STATE(698), 1,
      sym__sep,
  [3989] = 3,
    ACTIONS(1686), 1,
      aux_sym__sep_token1,
    ACTIONS(1688), 1,
      sym__space,
    STATE(171), 1,
      sym__sep,
  [3999] = 3,
    ACTIONS(1690), 1,
      aux_sym__sep_token1,
    ACTIONS(1692), 1,
      sym__space,
    STATE(479), 1,
      sym__sep,
  [4009] = 3,
    ACTIONS(1694), 1,
      aux_sym__sep_token1,
    ACTIONS(1696), 1,
      sym__space,
    STATE(88), 1,
      sym__sep,
  [4019] = 3,
    ACTIONS(1698), 1,
      aux_sym__sep_token1,
    ACTIONS(1700), 1,
      sym__space,
    STATE(87), 1,
      sym__sep,
  [4029] = 3,
    ACTIONS(1702), 1,
      aux_sym__sep_token1,
    ACTIONS(1704), 1,
      sym__space,
    STATE(85), 1,
      sym__sep,
  [4039] = 3,
    ACTIONS(1706), 1,
      aux_sym__sep_token1,
    ACTIONS(1708), 1,
      sym__space,
    STATE(83), 1,
      sym__sep,
  [4049] = 3,
    ACTIONS(1710), 1,
      sym__space,
    ACTIONS(1712), 1,
      sym__eol,
    STATE(486), 1,
      aux_sym_match_declaration_repeat1,
  [4059] = 3,
    ACTIONS(1714), 1,
      aux_sym__sep_token1,
    ACTIONS(1716), 1,
      sym__space,
    STATE(73), 1,
      sym__sep,
  [4069] = 3,
    ACTIONS(1718), 1,
      aux_sym__sep_token1,
    ACTIONS(1720), 1,
      sym__space,
    STATE(397), 1,
      sym__sep,
  [4079] = 3,
    ACTIONS(1477), 1,
      anon_sym_COLON,
    ACTIONS(1722), 1,
      aux_sym__match_exec_token2,
    STATE(309), 1,
      aux_sym__string_repeat1,
  [4089] = 3,
    ACTIONS(1725), 1,
      aux_sym__sep_token1,
    ACTIONS(1727), 1,
      sym__space,
    STATE(48), 1,
      sym__sep,
  [4099] = 3,
    ACTIONS(1729), 1,
      aux_sym__sep_token1,
    ACTIONS(1731), 1,
      sym__space,
    STATE(395), 1,
      sym__sep,
  [4109] = 3,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1526), 1,
      anon_sym_COLON,
    STATE(309), 1,
      aux_sym__string_repeat1,
  [4119] = 3,
    ACTIONS(1733), 1,
      aux_sym__sep_token1,
    ACTIONS(1735), 1,
      sym__space,
    STATE(210), 1,
      sym__sep,
  [4129] = 3,
    ACTIONS(1737), 1,
      aux_sym__sep_token1,
    ACTIONS(1739), 1,
      sym__space,
    STATE(394), 1,
      sym__sep,
  [4139] = 2,
    ACTIONS(1741), 1,
      sym__number,
    ACTIONS(1743), 2,
      sym__space,
      sym__eol,
  [4147] = 3,
    ACTIONS(1745), 1,
      aux_sym__sep_token1,
    ACTIONS(1747), 1,
      sym__space,
    STATE(388), 1,
      sym__sep,
  [4157] = 1,
    ACTIONS(1226), 3,
      aux_sym__match_exec_token2,
      sym__space,
      sym__eol,
  [4163] = 2,
    ACTIONS(1749), 1,
      sym__number,
    ACTIONS(1751), 2,
      sym__space,
      sym__eol,
  [4171] = 2,
    ACTIONS(1753), 1,
      sym__number,
    ACTIONS(1751), 2,
      sym__space,
      sym__eol,
  [4179] = 1,
    ACTIONS(1755), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4185] = 3,
    ACTIONS(1757), 1,
      anon_sym_DQUOTE,
    ACTIONS(1759), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym__match_localnetwork_repeat2,
  [4195] = 3,
    ACTIONS(1762), 1,
      aux_sym__sep_token1,
    ACTIONS(1764), 1,
      sym__space,
    STATE(707), 1,
      sym__sep,
  [4205] = 2,
    STATE(709), 1,
      sym__boolean,
    ACTIONS(1766), 2,
      anon_sym_yes,
      anon_sym_no,
  [4213] = 3,
    ACTIONS(1768), 1,
      anon_sym_DQUOTE,
    ACTIONS(1770), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym__match_value_repeat4,
  [4223] = 3,
    ACTIONS(1773), 1,
      aux_sym__sep_token1,
    ACTIONS(1775), 1,
      sym__space,
    STATE(708), 1,
      sym__sep,
  [4233] = 3,
    ACTIONS(1777), 1,
      aux_sym__sep_token1,
    ACTIONS(1779), 1,
      sym__space,
    STATE(122), 1,
      sym__sep,
  [4243] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1781), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym__match_value_repeat4,
  [4253] = 3,
    ACTIONS(1783), 1,
      sym__space,
    ACTIONS(1785), 1,
      sym__eol,
    STATE(485), 1,
      aux_sym__canonical_domains_repeat1,
  [4263] = 3,
    ACTIONS(1787), 1,
      aux_sym__sep_token1,
    ACTIONS(1789), 1,
      sym__space,
    STATE(162), 1,
      sym__sep,
  [4273] = 3,
    ACTIONS(1791), 1,
      aux_sym__sep_token1,
    ACTIONS(1793), 1,
      sym__space,
    STATE(50), 1,
      sym__sep,
  [4283] = 2,
    STATE(715), 1,
      sym__boolean,
    ACTIONS(1795), 2,
      anon_sym_yes,
      anon_sym_no,
  [4291] = 1,
    ACTIONS(1797), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4297] = 3,
    ACTIONS(1542), 1,
      sym__number,
    ACTIONS(1799), 1,
      anon_sym_STAR,
    STATE(680), 1,
      sym_number,
  [4307] = 3,
    ACTIONS(1801), 1,
      sym__space,
    ACTIONS(1803), 1,
      sym__eol,
    STATE(488), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4317] = 3,
    ACTIONS(1805), 1,
      anon_sym_COMMA,
    ACTIONS(1807), 1,
      anon_sym_COLON,
    STATE(483), 1,
      aux_sym__cnames_map_repeat1,
  [4327] = 3,
    ACTIONS(1809), 1,
      aux_sym__sep_token1,
    ACTIONS(1811), 1,
      sym__space,
    STATE(57), 1,
      sym__sep,
  [4337] = 2,
    STATE(718), 1,
      sym__boolean,
    ACTIONS(1813), 2,
      anon_sym_yes,
      anon_sym_no,
  [4345] = 2,
    STATE(719), 1,
      sym__boolean,
    ACTIONS(1815), 2,
      anon_sym_yes,
      anon_sym_no,
  [4353] = 2,
    STATE(720), 1,
      sym__boolean,
    ACTIONS(1817), 2,
      anon_sym_yes,
      anon_sym_no,
  [4361] = 3,
    ACTIONS(1819), 1,
      aux_sym_time_token3,
    ACTIONS(1821), 1,
      aux_sym_time_token4,
    ACTIONS(1823), 1,
      aux_sym_time_token5,
  [4371] = 3,
    ACTIONS(1825), 1,
      aux_sym__sep_token1,
    ACTIONS(1827), 1,
      sym__space,
    STATE(382), 1,
      sym__sep,
  [4381] = 3,
    ACTIONS(1829), 1,
      aux_sym__sep_token1,
    ACTIONS(1831), 1,
      sym__space,
    STATE(380), 1,
      sym__sep,
  [4391] = 1,
    ACTIONS(1578), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4397] = 3,
    ACTIONS(1833), 1,
      anon_sym_DQUOTE,
    ACTIONS(1835), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym__match_localnetwork_repeat2,
  [4407] = 2,
    STATE(723), 1,
      sym__boolean,
    ACTIONS(1837), 2,
      anon_sym_yes,
      anon_sym_no,
  [4415] = 3,
    ACTIONS(1839), 1,
      aux_sym__sep_token1,
    ACTIONS(1841), 1,
      sym__space,
    STATE(711), 1,
      sym__sep,
  [4425] = 3,
    ACTIONS(1843), 1,
      aux_sym__sep_token1,
    ACTIONS(1845), 1,
      sym__space,
    STATE(377), 1,
      sym__sep,
  [4435] = 3,
    ACTIONS(1847), 1,
      aux_sym__sep_token1,
    ACTIONS(1849), 1,
      sym__space,
    STATE(716), 1,
      sym__sep,
  [4445] = 3,
    ACTIONS(1851), 1,
      aux_sym__sep_token1,
    ACTIONS(1853), 1,
      sym__space,
    STATE(353), 1,
      sym__sep,
  [4455] = 3,
    ACTIONS(1855), 1,
      aux_sym__sep_token1,
    ACTIONS(1857), 1,
      sym__space,
    STATE(54), 1,
      sym__sep,
  [4465] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1859), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym__match_value_repeat4,
  [4475] = 3,
    ACTIONS(1861), 1,
      aux_sym__sep_token1,
    ACTIONS(1863), 1,
      sym__space,
    STATE(345), 1,
      sym__sep,
  [4485] = 2,
    STATE(730), 1,
      sym__boolean,
    ACTIONS(1865), 2,
      anon_sym_yes,
      anon_sym_no,
  [4493] = 3,
    ACTIONS(1867), 1,
      aux_sym__sep_token1,
    ACTIONS(1869), 1,
      sym__space,
    STATE(756), 1,
      sym__sep,
  [4503] = 3,
    ACTIONS(1871), 1,
      aux_sym__sep_token1,
    ACTIONS(1873), 1,
      sym__space,
    STATE(339), 1,
      sym__sep,
  [4513] = 3,
    ACTIONS(1875), 1,
      sym__space,
    ACTIONS(1877), 1,
      sym__eol,
    STATE(487), 1,
      aux_sym__dynamic_forward_repeat1,
  [4523] = 3,
    ACTIONS(1879), 1,
      aux_sym__sep_token1,
    ACTIONS(1881), 1,
      sym__space,
    STATE(229), 1,
      sym__sep,
  [4533] = 3,
    ACTIONS(1883), 1,
      aux_sym__sep_token1,
    ACTIONS(1885), 1,
      sym__space,
    STATE(338), 1,
      sym__sep,
  [4543] = 3,
    ACTIONS(1887), 1,
      aux_sym__sep_token1,
    ACTIONS(1889), 1,
      sym__space,
    STATE(337), 1,
      sym__sep,
  [4553] = 3,
    ACTIONS(1891), 1,
      aux_sym__sep_token1,
    ACTIONS(1893), 1,
      sym__space,
    STATE(232), 1,
      sym__sep,
  [4563] = 3,
    ACTIONS(1895), 1,
      aux_sym__sep_token1,
    ACTIONS(1897), 1,
      sym__space,
    STATE(331), 1,
      sym__sep,
  [4573] = 3,
    ACTIONS(1542), 1,
      sym__number,
    ACTIONS(1899), 1,
      anon_sym_STAR,
    STATE(332), 1,
      sym_number,
  [4583] = 3,
    ACTIONS(1901), 1,
      aux_sym__sep_token1,
    ACTIONS(1903), 1,
      sym__space,
    STATE(234), 1,
      sym__sep,
  [4593] = 3,
    ACTIONS(1905), 1,
      anon_sym_DQUOTE,
    ACTIONS(1907), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym__log_verbose_repeat2,
  [4603] = 3,
    ACTIONS(1910), 1,
      aux_sym__sep_token1,
    ACTIONS(1912), 1,
      sym__space,
    STATE(235), 1,
      sym__sep,
  [4613] = 3,
    ACTIONS(1914), 1,
      aux_sym__sep_token1,
    ACTIONS(1916), 1,
      sym__space,
    STATE(100), 1,
      sym__sep,
  [4623] = 2,
    ACTIONS(1918), 1,
      sym__number,
    ACTIONS(1920), 2,
      sym__space,
      sym__eol,
  [4631] = 2,
    ACTIONS(1922), 1,
      sym__number,
    ACTIONS(1920), 2,
      sym__space,
      sym__eol,
  [4639] = 2,
    ACTIONS(1924), 1,
      sym__number,
    ACTIONS(1920), 2,
      sym__space,
      sym__eol,
  [4647] = 3,
    ACTIONS(1926), 1,
      sym__space,
    ACTIONS(1928), 1,
      sym__eol,
    STATE(484), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4657] = 3,
    ACTIONS(1930), 1,
      aux_sym__sep_token1,
    ACTIONS(1932), 1,
      sym__space,
    STATE(323), 1,
      sym__sep,
  [4667] = 3,
    ACTIONS(1934), 1,
      aux_sym__sep_token1,
    ACTIONS(1936), 1,
      sym__space,
    STATE(46), 1,
      sym__sep,
  [4677] = 3,
    ACTIONS(1938), 1,
      aux_sym__sep_token1,
    ACTIONS(1940), 1,
      sym__space,
    STATE(59), 1,
      sym__sep,
  [4687] = 3,
    ACTIONS(1942), 1,
      aux_sym__sep_token1,
    ACTIONS(1944), 1,
      sym__space,
    STATE(101), 1,
      sym__sep,
  [4697] = 3,
    ACTIONS(1835), 1,
      anon_sym_COMMA,
    ACTIONS(1946), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym__match_localnetwork_repeat2,
  [4707] = 3,
    ACTIONS(1948), 1,
      aux_sym__sep_token1,
    ACTIONS(1950), 1,
      sym__space,
    STATE(241), 1,
      sym__sep,
  [4717] = 2,
    STATE(734), 1,
      sym__boolean,
    ACTIONS(1952), 2,
      anon_sym_yes,
      anon_sym_no,
  [4725] = 3,
    ACTIONS(1954), 1,
      aux_sym__sep_token1,
    ACTIONS(1956), 1,
      sym__space,
    STATE(288), 1,
      sym__sep,
  [4735] = 3,
    ACTIONS(1958), 1,
      aux_sym__sep_token1,
    ACTIONS(1960), 1,
      sym__space,
    STATE(243), 1,
      sym__sep,
  [4745] = 2,
    STATE(736), 1,
      sym__boolean,
    ACTIONS(1962), 2,
      anon_sym_yes,
      anon_sym_no,
  [4753] = 2,
    ACTIONS(1966), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1964), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [4761] = 2,
    STATE(738), 1,
      sym__boolean,
    ACTIONS(1968), 2,
      anon_sym_yes,
      anon_sym_no,
  [4769] = 3,
    ACTIONS(1970), 1,
      aux_sym__sep_token1,
    ACTIONS(1972), 1,
      sym__space,
    STATE(92), 1,
      sym__sep,
  [4779] = 3,
    ACTIONS(1974), 1,
      aux_sym__sep_token1,
    ACTIONS(1976), 1,
      sym__space,
    STATE(245), 1,
      sym__sep,
  [4789] = 3,
    ACTIONS(1978), 1,
      aux_sym__sep_token1,
    ACTIONS(1980), 1,
      sym__space,
    STATE(40), 1,
      sym__sep,
  [4799] = 3,
    ACTIONS(1982), 1,
      aux_sym__sep_token1,
    ACTIONS(1984), 1,
      sym__space,
    STATE(801), 1,
      sym__sep,
  [4809] = 3,
    ACTIONS(1986), 1,
      aux_sym__sep_token1,
    ACTIONS(1988), 1,
      sym__space,
    STATE(104), 1,
      sym__sep,
  [4819] = 2,
    STATE(749), 1,
      sym__boolean,
    ACTIONS(1990), 2,
      anon_sym_yes,
      anon_sym_no,
  [4827] = 3,
    ACTIONS(1992), 1,
      aux_sym__sep_token1,
    ACTIONS(1994), 1,
      sym__space,
    STATE(249), 1,
      sym__sep,
  [4837] = 3,
    ACTIONS(1996), 1,
      sym__space,
    ACTIONS(1998), 1,
      sym__eol,
    STATE(490), 1,
      aux_sym__ignore_unknown_repeat1,
  [4847] = 3,
    ACTIONS(2000), 1,
      aux_sym__sep_token1,
    ACTIONS(2002), 1,
      sym__space,
    STATE(298), 1,
      sym__sep,
  [4857] = 3,
    ACTIONS(2004), 1,
      aux_sym__sep_token1,
    ACTIONS(2006), 1,
      sym__space,
    STATE(524), 1,
      sym__sep,
  [4867] = 3,
    ACTIONS(2008), 1,
      aux_sym__sep_token1,
    ACTIONS(2010), 1,
      sym__space,
    STATE(294), 1,
      sym__sep,
  [4877] = 2,
    STATE(752), 1,
      sym__boolean,
    ACTIONS(2012), 2,
      anon_sym_yes,
      anon_sym_no,
  [4885] = 2,
    STATE(755), 1,
      sym__boolean,
    ACTIONS(2014), 2,
      anon_sym_yes,
      anon_sym_no,
  [4893] = 3,
    ACTIONS(2016), 1,
      aux_sym__sep_token1,
    ACTIONS(2018), 1,
      sym__space,
    STATE(293), 1,
      sym__sep,
  [4903] = 2,
    ACTIONS(2022), 1,
      sym_sig,
    ACTIONS(2020), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4911] = 3,
    ACTIONS(2024), 1,
      aux_sym__sep_token1,
    ACTIONS(2026), 1,
      sym__space,
    STATE(107), 1,
      sym__sep,
  [4921] = 3,
    ACTIONS(2028), 1,
      aux_sym__sep_token1,
    ACTIONS(2030), 1,
      sym__space,
    STATE(255), 1,
      sym__sep,
  [4931] = 2,
    STATE(753), 1,
      sym__boolean,
    ACTIONS(2032), 2,
      anon_sym_yes,
      anon_sym_no,
  [4939] = 2,
    STATE(731), 1,
      sym__boolean,
    ACTIONS(2034), 2,
      anon_sym_yes,
      anon_sym_no,
  [4947] = 2,
    ACTIONS(2038), 1,
      anon_sym_inet,
    ACTIONS(2036), 2,
      anon_sym_any,
      anon_sym_inet6,
  [4955] = 3,
    ACTIONS(2040), 1,
      aux_sym__sep_token1,
    ACTIONS(2042), 1,
      sym__space,
    STATE(518), 1,
      sym__sep,
  [4965] = 3,
    ACTIONS(2044), 1,
      aux_sym__sep_token1,
    ACTIONS(2046), 1,
      sym__space,
    STATE(804), 1,
      sym__sep,
  [4975] = 3,
    ACTIONS(2048), 1,
      aux_sym__sep_token1,
    ACTIONS(2050), 1,
      sym__space,
    STATE(86), 1,
      sym__sep,
  [4985] = 3,
    ACTIONS(2052), 1,
      sym__space,
    ACTIONS(2055), 1,
      sym__eol,
    STATE(406), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4995] = 3,
    ACTIONS(2057), 1,
      sym__space,
    ACTIONS(2060), 1,
      sym__eol,
    STATE(407), 1,
      aux_sym__set_env_repeat1,
  [5005] = 3,
    ACTIONS(2062), 1,
      sym__space,
    ACTIONS(2065), 1,
      sym__eol,
    STATE(408), 1,
      aux_sym__send_env_repeat1,
  [5015] = 3,
    ACTIONS(2067), 1,
      aux_sym__sep_token1,
    ACTIONS(2069), 1,
      sym__space,
    STATE(259), 1,
      sym__sep,
  [5025] = 2,
    ACTIONS(2071), 1,
      anon_sym_COLON,
    ACTIONS(2073), 2,
      sym__space,
      sym__eol,
  [5033] = 3,
    ACTIONS(2075), 1,
      aux_sym__sep_token1,
    ACTIONS(2077), 1,
      sym__space,
    STATE(277), 1,
      sym__sep,
  [5043] = 1,
    ACTIONS(1492), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5049] = 3,
    ACTIONS(2079), 1,
      sym__space,
    ACTIONS(2082), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym__permit_remote_open_repeat1,
  [5059] = 3,
    ACTIONS(1542), 1,
      sym__number,
    ACTIONS(2084), 1,
      anon_sym_STAR,
    STATE(773), 1,
      sym_number,
  [5069] = 3,
    ACTIONS(2086), 1,
      aux_sym__sep_token1,
    ACTIONS(2088), 1,
      sym__space,
    STATE(260), 1,
      sym__sep,
  [5079] = 1,
    ACTIONS(1487), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5085] = 3,
    ACTIONS(2090), 1,
      aux_sym__sep_token1,
    ACTIONS(2092), 1,
      sym__space,
    STATE(115), 1,
      sym__sep,
  [5095] = 3,
    ACTIONS(2094), 1,
      sym__space,
    ACTIONS(2096), 1,
      sym__eol,
    STATE(476), 1,
      aux_sym__permit_remote_open_repeat1,
  [5105] = 3,
    ACTIONS(2098), 1,
      aux_sym__sep_token1,
    ACTIONS(2100), 1,
      sym__space,
    STATE(284), 1,
      sym__sep,
  [5115] = 3,
    ACTIONS(2102), 1,
      aux_sym__sep_token1,
    ACTIONS(2104), 1,
      sym__space,
    STATE(121), 1,
      sym__sep,
  [5125] = 1,
    ACTIONS(2106), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5131] = 3,
    ACTIONS(2108), 1,
      aux_sym__sep_token1,
    ACTIONS(2110), 1,
      sym__space,
    STATE(41), 1,
      sym__sep,
  [5141] = 3,
    ACTIONS(2112), 1,
      anon_sym_DQUOTE,
    ACTIONS(2114), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym__log_verbose_repeat2,
  [5151] = 3,
    ACTIONS(2116), 1,
      aux_sym__sep_token1,
    ACTIONS(2118), 1,
      sym__space,
    STATE(150), 1,
      sym__sep,
  [5161] = 3,
    ACTIONS(2120), 1,
      aux_sym__sep_token1,
    ACTIONS(2122), 1,
      sym__space,
    STATE(499), 1,
      sym__sep,
  [5171] = 3,
    ACTIONS(2124), 1,
      aux_sym__sep_token1,
    ACTIONS(2126), 1,
      sym__space,
    STATE(74), 1,
      sym__sep,
  [5181] = 2,
    ACTIONS(2128), 1,
      anon_sym_COLON,
    ACTIONS(2130), 2,
      sym__space,
      sym__eol,
  [5189] = 1,
    ACTIONS(1457), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5195] = 3,
    ACTIONS(2132), 1,
      aux_sym__sep_token1,
    ACTIONS(2134), 1,
      sym__space,
    STATE(135), 1,
      sym__sep,
  [5205] = 3,
    ACTIONS(2136), 1,
      sym__space,
    ACTIONS(2139), 1,
      sym__eol,
    STATE(430), 1,
      aux_sym__ignore_unknown_repeat1,
  [5215] = 3,
    ACTIONS(2141), 1,
      aux_sym__sep_token1,
    ACTIONS(2143), 1,
      sym__space,
    STATE(136), 1,
      sym__sep,
  [5225] = 3,
    ACTIONS(2145), 1,
      aux_sym__sep_token1,
    ACTIONS(2147), 1,
      sym__space,
    STATE(509), 1,
      sym__sep,
  [5235] = 2,
    ACTIONS(2149), 1,
      aux_sym_bytes_token1,
    ACTIONS(2151), 2,
      sym__space,
      sym__eol,
  [5243] = 3,
    ACTIONS(2153), 1,
      aux_sym__sep_token1,
    ACTIONS(2155), 1,
      sym__space,
    STATE(513), 1,
      sym__sep,
  [5253] = 3,
    ACTIONS(2157), 1,
      aux_sym__sep_token1,
    ACTIONS(2159), 1,
      sym__space,
    STATE(145), 1,
      sym__sep,
  [5263] = 1,
    ACTIONS(1440), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5269] = 3,
    ACTIONS(2161), 1,
      aux_sym__sep_token1,
    ACTIONS(2163), 1,
      sym__space,
    STATE(285), 1,
      sym__sep,
  [5279] = 3,
    ACTIONS(2165), 1,
      sym__space,
    ACTIONS(2168), 1,
      sym__eol,
    STATE(438), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5289] = 3,
    ACTIONS(2170), 1,
      sym__space,
    ACTIONS(2173), 1,
      sym__eol,
    STATE(439), 1,
      aux_sym__dynamic_forward_repeat1,
  [5299] = 1,
    ACTIONS(2175), 3,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [5305] = 3,
    ACTIONS(2177), 1,
      aux_sym__sep_token1,
    ACTIONS(2179), 1,
      sym__space,
    STATE(807), 1,
      sym__sep,
  [5315] = 1,
    ACTIONS(1433), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5321] = 3,
    ACTIONS(2181), 1,
      aux_sym__sep_token1,
    ACTIONS(2183), 1,
      sym__space,
    STATE(478), 1,
      sym__sep,
  [5331] = 3,
    ACTIONS(2185), 1,
      aux_sym__sep_token1,
    ACTIONS(2187), 1,
      sym__space,
    STATE(138), 1,
      sym__sep,
  [5341] = 3,
    ACTIONS(2189), 1,
      sym__space,
    ACTIONS(2191), 1,
      sym__eol,
    STATE(474), 1,
      aux_sym__send_env_repeat1,
  [5351] = 3,
    ACTIONS(2193), 1,
      aux_sym__sep_token1,
    ACTIONS(2195), 1,
      sym__space,
    STATE(781), 1,
      sym__sep,
  [5361] = 3,
    ACTIONS(2197), 1,
      aux_sym__sep_token1,
    ACTIONS(2199), 1,
      sym__space,
    STATE(279), 1,
      sym__sep,
  [5371] = 1,
    ACTIONS(1424), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5377] = 3,
    ACTIONS(2201), 1,
      aux_sym__sep_token1,
    ACTIONS(2203), 1,
      sym__space,
    STATE(270), 1,
      sym__sep,
  [5387] = 3,
    ACTIONS(1411), 1,
      anon_sym_COLON,
    ACTIONS(2205), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym__cnames_map_repeat1,
  [5397] = 3,
    ACTIONS(2208), 1,
      sym__space,
    ACTIONS(2210), 1,
      sym__eol,
    STATE(472), 1,
      aux_sym__set_env_repeat1,
  [5407] = 3,
    ACTIONS(2212), 1,
      aux_sym__sep_token1,
    ACTIONS(2214), 1,
      sym__space,
    STATE(143), 1,
      sym__sep,
  [5417] = 3,
    ACTIONS(2216), 1,
      aux_sym__sep_token1,
    ACTIONS(2218), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [5427] = 3,
    ACTIONS(2220), 1,
      aux_sym__sep_token1,
    ACTIONS(2222), 1,
      sym__space,
    STATE(272), 1,
      sym__sep,
  [5437] = 3,
    ACTIONS(2224), 1,
      sym__space,
    ACTIONS(2227), 1,
      sym__eol,
    STATE(455), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5447] = 3,
    ACTIONS(2229), 1,
      sym__space,
    ACTIONS(2232), 1,
      sym__eol,
    STATE(456), 1,
      aux_sym__canonical_domains_repeat1,
  [5457] = 3,
    ACTIONS(1387), 1,
      aux_sym_time_token3,
    ACTIONS(1389), 1,
      aux_sym_time_token4,
    ACTIONS(1391), 1,
      aux_sym_time_token5,
  [5467] = 3,
    ACTIONS(2234), 1,
      aux_sym__sep_token1,
    ACTIONS(2236), 1,
      sym__space,
    STATE(55), 1,
      sym__sep,
  [5477] = 3,
    ACTIONS(2238), 1,
      anon_sym_DQUOTE,
    ACTIONS(2240), 1,
      aux_sym__match_exec_token3,
    STATE(459), 1,
      aux_sym__string_repeat2,
  [5487] = 2,
    ACTIONS(2243), 1,
      anon_sym_COLON,
    ACTIONS(2245), 2,
      sym__space,
      sym__eol,
  [5495] = 1,
    ACTIONS(2247), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [5501] = 3,
    ACTIONS(2249), 1,
      sym__space,
    ACTIONS(2251), 1,
      sym__eol,
    STATE(470), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5511] = 3,
    ACTIONS(2253), 1,
      sym__space,
    ACTIONS(2256), 1,
      sym__eol,
    STATE(463), 1,
      aux_sym_match_declaration_repeat1,
  [5521] = 3,
    ACTIONS(2258), 1,
      aux_sym__sep_token1,
    ACTIONS(2260), 1,
      sym__space,
    STATE(274), 1,
      sym__sep,
  [5531] = 3,
    ACTIONS(2262), 1,
      aux_sym__sep_token1,
    ACTIONS(2264), 1,
      sym__space,
    STATE(286), 1,
      sym__sep,
  [5541] = 3,
    ACTIONS(2266), 1,
      aux_sym__sep_token1,
    ACTIONS(2268), 1,
      sym__space,
    STATE(246), 1,
      sym__sep,
  [5551] = 3,
    ACTIONS(2270), 1,
      sym__space,
    ACTIONS(2273), 1,
      sym__eol,
    STATE(467), 1,
      aux_sym_host_declaration_repeat1,
  [5561] = 3,
    ACTIONS(2275), 1,
      sym__space,
    ACTIONS(2277), 1,
      sym__eol,
    STATE(469), 1,
      aux_sym_host_declaration_repeat1,
  [5571] = 3,
    ACTIONS(2279), 1,
      sym__space,
    ACTIONS(2281), 1,
      sym__eol,
    STATE(467), 1,
      aux_sym_host_declaration_repeat1,
  [5581] = 3,
    ACTIONS(2249), 1,
      sym__space,
    ACTIONS(2283), 1,
      sym__eol,
    STATE(406), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5591] = 3,
    ACTIONS(1542), 1,
      sym__number,
    ACTIONS(2285), 1,
      anon_sym_any,
    STATE(688), 1,
      sym_number,
  [5601] = 3,
    ACTIONS(2208), 1,
      sym__space,
    ACTIONS(2287), 1,
      sym__eol,
    STATE(407), 1,
      aux_sym__set_env_repeat1,
  [5611] = 3,
    ACTIONS(2289), 1,
      sym__space,
    ACTIONS(2291), 1,
      sym__eol,
    STATE(467), 1,
      aux_sym_host_declaration_repeat1,
  [5621] = 3,
    ACTIONS(2189), 1,
      sym__space,
    ACTIONS(2293), 1,
      sym__eol,
    STATE(408), 1,
      aux_sym__send_env_repeat1,
  [5631] = 3,
    ACTIONS(2295), 1,
      aux_sym__sep_token1,
    ACTIONS(2297), 1,
      sym__space,
    STATE(113), 1,
      sym__sep,
  [5641] = 3,
    ACTIONS(2094), 1,
      sym__space,
    ACTIONS(2299), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym__permit_remote_open_repeat1,
  [5651] = 3,
    ACTIONS(1542), 1,
      sym__number,
    ACTIONS(2301), 1,
      anon_sym_STAR,
    STATE(673), 1,
      sym_number,
  [5661] = 2,
    STATE(626), 1,
      sym__boolean,
    ACTIONS(2303), 2,
      anon_sym_yes,
      anon_sym_no,
  [5669] = 3,
    ACTIONS(2305), 1,
      anon_sym_BANG,
    ACTIONS(2307), 1,
      anon_sym_DQUOTE,
    ACTIONS(2309), 1,
      aux_sym__match_localnetwork_token2,
  [5679] = 3,
    ACTIONS(2114), 1,
      anon_sym_COMMA,
    ACTIONS(2311), 1,
      anon_sym_DQUOTE,
    STATE(423), 1,
      aux_sym__log_verbose_repeat2,
  [5689] = 2,
    ACTIONS(2313), 1,
      sym__number,
    ACTIONS(1610), 2,
      sym__space,
      sym__eol,
  [5697] = 2,
    ACTIONS(2315), 1,
      sym__number,
    ACTIONS(1610), 2,
      sym__space,
      sym__eol,
  [5705] = 3,
    ACTIONS(1805), 1,
      anon_sym_COMMA,
    ACTIONS(2317), 1,
      anon_sym_COLON,
    STATE(450), 1,
      aux_sym__cnames_map_repeat1,
  [5715] = 3,
    ACTIONS(1926), 1,
      sym__space,
    ACTIONS(2319), 1,
      sym__eol,
    STATE(438), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5725] = 3,
    ACTIONS(1783), 1,
      sym__space,
    ACTIONS(2321), 1,
      sym__eol,
    STATE(456), 1,
      aux_sym__canonical_domains_repeat1,
  [5735] = 3,
    ACTIONS(880), 1,
      sym__eol,
    ACTIONS(2323), 1,
      sym__space,
    STATE(463), 1,
      aux_sym_match_declaration_repeat1,
  [5745] = 3,
    ACTIONS(1875), 1,
      sym__space,
    ACTIONS(2325), 1,
      sym__eol,
    STATE(439), 1,
      aux_sym__dynamic_forward_repeat1,
  [5755] = 3,
    ACTIONS(1801), 1,
      sym__space,
    ACTIONS(2327), 1,
      sym__eol,
    STATE(455), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5765] = 3,
    ACTIONS(2329), 1,
      anon_sym_DQUOTE,
    ACTIONS(2331), 1,
      aux_sym__match_exec_token3,
    STATE(459), 1,
      aux_sym__string_repeat2,
  [5775] = 3,
    ACTIONS(1996), 1,
      sym__space,
    ACTIONS(2333), 1,
      sym__eol,
    STATE(430), 1,
      aux_sym__ignore_unknown_repeat1,
  [5785] = 2,
    ACTIONS(2337), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2335), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [5793] = 2,
    ACTIONS(2339), 1,
      sym__number,
    ACTIONS(1610), 2,
      sym__space,
      sym__eol,
  [5801] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5806] = 1,
    ACTIONS(2343), 2,
      sym__space,
      sym__eol,
  [5811] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5816] = 1,
    ACTIONS(2345), 2,
      sym__space,
      sym__eol,
  [5821] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5826] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5831] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(643), 1,
      sym_number,
  [5838] = 1,
    ACTIONS(2347), 2,
      anon_sym_DQUOTE,
      aux_sym__match_exec_token3,
  [5843] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5848] = 2,
    ACTIONS(1098), 1,
      sym__number,
    STATE(616), 1,
      sym_time,
  [5855] = 1,
    ACTIONS(1610), 2,
      sym__space,
      sym__eol,
  [5860] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5865] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5870] = 1,
    ACTIONS(2349), 2,
      sym__space,
      sym__eol,
  [5875] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5880] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5885] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(633), 1,
      sym_number,
  [5892] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5897] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5902] = 1,
    ACTIONS(2351), 2,
      sym__space,
      sym__eol,
  [5907] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(631), 1,
      sym_number,
  [5914] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5919] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5924] = 2,
    ACTIONS(2353), 1,
      sym__space,
    ACTIONS(2355), 1,
      sym__eol,
  [5931] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5936] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(668), 1,
      sym_number,
  [5943] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(440), 1,
      sym_number,
  [5950] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5955] = 1,
    ACTIONS(2357), 2,
      sym__space,
      sym__eol,
  [5960] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5965] = 1,
    ACTIONS(2359), 2,
      sym__space,
      sym__eol,
  [5970] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(676), 1,
      sym_number,
  [5977] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5982] = 1,
    ACTIONS(2345), 2,
      sym__space,
      sym__eol,
  [5987] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5992] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5997] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6002] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6007] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6012] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6017] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6022] = 1,
    ACTIONS(2361), 2,
      sym__space,
      sym__eol,
  [6027] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6032] = 2,
    ACTIONS(1712), 1,
      sym__eol,
    ACTIONS(2363), 1,
      sym__space,
  [6039] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6044] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6049] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6054] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6059] = 1,
    ACTIONS(2365), 2,
      sym__space,
      sym__eol,
  [6064] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6069] = 2,
    ACTIONS(2367), 1,
      aux_sym__all_token1,
    STATE(597), 1,
      sym__all,
  [6076] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6081] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6086] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6091] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6096] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6101] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6106] = 1,
    ACTIONS(2365), 2,
      sym__space,
      sym__eol,
  [6111] = 1,
    ACTIONS(2361), 2,
      sym__space,
      sym__eol,
  [6116] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [6121] = 1,
    ACTIONS(2361), 2,
      sym__space,
      sym__eol,
  [6126] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6131] = 2,
    ACTIONS(2371), 1,
      aux_sym__all_token1,
    STATE(598), 1,
      sym__all,
  [6138] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [6143] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6148] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6153] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [6158] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(679), 1,
      sym_number,
  [6165] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6170] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6175] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6180] = 2,
    ACTIONS(1098), 1,
      sym__number,
    STATE(681), 1,
      sym_time,
  [6187] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6192] = 1,
    ACTIONS(2345), 2,
      sym__space,
      sym__eol,
  [6197] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6202] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6207] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6212] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6217] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6222] = 2,
    ACTIONS(2375), 1,
      sym__var_name,
    STATE(686), 1,
      sym__set_env_value,
  [6229] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6234] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6239] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6244] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6249] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6254] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6259] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6264] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6269] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6274] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6279] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6284] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [6289] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6294] = 2,
    ACTIONS(2381), 1,
      sym__space,
    ACTIONS(2383), 1,
      sym__eol,
  [6301] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6306] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6311] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6316] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6321] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6326] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6331] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6336] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6341] = 1,
    ACTIONS(2385), 2,
      sym__space,
      sym__eol,
  [6346] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6351] = 1,
    ACTIONS(2387), 2,
      sym__space,
      sym__eol,
  [6356] = 1,
    ACTIONS(2389), 2,
      sym__space,
      sym__eol,
  [6361] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6366] = 2,
    ACTIONS(790), 1,
      sym__space,
    ACTIONS(792), 1,
      sym__eol,
  [6373] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [6378] = 2,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(2391), 1,
      aux_sym__match_exec_token2,
  [6385] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [6390] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [6395] = 1,
    ACTIONS(2393), 2,
      sym__space,
      sym__eol,
  [6400] = 1,
    ACTIONS(2395), 2,
      sym__space,
      sym__eol,
  [6405] = 1,
    ACTIONS(2397), 2,
      sym__space,
      sym__eol,
  [6410] = 1,
    ACTIONS(2399), 2,
      sym__space,
      sym__eol,
  [6415] = 1,
    ACTIONS(2401), 2,
      sym__space,
      sym__eol,
  [6420] = 1,
    ACTIONS(2256), 2,
      sym__space,
      sym__eol,
  [6425] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6430] = 1,
    ACTIONS(2403), 2,
      sym__space,
      sym__eol,
  [6435] = 1,
    ACTIONS(2405), 2,
      sym__space,
      sym__eol,
  [6440] = 1,
    ACTIONS(2407), 2,
      sym__space,
      sym__eol,
  [6445] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6450] = 1,
    ACTIONS(2411), 2,
      sym__space,
      sym__eol,
  [6455] = 1,
    ACTIONS(2413), 2,
      sym__space,
      sym__eol,
  [6460] = 1,
    ACTIONS(2415), 2,
      sym__space,
      sym__eol,
  [6465] = 2,
    ACTIONS(1389), 1,
      aux_sym_time_token4,
    ACTIONS(1391), 1,
      aux_sym_time_token5,
  [6472] = 1,
    ACTIONS(1743), 2,
      sym__space,
      sym__eol,
  [6477] = 1,
    ACTIONS(2417), 2,
      sym__space,
      sym__eol,
  [6482] = 1,
    ACTIONS(2419), 2,
      sym__space,
      sym__eol,
  [6487] = 1,
    ACTIONS(2421), 2,
      sym__space,
      sym__eol,
  [6492] = 1,
    ACTIONS(2423), 2,
      sym__space,
      sym__eol,
  [6497] = 1,
    ACTIONS(2425), 2,
      sym__space,
      sym__eol,
  [6502] = 1,
    ACTIONS(2427), 2,
      sym__space,
      sym__eol,
  [6507] = 1,
    ACTIONS(2429), 2,
      sym__space,
      sym__eol,
  [6512] = 1,
    ACTIONS(2431), 2,
      sym__space,
      sym__eol,
  [6517] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [6522] = 1,
    ACTIONS(2433), 2,
      sym__space,
      sym__eol,
  [6527] = 1,
    ACTIONS(2435), 2,
      sym__space,
      sym__eol,
  [6532] = 1,
    ACTIONS(2437), 2,
      sym__space,
      sym__eol,
  [6537] = 1,
    ACTIONS(2439), 2,
      sym__space,
      sym__eol,
  [6542] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6547] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6552] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6557] = 1,
    ACTIONS(2441), 2,
      sym__space,
      sym__eol,
  [6562] = 1,
    ACTIONS(2443), 2,
      sym__space,
      sym__eol,
  [6567] = 1,
    ACTIONS(2445), 2,
      sym__space,
      sym__eol,
  [6572] = 1,
    ACTIONS(2447), 2,
      sym__space,
      sym__eol,
  [6577] = 1,
    ACTIONS(2449), 2,
      sym__space,
      sym__eol,
  [6582] = 1,
    ACTIONS(2451), 2,
      sym__space,
      sym__eol,
  [6587] = 1,
    ACTIONS(2453), 2,
      sym__space,
      sym__eol,
  [6592] = 1,
    ACTIONS(2455), 2,
      sym__space,
      sym__eol,
  [6597] = 2,
    ACTIONS(2457), 1,
      sym__space,
    ACTIONS(2459), 1,
      sym__eol,
  [6604] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6609] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6614] = 1,
    ACTIONS(2461), 2,
      sym__space,
      sym__eol,
  [6619] = 2,
    ACTIONS(2463), 1,
      sym__space,
    ACTIONS(2465), 1,
      sym__eol,
  [6626] = 1,
    ACTIONS(2467), 2,
      sym__space,
      sym__eol,
  [6631] = 1,
    ACTIONS(2465), 2,
      sym__space,
      sym__eol,
  [6636] = 1,
    ACTIONS(2139), 2,
      sym__space,
      sym__eol,
  [6641] = 1,
    ACTIONS(2469), 2,
      sym__space,
      sym__eol,
  [6646] = 1,
    ACTIONS(2471), 2,
      sym__space,
      sym__eol,
  [6651] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6656] = 2,
    ACTIONS(2473), 1,
      aux_sym_time_token4,
    ACTIONS(2475), 1,
      aux_sym_time_token5,
  [6663] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6668] = 1,
    ACTIONS(2477), 2,
      sym__space,
      sym__eol,
  [6673] = 1,
    ACTIONS(2130), 2,
      sym__space,
      sym__eol,
  [6678] = 1,
    ACTIONS(2479), 2,
      sym__space,
      sym__eol,
  [6683] = 1,
    ACTIONS(2481), 2,
      sym__space,
      sym__eol,
  [6688] = 1,
    ACTIONS(2483), 2,
      sym__space,
      sym__eol,
  [6693] = 2,
    ACTIONS(2331), 1,
      aux_sym__match_exec_token3,
    STATE(489), 1,
      aux_sym__string_repeat2,
  [6700] = 1,
    ACTIONS(2485), 2,
      sym__space,
      sym__eol,
  [6705] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6710] = 1,
    ACTIONS(2487), 2,
      sym__space,
      sym__eol,
  [6715] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6720] = 1,
    ACTIONS(2489), 2,
      sym__space,
      sym__eol,
  [6725] = 1,
    ACTIONS(2491), 2,
      sym__space,
      sym__eol,
  [6730] = 1,
    ACTIONS(2493), 2,
      sym__space,
      sym__eol,
  [6735] = 1,
    ACTIONS(2495), 2,
      aux_sym__match_localnetwork_token3,
      anon_sym_STAR,
  [6740] = 1,
    ACTIONS(2497), 2,
      sym__space,
      sym__eol,
  [6745] = 1,
    ACTIONS(2499), 2,
      sym__space,
      sym__eol,
  [6750] = 1,
    ACTIONS(2501), 2,
      sym__space,
      sym__eol,
  [6755] = 1,
    ACTIONS(2503), 2,
      sym__space,
      sym__eol,
  [6760] = 1,
    ACTIONS(2505), 2,
      sym__space,
      sym__eol,
  [6765] = 1,
    ACTIONS(2507), 2,
      sym__space,
      sym__eol,
  [6770] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6775] = 1,
    ACTIONS(2073), 2,
      sym__space,
      sym__eol,
  [6780] = 1,
    ACTIONS(2509), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6785] = 1,
    ACTIONS(2511), 2,
      sym__space,
      sym__eol,
  [6790] = 1,
    ACTIONS(2513), 2,
      sym__space,
      sym__eol,
  [6795] = 1,
    ACTIONS(2515), 2,
      sym__space,
      sym__eol,
  [6800] = 1,
    ACTIONS(2517), 2,
      sym__space,
      sym__eol,
  [6805] = 1,
    ACTIONS(2519), 2,
      sym__space,
      sym__eol,
  [6810] = 1,
    ACTIONS(2521), 2,
      sym__space,
      sym__eol,
  [6815] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6820] = 1,
    ACTIONS(2523), 2,
      sym__space,
      sym__eol,
  [6825] = 1,
    ACTIONS(2525), 2,
      sym__space,
      sym__eol,
  [6830] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6835] = 1,
    ACTIONS(1751), 2,
      sym__space,
      sym__eol,
  [6840] = 1,
    ACTIONS(2527), 2,
      sym__space,
      sym__eol,
  [6845] = 1,
    ACTIONS(2529), 2,
      sym__space,
      sym__eol,
  [6850] = 1,
    ACTIONS(2531), 2,
      sym__space,
      sym__eol,
  [6855] = 1,
    ACTIONS(2533), 2,
      sym__space,
      sym__eol,
  [6860] = 1,
    ACTIONS(2535), 2,
      sym__space,
      sym__eol,
  [6865] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [6870] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(760), 1,
      sym_number,
  [6877] = 2,
    ACTIONS(2537), 1,
      sym__space,
    ACTIONS(2539), 1,
      sym__eol,
  [6884] = 1,
    ACTIONS(2541), 2,
      sym__space,
      sym__eol,
  [6889] = 1,
    ACTIONS(2543), 2,
      sym__space,
      sym__eol,
  [6894] = 1,
    ACTIONS(2545), 2,
      sym__space,
      sym__eol,
  [6899] = 2,
    ACTIONS(2547), 1,
      sym__space,
    ACTIONS(2549), 1,
      sym__eol,
  [6906] = 1,
    ACTIONS(2551), 2,
      sym__space,
      sym__eol,
  [6911] = 1,
    ACTIONS(2553), 2,
      sym__space,
      sym__eol,
  [6916] = 1,
    ACTIONS(2555), 2,
      sym__space,
      sym__eol,
  [6921] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(748), 1,
      sym_number,
  [6928] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(746), 1,
      sym_number,
  [6935] = 1,
    ACTIONS(2557), 2,
      sym__space,
      sym__eol,
  [6940] = 1,
    ACTIONS(2559), 2,
      sym__space,
      sym__eol,
  [6945] = 2,
    ACTIONS(2561), 1,
      anon_sym_none,
    ACTIONS(2563), 1,
      aux_sym__escape_char_token2,
  [6952] = 1,
    ACTIONS(2565), 2,
      sym__space,
      sym__eol,
  [6957] = 2,
    ACTIONS(2543), 1,
      sym__eol,
    ACTIONS(2567), 1,
      sym__space,
  [6964] = 2,
    ACTIONS(2569), 1,
      anon_sym_BANG,
    ACTIONS(2571), 1,
      aux_sym__match_localnetwork_token2,
  [6971] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [6976] = 1,
    ACTIONS(2575), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [6981] = 1,
    ACTIONS(2577), 2,
      sym__space,
      sym__eol,
  [6986] = 1,
    ACTIONS(2579), 2,
      sym__space,
      sym__eol,
  [6991] = 1,
    ACTIONS(2581), 2,
      sym__space,
      sym__eol,
  [6996] = 1,
    ACTIONS(2583), 2,
      sym__space,
      sym__eol,
  [7001] = 1,
    ACTIONS(2585), 2,
      sym__space,
      sym__eol,
  [7006] = 1,
    ACTIONS(1920), 2,
      sym__space,
      sym__eol,
  [7011] = 1,
    ACTIONS(2587), 2,
      sym__space,
      sym__eol,
  [7016] = 1,
    ACTIONS(2589), 2,
      sym__space,
      sym__eol,
  [7021] = 1,
    ACTIONS(1757), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7026] = 1,
    ACTIONS(2591), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7031] = 1,
    ACTIONS(2593), 2,
      sym__space,
      sym__eol,
  [7036] = 1,
    ACTIONS(2595), 2,
      sym__space,
      sym__eol,
  [7041] = 1,
    ACTIONS(2597), 2,
      sym__space,
      sym__eol,
  [7046] = 1,
    ACTIONS(2599), 2,
      sym__space,
      sym__eol,
  [7051] = 1,
    ACTIONS(2601), 2,
      sym__space,
      sym__eol,
  [7056] = 2,
    ACTIONS(1542), 1,
      sym__number,
    STATE(762), 1,
      sym_number,
  [7063] = 1,
    ACTIONS(2603), 2,
      sym__space,
      sym__eol,
  [7068] = 1,
    ACTIONS(2605), 2,
      sym__space,
      sym__eol,
  [7073] = 1,
    ACTIONS(2607), 2,
      sym__space,
      sym__eol,
  [7078] = 1,
    ACTIONS(2609), 2,
      sym__space,
      sym__eol,
  [7083] = 1,
    ACTIONS(2611), 2,
      sym__space,
      sym__eol,
  [7088] = 1,
    ACTIONS(2613), 2,
      sym__space,
      sym__eol,
  [7093] = 1,
    ACTIONS(2615), 2,
      sym__space,
      sym__eol,
  [7098] = 1,
    ACTIONS(2617), 2,
      sym__space,
      sym__eol,
  [7103] = 1,
    ACTIONS(2619), 2,
      sym__space,
      sym__eol,
  [7108] = 1,
    ACTIONS(2621), 2,
      sym__space,
      sym__eol,
  [7113] = 1,
    ACTIONS(2623), 2,
      sym__space,
      sym__eol,
  [7118] = 1,
    ACTIONS(2625), 2,
      sym__space,
      sym__eol,
  [7123] = 1,
    ACTIONS(2627), 2,
      sym__space,
      sym__eol,
  [7128] = 1,
    ACTIONS(2629), 2,
      sym__space,
      sym__eol,
  [7133] = 1,
    ACTIONS(2631), 2,
      sym__space,
      sym__eol,
  [7138] = 1,
    ACTIONS(2633), 2,
      sym__space,
      sym__eol,
  [7143] = 1,
    ACTIONS(2635), 2,
      sym__space,
      sym__eol,
  [7148] = 1,
    ACTIONS(1573), 2,
      sym__space,
      sym__eol,
  [7153] = 1,
    ACTIONS(2637), 2,
      sym__space,
      sym__eol,
  [7158] = 1,
    ACTIONS(2639), 2,
      sym__space,
      sym__eol,
  [7163] = 1,
    ACTIONS(2641), 2,
      sym__space,
      sym__eol,
  [7168] = 1,
    ACTIONS(2643), 2,
      sym__space,
      sym__eol,
  [7173] = 1,
    ACTIONS(2645), 2,
      sym__space,
      sym__eol,
  [7178] = 2,
    ACTIONS(1098), 1,
      sym__number,
    STATE(721), 1,
      sym_time,
  [7185] = 1,
    ACTIONS(2647), 2,
      sym__space,
      sym__eol,
  [7190] = 2,
    ACTIONS(1821), 1,
      aux_sym_time_token4,
    ACTIONS(1823), 1,
      aux_sym_time_token5,
  [7197] = 1,
    ACTIONS(2649), 2,
      sym__space,
      sym__eol,
  [7202] = 1,
    ACTIONS(2651), 2,
      sym__space,
      sym__eol,
  [7207] = 1,
    ACTIONS(2653), 2,
      sym__space,
      sym__eol,
  [7212] = 1,
    ACTIONS(2655), 2,
      sym__space,
      sym__eol,
  [7217] = 1,
    ACTIONS(2657), 2,
      sym__space,
      sym__eol,
  [7222] = 1,
    ACTIONS(2659), 2,
      sym__space,
      sym__eol,
  [7227] = 1,
    ACTIONS(2661), 1,
      aux_sym__match_localnetwork_token2,
  [7231] = 1,
    ACTIONS(2663), 1,
      anon_sym_RBRACE,
  [7235] = 1,
    ACTIONS(1823), 1,
      aux_sym_time_token5,
  [7239] = 1,
    ACTIONS(2665), 1,
      sym_cipher,
  [7243] = 1,
    ACTIONS(2667), 1,
      aux_sym__match_localnetwork_token2,
  [7247] = 1,
    ACTIONS(2669), 1,
      aux_sym__match_localnetwork_token3,
  [7251] = 1,
    ACTIONS(2671), 1,
      anon_sym_COLON,
  [7255] = 1,
    ACTIONS(2673), 1,
      sym__eol,
  [7259] = 1,
    ACTIONS(2675), 1,
      anon_sym_DQUOTE,
  [7263] = 1,
    ACTIONS(2677), 1,
      sym__var_name,
  [7267] = 1,
    ACTIONS(2679), 1,
      anon_sym_DQUOTE,
  [7271] = 1,
    ACTIONS(2681), 1,
      sym_key_sig,
  [7275] = 1,
    ACTIONS(2683), 1,
      sym_key_sig,
  [7279] = 1,
    ACTIONS(2685), 1,
      sym_kex,
  [7283] = 1,
    ACTIONS(2539), 1,
      sym__eol,
  [7287] = 1,
    ACTIONS(2687), 1,
      sym__space,
  [7291] = 1,
    ACTIONS(2689), 1,
      sym_facility,
  [7295] = 1,
    ACTIONS(2691), 1,
      sym_mac,
  [7299] = 1,
    ACTIONS(2693), 1,
      anon_sym_COLON,
  [7303] = 1,
    ACTIONS(2695), 1,
      anon_sym_AT,
  [7307] = 1,
    ACTIONS(2697), 1,
      sym_key_sig,
  [7311] = 1,
    ACTIONS(2475), 1,
      aux_sym_time_token5,
  [7315] = 1,
    ACTIONS(2699), 1,
      anon_sym_EQ,
  [7319] = 1,
    ACTIONS(1391), 1,
      aux_sym_time_token5,
  [7323] = 1,
    ACTIONS(2701), 1,
      aux_sym_time_token5,
  [7327] = 1,
    ACTIONS(2703), 1,
      sym__eol,
  [7331] = 1,
    ACTIONS(2705), 1,
      sym__var_name,
  [7335] = 1,
    ACTIONS(792), 1,
      sym__eol,
  [7339] = 1,
    ACTIONS(2707), 1,
      anon_sym_RBRACE,
  [7343] = 1,
    ACTIONS(2709), 1,
      ts_builtin_sym_end,
  [7347] = 1,
    ACTIONS(2711), 1,
      aux_sym__proxy_jump_arg_token1,
  [7351] = 1,
    ACTIONS(2713), 1,
      sym_authentication,
  [7355] = 1,
    ACTIONS(2715), 1,
      anon_sym_COLON,
  [7359] = 1,
    ACTIONS(2717), 1,
      sym_mac,
  [7363] = 1,
    ACTIONS(2719), 1,
      anon_sym_DQUOTE,
  [7367] = 1,
    ACTIONS(2721), 1,
      sym_kex,
  [7371] = 1,
    ACTIONS(2723), 1,
      sym_verbosity,
  [7375] = 1,
    ACTIONS(2725), 1,
      sym_key_sig,
  [7379] = 1,
    ACTIONS(2727), 1,
      anon_sym_DQUOTE,
  [7383] = 1,
    ACTIONS(2729), 1,
      sym_authentication,
  [7387] = 1,
    ACTIONS(2731), 1,
      sym_cipher,
  [7391] = 1,
    ACTIONS(2355), 1,
      sym__eol,
  [7395] = 1,
    ACTIONS(2733), 1,
      aux_sym__stream_local_bind_mask_token2,
  [7399] = 1,
    ACTIONS(2735), 1,
      anon_sym_RBRACE,
  [7403] = 1,
    ACTIONS(2737), 1,
      sym_sig,
  [7407] = 1,
    ACTIONS(2739), 1,
      aux_sym__match_localnetwork_token3,
  [7411] = 1,
    ACTIONS(880), 1,
      sym__eol,
  [7415] = 1,
    ACTIONS(2741), 1,
      anon_sym_RBRACE,
  [7419] = 1,
    ACTIONS(2743), 1,
      sym_sig,
  [7423] = 1,
    ACTIONS(2745), 1,
      anon_sym_RBRACE,
  [7427] = 1,
    ACTIONS(2747), 1,
      anon_sym_RBRACE,
  [7431] = 1,
    ACTIONS(2749), 1,
      sym__var_name,
  [7435] = 1,
    ACTIONS(2751), 1,
      sym__var_name,
  [7439] = 1,
    ACTIONS(2753), 1,
      sym__var_name,
  [7443] = 1,
    ACTIONS(2755), 1,
      sym__var_name,
  [7447] = 1,
    ACTIONS(2757), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 64,
  [SMALL_STATE(38)] = 125,
  [SMALL_STATE(39)] = 186,
  [SMALL_STATE(40)] = 244,
  [SMALL_STATE(41)] = 286,
  [SMALL_STATE(42)] = 328,
  [SMALL_STATE(43)] = 364,
  [SMALL_STATE(44)] = 402,
  [SMALL_STATE(45)] = 440,
  [SMALL_STATE(46)] = 476,
  [SMALL_STATE(47)] = 509,
  [SMALL_STATE(48)] = 532,
  [SMALL_STATE(49)] = 557,
  [SMALL_STATE(50)] = 580,
  [SMALL_STATE(51)] = 605,
  [SMALL_STATE(52)] = 633,
  [SMALL_STATE(53)] = 659,
  [SMALL_STATE(54)] = 681,
  [SMALL_STATE(55)] = 705,
  [SMALL_STATE(56)] = 731,
  [SMALL_STATE(57)] = 753,
  [SMALL_STATE(58)] = 781,
  [SMALL_STATE(59)] = 806,
  [SMALL_STATE(60)] = 829,
  [SMALL_STATE(61)] = 850,
  [SMALL_STATE(62)] = 873,
  [SMALL_STATE(63)] = 896,
  [SMALL_STATE(64)] = 919,
  [SMALL_STATE(65)] = 942,
  [SMALL_STATE(66)] = 965,
  [SMALL_STATE(67)] = 988,
  [SMALL_STATE(68)] = 1011,
  [SMALL_STATE(69)] = 1032,
  [SMALL_STATE(70)] = 1051,
  [SMALL_STATE(71)] = 1072,
  [SMALL_STATE(72)] = 1093,
  [SMALL_STATE(73)] = 1116,
  [SMALL_STATE(74)] = 1139,
  [SMALL_STATE(75)] = 1162,
  [SMALL_STATE(76)] = 1182,
  [SMALL_STATE(77)] = 1198,
  [SMALL_STATE(78)] = 1218,
  [SMALL_STATE(79)] = 1238,
  [SMALL_STATE(80)] = 1254,
  [SMALL_STATE(81)] = 1274,
  [SMALL_STATE(82)] = 1290,
  [SMALL_STATE(83)] = 1306,
  [SMALL_STATE(84)] = 1326,
  [SMALL_STATE(85)] = 1338,
  [SMALL_STATE(86)] = 1358,
  [SMALL_STATE(87)] = 1378,
  [SMALL_STATE(88)] = 1398,
  [SMALL_STATE(89)] = 1418,
  [SMALL_STATE(90)] = 1438,
  [SMALL_STATE(91)] = 1458,
  [SMALL_STATE(92)] = 1478,
  [SMALL_STATE(93)] = 1498,
  [SMALL_STATE(94)] = 1510,
  [SMALL_STATE(95)] = 1530,
  [SMALL_STATE(96)] = 1546,
  [SMALL_STATE(97)] = 1561,
  [SMALL_STATE(98)] = 1574,
  [SMALL_STATE(99)] = 1587,
  [SMALL_STATE(100)] = 1604,
  [SMALL_STATE(101)] = 1623,
  [SMALL_STATE(102)] = 1640,
  [SMALL_STATE(103)] = 1657,
  [SMALL_STATE(104)] = 1672,
  [SMALL_STATE(105)] = 1687,
  [SMALL_STATE(106)] = 1702,
  [SMALL_STATE(107)] = 1719,
  [SMALL_STATE(108)] = 1734,
  [SMALL_STATE(109)] = 1751,
  [SMALL_STATE(110)] = 1768,
  [SMALL_STATE(111)] = 1785,
  [SMALL_STATE(112)] = 1804,
  [SMALL_STATE(113)] = 1819,
  [SMALL_STATE(114)] = 1838,
  [SMALL_STATE(115)] = 1853,
  [SMALL_STATE(116)] = 1864,
  [SMALL_STATE(117)] = 1881,
  [SMALL_STATE(118)] = 1894,
  [SMALL_STATE(119)] = 1909,
  [SMALL_STATE(120)] = 1926,
  [SMALL_STATE(121)] = 1941,
  [SMALL_STATE(122)] = 1958,
  [SMALL_STATE(123)] = 1971,
  [SMALL_STATE(124)] = 1988,
  [SMALL_STATE(125)] = 2007,
  [SMALL_STATE(126)] = 2018,
  [SMALL_STATE(127)] = 2033,
  [SMALL_STATE(128)] = 2050,
  [SMALL_STATE(129)] = 2067,
  [SMALL_STATE(130)] = 2080,
  [SMALL_STATE(131)] = 2097,
  [SMALL_STATE(132)] = 2114,
  [SMALL_STATE(133)] = 2125,
  [SMALL_STATE(134)] = 2142,
  [SMALL_STATE(135)] = 2157,
  [SMALL_STATE(136)] = 2176,
  [SMALL_STATE(137)] = 2191,
  [SMALL_STATE(138)] = 2202,
  [SMALL_STATE(139)] = 2213,
  [SMALL_STATE(140)] = 2230,
  [SMALL_STATE(141)] = 2247,
  [SMALL_STATE(142)] = 2263,
  [SMALL_STATE(143)] = 2277,
  [SMALL_STATE(144)] = 2287,
  [SMALL_STATE(145)] = 2297,
  [SMALL_STATE(146)] = 2309,
  [SMALL_STATE(147)] = 2325,
  [SMALL_STATE(148)] = 2335,
  [SMALL_STATE(149)] = 2345,
  [SMALL_STATE(150)] = 2355,
  [SMALL_STATE(151)] = 2365,
  [SMALL_STATE(152)] = 2379,
  [SMALL_STATE(153)] = 2389,
  [SMALL_STATE(154)] = 2405,
  [SMALL_STATE(155)] = 2415,
  [SMALL_STATE(156)] = 2429,
  [SMALL_STATE(157)] = 2443,
  [SMALL_STATE(158)] = 2457,
  [SMALL_STATE(159)] = 2465,
  [SMALL_STATE(160)] = 2481,
  [SMALL_STATE(161)] = 2493,
  [SMALL_STATE(162)] = 2507,
  [SMALL_STATE(163)] = 2519,
  [SMALL_STATE(164)] = 2531,
  [SMALL_STATE(165)] = 2543,
  [SMALL_STATE(166)] = 2553,
  [SMALL_STATE(167)] = 2563,
  [SMALL_STATE(168)] = 2579,
  [SMALL_STATE(169)] = 2595,
  [SMALL_STATE(170)] = 2609,
  [SMALL_STATE(171)] = 2621,
  [SMALL_STATE(172)] = 2637,
  [SMALL_STATE(173)] = 2647,
  [SMALL_STATE(174)] = 2661,
  [SMALL_STATE(175)] = 2669,
  [SMALL_STATE(176)] = 2683,
  [SMALL_STATE(177)] = 2697,
  [SMALL_STATE(178)] = 2706,
  [SMALL_STATE(179)] = 2715,
  [SMALL_STATE(180)] = 2728,
  [SMALL_STATE(181)] = 2737,
  [SMALL_STATE(182)] = 2748,
  [SMALL_STATE(183)] = 2759,
  [SMALL_STATE(184)] = 2766,
  [SMALL_STATE(185)] = 2777,
  [SMALL_STATE(186)] = 2790,
  [SMALL_STATE(187)] = 2799,
  [SMALL_STATE(188)] = 2810,
  [SMALL_STATE(189)] = 2821,
  [SMALL_STATE(190)] = 2834,
  [SMALL_STATE(191)] = 2845,
  [SMALL_STATE(192)] = 2856,
  [SMALL_STATE(193)] = 2863,
  [SMALL_STATE(194)] = 2874,
  [SMALL_STATE(195)] = 2885,
  [SMALL_STATE(196)] = 2896,
  [SMALL_STATE(197)] = 2909,
  [SMALL_STATE(198)] = 2920,
  [SMALL_STATE(199)] = 2931,
  [SMALL_STATE(200)] = 2942,
  [SMALL_STATE(201)] = 2953,
  [SMALL_STATE(202)] = 2964,
  [SMALL_STATE(203)] = 2975,
  [SMALL_STATE(204)] = 2984,
  [SMALL_STATE(205)] = 2995,
  [SMALL_STATE(206)] = 3006,
  [SMALL_STATE(207)] = 3017,
  [SMALL_STATE(208)] = 3028,
  [SMALL_STATE(209)] = 3039,
  [SMALL_STATE(210)] = 3050,
  [SMALL_STATE(211)] = 3059,
  [SMALL_STATE(212)] = 3070,
  [SMALL_STATE(213)] = 3081,
  [SMALL_STATE(214)] = 3092,
  [SMALL_STATE(215)] = 3103,
  [SMALL_STATE(216)] = 3114,
  [SMALL_STATE(217)] = 3125,
  [SMALL_STATE(218)] = 3136,
  [SMALL_STATE(219)] = 3147,
  [SMALL_STATE(220)] = 3160,
  [SMALL_STATE(221)] = 3169,
  [SMALL_STATE(222)] = 3180,
  [SMALL_STATE(223)] = 3191,
  [SMALL_STATE(224)] = 3202,
  [SMALL_STATE(225)] = 3213,
  [SMALL_STATE(226)] = 3224,
  [SMALL_STATE(227)] = 3235,
  [SMALL_STATE(228)] = 3246,
  [SMALL_STATE(229)] = 3257,
  [SMALL_STATE(230)] = 3270,
  [SMALL_STATE(231)] = 3281,
  [SMALL_STATE(232)] = 3292,
  [SMALL_STATE(233)] = 3301,
  [SMALL_STATE(234)] = 3312,
  [SMALL_STATE(235)] = 3321,
  [SMALL_STATE(236)] = 3334,
  [SMALL_STATE(237)] = 3345,
  [SMALL_STATE(238)] = 3356,
  [SMALL_STATE(239)] = 3367,
  [SMALL_STATE(240)] = 3378,
  [SMALL_STATE(241)] = 3389,
  [SMALL_STATE(242)] = 3400,
  [SMALL_STATE(243)] = 3413,
  [SMALL_STATE(244)] = 3422,
  [SMALL_STATE(245)] = 3433,
  [SMALL_STATE(246)] = 3446,
  [SMALL_STATE(247)] = 3459,
  [SMALL_STATE(248)] = 3472,
  [SMALL_STATE(249)] = 3483,
  [SMALL_STATE(250)] = 3492,
  [SMALL_STATE(251)] = 3503,
  [SMALL_STATE(252)] = 3514,
  [SMALL_STATE(253)] = 3525,
  [SMALL_STATE(254)] = 3536,
  [SMALL_STATE(255)] = 3547,
  [SMALL_STATE(256)] = 3560,
  [SMALL_STATE(257)] = 3571,
  [SMALL_STATE(258)] = 3582,
  [SMALL_STATE(259)] = 3593,
  [SMALL_STATE(260)] = 3604,
  [SMALL_STATE(261)] = 3613,
  [SMALL_STATE(262)] = 3622,
  [SMALL_STATE(263)] = 3631,
  [SMALL_STATE(264)] = 3644,
  [SMALL_STATE(265)] = 3655,
  [SMALL_STATE(266)] = 3666,
  [SMALL_STATE(267)] = 3677,
  [SMALL_STATE(268)] = 3688,
  [SMALL_STATE(269)] = 3697,
  [SMALL_STATE(270)] = 3708,
  [SMALL_STATE(271)] = 3721,
  [SMALL_STATE(272)] = 3732,
  [SMALL_STATE(273)] = 3741,
  [SMALL_STATE(274)] = 3750,
  [SMALL_STATE(275)] = 3759,
  [SMALL_STATE(276)] = 3767,
  [SMALL_STATE(277)] = 3775,
  [SMALL_STATE(278)] = 3783,
  [SMALL_STATE(279)] = 3793,
  [SMALL_STATE(280)] = 3801,
  [SMALL_STATE(281)] = 3811,
  [SMALL_STATE(282)] = 3821,
  [SMALL_STATE(283)] = 3831,
  [SMALL_STATE(284)] = 3841,
  [SMALL_STATE(285)] = 3851,
  [SMALL_STATE(286)] = 3859,
  [SMALL_STATE(287)] = 3867,
  [SMALL_STATE(288)] = 3877,
  [SMALL_STATE(289)] = 3885,
  [SMALL_STATE(290)] = 3895,
  [SMALL_STATE(291)] = 3905,
  [SMALL_STATE(292)] = 3915,
  [SMALL_STATE(293)] = 3925,
  [SMALL_STATE(294)] = 3933,
  [SMALL_STATE(295)] = 3941,
  [SMALL_STATE(296)] = 3951,
  [SMALL_STATE(297)] = 3961,
  [SMALL_STATE(298)] = 3971,
  [SMALL_STATE(299)] = 3979,
  [SMALL_STATE(300)] = 3989,
  [SMALL_STATE(301)] = 3999,
  [SMALL_STATE(302)] = 4009,
  [SMALL_STATE(303)] = 4019,
  [SMALL_STATE(304)] = 4029,
  [SMALL_STATE(305)] = 4039,
  [SMALL_STATE(306)] = 4049,
  [SMALL_STATE(307)] = 4059,
  [SMALL_STATE(308)] = 4069,
  [SMALL_STATE(309)] = 4079,
  [SMALL_STATE(310)] = 4089,
  [SMALL_STATE(311)] = 4099,
  [SMALL_STATE(312)] = 4109,
  [SMALL_STATE(313)] = 4119,
  [SMALL_STATE(314)] = 4129,
  [SMALL_STATE(315)] = 4139,
  [SMALL_STATE(316)] = 4147,
  [SMALL_STATE(317)] = 4157,
  [SMALL_STATE(318)] = 4163,
  [SMALL_STATE(319)] = 4171,
  [SMALL_STATE(320)] = 4179,
  [SMALL_STATE(321)] = 4185,
  [SMALL_STATE(322)] = 4195,
  [SMALL_STATE(323)] = 4205,
  [SMALL_STATE(324)] = 4213,
  [SMALL_STATE(325)] = 4223,
  [SMALL_STATE(326)] = 4233,
  [SMALL_STATE(327)] = 4243,
  [SMALL_STATE(328)] = 4253,
  [SMALL_STATE(329)] = 4263,
  [SMALL_STATE(330)] = 4273,
  [SMALL_STATE(331)] = 4283,
  [SMALL_STATE(332)] = 4291,
  [SMALL_STATE(333)] = 4297,
  [SMALL_STATE(334)] = 4307,
  [SMALL_STATE(335)] = 4317,
  [SMALL_STATE(336)] = 4327,
  [SMALL_STATE(337)] = 4337,
  [SMALL_STATE(338)] = 4345,
  [SMALL_STATE(339)] = 4353,
  [SMALL_STATE(340)] = 4361,
  [SMALL_STATE(341)] = 4371,
  [SMALL_STATE(342)] = 4381,
  [SMALL_STATE(343)] = 4391,
  [SMALL_STATE(344)] = 4397,
  [SMALL_STATE(345)] = 4407,
  [SMALL_STATE(346)] = 4415,
  [SMALL_STATE(347)] = 4425,
  [SMALL_STATE(348)] = 4435,
  [SMALL_STATE(349)] = 4445,
  [SMALL_STATE(350)] = 4455,
  [SMALL_STATE(351)] = 4465,
  [SMALL_STATE(352)] = 4475,
  [SMALL_STATE(353)] = 4485,
  [SMALL_STATE(354)] = 4493,
  [SMALL_STATE(355)] = 4503,
  [SMALL_STATE(356)] = 4513,
  [SMALL_STATE(357)] = 4523,
  [SMALL_STATE(358)] = 4533,
  [SMALL_STATE(359)] = 4543,
  [SMALL_STATE(360)] = 4553,
  [SMALL_STATE(361)] = 4563,
  [SMALL_STATE(362)] = 4573,
  [SMALL_STATE(363)] = 4583,
  [SMALL_STATE(364)] = 4593,
  [SMALL_STATE(365)] = 4603,
  [SMALL_STATE(366)] = 4613,
  [SMALL_STATE(367)] = 4623,
  [SMALL_STATE(368)] = 4631,
  [SMALL_STATE(369)] = 4639,
  [SMALL_STATE(370)] = 4647,
  [SMALL_STATE(371)] = 4657,
  [SMALL_STATE(372)] = 4667,
  [SMALL_STATE(373)] = 4677,
  [SMALL_STATE(374)] = 4687,
  [SMALL_STATE(375)] = 4697,
  [SMALL_STATE(376)] = 4707,
  [SMALL_STATE(377)] = 4717,
  [SMALL_STATE(378)] = 4725,
  [SMALL_STATE(379)] = 4735,
  [SMALL_STATE(380)] = 4745,
  [SMALL_STATE(381)] = 4753,
  [SMALL_STATE(382)] = 4761,
  [SMALL_STATE(383)] = 4769,
  [SMALL_STATE(384)] = 4779,
  [SMALL_STATE(385)] = 4789,
  [SMALL_STATE(386)] = 4799,
  [SMALL_STATE(387)] = 4809,
  [SMALL_STATE(388)] = 4819,
  [SMALL_STATE(389)] = 4827,
  [SMALL_STATE(390)] = 4837,
  [SMALL_STATE(391)] = 4847,
  [SMALL_STATE(392)] = 4857,
  [SMALL_STATE(393)] = 4867,
  [SMALL_STATE(394)] = 4877,
  [SMALL_STATE(395)] = 4885,
  [SMALL_STATE(396)] = 4893,
  [SMALL_STATE(397)] = 4903,
  [SMALL_STATE(398)] = 4911,
  [SMALL_STATE(399)] = 4921,
  [SMALL_STATE(400)] = 4931,
  [SMALL_STATE(401)] = 4939,
  [SMALL_STATE(402)] = 4947,
  [SMALL_STATE(403)] = 4955,
  [SMALL_STATE(404)] = 4965,
  [SMALL_STATE(405)] = 4975,
  [SMALL_STATE(406)] = 4985,
  [SMALL_STATE(407)] = 4995,
  [SMALL_STATE(408)] = 5005,
  [SMALL_STATE(409)] = 5015,
  [SMALL_STATE(410)] = 5025,
  [SMALL_STATE(411)] = 5033,
  [SMALL_STATE(412)] = 5043,
  [SMALL_STATE(413)] = 5049,
  [SMALL_STATE(414)] = 5059,
  [SMALL_STATE(415)] = 5069,
  [SMALL_STATE(416)] = 5079,
  [SMALL_STATE(417)] = 5085,
  [SMALL_STATE(418)] = 5095,
  [SMALL_STATE(419)] = 5105,
  [SMALL_STATE(420)] = 5115,
  [SMALL_STATE(421)] = 5125,
  [SMALL_STATE(422)] = 5131,
  [SMALL_STATE(423)] = 5141,
  [SMALL_STATE(424)] = 5151,
  [SMALL_STATE(425)] = 5161,
  [SMALL_STATE(426)] = 5171,
  [SMALL_STATE(427)] = 5181,
  [SMALL_STATE(428)] = 5189,
  [SMALL_STATE(429)] = 5195,
  [SMALL_STATE(430)] = 5205,
  [SMALL_STATE(431)] = 5215,
  [SMALL_STATE(432)] = 5225,
  [SMALL_STATE(433)] = 5235,
  [SMALL_STATE(434)] = 5243,
  [SMALL_STATE(435)] = 5253,
  [SMALL_STATE(436)] = 5263,
  [SMALL_STATE(437)] = 5269,
  [SMALL_STATE(438)] = 5279,
  [SMALL_STATE(439)] = 5289,
  [SMALL_STATE(440)] = 5299,
  [SMALL_STATE(441)] = 5305,
  [SMALL_STATE(442)] = 5315,
  [SMALL_STATE(443)] = 5321,
  [SMALL_STATE(444)] = 5331,
  [SMALL_STATE(445)] = 5341,
  [SMALL_STATE(446)] = 5351,
  [SMALL_STATE(447)] = 5361,
  [SMALL_STATE(448)] = 5371,
  [SMALL_STATE(449)] = 5377,
  [SMALL_STATE(450)] = 5387,
  [SMALL_STATE(451)] = 5397,
  [SMALL_STATE(452)] = 5407,
  [SMALL_STATE(453)] = 5417,
  [SMALL_STATE(454)] = 5427,
  [SMALL_STATE(455)] = 5437,
  [SMALL_STATE(456)] = 5447,
  [SMALL_STATE(457)] = 5457,
  [SMALL_STATE(458)] = 5467,
  [SMALL_STATE(459)] = 5477,
  [SMALL_STATE(460)] = 5487,
  [SMALL_STATE(461)] = 5495,
  [SMALL_STATE(462)] = 5501,
  [SMALL_STATE(463)] = 5511,
  [SMALL_STATE(464)] = 5521,
  [SMALL_STATE(465)] = 5531,
  [SMALL_STATE(466)] = 5541,
  [SMALL_STATE(467)] = 5551,
  [SMALL_STATE(468)] = 5561,
  [SMALL_STATE(469)] = 5571,
  [SMALL_STATE(470)] = 5581,
  [SMALL_STATE(471)] = 5591,
  [SMALL_STATE(472)] = 5601,
  [SMALL_STATE(473)] = 5611,
  [SMALL_STATE(474)] = 5621,
  [SMALL_STATE(475)] = 5631,
  [SMALL_STATE(476)] = 5641,
  [SMALL_STATE(477)] = 5651,
  [SMALL_STATE(478)] = 5661,
  [SMALL_STATE(479)] = 5669,
  [SMALL_STATE(480)] = 5679,
  [SMALL_STATE(481)] = 5689,
  [SMALL_STATE(482)] = 5697,
  [SMALL_STATE(483)] = 5705,
  [SMALL_STATE(484)] = 5715,
  [SMALL_STATE(485)] = 5725,
  [SMALL_STATE(486)] = 5735,
  [SMALL_STATE(487)] = 5745,
  [SMALL_STATE(488)] = 5755,
  [SMALL_STATE(489)] = 5765,
  [SMALL_STATE(490)] = 5775,
  [SMALL_STATE(491)] = 5785,
  [SMALL_STATE(492)] = 5793,
  [SMALL_STATE(493)] = 5801,
  [SMALL_STATE(494)] = 5806,
  [SMALL_STATE(495)] = 5811,
  [SMALL_STATE(496)] = 5816,
  [SMALL_STATE(497)] = 5821,
  [SMALL_STATE(498)] = 5826,
  [SMALL_STATE(499)] = 5831,
  [SMALL_STATE(500)] = 5838,
  [SMALL_STATE(501)] = 5843,
  [SMALL_STATE(502)] = 5848,
  [SMALL_STATE(503)] = 5855,
  [SMALL_STATE(504)] = 5860,
  [SMALL_STATE(505)] = 5865,
  [SMALL_STATE(506)] = 5870,
  [SMALL_STATE(507)] = 5875,
  [SMALL_STATE(508)] = 5880,
  [SMALL_STATE(509)] = 5885,
  [SMALL_STATE(510)] = 5892,
  [SMALL_STATE(511)] = 5897,
  [SMALL_STATE(512)] = 5902,
  [SMALL_STATE(513)] = 5907,
  [SMALL_STATE(514)] = 5914,
  [SMALL_STATE(515)] = 5919,
  [SMALL_STATE(516)] = 5924,
  [SMALL_STATE(517)] = 5931,
  [SMALL_STATE(518)] = 5936,
  [SMALL_STATE(519)] = 5943,
  [SMALL_STATE(520)] = 5950,
  [SMALL_STATE(521)] = 5955,
  [SMALL_STATE(522)] = 5960,
  [SMALL_STATE(523)] = 5965,
  [SMALL_STATE(524)] = 5970,
  [SMALL_STATE(525)] = 5977,
  [SMALL_STATE(526)] = 5982,
  [SMALL_STATE(527)] = 5987,
  [SMALL_STATE(528)] = 5992,
  [SMALL_STATE(529)] = 5997,
  [SMALL_STATE(530)] = 6002,
  [SMALL_STATE(531)] = 6007,
  [SMALL_STATE(532)] = 6012,
  [SMALL_STATE(533)] = 6017,
  [SMALL_STATE(534)] = 6022,
  [SMALL_STATE(535)] = 6027,
  [SMALL_STATE(536)] = 6032,
  [SMALL_STATE(537)] = 6039,
  [SMALL_STATE(538)] = 6044,
  [SMALL_STATE(539)] = 6049,
  [SMALL_STATE(540)] = 6054,
  [SMALL_STATE(541)] = 6059,
  [SMALL_STATE(542)] = 6064,
  [SMALL_STATE(543)] = 6069,
  [SMALL_STATE(544)] = 6076,
  [SMALL_STATE(545)] = 6081,
  [SMALL_STATE(546)] = 6086,
  [SMALL_STATE(547)] = 6091,
  [SMALL_STATE(548)] = 6096,
  [SMALL_STATE(549)] = 6101,
  [SMALL_STATE(550)] = 6106,
  [SMALL_STATE(551)] = 6111,
  [SMALL_STATE(552)] = 6116,
  [SMALL_STATE(553)] = 6121,
  [SMALL_STATE(554)] = 6126,
  [SMALL_STATE(555)] = 6131,
  [SMALL_STATE(556)] = 6138,
  [SMALL_STATE(557)] = 6143,
  [SMALL_STATE(558)] = 6148,
  [SMALL_STATE(559)] = 6153,
  [SMALL_STATE(560)] = 6158,
  [SMALL_STATE(561)] = 6165,
  [SMALL_STATE(562)] = 6170,
  [SMALL_STATE(563)] = 6175,
  [SMALL_STATE(564)] = 6180,
  [SMALL_STATE(565)] = 6187,
  [SMALL_STATE(566)] = 6192,
  [SMALL_STATE(567)] = 6197,
  [SMALL_STATE(568)] = 6202,
  [SMALL_STATE(569)] = 6207,
  [SMALL_STATE(570)] = 6212,
  [SMALL_STATE(571)] = 6217,
  [SMALL_STATE(572)] = 6222,
  [SMALL_STATE(573)] = 6229,
  [SMALL_STATE(574)] = 6234,
  [SMALL_STATE(575)] = 6239,
  [SMALL_STATE(576)] = 6244,
  [SMALL_STATE(577)] = 6249,
  [SMALL_STATE(578)] = 6254,
  [SMALL_STATE(579)] = 6259,
  [SMALL_STATE(580)] = 6264,
  [SMALL_STATE(581)] = 6269,
  [SMALL_STATE(582)] = 6274,
  [SMALL_STATE(583)] = 6279,
  [SMALL_STATE(584)] = 6284,
  [SMALL_STATE(585)] = 6289,
  [SMALL_STATE(586)] = 6294,
  [SMALL_STATE(587)] = 6301,
  [SMALL_STATE(588)] = 6306,
  [SMALL_STATE(589)] = 6311,
  [SMALL_STATE(590)] = 6316,
  [SMALL_STATE(591)] = 6321,
  [SMALL_STATE(592)] = 6326,
  [SMALL_STATE(593)] = 6331,
  [SMALL_STATE(594)] = 6336,
  [SMALL_STATE(595)] = 6341,
  [SMALL_STATE(596)] = 6346,
  [SMALL_STATE(597)] = 6351,
  [SMALL_STATE(598)] = 6356,
  [SMALL_STATE(599)] = 6361,
  [SMALL_STATE(600)] = 6366,
  [SMALL_STATE(601)] = 6373,
  [SMALL_STATE(602)] = 6378,
  [SMALL_STATE(603)] = 6385,
  [SMALL_STATE(604)] = 6390,
  [SMALL_STATE(605)] = 6395,
  [SMALL_STATE(606)] = 6400,
  [SMALL_STATE(607)] = 6405,
  [SMALL_STATE(608)] = 6410,
  [SMALL_STATE(609)] = 6415,
  [SMALL_STATE(610)] = 6420,
  [SMALL_STATE(611)] = 6425,
  [SMALL_STATE(612)] = 6430,
  [SMALL_STATE(613)] = 6435,
  [SMALL_STATE(614)] = 6440,
  [SMALL_STATE(615)] = 6445,
  [SMALL_STATE(616)] = 6450,
  [SMALL_STATE(617)] = 6455,
  [SMALL_STATE(618)] = 6460,
  [SMALL_STATE(619)] = 6465,
  [SMALL_STATE(620)] = 6472,
  [SMALL_STATE(621)] = 6477,
  [SMALL_STATE(622)] = 6482,
  [SMALL_STATE(623)] = 6487,
  [SMALL_STATE(624)] = 6492,
  [SMALL_STATE(625)] = 6497,
  [SMALL_STATE(626)] = 6502,
  [SMALL_STATE(627)] = 6507,
  [SMALL_STATE(628)] = 6512,
  [SMALL_STATE(629)] = 6517,
  [SMALL_STATE(630)] = 6522,
  [SMALL_STATE(631)] = 6527,
  [SMALL_STATE(632)] = 6532,
  [SMALL_STATE(633)] = 6537,
  [SMALL_STATE(634)] = 6542,
  [SMALL_STATE(635)] = 6547,
  [SMALL_STATE(636)] = 6552,
  [SMALL_STATE(637)] = 6557,
  [SMALL_STATE(638)] = 6562,
  [SMALL_STATE(639)] = 6567,
  [SMALL_STATE(640)] = 6572,
  [SMALL_STATE(641)] = 6577,
  [SMALL_STATE(642)] = 6582,
  [SMALL_STATE(643)] = 6587,
  [SMALL_STATE(644)] = 6592,
  [SMALL_STATE(645)] = 6597,
  [SMALL_STATE(646)] = 6604,
  [SMALL_STATE(647)] = 6609,
  [SMALL_STATE(648)] = 6614,
  [SMALL_STATE(649)] = 6619,
  [SMALL_STATE(650)] = 6626,
  [SMALL_STATE(651)] = 6631,
  [SMALL_STATE(652)] = 6636,
  [SMALL_STATE(653)] = 6641,
  [SMALL_STATE(654)] = 6646,
  [SMALL_STATE(655)] = 6651,
  [SMALL_STATE(656)] = 6656,
  [SMALL_STATE(657)] = 6663,
  [SMALL_STATE(658)] = 6668,
  [SMALL_STATE(659)] = 6673,
  [SMALL_STATE(660)] = 6678,
  [SMALL_STATE(661)] = 6683,
  [SMALL_STATE(662)] = 6688,
  [SMALL_STATE(663)] = 6693,
  [SMALL_STATE(664)] = 6700,
  [SMALL_STATE(665)] = 6705,
  [SMALL_STATE(666)] = 6710,
  [SMALL_STATE(667)] = 6715,
  [SMALL_STATE(668)] = 6720,
  [SMALL_STATE(669)] = 6725,
  [SMALL_STATE(670)] = 6730,
  [SMALL_STATE(671)] = 6735,
  [SMALL_STATE(672)] = 6740,
  [SMALL_STATE(673)] = 6745,
  [SMALL_STATE(674)] = 6750,
  [SMALL_STATE(675)] = 6755,
  [SMALL_STATE(676)] = 6760,
  [SMALL_STATE(677)] = 6765,
  [SMALL_STATE(678)] = 6770,
  [SMALL_STATE(679)] = 6775,
  [SMALL_STATE(680)] = 6780,
  [SMALL_STATE(681)] = 6785,
  [SMALL_STATE(682)] = 6790,
  [SMALL_STATE(683)] = 6795,
  [SMALL_STATE(684)] = 6800,
  [SMALL_STATE(685)] = 6805,
  [SMALL_STATE(686)] = 6810,
  [SMALL_STATE(687)] = 6815,
  [SMALL_STATE(688)] = 6820,
  [SMALL_STATE(689)] = 6825,
  [SMALL_STATE(690)] = 6830,
  [SMALL_STATE(691)] = 6835,
  [SMALL_STATE(692)] = 6840,
  [SMALL_STATE(693)] = 6845,
  [SMALL_STATE(694)] = 6850,
  [SMALL_STATE(695)] = 6855,
  [SMALL_STATE(696)] = 6860,
  [SMALL_STATE(697)] = 6865,
  [SMALL_STATE(698)] = 6870,
  [SMALL_STATE(699)] = 6877,
  [SMALL_STATE(700)] = 6884,
  [SMALL_STATE(701)] = 6889,
  [SMALL_STATE(702)] = 6894,
  [SMALL_STATE(703)] = 6899,
  [SMALL_STATE(704)] = 6906,
  [SMALL_STATE(705)] = 6911,
  [SMALL_STATE(706)] = 6916,
  [SMALL_STATE(707)] = 6921,
  [SMALL_STATE(708)] = 6928,
  [SMALL_STATE(709)] = 6935,
  [SMALL_STATE(710)] = 6940,
  [SMALL_STATE(711)] = 6945,
  [SMALL_STATE(712)] = 6952,
  [SMALL_STATE(713)] = 6957,
  [SMALL_STATE(714)] = 6964,
  [SMALL_STATE(715)] = 6971,
  [SMALL_STATE(716)] = 6976,
  [SMALL_STATE(717)] = 6981,
  [SMALL_STATE(718)] = 6986,
  [SMALL_STATE(719)] = 6991,
  [SMALL_STATE(720)] = 6996,
  [SMALL_STATE(721)] = 7001,
  [SMALL_STATE(722)] = 7006,
  [SMALL_STATE(723)] = 7011,
  [SMALL_STATE(724)] = 7016,
  [SMALL_STATE(725)] = 7021,
  [SMALL_STATE(726)] = 7026,
  [SMALL_STATE(727)] = 7031,
  [SMALL_STATE(728)] = 7036,
  [SMALL_STATE(729)] = 7041,
  [SMALL_STATE(730)] = 7046,
  [SMALL_STATE(731)] = 7051,
  [SMALL_STATE(732)] = 7056,
  [SMALL_STATE(733)] = 7063,
  [SMALL_STATE(734)] = 7068,
  [SMALL_STATE(735)] = 7073,
  [SMALL_STATE(736)] = 7078,
  [SMALL_STATE(737)] = 7083,
  [SMALL_STATE(738)] = 7088,
  [SMALL_STATE(739)] = 7093,
  [SMALL_STATE(740)] = 7098,
  [SMALL_STATE(741)] = 7103,
  [SMALL_STATE(742)] = 7108,
  [SMALL_STATE(743)] = 7113,
  [SMALL_STATE(744)] = 7118,
  [SMALL_STATE(745)] = 7123,
  [SMALL_STATE(746)] = 7128,
  [SMALL_STATE(747)] = 7133,
  [SMALL_STATE(748)] = 7138,
  [SMALL_STATE(749)] = 7143,
  [SMALL_STATE(750)] = 7148,
  [SMALL_STATE(751)] = 7153,
  [SMALL_STATE(752)] = 7158,
  [SMALL_STATE(753)] = 7163,
  [SMALL_STATE(754)] = 7168,
  [SMALL_STATE(755)] = 7173,
  [SMALL_STATE(756)] = 7178,
  [SMALL_STATE(757)] = 7185,
  [SMALL_STATE(758)] = 7190,
  [SMALL_STATE(759)] = 7197,
  [SMALL_STATE(760)] = 7202,
  [SMALL_STATE(761)] = 7207,
  [SMALL_STATE(762)] = 7212,
  [SMALL_STATE(763)] = 7217,
  [SMALL_STATE(764)] = 7222,
  [SMALL_STATE(765)] = 7227,
  [SMALL_STATE(766)] = 7231,
  [SMALL_STATE(767)] = 7235,
  [SMALL_STATE(768)] = 7239,
  [SMALL_STATE(769)] = 7243,
  [SMALL_STATE(770)] = 7247,
  [SMALL_STATE(771)] = 7251,
  [SMALL_STATE(772)] = 7255,
  [SMALL_STATE(773)] = 7259,
  [SMALL_STATE(774)] = 7263,
  [SMALL_STATE(775)] = 7267,
  [SMALL_STATE(776)] = 7271,
  [SMALL_STATE(777)] = 7275,
  [SMALL_STATE(778)] = 7279,
  [SMALL_STATE(779)] = 7283,
  [SMALL_STATE(780)] = 7287,
  [SMALL_STATE(781)] = 7291,
  [SMALL_STATE(782)] = 7295,
  [SMALL_STATE(783)] = 7299,
  [SMALL_STATE(784)] = 7303,
  [SMALL_STATE(785)] = 7307,
  [SMALL_STATE(786)] = 7311,
  [SMALL_STATE(787)] = 7315,
  [SMALL_STATE(788)] = 7319,
  [SMALL_STATE(789)] = 7323,
  [SMALL_STATE(790)] = 7327,
  [SMALL_STATE(791)] = 7331,
  [SMALL_STATE(792)] = 7335,
  [SMALL_STATE(793)] = 7339,
  [SMALL_STATE(794)] = 7343,
  [SMALL_STATE(795)] = 7347,
  [SMALL_STATE(796)] = 7351,
  [SMALL_STATE(797)] = 7355,
  [SMALL_STATE(798)] = 7359,
  [SMALL_STATE(799)] = 7363,
  [SMALL_STATE(800)] = 7367,
  [SMALL_STATE(801)] = 7371,
  [SMALL_STATE(802)] = 7375,
  [SMALL_STATE(803)] = 7379,
  [SMALL_STATE(804)] = 7383,
  [SMALL_STATE(805)] = 7387,
  [SMALL_STATE(806)] = 7391,
  [SMALL_STATE(807)] = 7395,
  [SMALL_STATE(808)] = 7399,
  [SMALL_STATE(809)] = 7403,
  [SMALL_STATE(810)] = 7407,
  [SMALL_STATE(811)] = 7411,
  [SMALL_STATE(812)] = 7415,
  [SMALL_STATE(813)] = 7419,
  [SMALL_STATE(814)] = 7423,
  [SMALL_STATE(815)] = 7427,
  [SMALL_STATE(816)] = 7431,
  [SMALL_STATE(817)] = 7435,
  [SMALL_STATE(818)] = 7439,
  [SMALL_STATE(819)] = 7443,
  [SMALL_STATE(820)] = 7447,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(405),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(280),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(281),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(283),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(287),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(289),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(292),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(299),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(307),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(308),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(310),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(311),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(313),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(314),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(316),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(322),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(326),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(329),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(330),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(342),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(348),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(350),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(355),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(357),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(359),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(360),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(361),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(363),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(365),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(366),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(371),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(372),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(373),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(374),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(376),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(379),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(384),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(385),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(386),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(387),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(389),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(391),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(392),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(398),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(399),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(403),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(404),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(475),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(409),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(411),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(415),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(417),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(419),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(422),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(424),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(425),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(426),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(429),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(431),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(432),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(434),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(435),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(437),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(441),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(443),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(444),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(446),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(447),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(449),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(452),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(453),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(454),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(458),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(464),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(465),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(466),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(792),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(6),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(280),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(281),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(283),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(287),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(289),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(290),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(291),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(292),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(296),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(299),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(307),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(308),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(310),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(311),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(313),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(314),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(316),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(322),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(325),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(326),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(329),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(330),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(336),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(341),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(342),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(346),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(347),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(348),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(349),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(350),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(352),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(354),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(355),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(357),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(358),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(359),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(360),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(361),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(363),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(365),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(366),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(371),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(372),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(373),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(374),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(376),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(378),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(379),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(383),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(384),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(385),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(386),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(387),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(389),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(391),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(392),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(393),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(396),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(398),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(399),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(403),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(404),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(475),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(409),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(411),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(415),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(417),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(419),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(420),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(422),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(424),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(425),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(426),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(429),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(431),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(432),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(434),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(435),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(437),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(441),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(443),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(444),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(446),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(447),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(449),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(452),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(453),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(454),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(458),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(464),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(465),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(466),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(586),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(18),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 26),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 26),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 7, .production_id = 16),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 7, .production_id = 16),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 28),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 28),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, .production_id = 16),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, .production_id = 16),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 28),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 28),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 15),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 15),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 64),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 64),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 64),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 64),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 26),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 26),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, .production_id = 16),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, .production_id = 16),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(93),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(93),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(791),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 9),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(132),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(132),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(819),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, .production_id = 9),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hosts_string, 1, .production_id = 14),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 14),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(166),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(166),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(817),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(172),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(172),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(818),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 59),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(165),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(165),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(816),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 14),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote_command, 3, .production_id = 24),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, .production_id = 24),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 3, .production_id = 71),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(268),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(268),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(820),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1084] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(125),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2),
  [1089] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(125),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 9),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 45),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 45),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, .production_id = 34),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, .production_id = 34),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, .production_id = 33),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, .production_id = 25),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, .production_id = 38),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(154),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(154),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proxy_string, 1, .production_id = 14),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 14),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 3, .production_id = 71),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2), SHIFT_REPEAT(174),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(178),
  [1190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(178),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2),
  [1195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(152),
  [1198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(152),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 14),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(186),
  [1210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(186),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1), REDUCE(aux_sym__string_repeat1, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2),
  [1236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(148),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(148),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(220),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(220),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [1252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(203),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(203),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(262),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(262),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2),
  [1292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(381),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(381),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(163),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(491),
  [1336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(491),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token_string, 1, .production_id = 14),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 14),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(177),
  [1358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(177),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, .production_id = 39),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, .production_id = 34),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 15),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 15),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 15),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 22),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 28),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 44),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 41),
  [1421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(809),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 41),
  [1430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(805),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 41),
  [1437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(802),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 41),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 28),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 41),
  [1454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(800),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 28),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 28),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 15),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 54), SHIFT_REPEAT(160),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 54),
  [1474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(317),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 41),
  [1481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(108),
  [1484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(798),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(796),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 15),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 15),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 41),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 15),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 31),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 9),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 28),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 15),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, .production_id = 60),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1, .production_id = 14),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 61),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 62),
  [1532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1), REDUCE(aux_sym__string_repeat2, 1),
  [1535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1), REDUCE(aux_sym__string_repeat2, 1),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, .production_id = 10),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 59),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, .production_id = 10),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2), SHIFT_REPEAT(161),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 28),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, .production_id = 66),
  [1575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2), SHIFT_REPEAT(714),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 67),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 28),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 28),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(602),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 3),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2),
  [1759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2), SHIFT_REPEAT(770),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2),
  [1770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2), SHIFT_REPEAT(155),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 15),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 68),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 17),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 3, .production_id = 19),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 54),
  [1907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 54), SHIFT_REPEAT(142),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 15),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [1966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 15),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [2006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [2026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [2052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 36), SHIFT_REPEAT(52),
  [2055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 36),
  [2057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 36), SHIFT_REPEAT(572),
  [2060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 36),
  [2062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 36), SHIFT_REPEAT(118),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 36),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 41),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [2079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 57), SHIFT_REPEAT(126),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 57),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [2092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 23),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 53),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [2126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 15),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [2136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(102),
  [2139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [2165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 36), SHIFT_REPEAT(263),
  [2168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 36),
  [2170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 49), SHIFT_REPEAT(51),
  [2173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 49),
  [2175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value_inner, 3, .production_id = 47),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, .production_id = 15),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [2205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(130),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, .production_id = 15),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [2224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 43), SHIFT_REPEAT(80),
  [2227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 43),
  [2229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 36), SHIFT_REPEAT(128),
  [2232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 36),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2),
  [2240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2), SHIFT_REPEAT(500),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, .production_id = 15),
  [2247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 40),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, .production_id = 15),
  [2253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2), SHIFT_REPEAT(39),
  [2256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [2268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [2270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 36), SHIFT_REPEAT(89),
  [2273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 36),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, .production_id = 26),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, .production_id = 26),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, .production_id = 26),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [2299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 32),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [2307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [2309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 26),
  [2321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 26),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 4, .production_id = 29),
  [2327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 27),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [2333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 28),
  [2335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [2343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 15),
  [2345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [2347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 1),
  [2349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [2351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 30),
  [2359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 11),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 12),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [2373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [2379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 35),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, .production_id = 37),
  [2387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, .production_id = 10),
  [2389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, .production_id = 10),
  [2391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [2393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, .production_id = 39),
  [2395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, .production_id = 39),
  [2397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, .production_id = 39),
  [2399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, .production_id = 39),
  [2401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [2403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, .production_id = 15),
  [2405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, .production_id = 15),
  [2407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, .production_id = 15),
  [2409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, .production_id = 15),
  [2411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 41),
  [2413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, .production_id = 15),
  [2415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, .production_id = 15),
  [2417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 35),
  [2419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, .production_id = 15),
  [2421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 42),
  [2423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, .production_id = 15),
  [2425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, .production_id = 15),
  [2427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, .production_id = 15),
  [2429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, .production_id = 15),
  [2431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, .production_id = 15),
  [2433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, .production_id = 15),
  [2435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, .production_id = 15),
  [2437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 34),
  [2439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, .production_id = 15),
  [2441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 15),
  [2443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 3, .production_id = 46),
  [2445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 21),
  [2447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 48),
  [2449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, .production_id = 15),
  [2451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 35),
  [2453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, .production_id = 15),
  [2455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, .production_id = 15),
  [2457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 3, .production_id = 19),
  [2461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 40),
  [2463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [2465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, .production_id = 15),
  [2467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 40),
  [2469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, .production_id = 15),
  [2471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 50),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [2475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, .production_id = 46),
  [2479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, .production_id = 18),
  [2481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 51),
  [2483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 52),
  [2485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 8),
  [2487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 15),
  [2489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 15),
  [2491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 15),
  [2493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 5, .production_id = 71),
  [2495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [2497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 15),
  [2499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 55),
  [2501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 56),
  [2503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 15),
  [2505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 15),
  [2507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 15),
  [2509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 68),
  [2511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, .production_id = 50),
  [2513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, .production_id = 51),
  [2515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 35),
  [2517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 15),
  [2519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, .production_id = 25),
  [2521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 35),
  [2523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, .production_id = 41),
  [2525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 35),
  [2527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 20),
  [2529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, .production_id = 13),
  [2531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 18),
  [2533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 58),
  [2535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 15),
  [2537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [2539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 15),
  [2543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 15),
  [2545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 15),
  [2547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 15),
  [2551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 15),
  [2553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 21),
  [2555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 15),
  [2557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 15),
  [2559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 15),
  [2561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [2565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 15),
  [2567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [2571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [2573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 15),
  [2575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, .production_id = 72),
  [2579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 15),
  [2581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 15),
  [2583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 15),
  [2585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 15),
  [2587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 15),
  [2589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 15),
  [2591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 53),
  [2593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 63),
  [2595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 21),
  [2597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 15),
  [2599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 15),
  [2601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 15),
  [2603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 15),
  [2605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 15),
  [2607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 15),
  [2609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 15),
  [2611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 34),
  [2613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 15),
  [2615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, .production_id = 20),
  [2617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, .production_id = 18),
  [2619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 34),
  [2621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 15),
  [2623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 15),
  [2625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 15),
  [2627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 15),
  [2629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 15),
  [2631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, .production_id = 65),
  [2633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 15),
  [2635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 15),
  [2637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 15),
  [2639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 15),
  [2641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 15),
  [2643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 71),
  [2645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 15),
  [2647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 15),
  [2649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 15),
  [2651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 15),
  [2653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, .production_id = 46),
  [2655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 70),
  [2657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 16),
  [2659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 69),
  [2661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [2691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [2707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2709] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [2717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [2755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ssh_config(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
