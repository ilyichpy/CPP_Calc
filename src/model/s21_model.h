#ifndef S21_MODEL_H_
#define S21_MODEL_H_

#include <cctype>
#include <cstring>
#include <stack>
#include <string>

namespace s21 {

#ifndef Status_
#define Status_
/**
 * @brief enum of statuses that helps to catch errors
 * @param [0] - OK
 * @param [1] - ALLOCATE
 * @param [2] - INCORRECT_BRACKETS
 * @param [3] - END_STACK
 * @param [4] - END_BRACKETS
 * @param [5] - END_EQUAL
 * @param [6] - END_LESS
 * @param [7] - DIVISION_BY_ZERO
 * @param [8] - NOT_EQUAL
 * @param [9] - ERROR
 * @param [10] - ERR_X_VALUE
 */
typedef enum {
  OK,
  ALLOCATE,
  INCORRECT_BRACKETS,
  END_STACK,
  END_BRACKETS,
  END_EQUAL,
  END_LESS,
  DIVISION_BY_ZERO,
  NOT_EQUAL,
  ERROR,
  ERR_X_VALUE,
} Status;

#endif  // Status_

#ifndef Operations_
#define Operations_
/**
 * @brief this enum helps to check all operations like plus or cos etd..
 */
typedef enum {
  ADD = 43,
  SUB = 45,
  MUL = 42,
  DIV = 47,
  MOD = 109,
  DEG = 94,
  COS = 99,
  SIN = 115,
  TAN = 116,
  ACOS = 111,
  ASIN = 105,
  ATAN = 97,
  SQRT = 113,
  LN = 108,
  LOG = 103
} Operations;

#endif  // Operations_

#ifndef Brackets_
#define Brackets_
/**
 * @brief enum for detect brackets
 */
typedef enum { OPEN = 40, CLOSE = 41 } Brackets;
#endif  // Brackets_

}  // namespace s21

#endif  // S21_MODEL_H_