/********************************************************************************
** Form generated from reading UI file 'WithdrawlDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWLDLG_H
#define UI_WITHDRAWLDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WithdrawlDlg
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_Exit_2;
    QLineEdit *lineEdit_RMB;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *WithdrawlDlg)
    {
        if (WithdrawlDlg->objectName().isEmpty())
            WithdrawlDlg->setObjectName(QStringLiteral("WithdrawlDlg"));
        WithdrawlDlg->resize(640, 480);
        WithdrawlDlg->setStyleSheet(QLatin1String("background-color: rgb(57, 54, 61);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.9, fx:0.5, fy:0.5, stop:0.0113636 rgba(85, 85, 85, 255), stop:0.403409 rgba(49, 49, 49, 255));"));
        WithdrawlDlg->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        label_2 = new QLabel(WithdrawlDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 80, 641, 101));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(WithdrawlDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 641, 51));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 118, 209);\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        pushButton_Exit = new QPushButton(WithdrawlDlg);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(20, 420, 171, 51));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Exit_2 = new QPushButton(WithdrawlDlg);
        pushButton_Exit_2->setObjectName(QStringLiteral("pushButton_Exit_2"));
        pushButton_Exit_2->setGeometry(QRect(450, 420, 171, 51));
        pushButton_Exit_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        lineEdit_RMB = new QLineEdit(WithdrawlDlg);
        lineEdit_RMB->setObjectName(QStringLiteral("lineEdit_RMB"));
        lineEdit_RMB->setGeometry(QRect(160, 190, 311, 51));
        lineEdit_RMB->setLayoutDirection(Qt::LeftToRight);
        lineEdit_RMB->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        lineEdit_RMB->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        lineEdit_RMB->setMaxLength(6);
        lineEdit_RMB->setCursorPosition(0);
        lineEdit_RMB->setAlignment(Qt::AlignCenter);
        lineEdit_RMB->setClearButtonEnabled(false);
        pushButton_ok = new QPushButton(WithdrawlDlg);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(450, 280, 171, 51));
        pushButton_ok->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        QWidget::setTabOrder(lineEdit_RMB, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_Exit_2);
        QWidget::setTabOrder(pushButton_Exit_2, pushButton_Exit);

        retranslateUi(WithdrawlDlg);

        QMetaObject::connectSlotsByName(WithdrawlDlg);
    } // setupUi

    void retranslateUi(QDialog *WithdrawlDlg)
    {
        WithdrawlDlg->setWindowTitle(QApplication::translate("WithdrawlDlg", "Dialog", 0));
        label_2->setText(QApplication::translate("WithdrawlDlg", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\346\202\250\350\246\201\345\217\226\346\254\276\347\232\204\351\207\221\351\242\235</p><p><span style=\" font-size:16pt;\">\345\217\226\346\254\276\351\207\221\351\242\235\345\277\205\351\241\273\346\230\257100\347\232\204\346\225\264\346\225\260\345\200\215</span></p></body></html>", 0));
        label->setText(QApplication::translate("WithdrawlDlg", "   PZHU\342\200\224\342\200\224ATM                                      \345\256\242\346\234\215\347\203\255\347\272\277 | 8888888", 0));
        pushButton_Exit->setText(QApplication::translate("WithdrawlDlg", "\351\200\200\345\215\241", 0));
        pushButton_Exit_2->setText(QApplication::translate("WithdrawlDlg", "\350\277\224\345\233\236", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_RMB->setToolTip(QApplication::translate("WithdrawlDlg", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_ok->setText(QApplication::translate("WithdrawlDlg", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class WithdrawlDlg: public Ui_WithdrawlDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWLDLG_H
