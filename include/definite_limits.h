/* Copyright (c) 2019 Fabian Schneider */
/* See LICENSE for licensing information */

/* This file provides limits for the well defined types that have guaranteed sizes */

#ifndef DEFINITE_LIMITS_H
#define DEFINITE_LIMITS_H

#include <stdint.h>

/* Unsigned integers */

/* Maximum value of an unsigned 8-bit integer (2^8 - 1) */
extern const uint8_t MAX_U8;
const uint8_t MAX_U8 = (uint8_t) 0xff;

/* Maximum value of an unsigned 16-bit integer (2^16 - 1) */
extern const uint16_t MAX_U16;
const uint16_t MAX_U16 = (uint16_t) 0xffff;

/* Maximum value of an unsigned 32-bit integer (2^32 - 1) */
extern const uint32_t MAX_U32;
const uint32_t MAX_U32 = (uint32_t) 0xffffffff;

/* Maximum value of an unsigned 64-bit integer (2^64 - 1) */
extern const uint64_t MAX_U64;
const uint64_t MAX_U64 = (uint64_t) 0xffffffffffffffff;

/* Signed integers */

/* Maximum value of a signed 8-bit integer (2^(8 - 1)) */
extern const int8_t MAX_I8;
const int8_t MAX_I8 = (int8_t) 128;
extern const int8_t MIN_I8;
const int8_t MIN_I8 = (int8_t) -MAX_I8;

/* Maximum value of a signed 16-bit integer (2^(16 - 1)) */
extern const int16_t MAX_I16;
const int16_t MAX_I16 = (int16_t) 32768;
extern const int16_t MIN_I16;
const int16_t MIN_I16 = (int16_t) -MAX_I16;

/* Maximum value of a signed 32-bit integer (2^(32 - 1)) */
extern const int32_t MAX_I32;
const int32_t MAX_I32 = (int32_t) 2147483647;
extern const int32_t MIN_I32;
const int32_t MIN_I32 = (int32_t) -MAX_I32;

/* Maximum value of a signed 64-bit integer (2^(64 - 1)) */
extern const int64_t MAX_I64;
const int64_t MAX_I64 = (int64_t) 9223372036854775807;
extern const int64_t MAX_I64;
const int64_t MIN_I64 = (int64_t) -MAX_I64;

#endif /* DEFINITE_LIMITS_H */
