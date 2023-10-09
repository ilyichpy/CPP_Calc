#ifndef S21_CALCULATOR_H_
#define S21_CALCULATOR_H_

#include <cmath>

#include "./s21_model.h"
#include "./s21_polish_notation.h"

namespace s21 {

class Calculator {
 public:
  explicit Calculator() {}
  ~Calculator() {}
  Status calculate_converted_expression(std::string &str, double &x,
                                        double &res);
  Status calculate(std::string &str, double &x, double &res);

 private:
  double s21_atof(const std::string &str, size_t &i);
  Status is_nan(double num, char operation);
  int is_unary_operator(char operation);
  int take_operation(char ch);
  double switch_arithmetic(double num1, double num2, char operation);
  double switch_unary(double num, char operation);
  Status calculate_double(std::stack<double> &st, char operation, double &res);
  Status calculate_unary(std::stack<double> &st, char operation, double &res);
};

}  // namespace s21

#endif  // S21_CALCULATOR_H_