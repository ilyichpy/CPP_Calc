/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <third_party/qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *Output;
    QPushButton *eq;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *cos;
    QPushButton *zero;
    QPushButton *openBracket;
    QPushButton *two;
    QPushButton *one;
    QPushButton *degree;
    QPushButton *plus;
    QPushButton *nine;
    QPushButton *div;
    QPushButton *dot;
    QPushButton *three;
    QPushButton *ln;
    QPushButton *log;
    QPushButton *eight;
    QPushButton *minus;
    QPushButton *four;
    QPushButton *acos;
    QPushButton *x_;
    QPushButton *seven;
    QPushButton *mod;
    QPushButton *tan;
    QPushButton *mul;
    QPushButton *asin;
    QPushButton *sin;
    QPushButton *sqrt;
    QDoubleSpinBox *spin_zero;
    QPushButton *ac;
    QPushButton *six;
    QPushButton *five;
    QPushButton *atan;
    QPushButton *graph_open;
    QTabWidget *graph_window;
    QWidget *tab1;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *customPlot;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QDoubleSpinBox *Xminus;
    QPushButton *CalcGraph;
    QDoubleSpinBox *Yminus;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *Xplus;
    QDoubleSpinBox *Yplus;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(470, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(470, 480));
        MainWindow->setMaximumSize(QSize(470, 480));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setMouseTracking(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: black;"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        Output = new QLineEdit(centralwidget);
        Output->setObjectName("Output");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Output->sizePolicy().hasHeightForWidth());
        Output->setSizePolicy(sizePolicy1);
        Output->setMinimumSize(QSize(345, 45));
        Output->setMaximumSize(QSize(345, 45));
        QFont font;
        font.setPointSize(22);
        Output->setFont(font);
        Output->setTabletTracking(true);
        Output->setFocusPolicy(Qt::StrongFocus);
        Output->setContextMenuPolicy(Qt::DefaultContextMenu);
        Output->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: rgb(255, 255, 255);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" border-color: black;"));
        Output->setMaxLength(260);
        Output->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Output->setDragEnabled(false);
        Output->setReadOnly(false);
        Output->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Output->setClearButtonEnabled(false);

        horizontalLayout->addWidget(Output);

        eq = new QPushButton(centralwidget);
        eq->setObjectName("eq");
        sizePolicy1.setHeightForWidth(eq->sizePolicy().hasHeightForWidth());
        eq->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(18);
        eq->setFont(font1);
        eq->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"     background-color: rgb(254, 141, 14);\n"
"	color: rgb(225, 225, 225);\n"
" 	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: rgb(224, 170, 44);     \n"
" }"));

        horizontalLayout->addWidget(eq);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(12);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cos = new QPushButton(centralwidget);
        cos->setObjectName("cos");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(20);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy2);
        cos->setMinimumSize(QSize(52, 52));
        cos->setMaximumSize(QSize(52, 52));
        cos->setFont(font1);
        cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(cos, 1, 0, 1, 1);

        zero = new QPushButton(centralwidget);
        zero->setObjectName("zero");
        zero->setFont(font1);
        zero->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(zero, 4, 4, 1, 1);

        openBracket = new QPushButton(centralwidget);
        openBracket->setObjectName("openBracket");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(30);
        sizePolicy3.setVerticalStretch(30);
        sizePolicy3.setHeightForWidth(openBracket->sizePolicy().hasHeightForWidth());
        openBracket->setSizePolicy(sizePolicy3);
        openBracket->setSizeIncrement(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(225, 225, 225, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(50, 45, 43, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        openBracket->setPalette(palette);
        openBracket->setFont(font1);
        openBracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));
        openBracket->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(openBracket, 0, 3, 1, 1);

        two = new QPushButton(centralwidget);
        two->setObjectName("two");
        two->setFont(font1);
        two->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(two, 1, 4, 1, 1);

        one = new QPushButton(centralwidget);
        one->setObjectName("one");
        one->setFont(font1);
        one->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(one, 1, 3, 1, 1);

        degree = new QPushButton(centralwidget);
        degree->setObjectName("degree");
        QFont font2;
        font2.setPointSize(18);
        degree->setFont(font2);
        degree->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(degree, 4, 5, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setFont(font1);
        plus->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"     background-color: rgb(254, 141, 14);\n"
"	color: rgb(225, 225, 225);\n"
" 	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: rgb(224, 170, 44);     \n"
" }"));

        gridLayout_2->addWidget(plus, 1, 6, 1, 1);

        nine = new QPushButton(centralwidget);
        nine->setObjectName("nine");
        nine->setFont(font1);
        nine->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(nine, 3, 5, 1, 1);

        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setFont(font1);
        div->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"     background-color: rgb(254, 141, 14);\n"
