#ifndef PQCLEAN_KYBER768_AARCH64_API_H
#define PQCLEAN_KYBER768_AARCH64_API_H

#include <stdint.h>
#include <stdbool.h>


#define PQCLEAN_KYBER768_AARCH64_CRYPTO_SECRETKEYBYTES  2400
#define PQCLEAN_KYBER768_AARCH64_CRYPTO_PUBLICKEYBYTES  1184
#define PQCLEAN_KYBER768_AARCH64_CRYPTO_CIPHERTEXTBYTES 1088
#define PQCLEAN_KYBER768_AARCH64_CRYPTO_BYTES           32
#define PQCLEAN_KYBER768_AARCH64_CRYPTO_ALGNAME "Kyber768"

int PQCLEAN_KYBER768_AARCH64_crypto_kem_keypair(uint8_t *pk, uint8_t *sk);
int PQCLEAN_KYBER768_AARCH64_crypto_kem_keypair_with_recovery(uint8_t *seed, bool recovery,uint8_t *pk, uint8_t *sk);

int PQCLEAN_KYBER768_AARCH64_crypto_kem_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);

int PQCLEAN_KYBER768_AARCH64_crypto_kem_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);

#endif
