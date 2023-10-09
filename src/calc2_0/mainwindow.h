#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "../controller/s21_calculator_controller.h"
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace s21 {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void UsualInput();
  void ACInput();
  void SpecialInput();
  void OpenBracketInput();
  void EqInput();
  void ShowGraph();
  void ChangeGraph();
  void on_Xminus_valueChanged();
  void on_Yminus_valueChanged();
  void on_Xplus_valueChanged();
  void on_Yplus_valueChanged();

 private:
  Ui::MainWindow *s21;
  int sizeWindowGraph = 0;
  s21::CalculatorController calc;
  QVector<double> x, y;
};
#endif  // MAINWINDOW_H