"	color: rgb(225, 225, 225);\n"
" 	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: rgb(224, 170, 44);     \n"
" }"));

        gridLayout_2->addWidget(div, 4, 6, 1, 1);

        dot = new QPushButton(centralwidget);
        dot->setObjectName("dot");
        QFont font3;
        font3.setPointSize(40);
        dot->setFont(font3);
        dot->setLayoutDirection(Qt::LeftToRight);
        dot->setAutoFillBackground(false);
        dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));
        dot->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(dot, 4, 3, 1, 1);

        three = new QPushButton(centralwidget);
        three->setObjectName("three");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(three->sizePolicy().hasHeightForWidth());
        three->setSizePolicy(sizePolicy4);
        three->setFont(font1);
        three->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(three, 1, 5, 1, 1);

        ln = new QPushButton(centralwidget);
        ln->setObjectName("ln");
        ln->setFont(font1);
        ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(ln, 2, 2, 1, 1);

        log = new QPushButton(centralwidget);
        log->setObjectName("log");
        log->setFont(font1);
        log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(log, 3, 2, 1, 1);

        eight = new QPushButton(centralwidget);
        eight->setObjectName("eight");
        eight->setFont(font1);
        eight->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(eight, 3, 4, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        minus->setFont(font1);
        minus->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"     background-color: rgb(254, 141, 14);\n"
"	color: rgb(225, 225, 225);\n"
" 	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: rgb(224, 170, 44);     \n"
" }"));

        gridLayout_2->addWidget(minus, 2, 6, 1, 1);

        four = new QPushButton(centralwidget);
        four->setObjectName("four");
        four->setFont(font1);
        four->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(four, 2, 3, 1, 1);

        acos = new QPushButton(centralwidget);
        acos->setObjectName("acos");
        acos->setFont(font1);
        acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(acos, 1, 1, 1, 1);

        x_ = new QPushButton(centralwidget);
        x_->setObjectName("x_");
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(20);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(x_->sizePolicy().hasHeightForWidth());
        x_->setSizePolicy(sizePolicy5);
        x_->setMinimumSize(QSize(52, 52));
        x_->setMaximumSize(QSize(52, 52));
        x_->setSizeIncrement(QSize(0, 0));
        x_->setBaseSize(QSize(0, 0));
        x_->setFont(font1);
        x_->setContextMenuPolicy(Qt::NoContextMenu);
        x_->setLayoutDirection(Qt::LeftToRight);
        x_->setAutoFillBackground(false);
        x_->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));
        x_->setAutoDefault(false);
        x_->setFlat(false);

        gridLayout_2->addWidget(x_, 0, 0, 1, 1);

        seven = new QPushButton(centralwidget);
        seven->setObjectName("seven");
        seven->setFont(font1);
        seven->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(seven, 3, 3, 1, 1);

        mod = new QPushButton(centralwidget);
        mod->setObjectName("mod");
        mod->setFont(font1);
        mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(mod, 4, 2, 1, 1);

        tan = new QPushButton(centralwidget);
        tan->setObjectName("tan");
        tan->setFont(font1);
        tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(tan, 3, 0, 1, 1);

        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setFont(font1);
        mul->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"     background-color: rgb(254, 141, 14);\n"
