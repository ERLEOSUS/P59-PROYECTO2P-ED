#ifndef USUARIO_H
#define USUARIO_H

#include <QObject>

class usuario
{
public:
    usuario(QString m_clave, QString m_usuario);
    void setm_usuario(QString m_usuario);
    void setm_clave(QString m_clave);
    QString getm_usuario();
    QString getm_clave();

private:
    QString m_usuario;
    QString m_clave;
};

#endif // USUARIO_H
