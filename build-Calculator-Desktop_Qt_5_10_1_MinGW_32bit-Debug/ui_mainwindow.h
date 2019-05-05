/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *two;
    QPushButton *one;
    QPushButton *three;
    QPushButton *four;
    QPushButton *six;
    QPushButton *five;
    QPushButton *nine;
    QPushButton *eight;
    QPushButton *seven;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *zarb;
    QPushButton *Delete;
    QPushButton *taqsim;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mod;
    QPushButton *sum;
    QPushButton *minus;
    QPushButton *allclear;
    QPushButton *equal;
    QPushButton *zero;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(296, 465);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 1, 295, 71));
        lineEdit->setMinimumSize(QSize(295, 0));
        QFont font;
        font.setPointSize(22);
        lineEdit->setFont(font);
        lineEdit->setClearButtonEnabled(false);
        two = new QPushButton(centralWidget);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(100, 257, 93, 61));
        two->setMinimumSize(QSize(93, 0));
        one = new QPushButton(centralWidget);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(0, 257, 93, 61));
        one->setMinimumSize(QSize(93, 0));
        three = new QPushButton(centralWidget);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(200, 257, 93, 61));
        three->setMinimumSize(QSize(93, 0));
        four = new QPushButton(centralWidget);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(0, 324, 93, 61));
        four->setMinimumSize(QSize(93, 0));
        six = new QPushButton(centralWidget);
        six->setObjectName(QStringLiteral("six"));
        six->setGeometry(QRect(200, 324, 93, 61));
        six->setMinimumSize(QSize(93, 0));
        five = new QPushButton(centralWidget);
        five->setObjectName(QStringLiteral("five"));
        five->setGeometry(QRect(100, 324, 93, 61));
        five->setMinimumSize(QSize(93, 0));
        nine = new QPushButton(centralWidget);
        nine->setObjectName(QStringLiteral("nine"));
        nine->setGeometry(QRect(200, 391, 93, 71));
        nine->setMinimumSize(QSize(93, 0));
        eight = new QPushButton(centralWidget);
        eight->setObjectName(QStringLiteral("eight"));
        eight->setGeometry(QRect(100, 391, 93, 71));
        eight->setMinimumSize(QSize(93, 0));
        seven = new QPushButton(centralWidget);
        seven->setObjectName(QStringLiteral("seven"));
        seven->setGeometry(QRect(0, 391, 93, 71));
        seven->setMinimumSize(QSize(93, 0));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 81, 297, 69));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        zarb = new QPushButton(widget);
        zarb->setObjectName(QStringLiteral("zarb"));
        zarb->setMinimumSize(QSize(93, 0));

        horizontalLayout->addWidget(zarb);

        Delete = new QPushButton(widget);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setMinimumSize(QSize(93, 0));

        horizontalLayout->addWidget(Delete);

        taqsim = new QPushButton(widget);
        taqsim->setObjectName(QStringLiteral("taqsim"));
        taqsim->setMinimumSize(QSize(93, 0));

        horizontalLayout->addWidget(taqsim);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mod = new QPushButton(widget);
        mod->setObjectName(QStringLiteral("mod"));
        mod->setMinimumSize(QSize(93, 0));

        horizontalLayout_2->addWidget(mod);

        sum = new QPushButton(widget);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setMinimumSize(QSize(93, 0));

        horizontalLayout_2->addWidget(sum);

        minus = new QPushButton(widget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setMinimumSize(QSize(93, 0));

        horizontalLayout_2->addWidget(minus);


        verticalLayout->addLayout(horizontalLayout_2);

        allclear = new QPushButton(centralWidget);
        allclear->setObjectName(QStringLiteral("allclear"));
        allclear->setGeometry(QRect(200, 160, 93, 91));
        allclear->setMinimumSize(QSize(93, 0));
        equal = new QPushButton(centralWidget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(0, 160, 93, 91));
        equal->setMinimumSize(QSize(93, 0));
        zero = new QPushButton(centralWidget);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(100, 160, 93, 91));
        zero->setMinimumSize(QSize(93, 0));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        two->setText(QApplication::translate("MainWindow", "2", nullptr));
        one->setText(QApplication::translate("MainWindow", "1", nullptr));
        three->setText(QApplication::translate("MainWindow", "3", nullptr));
        four->setText(QApplication::translate("MainWindow", "4", nullptr));
        six->setText(QApplication::translate("MainWindow", "6", nullptr));
        five->setText(QApplication::translate("MainWindow", "5", nullptr));
        nine->setText(QApplication::translate("MainWindow", "9", nullptr));
        eight->setText(QApplication::translate("MainWindow", "8", nullptr));
        seven->setText(QApplication::translate("MainWindow", "7", nullptr));
        zarb->setText(QApplication::translate("MainWindow", "X", nullptr));
        Delete->setText(QApplication::translate("MainWindow", "DEL", nullptr));
        taqsim->setText(QApplication::translate("MainWindow", "/", nullptr));
        mod->setText(QApplication::translate("MainWindow", "%", nullptr));
        sum->setText(QApplication::translate("MainWindow", "+", nullptr));
        minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        allclear->setText(QApplication::translate("MainWindow", "AC", nullptr));
        equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        zero->setText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