"	color: rgb(225, 225, 225);\n"
" 	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: rgb(224, 170, 44);     \n"
" }"));

        gridLayout_2->addWidget(mul, 3, 6, 1, 1);

        asin = new QPushButton(centralwidget);
        asin->setObjectName("asin");
        asin->setFont(font1);
        asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(asin, 2, 1, 1, 1);

        sin = new QPushButton(centralwidget);
        sin->setObjectName("sin");
        sizePolicy1.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy1);
        sin->setFont(font1);
        sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(sin, 2, 0, 1, 1);

        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName("sqrt");
        sqrt->setFont(font1);
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(sqrt, 1, 2, 1, 1);

        spin_zero = new QDoubleSpinBox(centralwidget);
        spin_zero->setObjectName("spin_zero");
        sizePolicy1.setHeightForWidth(spin_zero->sizePolicy().hasHeightForWidth());
        spin_zero->setSizePolicy(sizePolicy1);
        spin_zero->setMinimumSize(QSize(105, 35));
        spin_zero->setMaximumSize(QSize(105, 35));
        QFont font4;
        font4.setPointSize(20);
        spin_zero->setFont(font4);
        spin_zero->setLayoutDirection(Qt::LeftToRight);
        spin_zero->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(0, 0, 0);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" border-color: black;\n"
""));
        spin_zero->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_zero->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spin_zero->setMinimum(-1000000.000000000000000);
        spin_zero->setMaximum(1000000.000000000000000);

        gridLayout_2->addWidget(spin_zero, 0, 1, 1, 2);

        ac = new QPushButton(centralwidget);
        ac->setObjectName("ac");
        ac->setFont(font1);
        ac->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(ac, 0, 6, 1, 1);

        six = new QPushButton(centralwidget);
        six->setObjectName("six");
        six->setFont(font1);
        six->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(six, 2, 5, 1, 1);

        five = new QPushButton(centralwidget);
        five->setObjectName("five");
        five->setFont(font1);
        five->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
" 	background-color: rgb(77, 75, 77);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(143, 140, 143); \n"
" }\n"
"\n"
""));

        gridLayout_2->addWidget(five, 2, 4, 1, 1);

        atan = new QPushButton(centralwidget);
        atan->setObjectName("atan");
        atan->setFont(font1);
        atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(50, 45, 43);\n"
"	color: rgb(225, 225, 225);\n"
"	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(77, 75, 77); \n"
" }\n"
""));

        gridLayout_2->addWidget(atan, 3, 1, 1, 1);

        graph_open = new QPushButton(centralwidget);
        graph_open->setObjectName("graph_open");
        sizePolicy1.setHeightForWidth(graph_open->sizePolicy().hasHeightForWidth());
        graph_open->setSizePolicy(sizePolicy1);
        graph_open->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"     background-color: rgb(28, 92, 30);\n"
"	color: rgb(225, 225, 225);\n"
" 	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:25px;\n"
" 	border-color: black;\n"
" 	max-width:50px;\n"
" 	max-height:50px;\n"
" 	min-width:50px;\n"
" 	min-height:50px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: rgb(108, 166, 81);     \n"
" }"));

        gridLayout_2->addWidget(graph_open, 5, 6, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(verticalLayout);

        graph_window = new QTabWidget(centralwidget);
        graph_window->setObjectName("graph_window");
        sizePolicy1.setHeightForWidth(graph_window->sizePolicy().hasHeightForWidth());
        graph_window->setSizePolicy(sizePolicy1);
        graph_window->setMinimumSize(QSize(0, 0));
        graph_window->setMaximumSize(QSize(0, 0));
        graph_window->setStyleSheet(QString::fromUtf8("QTabBar::tab {\n"
"	background-color: rgb(28, 92, 30);\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"	background-color: black;\n"
"}"));
        tab1 = new QWidget();
        tab1->setObjectName("tab1");
        tab1->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(tab1);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 472, 478));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        customPlot = new QCustomPlot(verticalLayoutWidget);
        customPlot->setObjectName("customPlot");
        sizePolicy1.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy1);
        customPlot->setMinimumSize(QSize(470, 300));
        customPlot->setMaximumSize(QSize(470, 300));
        customPlot->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(customPlot);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(40, 10));
        label_4->setMaximumSize(QSize(40, 10));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        Xminus = new QDoubleSpinBox(verticalLayoutWidget);
        Xminus->setObjectName("Xminus");
        sizePolicy1.setHeightForWidth(Xminus->sizePolicy().hasHeightForWidth());
        Xminus->setSizePolicy(sizePolicy1);
        Xminus->setMinimumSize(QSize(100, 25));
        Xminus->setMaximumSize(QSize(100, 25));
        Xminus->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Xminus->setMinimum(-10000.000000000000000);
        Xminus->setMaximum(10000.000000000000000);
        Xminus->setValue(-100.000000000000000);

        gridLayout->addWidget(Xminus, 1, 1, 1, 1);

        CalcGraph = new QPushButton(verticalLayoutWidget);
        CalcGraph->setObjectName("CalcGraph");
        CalcGraph->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"     background-color: rgb(28, 92, 30);\n"
