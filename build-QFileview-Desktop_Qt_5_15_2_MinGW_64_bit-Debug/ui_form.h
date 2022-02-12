/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTableWidget *outNotas;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *outProm;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *inNombre;
    QLabel *label_2;
    QDoubleSpinBox *inNota;
    QPushButton *btnAgregar;
    QPushButton *btnDibujar;
    QLabel *outDiagrama;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(668, 319);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recursos/lista-de-verificacion.png"), QSize(), QIcon::Normal, QIcon::Off);
        Form->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Form);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(221, 295));
        groupBox_2->setMaximumSize(QSize(259, 301));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        outNotas = new QTableWidget(groupBox_2);
        outNotas->setObjectName(QString::fromUtf8("outNotas"));

        gridLayout->addWidget(outNotas, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(72, 18));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        outProm = new QLabel(groupBox_2);
        outProm->setObjectName(QString::fromUtf8("outProm"));
        outProm->setMinimumSize(QSize(51, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(9);
        outProm->setFont(font1);

        gridLayout->addWidget(outProm, 1, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(206, 301));
        groupBox->setMaximumSize(QSize(206, 301));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        inNombre = new QLineEdit(groupBox);
        inNombre->setObjectName(QString::fromUtf8("inNombre"));

        gridLayout_3->addWidget(inNombre, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        inNota = new QDoubleSpinBox(groupBox);
        inNota->setObjectName(QString::fromUtf8("inNota"));
        inNota->setMaximum(10.000000000000000);

        gridLayout_3->addWidget(inNota, 1, 1, 1, 1);

        btnAgregar = new QPushButton(groupBox);
        btnAgregar->setObjectName(QString::fromUtf8("btnAgregar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Recursos/boton-agregar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAgregar->setIcon(icon1);

        gridLayout_3->addWidget(btnAgregar, 2, 0, 1, 2);

        btnDibujar = new QPushButton(groupBox);
        btnDibujar->setObjectName(QString::fromUtf8("btnDibujar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Recursos/barra-grafica.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDibujar->setIcon(icon2);

        gridLayout_3->addWidget(btnDibujar, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        outDiagrama = new QLabel(Form);
        outDiagrama->setObjectName(QString::fromUtf8("outDiagrama"));

        gridLayout_2->addWidget(outDiagrama, 0, 2, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Notas", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Form", "Notas", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Promedio:", nullptr));
        outProm->setText(QCoreApplication::translate("Form", "0.0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Form", "Ingreso Notas", nullptr));
        label->setText(QCoreApplication::translate("Form", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Nota:", nullptr));
        btnAgregar->setText(QCoreApplication::translate("Form", "Agregar", nullptr));
        btnDibujar->setText(QCoreApplication::translate("Form", "Dibujar", nullptr));
        outDiagrama->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
