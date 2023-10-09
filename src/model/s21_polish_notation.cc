#include "s21_polish_notation.h"
/**
 * @brief main method for polish notation
 * @param [const std::string] &str, input string
 * @param [double] x, value of x
 * @return [std::string] resStr, reverse polish notation string
 */
s21::Status s21::PolishNotation::ToPolishNotation(const std::string &str,
                                                  std::string &res) {
  s21::Status status = OK;
  if (is_valid(str) == false) {
    status = INCORRECT_BRACKETS;
  }
  size_t len = str.length();
  std::stack<char> operations;

  for (size_t i = 0; i < len && status == OK; i++) {
    if (str[i] == ' ') continue;
    bool isSign = false;
    if ((str[i] == SUB || str[i] == ADD) && i < len - 1 &&
        std::isdigit(str[i + 1])) {
      if (i > 0 && str[i - 1] == OPEN)
        isSign = true;
      else if (i == 0)
        isSign = true;
    }
    if (std::isdigit(str[i]) || isSign) {
      i += strcat_num(str, res, i);
      res.append(" ");
    } else if (str[i] == 'x' ||
               (i < len - 1 && (str[i] == ADD || str[i] == SUB) &&
                str[i + 1] == 'x')) {
      char s[3] = {0};
      if (str[i] == ADD || str[i] == SUB) {
        s[0] = 'x';
        s[1] = str[i];
        s[2] = ' ';
        ++i;
      } else {
        s[0] = 'x';
        s[1] = ' ';
      }

      res.append(s);
      ++i;
    }
    int curr_operator = get_operator(str, i);
    if (curr_operator || str[i] == OPEN || str[i] == CLOSE) {
      if (curr_operator == 0 && (str[i] == CLOSE || str[i] == OPEN)) {
        curr_operator = str[i];
      }

      int is_greater_or_eq = is_greater(operations, curr_operator);
      if (is_greater_or_eq == 1 || str[i] == OPEN) {
        operations.push(curr_operator);
      } else {
        // take as long as str[i] less than first element of stack
        // or str[i] is equal to '('
        take(operations, res, curr_operator);
      }
    }
  }

  if (status == OK) {
    take_from_stack(operations, res, 0, 0);
  }
  if (res.length() > 0) res.pop_back();
  return status;
}

/**
 * @brief check operators(-, +, /, *, ^)
 * @param [string] str, input string
 * @param [size_t] &i, position in str
 * @return [int] num from enum Operations
 */
int s21::PolishNotation::get_operator(std::string str, size_t &i) {
  size_t len = str.length();
  int is_low = str[i] == ADD || str[i] == SUB;  //!< low priority
  int is_mid = str[i] == MUL || str[i] == DIV;
  int is_heigh = str[i] == DEG;
  int ch = 0, MAX_OPERATOR_LEN = 3;
  if (is_low || is_mid || is_heigh) ch = str[i];
  if (ch == 0 && i + MAX_OPERATOR_LEN < len) {
    if (str[i] == 'm' && str[i + 1] == 'o' && str[i + 2] == 'd') {
      ch = MOD;
      i += 2;
    }
    if (ch == 0) ch = get_func_operator(str, i);
  }
  return ch;
}

int s21::PolishNotation::get_func_operator(std::string &str, size_t &i) {
  int ch = 0;
  ch = get_cos_sin_tan(str, i);
  if (str[i] == 'l' && str[i + 1] == 'o' && str[i + 2] == 'g') {
    ch = LOG;
    i += 2;
  } else if (str[i] == 'l' && str[i + 1] == 'n') {
    ch = LN;
    i += 1;
  } else if (str[i] == 's' && str[i + 1] == 'q' && str[i + 2] == 'r' &&
             str[i + 3] == 't') {
    ch = SQRT;
    i += 3;
  }
  if (str[i] == 'a') {
    i++;
    ch = get_cos_sin_tan(str, i);
    if (ch == COS) ch = ACOS;
    if (ch == SIN) ch = ASIN;
    if (ch == TAN) ch = ATAN;
  }
  return ch;
}
/**
 * @brief method which detect special functions like cos
 * @param [std::string] str, input string
 * @param [size_t] &i, position in str
 * @return [char] ch, numer of special function in enum
 */
