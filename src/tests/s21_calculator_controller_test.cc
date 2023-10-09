#include "../controller/s21_calculator_controller.h"

#include <gtest/gtest.h>

const double EPS = 1e-7;

TEST(Controller, controller_test_1) {
  char test[] = "(1 + 3 * 2 - (acos(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  double x = 0;
  double res = 0;
  s21::CalculatorController cc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, cc.ToPolishNotation(test, str));
  status = cc.calculate_converted_expression(str, x, res);
  EXPECT_EQ(status, s21::ERROR);
}

TEST(Controller, controller_test_2) {
  char test[] = "(-1.3) + (-3.541) * (-2.860)";
  double res = 0, check = -1.3 + -3.541 * -2.860;
  double x = 0;
  s21::PolishNotation pn;
  s21::Calculator calc;
  std::string str;
  s21::Status status = s21::OK;

  EXPECT_EQ(s21::OK, pn.ToPolishNotation(test, str));
  status = calc.calculate_converted_expression(str, x, res);
  if (check - res >= EPS) status = s21::NOT_EQUAL;
  EXPECT_EQ(status, s21::OK);
}
