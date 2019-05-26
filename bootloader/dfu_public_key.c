/* This file was automatically generated by nrfutil on 2019-01-10 (YY-MM-DD) at 14:41:56 */

#include "sdk_config.h"
#include "stdint.h"
#include "compiler_abstraction.h"

#if NRF_CRYPTO_BACKEND_OBERON_ENABLED
/* Oberon backend is changing endianness thus public key must be kept in RAM. */
#define _PK_CONST
#else
#define _PK_CONST const
#endif


/** @brief Public key used to verify DFU images */
__ALIGN(4) _PK_CONST uint8_t pk[64] =
{
    0x43, 0x4b, 0xef, 0x85, 0xcc, 0xbe, 0xe3, 0x18, 0x65, 0x24, 0x71, 0x84, 0x97, 0x2f, 0x32, 0x76, 0xe6, 0x90, 0x2d, 0xdf, 0xa2, 0x05, 0xda, 0xa0, 0x70, 0x8f, 0xe6, 0xd0, 0x19, 0x43, 0x5c, 0x17, 
    0x91, 0x4d, 0xe8, 0x60, 0x68, 0xd0, 0x97, 0xab, 0x5c, 0x86, 0x17, 0xdb, 0xfb, 0x99, 0xa2, 0xf9, 0xed, 0x65, 0x33, 0xb7, 0x3c, 0x91, 0xe9, 0xc0, 0xa3, 0xb9, 0x05, 0xb5, 0x66, 0x9a, 0x38, 0x2f
};