"	color: rgb(225, 225, 225);\n"
" 	border-style: solid;\n"
" 	border-width:1px;\n"
" 	border-radius:30px;\n"
" 	border-color: black;\n"
" 	max-width:200px;\n"
" 	max-height:25px;\n"
" 	min-width:200px;\n"
" 	min-height:25px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: rgb(108, 166, 81);     \n"
" }"));

        gridLayout->addWidget(CalcGraph, 2, 1, 1, 2);

        Yminus = new QDoubleSpinBox(verticalLayoutWidget);
        Yminus->setObjectName("Yminus");
        sizePolicy1.setHeightForWidth(Yminus->sizePolicy().hasHeightForWidth());
        Yminus->setSizePolicy(sizePolicy1);
        Yminus->setMinimumSize(QSize(100, 25));
        Yminus->setMaximumSize(QSize(100, 25));
        Yminus->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Yminus->setMinimum(-100000.000000000000000);
        Yminus->setMaximum(10000.000000000000000);
        Yminus->setValue(-100.000000000000000);

        gridLayout->addWidget(Yminus, 1, 3, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(40, 10));
        label_2->setMaximumSize(QSize(40, 10));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(40, 10));
        label->setMaximumSize(QSize(40, 10));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(40, 10));
        label_3->setMaximumSize(QSize(40, 10));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        Xplus = new QDoubleSpinBox(verticalLayoutWidget);
        Xplus->setObjectName("Xplus");
        sizePolicy1.setHeightForWidth(Xplus->sizePolicy().hasHeightForWidth());
        Xplus->setSizePolicy(sizePolicy1);
        Xplus->setMinimumSize(QSize(100, 25));
        Xplus->setMaximumSize(QSize(100, 25));
        Xplus->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Xplus->setMinimum(-10000.000000000000000);
        Xplus->setMaximum(10000.000000000000000);
        Xplus->setValue(100.000000000000000);

        gridLayout->addWidget(Xplus, 1, 0, 1, 1);

        Yplus = new QDoubleSpinBox(verticalLayoutWidget);
        Yplus->setObjectName("Yplus");
        sizePolicy1.setHeightForWidth(Yplus->sizePolicy().hasHeightForWidth());
        Yplus->setSizePolicy(sizePolicy1);
        Yplus->setMinimumSize(QSize(100, 25));
        Yplus->setMaximumSize(QSize(100, 25));
        Yplus->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Yplus->setMinimum(-10000.000000000000000);
        Yplus->setMaximum(10000.000000000000000);
        Yplus->setValue(100.000000000000000);

        gridLayout->addWidget(Yplus, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        graph_window->addTab(tab1, QString());

        horizontalLayout_2->addWidget(graph_window);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 470, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        x_->setDefault(false);
        graph_window->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        openBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        degree->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(whatsthis)
        dot->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        x_->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        graph_open->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ymin", nullptr));
        CalcGraph->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Xmin", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Xmax", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ymax", nullptr));
        graph_window->setTabText(graph_window->indexOf(tab1), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
