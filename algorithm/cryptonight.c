// Copyright (c) 2012-2013 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

// Modified for CPUminer by Lucas Jones

#include "cpuminer-config.h"
#include "miner.h"

static void do_blake_hash(const void* input, size_t len, char* output) {
}

void do_groestl_hash(const void* input, size_t len, char* output) {
}

static void do_jh_hash(const void* input, size_t len, char* output) {
}

static void do_skein_hash(const void* input, size_t len, char* output) {
}

extern int fast_aesb_single_round(const uint8_t *in, uint8_t*out, const uint8_t *expandedKey);
extern int aesb_single_round(const uint8_t *in, uint8_t*out, const uint8_t *expandedKey);
extern int aesb_pseudo_round_mut(uint8_t *val, uint8_t *expandedKey);
extern int fast_aesb_pseudo_round_mut(uint8_t *val, uint8_t *expandedKey);

static void (* const extra_hashes[4])(const void *, size_t, char *) = {
};

static inline size_t e2i(const uint8_t* a) {
}

static inline void mul_sum_xor_dst(const uint8_t* a, uint8_t* c, uint8_t* dst) {
}

static inline void xor_blocks(uint8_t* a, const uint8_t* b) {
}

static inline void xor_blocks_dst(const uint8_t* a, const uint8_t* b, uint8_t* dst) {
}

void cryptonight_hash_ctx(void* output, const void* input, size_t len, struct cryptonight_ctx* ctx) {
}

void cryptonight_hash(void* output, const void* input, size_t len) {
}

void cryptonight_hash_ctx_aes_ni(void* output, const void* input, size_t len, struct cryptonight_ctx* ctx) {
}

int scanhash_cryptonight(int thr_id, uint32_t *pdata, const uint32_t *ptarget){
}
