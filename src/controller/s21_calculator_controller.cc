#include "./s21_calculator_controller.h"

s21::Status s21::CalculatorController::calculate_converted_expression(
    std::string &str, double &x, double &res) {
  Calculator c;
  return c.calculate_converted_expression(str, x, res);
}

s21::Status s21::CalculatorController::calculate(std::string &str, double &x,
                                                 double &res) {
  Calculator c;
  return c.calculate(str, x, res);
}

s21::Status s21::CalculatorController::ToPolishNotation(const std::string &str,
                                                        std::string &res) {
  PolishNotation pn;
  return pn.ToPolishNotation(str, res);
}
