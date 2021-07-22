// clang-format off
#define MBEDTLS_ERR_SSL_WANT_READ                         -0x6900  // No data of requested type currently available on underlying transport.
#define MBEDTLS_ERR_SSL_WANT_WRITE                        -0x6880  /**< Connection requires a write call. */
#define MBEDTLS_ERR_SSL_TIMEOUT                           -0x6800  /**< The operation timed out. */
#define MBEDTLS_ERR_SSL_CLIENT_RECONNECT                  -0x6780  /**< The client initiated a reconnect from the same port. */
#define MBEDTLS_ERR_SSL_UNEXPECTED_RECORD                 -0x6700  /**< Record header looks valid but is not expected. */
// clang-format on

int variable_with_long_long_long_long_long_long_long_long_name0 =
    123120312031; // comment

int variable_with_long_long_long_long_long_long_long_long_name1 =
    123120312031; // comment_long_long_long

int variable_with_long_long_long_long =
    123120312031; // comment LONG_LONG_LONG_LONG_LONG
                  // LONG_LONG_LONG_LONG_LONG_LONG_LONG

/ return MBEDTLS_ERR_X509_INVALID_DATE;
return (int)buffer_size;

/ return "THREADING - Locking / unlocking / free failed with error code";

return (input_len == 0) ? 0 : -1;

return\s ?\(\s *\n ? (.*)\n ?\);

#sed - i - E "s/return\s?\(\s*\n?(.*)\n?\);/return \1;/" library/*.c




sizeof ([^\(][a-zA-Z0-9_\[\]]*);

sed -i -E "s/sizeof ([^\(][a-zA-Z0-9_\[\]]*)/sizeof\(\1\)/" library/*.c tests/*.c