int s21::PolishNotation::get_cos_sin_tan(std::string str, size_t &i) {
  char ch = 0;
  if (str[i] == 'c' && str[(i) + 1] == 'o' && str[(i) + 2] == 's') {
    ch = COS;
    (i) += 2;
  } else if (str[i] == 's' && str[(i) + 1] == 'i' && str[(i) + 2] == 'n') {
    ch = SIN;
    (i) += 2;
  } else if (str[i] == 't' && str[(i) + 1] == 'a' && str[(i) + 2] == 'n') {
    ch = TAN;
    (i) += 2;
  }
  return ch;
}

/*!
 * @brief check brackets
 * @param [const std::string] &str, input string
 * @return [bool] isValid, result of check
 */
bool s21::PolishNotation::is_valid(const std::string &str) noexcept {
  int left_brackets = 0, right_brackets = 0;
  bool isValid = true;
  for (size_t i = 0; i < str.length(); i++) {
    if (str[i] == '(') {
      left_brackets++;
    }
    if (str[i] == ')') {
      right_brackets++;
    }
    if (left_brackets < right_brackets) {
      isValid = false;
      break;
    }
    if (str[i] != '(' && str[i] != ')' && get_operator(str, i) == 0 &&
        str[i] != '.' && !std::isdigit(str[i]) && str[i] != ' ' &&
        str[i] != 'x') {
      isValid = false;
    }
  }
  isValid = left_brackets != right_brackets ? false : isValid;
  return isValid;
}

/**
 *
 */
size_t s21::PolishNotation::strcat_num(const std::string &str, std::string &res,
                                       size_t position) {
  size_t i = 0;

  char sign[2] = {'\0', '\0'};
  if (str[position] == SUB || str[position] == ADD) {
    sign[0] = str[position];
    position++;
    i++;
  }

  bool is_dots = false;
  for (;
       str[position] && (std::isdigit(str[position]) || is_dot(str[position]));
       position++, i++) {
    for (; str[position] && is_dots && is_dot(str[position]); position++, i++) {
    }
    if (str[position] && !std::isdigit(str[position]) && is_dots) break;
    char s[] = {str[position], '\0'};
    res.append(s);
    if (is_dot(str[position])) is_dots = true;
  }
  res.append(sign);
  return i;
}

bool s21::PolishNotation::is_dot(char c) { return c == '.'; }

int s21::PolishNotation::is_greater(std::stack<char> &st, char c) {
  int is_greater = 0;
  int curr = st.size() ? st.top() : 0;
  int is_mid = c == MUL || c == DIV || c == MOD;
  bool is_heigh = this->is_heigh(c);

  if (curr == 0 || curr == OPEN) is_greater = 1;
  if (curr == ADD && (is_mid || is_heigh)) is_greater = 1;
  if (curr == SUB && (is_mid || is_heigh)) is_greater = 1;
  if ((curr == MUL || curr == DIV) && is_heigh) is_greater = 1;
  if (curr == MOD && is_heigh) is_greater = 1;
  if (c == CLOSE) is_greater = 3;

  return is_greater;
}

bool s21::PolishNotation::is_heigh(char c) {
  bool tmp = false;
  if (c == DEG || c == COS || c == SIN || c == TAN) tmp = true;
  if (c == ACOS || c == ASIN || c == ATAN) tmp = true;
  if (c == SQRT || c == LN || c == LOG) tmp = true;
  return tmp;
}

