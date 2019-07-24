/* Copyright (c) 2019 Nequ4tion */
/* See LICENSE for licensing information */

/* This file provides limits for the well defined types that have guaranteed sizes */

#include <stdint.h>

/* Unsigned integers */

/* Maximum value of an unsigned 8-bit integer (2^8 - 1) */
const uint8_t MAX_U8 = (uint8_t) 255;

/* Maximum value of an unsigned 16-bit integer (2^16 - 1) */
const uint16_t MAX_U16 = (uint16_t) 65535;

/* Maximum value of an unsigned 32-bit integer (2^32 - 1) */
const uint32_t MAX_U32 = (uint32_t) 4294967295;

/* Maximum value of an unsigned 64-bit integer (2^64 - 1) */
const uint64_t MAX_U64 = (uint64_t) 18446744073709551615;

/* Signed integers */

/* Maximum value of a signed 8-bit integer (2^(8 - 1)) */
const int8_t MAX_I8 = (int8_t) 128;
const int8_t MIN_I8 = -MAX_I8;

/* Maximum value of a signed 16-bit integer (2^(16 - 1)) */
const int16_t MAX_I16 = (int16_t) 32768;
const int16_t MIN_I16 = -MAX_I16;

/* Maximum value of a signed 32-bit integer (2^(32 - 1)) */
const int32_t MAX_I32 = (int32_t) 2147483648;
const int32_t MIN_I32 = -MAX_I32;

/* Maximum value of a signed 64-bit integer (2^(64 - 1)) */
const int64_t MAX_I64 = (int64_t) 9223372036854775808;
const int64_t MIN_I64 = -MAX_I64;
