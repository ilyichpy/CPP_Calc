#ifndef S21_CALCULATOR_CONTROLLER_H_
#define S21_CALCULATOR_CONTROLLER_H_

#ifndef MODEL_H_
#define MODEL_H_

#include "../model/s21_model.h"

#endif  // MODEL_H_

#ifndef NOTATION_
#define NOTATION_

#include "../model/s21_polish_notation.h"

#endif  // NOTATION_

#ifndef CALCULATOR_
#define CALCULATOR_

#include "../model/s21_calculator.h"

#endif  // CALCULATOR_

namespace s21 {
class CalculatorController {
 public:
  explicit CalculatorController() {}
  ~CalculatorController() {}
  Status calculate_converted_expression(std::string &str, double &x,
                                        double &res);
  Status calculate(std::string &str, double &x, double &res);
  Status ToPolishNotation(const std::string &str, std::string &res);
};
}  // namespace s21

#endif  // S21_CALCULATOR_CONTROLLER_H_