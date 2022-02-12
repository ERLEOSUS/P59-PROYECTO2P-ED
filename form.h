#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>

class QPaintEvent;

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QString user, QWidget *parent = nullptr);
    ~Form();
    struct Nodo{
        QString nota;
        QString nomEst;
        Nodo *der;
        Nodo *izq;
        Nodo *padre;
    };
    Nodo *arbol;
    Nodo *crearNodo(QString nota,QString nomEst, Nodo *padre);
    void insertarEstudiante(Nodo *&arbol, QString nota, QString nomEst, Nodo *padre);
    void mostrarEstudiante(Nodo *arbol,int contador);
    QString user1;

private slots:

    void on_btnAgregar_released();

    void on_btnDibujar_released();

private:
    Ui::Form *ui;
    QPainter m_scene;
    QPixmap pixmap;
    QPen lapiz;
    int espacios;
    float promedio();
    void base();
    void lineaProm();
    void barras(double nota,QString nomEst);

};

#endif // FORM_H
