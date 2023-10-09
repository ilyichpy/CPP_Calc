#include "../model/s21_polish_notation.h"

#include <gtest/gtest.h>

const std::string TEST1 = "1 + 3 * 2 - (2 / 1)";
const std::string TEST2 = "(1 + 2) * 3 + (3 - 1)";
const std::string TEST3 = "(1 + (2 - 1) * 3) / 5 * 2 + 1";
const std::string TEST4 = "(1 + 3 * 3 - (2 / 1))";
const std::string TEST5 = "(1 + 3 * 2 - (2 / 1)) / 5 mod 3 + ((3 - 1) * 5)";
const std::string TEST6 = "(1 / (2) + 1)";
const std::string TEST7 = "1 + 2";
const std::string TEST8 = "2 - 1";
const std::string TEST9 = "2 * 1";
const std::string TEST10 = "2 / 1";
const std::string TEST11 = "3 mod 2";

const std::string RES1 = "1 3 2 * + 2 1 / -";
const std::string RES2 = "1 2 + 3 * 3 1 - +";
const std::string RES3 = "1 2 1 - 3 * + 5 / 2 * 1 +";
const std::string RES4 = "1 3 3 * + 2 1 / -";
const std::string RES5 = "1 3 2 * + 2 1 / - 5 / 3 m 3 1 - 5 * +";
const std::string RES6 = "1 2 / 1 +";
const std::string RES7 = "1 2 +";
const std::string RES8 = "2 1 -";
const std::string RES9 = "2 1 *";
const std::string RES10 = "2 1 /";
const std::string RES11 = "3 2 m";

TEST(PolishNotationTest, test_1) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST1, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES1.c_str());
}

TEST(PolishNotationTest, test_2) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST2, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES2.c_str());
}

TEST(PolishNotationTest, test_3) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST3, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES3.c_str());
}

TEST(PolishNotationTest, test_4) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST4, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES4.c_str());
}

TEST(PolishNotationTest, test_5) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST5, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES5.c_str());
}

TEST(PolishNotationTest, test_6) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST6, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES6.c_str());
}

TEST(PolishNotationTest, test_7) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST7, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES7.c_str());
}

TEST(PolishNotationTest, test_8) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST8, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES8.c_str());
}

TEST(PolishNotationTest, test_9) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST9, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES9.c_str());
}

TEST(PolishNotationTest, test_10) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST10, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES10.c_str());
}

TEST(PolishNotationTest, test_11) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(TEST11, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), RES11.c_str());
}

TEST(PolishNotationTest, test_12) {
  char test[] = "1 + 3 * 2 mod (2 / 1) ^ 2";
  const char res[] = "1 3 2 * 2 1 / 2 ^ m +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, test_13) {
  char test[] = "1 ^ 2 + 3 * 2 mod (2 / 1) / 2";
  const char res[] = "1 2 ^ 3 2 * 2 1 / m 2 / +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, test_14) {
  char test[] = "1 ^ 2 + 3 * 2 mod (2 / 1)";
  const char res[] = "1 2 ^ 3 2 * 2 1 / m +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, test_15) {
  char test[] = "(-1.3) + (-3.541) * (-2.860)";
  const char res[] = "1.3- 3.541- 2.860- * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, test_16) {
  char test[] = "((1 ^ 2) + 3)) * 2 mod (2 / 1)";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::Status::INCORRECT_BRACKETS);
  EXPECT_STREQ(str.c_str(), "");
}

TEST(PolishNotationTest, test_17) {
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation("x / 0", str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), "x 0 /");
}

