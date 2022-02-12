#include "form.h"
#include "ui_form.h"
#include <QGraphicsScene>

#include <QApplication>
#include <QDebug>
#include <QMessageBox>
Form::Form(QString user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    arbol=NULL;
    user1=user;
    QStringList cabecera = {tr("Nombre"), tr("Nota")};
    ui->outNotas->setColumnCount(2);
    ui->outNotas->setHorizontalHeaderLabels(cabecera);
    ui->outDiagrama->resize(500,320);
    pixmap=QPixmap(ui->outDiagrama->size());
    pixmap.fill(Qt::white);
    m_scene.begin(&pixmap);
    base();
}

Form::~Form()
{
    delete ui;
}

Form::Nodo *Form::crearNodo(QString nota, QString nomEst, Nodo *padre)
{
    Nodo *nuevoNodo = new Nodo();
        nuevoNodo->nota= nota;
        nuevoNodo->nomEst=nomEst;
        nuevoNodo->der=NULL;
        nuevoNodo->izq=NULL;
        nuevoNodo->padre=padre;
        return nuevoNodo;
}

void Form::insertarEstudiante(Nodo *&arbol, QString nota, QString nomEst, Nodo *padre)
{
    if(arbol==NULL){
        Nodo *nuevoNodo= crearNodo(nota,nomEst, padre);
        arbol=nuevoNodo;

    }else{
        QString datoRaiz=arbol->nota+arbol->nomEst;
        if (nota<datoRaiz){
            insertarEstudiante(arbol->izq, nota, nomEst, arbol);

        }else{
            if(nota>datoRaiz){
                insertarEstudiante(arbol->der,nota,nomEst, arbol);

            }
        }
    }
}

void Form::mostrarEstudiante(Nodo *arbol,int contador)
{
    if(arbol==NULL){
           return;
       }else {
           mostrarEstudiante(arbol->der,contador+1);
           barras((arbol->nota).toDouble(),arbol->nomEst);
           qDebug()<<arbol->nomEst<<arbol->nota;
           mostrarEstudiante(arbol->izq,contador+1);

    }
}

void Form::on_btnAgregar_released()
{
    int fila = ui->outNotas->rowCount();
    ui->outNotas->insertRow(fila);
    ui->outNotas->setItem(fila, 0, new QTableWidgetItem(ui->inNombre->text()));
    ui->outNotas->setItem(fila, 1, new QTableWidgetItem(ui->inNota->text()));
    ui->outProm->setText("10");
    insertarEstudiante(arbol,ui->inNota->text(),ui->inNombre->text(),NULL);

}

float Form::promedio()
{
    int filas = ui->outNotas->rowCount();
    int contador=0;
    float suma=0;
    while(contador!=filas){
        suma += ui->outNotas->item(contador,1)->text().toFloat();

        contador++;
    }
    return suma/filas;
}

void Form::base()
{
    lapiz.setColor(Qt::black);
    lapiz.setWidth(3);
    lapiz.setJoinStyle(Qt::MiterJoin);
    m_scene.setPen(lapiz);
    m_scene.drawLine(40,20,40,300);
    m_scene.drawLine(40,300,450,300);
    lapiz.setColor(Qt::gray);
    m_scene.setPen(lapiz);
    QFont font = m_scene.font();
    font.setPixelSize(10);
    m_scene.setFont(font);
    lapiz.setColor(Qt::black);
    m_scene.setPen(lapiz);
    m_scene.drawText(6,25,"10--");
    m_scene.drawText(13,300,"0--");
    ui->outDiagrama->setPixmap(pixmap);

}

void Form::lineaProm()
{
    lapiz.setColor(Qt::black);
    m_scene.setPen(lapiz);
    int pos=-(((ui->outProm->text()).toDouble()*3000)/100);
    if((arbol->nota).toDouble()>10){
        pos+=20;
    }
    m_scene.drawText(8,pos+300,QString::number((ui->outProm->text()).toDouble()));
    m_scene.drawLine(6,pos+300,480,pos+300);
    ui->outDiagrama->setPixmap(pixmap);

}

void Form::barras(double nota,QString nomEst)
{
    int contador=0;
    lapiz.setWidth(1);
    lapiz.setColor(Qt::blue);
    lapiz.setBrush(Qt::blue);
    m_scene.setPen(lapiz);
    int pos=-(nota*3000/100);
    if(nota>=10){
        pos+=20;
    }
    m_scene.drawRect(espacios+5,300,20,pos);
    lapiz.setColor(Qt::black);
    ++contador;
    m_scene.setPen(lapiz);
    m_scene.drawText(espacios,315,nomEst);
    m_scene.drawText(espacios,pos+290,QString::number(nota,'f',2));
    espacios+=50;

}

void Form::on_btnDibujar_released()
{
    int contador=0;
    pixmap.fill(Qt::white);
    base();
    espacios=50;
    mostrarEstudiante(arbol,contador);
    lineaProm();

}