bool s21::PolishNotation::is_equal(std::stack<char> &st, char c) {
  int curr = st.size() ? st.top() : 0;
  bool is_equal = false;
  bool is_low = c == ADD || c == SUB;
  bool is_mid = c == MUL || c == DIV || c == MOD;

  if (curr == MUL && is_mid) is_equal = true;
  if (curr == DIV && is_mid) is_equal = true;
  if (curr == MOD && is_mid) is_equal = true;
  if (curr == ADD && is_low) is_equal = true;
  if (curr == SUB && is_low) is_equal = true;
  if (is_heigh(curr) && is_heigh(c)) is_equal = true;
  return is_equal;
}

int s21::PolishNotation::is_less(std::stack<char> &st, char c) {
  bool is_less_or_eq = false;
  int curr = st.size() ? st.top() : 0;
  int is_low = c == ADD || c == SUB;
  int is_heigh = this->is_heigh(c);
  int is_curr = this->is_heigh(curr);

  if (curr == MUL && is_low) is_less_or_eq = true;
  if (curr == DIV && is_low) is_less_or_eq = true;
  if (curr == MOD && is_low) is_less_or_eq = true;
  if (is_curr && !is_heigh) is_less_or_eq = true;

  return is_less_or_eq;
}

s21::Status s21::PolishNotation::take_from_stack(std::stack<char> &st,
                                                 std::string &res,
                                                 int is_less_or_eq,
                                                 char ch_put) {
  Status status = OK;
  if (is_less_or_eq == 1) {
    status = take_until_brace(st, res);
  } else if (is_less_or_eq == 2) {
    status = take_while_less(st, res, ch_put);
    status = take_while_equal(st, res, ch_put);
  } else if (is_less_or_eq == 3) {
    status = take_while_equal(st, res, ch_put);
  } else {
    status = take_everything_from_stack(st, res);
  }
  return status;
}

s21::Status s21::PolishNotation::take_while_less(std::stack<char> &st,
                                                 std::string &res,
                                                 char ch_put) {
  while (st.size() && st.top() != OPEN && is_less(st, ch_put)) {
    char ch = st.top();
    if (ch != OPEN && ch != CLOSE) {
      char s[] = {ch, ' ', '\0'};
      res.append(s);
      st.pop();
    }
  }
  return END_LESS;
}

s21::Status s21::PolishNotation::take_while_equal(std::stack<char> &st,
                                                  std::string &res,
                                                  char ch_put) {
  while (st.size() && st.top() != OPEN && is_equal(st, ch_put)) {
    char ch = st.top();
    st.pop();
    if (ch != OPEN && ch != CLOSE) {
      char s[] = {ch, ' ', '\0'};
      res.append(s);
    }
  }
  return END_EQUAL;
}

s21::Status s21::PolishNotation::take_everything_from_stack(
    std::stack<char> &st, std::string &res) {
  while (st.size()) {
    char ch = st.top();
    st.pop();
    if (ch != OPEN && ch != CLOSE) {
      char s[] = {ch, ' ', '\0'};
      res.append(s);
    }
  }
  return END_STACK;
}

s21::Status s21::PolishNotation::take_until_brace(std::stack<char> &st,
                                                  std::string &res) {
  while (st.size() && st.top() != OPEN) {
    char ch = st.top();
    st.pop();
    if (ch != OPEN && ch != CLOSE) {
      char s[] = {ch, ' ', '\0'};
      res.append(s);
    }
  }

  if (st.size() && st.top() == OPEN) {
    st.pop();
  }

  if (st.size()) {
    if (is_heigh(st.top())) {
      char s[] = {st.top(), ' ', '\0'};
      res.append(s);
      st.pop();
    }
  }
  return END_BRACKETS;
}

void s21::PolishNotation::take(std::stack<char> &st, std::string &res,
                               char elem) {
  int is_less_or_eq = elem == CLOSE;
  if (is_less(st, elem)) is_less_or_eq = 2;
  if (is_equal(st, elem)) is_less_or_eq = 3;

  take_from_stack(st, res, is_less_or_eq, elem);

  if (elem != CLOSE) {
    st.push(elem);
  }
}
