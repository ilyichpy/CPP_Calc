#include "mainwindow.h"

#include <QMessageBox>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), s21(new Ui::MainWindow) {
  s21->setupUi(this);
  s21->graph_window->setTabText(0, "Graph");
  connect(s21->x_, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->dot, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->zero, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->one, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->two, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->three, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->four, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->five, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->six, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->seven, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->eight, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->nine, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->plus, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->minus, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->div, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->mul, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->degree, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->openBracket, SIGNAL(clicked()), this, SLOT(OpenBracketInput()));
  connect(s21->ac, SIGNAL(clicked()), this, SLOT(ACInput()));
  connect(s21->sin, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->cos, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->tan, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->asin, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->acos, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->atan, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->sqrt, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->ln, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->log, SIGNAL(clicked()), this, SLOT(SpecialInput()));
  connect(s21->mod, SIGNAL(clicked()), this, SLOT(UsualInput()));
  connect(s21->graph_open, SIGNAL(clicked()), this, SLOT(ShowGraph()));
  connect(s21->CalcGraph, SIGNAL(clicked()), this, SLOT(ChangeGraph()));
  connect(s21->eq, SIGNAL(clicked()), this, SLOT(EqInput()));
  connect(s21->Xminus, SIGNAL(valueChanged(double)), this,
          SLOT(on_Xminus_valueChanged()));
  connect(s21->Yminus, SIGNAL(valueChanged(double)), this,
          SLOT(on_Yminus_valueChanged()));
  connect(s21->Xplus, SIGNAL(valueChanged(double)), this,
          SLOT(on_Xplus_valueChanged()));
  connect(s21->Yplus, SIGNAL(valueChanged(double)), this,
          SLOT(on_Yplus_valueChanged()));
}

MainWindow::~MainWindow() { delete s21; }

/**
 * @brief transfer text from button to output line without transform
 */
void MainWindow::UsualInput() {
  QPushButton *button = (QPushButton *)sender();
  s21->Output->insert(button->text());
}

/**
 * @brief clear output
 */
void MainWindow::ACInput() { s21->Output->clear(); }

/**
 * @brief with pushing open bracket button output will get close bracket
 */
void MainWindow::OpenBracketInput() {
  QPushButton *button = (QPushButton *)sender();
  s21->Output->insert(button->text() + ")");
  s21->Output->cursorBackward(0, 1);
}

/**
 * @brief with using special functions like sin or cos we will get open and
 * close brackets
 */
void MainWindow::SpecialInput() {
  QPushButton *button = (QPushButton *)sender();
  s21->Output->insert(button->text() + "()");
  s21->Output->cursorBackward(0, 1);
}

/**
 * @brief when we touch eq button, string from output line goes to controller,
 * where it makes polish string and calculate the answer
 */
void MainWindow::EqInput() {
  double res = 0.0;
  double x_val = s21->spin_zero->value();
  QString qs = s21->Output->text();
  std::string equation = qs.toStdString();
  int err = calc.calculate(equation, x_val, res);
  char resultZero[256];
  std::sprintf(resultZero, "%g", res);
  if (!err) {
    s21->Output->setText(resultZero);
  } else {
    switch (err) {
      case 1:
        QMessageBox::critical(this, "WARNING", "Allocate");
        break;
      case 2:
        QMessageBox::critical(this, "WARNING", "WRONG STRING");
        break;
      case 3:
        QMessageBox::critical(this, "WARNING", "END STACK");
        break;
      case 4:
        QMessageBox::critical(this, "WARNING", "END BRACKETS");
        break;
      case 5:
        QMessageBox::critical(this, "WARNING", "END EQUAL");
        break;
      case 6:
        QMessageBox::critical(this, "WARNING", "END LESS");
        break;
      case 7:
        QMessageBox::critical(this, "WARNING", "DIVISION BY ZERO");
        break;
      case 8:
        QMessageBox::critical(this, "WARNING", "NOT EQUAL");
        break;
      case 9:
        QMessageBox::critical(this, "WARNING", "ERROR");
        break;
      case 10:
        QMessageBox::critical(this, "WARNING", "ERR X VALUE");
        break;
    }
    s21->Output->setText(qs);
  }
}

/**
 * @brief function for resize MainWindow
 */
void MainWindow::ShowGraph() {
  if (!sizeWindowGraph) {
    MainWindow::setMinimumSize(950, 480);
    MainWindow::setMaximumSize(950, 480);
    MainWindow::show();
    s21->graph_window->setMinimumSize(480, 480);
    s21->graph_window->setMaximumSize(480, 480);
    sizeWindowGraph = 1;
  } else {
    MainWindow::setMinimumSize(470, 480);
    MainWindow::setMaximumSize(470, 480);
    s21->graph_window->setMinimumSize(0, 0);
    s21->graph_window->setMaximumSize(0, 0);
    sizeWindowGraph = 0;
  }
}

/**
 * @brief function for draw the lines in graph
 */
void MainWindow::ChangeGraph() {
  int status = 0;
  double x_step = 0.0, res = 0.0;
  double xy_limits[4] = {};
  std::string input = s21->Output->text().toStdString();
  xy_limits[0] = s21->Xminus->value();
  xy_limits[1] = s21->Xplus->value();
  xy_limits[2] = s21->Yminus->value();
  xy_limits[3] = s21->Yplus->value();
  s21->customPlot->xAxis->setRange(-50, 50);
  s21->customPlot->yAxis->setRange(-50, 50);
  int graph_num = 0;
  x_step = (xy_limits[1] - xy_limits[0]) / 10000;
  s21->customPlot->clearGraphs();
  s21->customPlot->setInteraction(QCP::iRangeZoom, true);
  s21->customPlot->setInteraction(QCP::iRangeDrag, true);
  for (int i = 0; i < 10000; ++i) {
    double x_val = xy_limits[0] + double(i * x_step);
    status = calc.calculate(input, x_val, res);
    if (status == 0) {
      if (res > xy_limits[2] && res < xy_limits[3]) {
        x.push_back(xy_limits[0] + x_step * i);
        y.push_back(res);
      } else if (!x.empty()) {
        s21->customPlot->addGraph();
        s21->customPlot->graph(graph_num)->addData(x, y);
        x.clear();
        y.clear();
        ++graph_num;
      }
    }
  }
  s21->customPlot->addGraph();
  if (!x.empty()) {
    s21->customPlot->graph(graph_num)->setData(x, y);
  }
  s21->customPlot->replot();
  x.clear();
  y.clear();
}

void MainWindow::on_Xminus_valueChanged() {
  if (s21->Xminus->value() >= s21->Xplus->value()) {
    s21->Xminus->setValue(s21->Xplus->value() + 1);
  }
}

void MainWindow::on_Yminus_valueChanged() {
  if (s21->Yminus->value() >= s21->Yplus->value()) {
    s21->Yminus->setValue(s21->Yplus->value() - 1);
  }
}

void MainWindow::on_Xplus_valueChanged() {
  if (s21->Xplus->value() <= s21->Xminus->value()) {
    s21->Xplus->setValue(s21->Xminus->value() + 1);
  }
}

void MainWindow::on_Yplus_valueChanged() {
  if (s21->Yplus->value() <= s21->Yminus->value()) {
    s21->Yplus->setValue(s21->Yminus->value() - 1);
  }
}
