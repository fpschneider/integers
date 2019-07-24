/* Copyright (c) 2019 Nequ4tion */
/* See LICENSE for licensing information */

#include "definite_limits.h"

/* Proof for ADD_WOULD_WRAP_AROUND macros:
 * Let x, y, MAX_Un be in the set of positive integers including 0.
 * The statement to be proven is: 
 * (x > MAX_Un - y) implies (x + y > MAX_Un). (Meaning that the addition of x and y is bigger than the biggest n-bit unsigned integer)
 * Rearranging the inequivalence relation x > MAX_Un - y by adding y to both sides
 * we arrive at x + y > MAX_Un.
 * Q.E.D.
 */

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
#define ADD_WOULD_WRAP_AROUND_U8 (x, y) (x > MAX_U8 - y)

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
#define ADD_WOULD_WRAP_AROUND_U16 (x, y) (x > MAX_U16 - y)

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
#define ADD_WOULD_WRAP_AROUND_U32 (x, y) (x > MAX_U32 - y)

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
#define ADD_WOULD_WRAP_AROUND_U64 (x, y) (x > MAX_U64 - y)

/* Proof for the ADD_WOULD_OVERFLOW macros:
 * Let x, y, MIN_In, MAX_In be integers.
 * The statement to be proven is:
 * (y < 0) and (x < MIN_In - y) or (y > 0) and (x > MAX_In - y) implies (y + x < MIN_In) or (y + x > MAX_In).
 * The right half of the or-statement is proven by the proof for the ADD_WOULD_WRAP_AROUND macros.
 * 
 * Therefore only the left half of the statement will be analyzed which is:
 * (y < 0) and (x < MIN_In - y) implies (y + x < MIN_In).
 * Rearranging x < MIN_In - y by adding y to both sides we arrive at x + y < MIN_In.
 * Q.E.D.
 */

/* returns non-zero if the result of the addition of x and y would overflow */
#define ADD_WOULD_OVERFLOW_I8 (x, y) ((y < 0) && (x < MIN_I8 - y)) || ((y > 0) && (x > MAX_I8 - y))

/* returns non-zero if the result of the addition of x and y would overflow */
#define ADD_WOULD_OVERFLOW_I16 (x, y) ((y < 0) && (x < MIN_I16 - y)) || ((y > 0) && (x > MAX_I16 - y))

/* returns non-zero if the result of the addition of x and y would overflow */
#define ADD_WOULD_OVERFLOW_I32 (x, y) ((y < 0) && (x < MIN_I32 - y)) || ((y > 0) && (x > MAX_I32 - y))

/* returns non-zero if the result of the addition of x and y would overflow */
#define ADD_WOULD_OVERFLOW_I64 (x, y) ((y < 0) && (x < MIN_I64 - y)) || ((y > 0) && (x > MAX_I64 - y))


