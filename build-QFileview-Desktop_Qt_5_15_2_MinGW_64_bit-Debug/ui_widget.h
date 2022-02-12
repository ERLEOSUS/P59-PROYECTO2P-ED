/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *lblUsuario;
    QLabel *lblContrasea;
    QLineEdit *txtUsuario;
    QLineEdit *txtClave;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(386, 154);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recursos/loginmanager_10029.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        lblUsuario = new QLabel(Widget);
        lblUsuario->setObjectName(QString::fromUtf8("lblUsuario"));
        lblUsuario->setGeometry(QRect(70, 30, 47, 13));
        lblContrasea = new QLabel(Widget);
        lblContrasea->setObjectName(QString::fromUtf8("lblContrasea"));
        lblContrasea->setGeometry(QRect(60, 60, 61, 16));
        txtUsuario = new QLineEdit(Widget);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));
        txtUsuario->setGeometry(QRect(130, 30, 191, 20));
        txtClave = new QLineEdit(Widget);
        txtClave->setObjectName(QString::fromUtf8("txtClave"));
        txtClave->setGeometry(QRect(130, 60, 191, 20));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 100, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Recursos/verificar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Login", nullptr));
        lblUsuario->setText(QCoreApplication::translate("Widget", "Usuario", nullptr));
        lblContrasea->setText(QCoreApplication::translate("Widget", "Contrase\303\261a", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Verificar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
