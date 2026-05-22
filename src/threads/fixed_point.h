#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#include <stdint.h>

#define F (1 << 14) // 2^14

#define INT_TO_FP(n) ((n) * F)
#define FP_TO_INT_ZERO(x) ((x) / F)
#define FP_TO_INT_NEAR(x) (((x) >= 0) ? (((x) + F / 2) / F) : (((x) - F / 2) / F))

#define ADD_FP(x, y) ((x) + (y))
#define SUB_FP(x, y) ((x) - (y))
#define ADD_MIX(x, n) ((x) + (n) * F)
#define SUB_MIX(x, n) ((x) - (n) * F)

#define MUL_FP(x, y) (((int64_t)(x)) * (y) / F)
#define MUL_MIX(x, n) ((x) * (n))

#define DIV_FP(x, y) ((((int64_t)(x)) * F) / (y))
#define DIV_MIX(x, n) ((x) / (n))

#endif