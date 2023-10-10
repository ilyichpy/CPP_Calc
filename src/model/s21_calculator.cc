#include "./s21_calculator.h"

/**
 * @brief calculate the correct polish notation
 * @param [std::string] &str - the string that it needs to calculate
 * @param[double]&x - the number that will be replaced by X in the expression;
 * if not necessary, write zero
 * @param [double] &res - variable for the response, where the response will be
 * written
 * @return [s21::Status] - the status that will be returned
 */
s21::Status s21::Calculator::calculate_converted_expression(std::string &str,
                                                            double &x,
                                                            double &res) {
  Status status = OK;
  std::stack<double> nums;

  for (size_t i = 0; i < str.length() && status == OK; i++) {
    if (std::isdigit(str[i]) || str[i] == 'x') {
      double num = 0;
      if (str[i] != 'x') {
        num = s21_atof(str.c_str(), i);
      } else {
        num = x;
        i++;
      }
      if (str[i] == '-') num *= -1;
      if (str[i] == '+' || str[i] == '-') i++;
      nums.push(num);
    }

    int operation = take_operation(str[i]);
    if (operation) {
      // take a numbers or a number from the stack and perform an operation
      if (is_unary_operator(operation)) {
        if (nums.size()) {
          double res_unary = 0;
          if ((status = calculate_unary(nums, operation, res_unary)) == OK) {
            nums.push(res_unary);
          }
        }
      } else {
        if (nums.size() >= 2) {
          double res_double = 0;
          if ((status = calculate_double(nums, operation, res_double)) == OK) {
            nums.push(res_double);
          }
        }
      }
    }
  }

  if (status == OK && !nums.empty()) {
    res = nums.top();
  }

  return status;
}

/**
 * @brief calculate the expression. The expression is an incorrect polish
 * notation
 * @param [std::string] &str - the string that it needs to calculate
 * @param[double]&x - the number that will be replaced by X in the expression;
 * if not necessary, write zero
 * @param [double] &res - variable for the response, where the response will be
 * written
 * @return [s21::Status] - the status that will be returned
 */
s21::Status s21::Calculator::calculate(std::string &str, double &x,
                                       double &res) {
  Status status = OK;

  PolishNotation pn;
  std::string converted_str;
  status = pn.ToPolishNotation(str, converted_str);

  if (status == OK) {
    status = calculate_converted_expression(converted_str, x, res);
  }

  return status;
}

s21::Status s21::Calculator::calculate_unary(std::stack<double> &st,
                                             char operation, double &res) {
  Status status = OK;
  if (st.size()) {
    double num = st.top();
    st.pop();

    status = is_nan(num, operation);
    if (status == OK) res = switch_unary(num, operation);
  }
  return status;
}

double s21::Calculator::switch_unary(double num, char operation) {
  double res = 0;
  switch (operation) {
    case COS:
      res = cos(num);
      break;
    case SIN:
      res = sin(num);
      break;
    case TAN:
      res = tan(num);
      break;
    case ACOS:
      res = acos(num);
      break;
    case ASIN:
      res = asin(num);
      break;
    case ATAN:
      res = atan(num);
      break;
    case SQRT:
      res = sqrt(num);
      break;
    case LN:
      res = log(num);
      break;
    case LOG:
      res = log10(num);
      break;
  }
  return res;
}

s21::Status s21::Calculator::calculate_double(std::stack<double> &st,
                                              char operation, double &res) {
  Status status = OK;
  if (st.size() >= 2) {
    double num_second = st.top();
    st.pop();
    double num_first = st.top();
    st.pop();

    if (num_second == 0.0 && operation == DIV)
      status = DIVISION_BY_ZERO;
    else if (num_second < 0.0 && operation == DEG)
      status = ERROR;
    else if (num_first < 0 && operation == DEG && status == OK)
      res = switch_arithmetic(num_first, (int)num_second, operation);
    else
      res = switch_arithmetic(num_first, num_second, operation);
  }
  return status;
}

double s21::Calculator::switch_arithmetic(double num1, double num2,
                                          char operation) {
  double res = 0;
  switch (operation) {
    case ADD:
      res = num1 + num2;
      break;
    case SUB:
      res = num1 - num2;
      break;
    case MUL:
      res = num1 * num2;
      break;
    case DIV:
      res = num1 / num2;
      break;
    case MOD:
      res = fmod(num1, num2);
      break;
    case DEG:
      res = pow(num1, num2);
      break;
  }
  return res;
}

int s21::Calculator::take_operation(char ch) {
  int is_operation = 0;
  if (ch == ADD || ch == SUB || ch == MUL) is_operation = 1;
  if (ch == DIV || ch == MOD || ch == DEG) is_operation = 1;
  if (ch == COS || ch == SIN || ch == TAN) is_operation = 1;
  if (ch == ACOS || ch == ASIN || ch == ATAN) is_operation = 1;
  if (ch == SQRT || ch == LN || ch == LOG) is_operation = 1;
  return is_operation ? ch : 0;
}

int s21::Calculator::is_unary_operator(char operation) {
  int is_unary = 0;
  if (operation == COS || operation == SIN) is_unary = 1;
  if (operation == TAN || operation == LOG) is_unary = 1;
  if (operation == ACOS || operation == ASIN) is_unary = 1;
  if (operation == ATAN || operation == SQRT) is_unary = 1;
  if (operation == LN) is_unary = 1;

  return is_unary;
}

s21::Status s21::Calculator::is_nan(double num, char operation) {
  Status is_nan = OK;
  if (operation == SQRT && num < 0) is_nan = ERROR;
  if ((operation == ASIN || operation == ACOS) && (num < -1 || num > 1))
    is_nan = ERROR;
  if ((operation == LN || operation == LOG) && num < 0) is_nan = ERROR;
  return is_nan;
}

double s21::Calculator::s21_atof(const std::string &str, size_t &i) {
  double num = 0;
  int exp = 0, is_exp = 0;
  size_t j = i;
  for (; j < str.length() && (std::isdigit(str[j]) || str[j] == '.'); j++) {
    if (str[j] == '.') {
      is_exp = 1;
      continue;
    }
    if (is_exp) exp++;
    num = num * 10 + (str[j] - '0');
  }
  for (int k = 0; k < exp; k++) {
    num /= 10;
  }
  i += j - i;
  return num;
}
