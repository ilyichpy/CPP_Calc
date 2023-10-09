#ifndef S21_POLISH_NOTATION_H_
#define S21_POLISH_NOTATION_H_

#include "./s21_model.h"

namespace s21 {

class PolishNotation {
 public:
  explicit PolishNotation() {}
  ~PolishNotation() {}
  Status ToPolishNotation(const std::string &str, std::string &res);

 private:
  bool is_valid(const std::string &str) noexcept;
  size_t strcat_num(const std::string &str, std::string &res, size_t position);
  bool is_dot(char c);
  int get_operator(std::string str, size_t &i);
  int get_func_operator(std::string &str, size_t &i);
  int get_cos_sin_tan(std::string str, size_t &i);
  int is_greater(std::stack<char> &st, char c);
  bool is_heigh(char c);
  bool is_equal(std::stack<char> &st, char c);
  int is_less(std::stack<char> &st, char c);
  Status take_from_stack(std::stack<char> &st, std::string &res,
                         int is_less_or_eq, char ch_put);
  Status take_until_brace(std::stack<char> &st, std::string &res);
  Status take_while_equal(std::stack<char> &st, std::string &res, char ch_put);
  Status take_while_less(std::stack<char> &st, std::string &res, char ch_put);
  Status take_everything_from_stack(std::stack<char> &st, std::string &res);
  void take(std::stack<char> &st, std::string &res, char elem);
};

}  // namespace s21

#endif  // S21_POLISH_NOTATION_H_