TEST(PolishNotationTest, unary_minus_1) {
  char test[] = "(-1) + 3";
  const char res[] = "1- 3 +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, unary_minus_2) {
  char test[] = "1 + (-3)";
  const char res[] = "1 3- +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, unary_minus_3) {
  char test[] = "(-1) + (-3) * (-2)";
  const char res[] = "1- 3- 2- * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, unary_minus_4) {
  char test[] = "(-1.3) + (-3.54) * (-2.860)";
  const char res[] = "1.3- 3.54- 2.860- * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, unary_plus_1) {
  char test[] = "(+1) + 3";
  const char res[] = "1+ 3 +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, unary_plus_2) {
  char test[] = "1 + (+3)";
  const char res[] = "1 3+ +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, unary_plus_3) {
  char test[] = "(+1) + (+3) * (+2)";
  const char res[] = "1+ 3+ 2+ * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, unary_plus_4) {
  char test[] = "(+1.3) + (+3.54) * (+2.860)";
  const char res[] = "1.3+ 3.54+ 2.860+ * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, dots_at_num_1) {
  char test[] = "(+1..3) + (+3..54) * (+2.8.6.0)";
  const char res[] = "1.3+ 3.54+ 2.860+ * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(PolishNotationTest, dots_at_num_2) {
  char test[] = "(+1..3) + (+3......54) * (+2.8.6.0.)";
  const char res[] = "1.3+ 3.54+ 2.860+ * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_1) {
  char test[] = "sin(4)";
  const char res[] = "4 s";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_2) {
  char test[] = "sin(1) + 3 * 2 - (2 / 1)";
  const char res[] = "1 s 3 2 * + 2 1 / -";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_3) {
  char test[] = "1 + 3 * 2 - sin(2 / 1)";
  const char res[] = "1 3 2 * + 2 1 / s -";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_4) {
  char test[] = "1 + sin(3) * 2 - (2 / 1)";
  const char res[] = "1 3 s 2 * + 2 1 / -";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_5) {
  char test[] = "1 + 3 * sin(2) - (2 / 1)";
  const char res[] = "1 3 2 s * + 2 1 / -";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_6) {
  char test[] = "1 + sin(3 * 2) - (2 / 1)";
  const char res[] = "1 3 2 * s + 2 1 / -";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_7) {
  char test[] = "1 + sin(3 * 2 - (2 / 1))";
  const char res[] = "1 3 2 * 2 1 / - s +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_8) {
  char test[] = "sin((1 + 3 * 2 - (2 / 1)) / 5 mod 3 + ((3 - 1) * 5))";
  const char res[] = "1 3 2 * + 2 1 / - 5 / 3 m 3 1 - 5 * + s";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_9) {
  char test[] = "(1 + 3 * 2 - (2 / 1)) / 5 mod 3 + sin((3 - 1) * 5)";
  const char res[] = "1 3 2 * + 2 1 / - 5 / 3 m 3 1 - 5 * s +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_10) {
  char test[] = "(1 + 3 * 2 - (sin(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  const char res[] = "1 3 2 * + 2 s 1 / - 5 / 3 m 3 1 - 5 * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sin_test_11) {
  char test[] = "(1 + 3 * 2 - (2 / 1)) / sin(5 mod 3) + ((3 - 1) * 5)";
  const char res[] = "1 3 2 * + 2 1 / - 5 3 m s / 3 1 - 5 * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, cos_test_1) {
  char test[] = "(1 + 3 * cos(2 - (2 / 1))) / 5 mod 3 + ((3 - 1) * 5)";
  const char res[] = "1 3 2 2 1 / - c * + 5 / 3 m 3 1 - 5 * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, cos_test_2) {
  char test[] = "(1 + 3 * cos(2 - (2 / 1) / 5 mod 3 + (3 - 1) * 5)";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::INCORRECT_BRACKETS);
}

TEST(Math_func, tan_test_1) {
  char test[] = "(1 + 3 * tan(2 - (2 / 1) / 5 mod 3 + (3 - 1) * 5)";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::INCORRECT_BRACKETS);
}

TEST(Math_func, tan_test_2) {
  char test[] = "(1 + 3 * 2 - (tan(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  const char res[] = "1 3 2 * + 2 t 1 / - 5 / 3 m 3 1 - 5 * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, acos_test_1) {
  char test[] = "(1 + 3 * acos(2 - (2 / 1) / 5 mod 3 + (3 - 1) * 5)";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::INCORRECT_BRACKETS);
}

TEST(Math_func, acos_test_2) {
  char test[] = "(1 + 3 * 2 - (acos(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  const char res[] = "1 3 2 * + 2 o 1 / - 5 / 3 m 3 1 - 5 * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, asin_test_1) {
  char test[] = "(1 + 3 * asin(2 - (2 / 1) / 5 mod 3 + (3 - 1) * 5)";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::INCORRECT_BRACKETS);
}

TEST(Math_func, asin_test_2) {
  char test[] = "((+1) + 3 * 2 - (asin(2) / 1)) / 5 mod 3 + ((3 - 1) * (-5))";
  const char res[] = "1+ 3 2 * + 2 i 1 / - 5 / 3 m 3 1 - 5- * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, atan_test_1) {
  char test[] = "(1 + 3 * atan(2 - (2 / 1) / 5 mod 3 + (3 - 1) * 5)";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::INCORRECT_BRACKETS);
}

TEST(Math_func, atan_test_2) {
  char test[] = "(1 + 3 * 2 - (atan(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  const char res[] = "1 3 2 * + 2 a 1 / - 5 / 3 m 3 1 - 5 * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sqrt_test_1) {
  char test[] = "1 + sqrt(3 * 2) - (2 / 1)";
  const char res[] = "1 3 2 * q + 2 1 / -";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, sqrt_test_2) {
  char test[] = "(1 + 3 * 2 - (sqrt(2) / 1)) / 5 mod 3 + ((3 - 1) * 5)";
  const char res[] = "1 3 2 * + 2 q 1 / - 5 / 3 m 3 1 - 5 * +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, ln_test_1) {
  char test[] = "1 + ln(3 * 2 - (2 / 1))";
  const char res[] = "1 3 2 * 2 1 / - l +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, ln_test_2) {
  char test[] = "ln((1 + 3 * 2 - (2 / 1)) / 5 mod (+3) + ((3 - 1) * 5))";
  const char res[] = "1 3 2 * + 2 1 / - 5 / 3+ m 3 1 - 5 * + l";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, log_test_1) {
  char test[] = "1 + log(3 * 2 - (2 / 1))";
  const char res[] = "1 3 2 * 2 1 / - g +";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}

TEST(Math_func, log_test_2) {
  char test[] = "log((1 + 3 * (-2) - (2 / 1)) / 5 mod 3 + ((3 - 1) * 5))";
  const char res[] = "1 3 2- * + 2 1 / - 5 / 3 m 3 1 - 5 * + g";
  s21::PolishNotation pn;
  std::string str;
  s21::Status status = pn.ToPolishNotation(test, str);

  EXPECT_EQ(status, s21::OK);
  EXPECT_STREQ(str.c_str(), res);
}
