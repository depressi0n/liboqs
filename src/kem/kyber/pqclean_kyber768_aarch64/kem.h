#ifndef KEM_H
#define KEM_H

#include "params.h"
#include <stdint.h>
#include <stdbool.h>

#define CRYPTO_SECRETKEYBYTES  KYBER_SECRETKEYBYTES
#define CRYPTO_PUBLICKEYBYTES  KYBER_PUBLICKEYBYTES
#define CRYPTO_CIPHERTEXTBYTES KYBER_CIPHERTEXTBYTES
#define CRYPTO_BYTES           KYBER_SSBYTES

#define CRYPTO_ALGNAME "Kyber768"

int PQCLEAN_KYBER768_AARCH64_crypto_kem_keypair(uint8_t *pk, uint8_t *sk);
int PQCLEAN_KYBER768_AARCH64_crypto_kem_keypair_with_recovery(uint8_t *seed, bool recovery,uint8_t *pk, uint8_t *sk);

int PQCLEAN_KYBER768_AARCH64_crypto_kem_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);

int PQCLEAN_KYBER768_AARCH64_crypto_kem_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);

#endif
