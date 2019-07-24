/* Copyright (c) 2019 Nequ4tion */
/* See LICENSE for licensing information */

#include "definite_limits.h"

/* Proof for ADD_WOULD_WRAP_AROUND macros:
 * Let x, y, MAX_Un be in the set of non-negative integers.
 * The statement to be proven is: 
 * (x > MAX_Un - y) implies (x + y > MAX_Un). (Meaning that the addition of x and y is bigger than the biggest n-bit unsigned integer)
 * Rearranging the inequivalence relation x > MAX_Un - y by adding y to both sides
 * we arrive at x + y > MAX_Un.
 * Q.E.D.
 */

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
extern inline int ADD_WOULD_WRAP_AROUND_U8(x, y)
 uint8_t x;
 uint8_t y; 
{ return (x > MAX_U8 - y); }

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
extern inline int ADD_WOULD_WRAP_AROUND_U16(x, y)
 uint16_t x;
 uint16_t y;
{ return  (x > MAX_U16 - y); }

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
extern inline int ADD_WOULD_WRAP_AROUND_U32(x, y)
 uint32_t x;
 uint32_t y;
{ return (x > MAX_U32 - y); }

/* returns non-zero if the result of the addition of x and y would wrap around (see modulo arithmetic) */
extern inline int ADD_WOULD_WRAP_AROUND_U64(x, y)
 uint64_t x;
 uint64_t y;
{ return (x > MAX_U64 - y); }

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
extern inline int ADD_WOULD_OVERFLOW_I8 (x, y)
 int8_t x;
 int8_t y;
{ return ((y < 0) && (x < MIN_I8 - y)) || ((y > 0) && (x > MAX_I8 - y)); }

/* returns non-zero if the result of the addition of x and y would overflow */
extern inline int ADD_WOULD_OVERFLOW_I16 (x, y)
 int16_t x;
 int16_t y;
{ return ((y < 0) && (x < MIN_I16 - y)) || ((y > 0) && (x > MAX_I16 - y)); }

/* returns non-zero if the result of the addition of x and y would overflow */
extern inline int ADD_WOULD_OVERFLOW_I32 (x, y)
 int32_t x;
 int32_t y;
{ return ((y < 0) && (x < MIN_I32 - y)) || ((y > 0) && (x > MAX_I32 - y)); }

/* returns non-zero if the result of the addition of x and y would overflow */
extern inline int ADD_WOULD_OVERFLOW_I64 (x, y)
 int64_t x;
 int64_t y;
{ return ((y < 0) && (x < MIN_I64 - y)) || ((y > 0) && (x > MAX_I64 - y)); }


/* Proof for MUL_WOULD_WRAP_AROUND macros:
 * Let x, y, MAX_Un be non-negative integers.
 * The statement (x > MAX_Un / y) implies x * y > MAX_Un has to be proven.
 * By multiplying both sides with y we arrive at x * y > MAX_Un.
 * Q.E.D.
 */

/* returns non-zero if the result of the multiplication of x and y would wrap around (see modulo arithmetic) */
extern inline int MUL_WOULD_WRAP_AROUND_U8 (x, y)
 uint8_t x;
 uint8_t y;
{ return (x > MAX_U8 / y); }

/* returns non-zero if the result of the multiplication of x and y would wrap around (see modulo arithmetic) */
extern inline int MUL_WOULD_WRAP_AROUND_U16 (x, y)
 uint16_t x;
 uint16_t y;
{ return (x > MAX_U16 / y); }

/* returns non-zero if the result of the multiplication of x and y would wrap around (see modulo arithmetic) */
extern inline int MUL_WOULD_WRAP_AROUND_U32 (x, y)
 uint32_t x;
 uint32_t y;
{ return (x > MAX_U32 / y); }

/* returns non-zero if the result of the multiplication of x and y would wrap around (see modulo arithmetic) */
extern inline int MUL_WOULD_WRAP_AROUND_U64 (x, y)
 uint64_t x;
 uint64_t y;
{ return (x > MAX_U64 / y); }

/* Proof for MUL_WOULD_OVERFLOW macros:
 * Let x, y, MAX_In, MIN_In be integers.
 * The statement (x > 0) and (y < 0) and (x < MIN_In / y) implies (x * y < MIN_In) has to be proven.
 * By multiplying both sides of the inequality (x < MIN_In / y) with y we arrive at (x * y < MIN_In).
 * Q.E.D.
 * 
 * The statement (x > 0) and (y > 0) and (x > MAX_In / y) implies (x * y > MAX_In) has to be proven.
 * See proof for MUL_WOULD_WRAP_AROUND.
 * Q.E.D.
 */

/* returns non-zero if the result of the multiplication would overflow */
extern inline int MUL_WOULD_OVERFLOW_I8 (x, y)
 int8_t x;
 int8_t y;
{ return ((x > 0) && (y < 0) && (x < MIN_I8 / y)) ||
         ((x < 0) && (y > 0) && (y < MIN_I8 / x)) ||
         ((x > 0) && (y > 0) && (x > MAX_I8 / y)); }


/* returns non-zero if the result of the multiplication would overflow */
extern inline int MUL_WOULD_OVERFLOW_I16 (x, y)
 int16_t x;
 int16_t y;
{ return ((x > 0) && (y < 0) && (x < MIN_I16 / y)) ||
         ((x < 0) && (y > 0) && (y < MIN_I16 / x)) ||
         ((x > 0) && (y > 0) && (x > MAX_I16 / y)); }

/* returns non-zero if the result of the multiplication would overflow */
extern inline int MUL_WOULD_OVERFLOW_I32 (x, y)
 int32_t x;
 int32_t y;
{ return ((x > 0) && (y < 0) && (x < MIN_I32 / y)) ||
         ((x < 0) && (y > 0) && (y < MIN_I32 / x)) ||
         ((x > 0) && (y > 0) && (x > MAX_I32 / y)); }

/* returns non-zero if the result of the multiplication would overflow */
extern inline int MUL_WOULD_OVERFLOW_I64 (x, y)
 int64_t x;
 int64_t y;
{ return ((x > 0) && (y < 0) && (x < MIN_I64 / y)) ||
         ((x < 0) && (y > 0) && (y < MIN_I64 / x)) ||
         ((x > 0) && (y > 0) && (x > MAX_I64 / y)); }
