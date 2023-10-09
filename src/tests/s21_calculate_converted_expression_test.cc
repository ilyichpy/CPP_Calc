#include <gtest/gtest.h>

#include "../model/s21_calculator.h"
#include "../model/s21_polish_notation.h"

const double EPS = 1e-7;

TEST(Calculator, calc_with_notation_test_1) {
  char test[] = "1 + 3";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::OK);
  EXPECT_EQ(4.0, res);
}

TEST(Calculator, calc_with_notation_test_2) {
  char test[] = "1 - 3";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::OK);
  EXPECT_EQ(-2., res);
}

TEST(Calculator, calc_with_notation_test_3) {
  char test[] = "1 * 3";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::OK);
  EXPECT_EQ(3, res);
}

TEST(Calculator, calc_with_notation_test_4) {
  char test[] = "1 / 3";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::OK);
  EXPECT_EQ(1. / 3, res);
}

TEST(Calculator, calc_with_notation_test_5) {
  char test[] = "10 mod 3";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::OK);
  EXPECT_EQ(1, res);
}

TEST(Calculator, calc_with_notation_test_6) {
  char test[] = "1 ^ 3";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::OK);
  EXPECT_EQ(1.0, res);
}

TEST(Calculator, calc_with_notation_test_7) {
  char test[] = "(+1) + (+3) * (+2)";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::OK);
  EXPECT_EQ(7.0, res);
}

TEST(Calculator, calc_with_notation_test_8) {
  char test[] = "(-1.3) + (-3.541) * (-2.860)";
  double res = 0, check = -1.3 + -3.541 * -2.860;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_9) {
  char test[] = "1 + 3 * 2 mod (2 / 1) ^ 2";
  double res = 0, check = fmod(1 + 3 * 2, pow((2 / 1), 2));
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_10) {
  char test[] = "1 ^ 2 + 3 * 2 mod (2 / 1) / 2";
  double res = 0, check = pow(1, 2) + 3 * 2 % (2 / 1) / 2;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_11) {
  char test[] = "(1 + 3 * cos(2 - (2 / 1)) / 5 mod 3 + (3 - 1) * 5)";
  double res = 0, check = (1 + 3 * fmod(cos(2 - (2 / 1)) / 5, 3) + (3 - 1) * 5);
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_12) {
  char test[] = "1 + sin(3 * 2 - (2 / 1))";
  double res = 0, check = 1 + sin(3 * 2 - (2 / 1.));
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_13) {
  char test[] = "(1 + 3 * 2 - (tan(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  double res = 0,
         check = fmod((1 + 3 * 2 - (tan(2) / 1)) / 5, 3) + ((3 - 1) * 5);
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_14) {
  char test[] = "(1 + 3 * 2 - (acos(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::ERROR);
}

TEST(Calculator, calc_with_notation_test_15) {
  char test[] = "(1 + 3 * asin(2 - (2 / 1) / 5 mod 3 + (3 - 1) * 5))";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::ERROR);
}

TEST(Calculator, calc_with_notation_test_16) {
  char test[] = "(1 + 3 * 2 - (atan(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  double res = 0,
         check = fmod((1 + 3 * 2 - (atan(2) / 1)) / 5, 3) + ((3 - 1) * 5);
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_17) {
  char test[] = "1 + sqrt(3 * 2) - (2 / 1)";
  double res = 0, check = 1 + sqrt(3 * 2) - (2 / 1);
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_18) {
  char test[] = "ln((1 + 3 * 2 - (2 / 1)) / 5 mod (+3) + ((3 - 1) * 5))";
  double res = 0,
         check = log(fmod((1 + 3 * 2 - (2 / 1)) / 5, 3) + ((3 - 1) * 5));
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_19) {
  char test[] = "1 + log(3 * 2 - (2 / 1))";
  double res = 0, check = 1 + log10(3 * 2 - (2 / 1));
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_20) {
  char test[] = "(1 + 2) * acos(0.1) - (2 / 1)";
  double res = 0, check = (1 + 2) * acos(0.1) - (2 / 1);
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_21) {
  char test[] = "(1 + 2) * asin(0.9) - (2 / 1)";
  double res = 0, check = (1 + 2) * asin(0.9) - (2 / 1);
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_22) {
  char test[] = "3 + -2 ^ 3 / 5";
  double res = 0, check = 3 + pow(-2, 3) / 5;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_23) {
  char test[] = "3 + -2 ^ 3 / 5 + x";
  double res = 0, check = 3 + pow(-2, 3) / 5 + 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_24) {
  char test[] = "-x + 3 + -2 ^ 3 / 5";
  double res = 0, check = -0 + 3 + pow(-2, 3) / 5;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_25) {
  char test[] = "(-x) + (1 + 2) * acos(0.1) - (2 / 1)";
  double res = 0, check = -3 + (1 + 2) * acos(0.1) - (2 / 1);
  double x = 3;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_26) {
  char test[] = "x / 0";
  double res = 0;
  double x = 5;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  EXPECT_STREQ("x 0 /", str.c_str());
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::DIVISION_BY_ZERO);
}

TEST(Calculator, calc_with_notation_test_27) {
  char test[] = "sqrt(-4)";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::ERROR);
}

TEST(Calculator, calc_with_notation_test_28) {
  char test[] = "sin(1) + 3 * 2 - (2 / 1)";
  double res = 0, check = sin(1) + 3 * 2 - (2 / 1);
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (fabs(check - res) >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}

TEST(Calculator, calc_with_notation_test_29) {
  char test[] = "2 ^ (-3)";
  double res = 0;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::ERROR);
}
