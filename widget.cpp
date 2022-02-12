#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QVector>
#include <QDebug>
#include <form.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->txtClave->setEchoMode(QLineEdit::Password);
    QString nombreArchivo="/home/erleosus/Escritorio/usuarios.csv";
    QFile archivo;
    QTextStream io;
    archivo.setFileName(nombreArchivo);
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::information(0,"Aviso",archivo.errorString());
        return;
    };
    QString User, Password;
    io.setDevice(&archivo);
    while(!io.atEnd()){//leer hasta que sea fin de archivo
        auto linea = io.readLine();//lee la linea completa del archivo
        auto valores=linea.split(",");//divide la cadena en dos
        //int numeroColumnas=valores.size();//número de columnas
        //qDebug()<<valores[0]<<" "<<valores[1];
        User=valores[0];
        Password=valores[1];
        m_usuario.append(new usuario(Password,User));
    }
    archivo.close();

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    bool bandera=false;
    for(int i=0; i<m_usuario.size();i++){
        qDebug()<<ui->txtUsuario->text()<<"-"<<ui->txtClave->text();
        if(ui->txtUsuario->text()==m_usuario.at(i)->getm_usuario() && ui->txtClave->text()==decifrar(m_usuario.at(i)->getm_clave())){
            bandera=true;
        }
        qDebug()<<m_usuario.at(i)->getm_usuario()<<"*"<<m_usuario.at(i)->getm_clave();
    }
    if(bandera){
        qDebug()<<"Si";
        Form *ingreso= new Form(ui->txtUsuario->text());
        ingreso->setWindowModality(Qt::ApplicationModal);
        ingreso->show();
    }else{
        qDebug()<<"No";
    }
}

QString Widget::decifrar(QString password)
{
        char alf[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        QString decifrado;
         int j;
         for(int i=0;i<password.length();i++){
          j=0;
          while(j<52){
           if(password.at(i)==alf[j] && (j<23||(j>=26 &&j<49))){
            decifrado.append(alf[j-3]).at(i);
            j=52;
             }
           if(password.at(i)==alf[j] && (j>=23 && j<26)){
              if(password.at(i)=='x'){
               decifrado.append('a').at(i);
            }
            if(password.at(i)=='y'){
               decifrado.append('b').at(i);
            }
            if(password.at(i)=='z'){
               decifrado.append('c').at(i);
            }
            j=52;
           }
           if(password.at(i)==alf[j] && (j>=49 && j<52)){
              if(password.at(i)=='X'){
               decifrado.append('A').at(i);
            }
            if(password.at(i)=='Y'){
              decifrado.append('B').at(i);
            }
            if(password.at(i)=='Z'){
               decifrado.append('C').at(i);
            }
            j=52;
           }
             j++;
          }
         }
         qDebug()<<decifrado;
         return decifrado;

}

