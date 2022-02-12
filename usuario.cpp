#include "usuario.h"

usuario::usuario(QString m_clave, QString m_usuario)
{
    this->m_clave=m_clave;
    this->m_usuario=m_usuario;
}

void usuario::setm_usuario(QString m_usuario)
{
    this->m_usuario=m_usuario;
}

void usuario::setm_clave(QString m_clave)
{
    this->m_clave=m_clave;
}

QString usuario::getm_usuario()
{
    return this->m_usuario;
}

QString usuario::getm_clave()
{
    return this->m_clave;
}
