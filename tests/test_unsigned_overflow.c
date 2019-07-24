#include "../include/integers.h"
#include <stdint.h>
#include <stdio.h>


/* returns 0 on success. */
int test_u8();
int test_u16();
int test_u32();
int test_u64();

int
main(argc, argv)
 int argc;
 const char *const *argv;
{
    if (test_u8() != 0)
        goto ERROR_OCCURRED;
    if (test_u16() != 0)
        goto ERROR_OCCURRED;
    if (test_u32() != 0)
        goto ERROR_OCCURRED;
    if (test_u64() != 0)
        goto ERROR_OCCURRED;
    return 0;

ERROR_OCCURRED:
    puts("Errors occurred.");
    return 1;
}

#define PASSED(return_result) puts("PASSED."); \
                              return_result |= 0;
#define FAILURE(return_result) puts("FAILURE."); \
                               return_result |= 1;


int test_u64()
{
    int return_result = 0;
    uint64_t x, y;
    x = y = 0xfffffffffffffff7;

    puts("Testing ADD_WOULD_WRAP_AROUND_U64 with wrapping values.");
    if (ADD_WOULD_WRAP_AROUND_U64(x, y)) {
        PASSED(return_result);
    }
    else {
        FAILURE(return_result);
    }

    puts("Testing ADD_WOULD_WRAP_AROUND_U64 with non-wrapping values.");
    y = x = 50;
    if (ADD_WOULD_WRAP_AROUND_U64(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U64 with wrapping values.");
    x = y = 0xfff7fafefafe;
    if (MUL_WOULD_WRAP_AROUND_U64(x, y)) {
        PASSED(return_result);
    } else {
        FAILURE(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U64 with non-wrapping values.");
    x = y = 2;
    if (MUL_WOULD_WRAP_AROUND_U64(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    return return_result;
}

int test_u32()
{
    int return_result = 0;
    uint32_t x, y;
    x = y = 0xfff7fefa;

    puts("Testing ADD_WOULD_WRAP_AROUND_U32 with wrapping values.");
    if (ADD_WOULD_WRAP_AROUND_U32(x, y)) {
        PASSED(return_result);
    }
    else {
        FAILURE(return_result);
    }

    puts("Testing ADD_WOULD_WRAP_AROUND_U32 with non-wrapping values.");
    y = x = 50;
    if (ADD_WOULD_WRAP_AROUND_U32(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U32 with wrapping values.");
    x = y = 0xfafefafb;
    if (MUL_WOULD_WRAP_AROUND_U32(x, y)) {
        PASSED(return_result);
    } else {
        FAILURE(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U32 with non-wrapping values.");
    x = y = 2;
    if (MUL_WOULD_WRAP_AROUND_U32(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    return return_result;
}

int test_u16()
{
    int return_result = 0;
    uint16_t x, y;
    x = y = 0xfff7;

    puts("Testing ADD_WOULD_WRAP_AROUND_U16 with wrapping values.");
    if (ADD_WOULD_WRAP_AROUND_U16(x, y)) {
        PASSED(return_result);
    }
    else {
        FAILURE(return_result);
    }

    puts("Testing ADD_WOULD_WRAP_AROUND_U16 with non-wrapping values.");
    y = x = 50;
    if (ADD_WOULD_WRAP_AROUND_U16(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U16 with wrapping values.");
    x = y = 0xfafe;
    if (MUL_WOULD_WRAP_AROUND_U16(x, y)) {
        PASSED(return_result);
    } else {
        FAILURE(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U16 with non-wrapping values.");
    x = y = 2;
    if (MUL_WOULD_WRAP_AROUND_U16(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    return return_result;
}

int
test_u8()
{
    uint8_t y, x;
    y = x = 0xf7;
    int return_result = 0;

    puts("Testing ADD_WOULD_WRAP_AROUND_U8 with wrapping values.");
    if (ADD_WOULD_WRAP_AROUND_U8(x, y)) {
        PASSED(return_result);
    }
    else {
        FAILURE(return_result);
    }

    puts("Testing ADD_WOULD_WRAP_AROUND_U8 with non-wrapping values.");
    y = x = 50;
    if (ADD_WOULD_WRAP_AROUND_U8(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U8 with wrapping values.");
    x = y = 0xfa;
    if (MUL_WOULD_WRAP_AROUND_U8(x, y)) {
        PASSED(return_result);
    } else {
        FAILURE(return_result);
    }

    puts("Testing MUL_WOULD_WRAP_AROUND_U8 with non-wrapping values.");
    x = y = 2;
    if (MUL_WOULD_WRAP_AROUND_U8(x, y)) {
        FAILURE(return_result);
    } else {
        PASSED(return_result);
    }

    return return_result;
}