/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Thu Dec  6 15:21:24 2018. */

#include "exchange.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t ExchangeAddress_fields[5] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, ExchangeAddress, coin_type, coin_type, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, ExchangeAddress, address, coin_type, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, STATIC  , OTHER, ExchangeAddress, dest_tag, address, 0),
    PB_FIELD(  4, STRING  , OPTIONAL, STATIC  , OTHER, ExchangeAddress, rs_address, dest_tag, 0),
    PB_LAST_FIELD
};

const pb_field_t ExchangeResponseV2_fields[11] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, ExchangeResponseV2, deposit_address, deposit_address, &ExchangeAddress_fields),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, deposit_amount, deposit_address, 0),
    PB_FIELD(  3, INT64   , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, expiration, deposit_amount, 0),
    PB_FIELD(  4, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, quoted_rate, expiration, 0),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, withdrawal_address, quoted_rate, &ExchangeAddress_fields),
    PB_FIELD(  6, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, withdrawal_amount, withdrawal_address, 0),
    PB_FIELD(  7, MESSAGE , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, return_address, withdrawal_amount, &ExchangeAddress_fields),
    PB_FIELD(  8, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, api_key, return_address, 0),
    PB_FIELD(  9, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, miner_fee, api_key, 0),
    PB_FIELD( 10, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponseV2, order_id, miner_fee, 0),
    PB_LAST_FIELD
};

const pb_field_t SignedExchangeResponse_fields[4] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, SignedExchangeResponse, response, response, &ExchangeResponse_fields),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, SignedExchangeResponse, signature, response, 0),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, SignedExchangeResponse, responseV2, signature, &ExchangeResponseV2_fields),
    PB_LAST_FIELD
};

const pb_field_t ExchangeResponse_fields[11] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, ExchangeResponse, deposit_address, deposit_address, &ExchangeAddress_fields),
    PB_FIELD(  2, UINT64  , OPTIONAL, STATIC  , OTHER, ExchangeResponse, deposit_amount, deposit_address, 0),
    PB_FIELD(  3, INT64   , OPTIONAL, STATIC  , OTHER, ExchangeResponse, expiration, deposit_amount, 0),
    PB_FIELD(  4, UINT64  , OPTIONAL, STATIC  , OTHER, ExchangeResponse, quoted_rate, expiration, 0),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, ExchangeResponse, withdrawal_address, quoted_rate, &ExchangeAddress_fields),
    PB_FIELD(  6, UINT64  , OPTIONAL, STATIC  , OTHER, ExchangeResponse, withdrawal_amount, withdrawal_address, 0),
    PB_FIELD(  7, MESSAGE , OPTIONAL, STATIC  , OTHER, ExchangeResponse, return_address, withdrawal_amount, &ExchangeAddress_fields),
    PB_FIELD(  8, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponse, api_key, return_address, 0),
    PB_FIELD(  9, UINT64  , OPTIONAL, STATIC  , OTHER, ExchangeResponse, miner_fee, api_key, 0),
    PB_FIELD( 10, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponse, order_id, miner_fee, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(ExchangeResponseV2, deposit_address) < 65536 && pb_membersize(ExchangeResponseV2, withdrawal_address) < 65536 && pb_membersize(ExchangeResponseV2, return_address) < 65536 && pb_membersize(SignedExchangeResponse, response) < 65536 && pb_membersize(SignedExchangeResponse, responseV2) < 65536 && pb_membersize(ExchangeResponse, deposit_address) < 65536 && pb_membersize(ExchangeResponse, withdrawal_address) < 65536 && pb_membersize(ExchangeResponse, return_address) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_ExchangeAddress_ExchangeResponseV2_SignedExchangeResponse_ExchangeResponse)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(ExchangeResponseV2, deposit_address) < 256 && pb_membersize(ExchangeResponseV2, withdrawal_address) < 256 && pb_membersize(ExchangeResponseV2, return_address) < 256 && pb_membersize(SignedExchangeResponse, response) < 256 && pb_membersize(SignedExchangeResponse, responseV2) < 256 && pb_membersize(ExchangeResponse, deposit_address) < 256 && pb_membersize(ExchangeResponse, withdrawal_address) < 256 && pb_membersize(ExchangeResponse, return_address) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_ExchangeAddress_ExchangeResponseV2_SignedExchangeResponse_ExchangeResponse)
#endif


/* @@protoc_insertion_point(eof) */
