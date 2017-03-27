/********************************************************************************
** Form generated from reading UI file 'mainUI.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guiDlg
{
public:
    QDial *giro;
    QPushButton *down;
    QPushButton *up;
    QPushButton *left;
    QPushButton *right;
    QPushButton *prueba;

    void setupUi(QWidget *guiDlg)
    {
        if (guiDlg->objectName().isEmpty())
            guiDlg->setObjectName(QString::fromUtf8("guiDlg"));
        guiDlg->resize(400, 300);
        giro = new QDial(guiDlg);
        giro->setObjectName(QString::fromUtf8("giro"));
        giro->setGeometry(QRect(290, 180, 101, 111));
        down = new QPushButton(guiDlg);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(150, 200, 61, 51));
        up = new QPushButton(guiDlg);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(150, 70, 61, 51));
        left = new QPushButton(guiDlg);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(70, 130, 61, 51));
        right = new QPushButton(guiDlg);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(220, 130, 61, 51));
        prueba = new QPushButton(guiDlg);
        prueba->setObjectName(QString::fromUtf8("prueba"));
        prueba->setGeometry(QRect(10, 30, 85, 27));
        QWidget::setTabOrder(left, up);
        QWidget::setTabOrder(up, down);
        QWidget::setTabOrder(down, right);
        QWidget::setTabOrder(right, giro);
        QWidget::setTabOrder(giro, prueba);

        retranslateUi(guiDlg);

        QMetaObject::connectSlotsByName(guiDlg);
    } // setupUi

    void retranslateUi(QWidget *guiDlg)
    {
        guiDlg->setWindowTitle(QApplication::translate("guiDlg", "fakeHumanAgent", 0, QApplication::UnicodeUTF8));
        down->setText(QApplication::translate("guiDlg", "DOWN", 0, QApplication::UnicodeUTF8));
        up->setText(QApplication::translate("guiDlg", "UP", 0, QApplication::UnicodeUTF8));
        left->setText(QApplication::translate("guiDlg", "LEFT", 0, QApplication::UnicodeUTF8));
        right->setText(QApplication::translate("guiDlg", "RIGHT", 0, QApplication::UnicodeUTF8));
        prueba->setText(QApplication::translate("guiDlg", "PRUEBA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class guiDlg: public Ui_guiDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
