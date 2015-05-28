﻿#ifndef FIELD_H
#define FIELD_H

#include <QStringList>
#include "component.h"

/*!
*\brief Класс поля.
*\author Александр Мелихов amelihovv@ya.ru.
*
* Данный класс описывает компонент поля.
*/
class Field : public Component
{
public:
    QStringList modificators; ///< Модификаторы.
    QString type; ///< Тип поля.
    QString name; ///< Имя поля.

    /*! Создает объект поля. */
    Field();
    /*! Создает объект поля на основании переданного положения. */
    Field(const TextLocation &location);
    /*! Создает объект поля на основании переданных модификаторов, типа и имени поля. */
    Field(const QStringList &modificators, const QString &type, const QString &name);
    /*! Создает объект поля на основании переданных модификаторов, типа и имени поля, а также его положения. */
    Field(const QStringList &modificators, const QString &type, const QString &name, const TextLocation &location);

    /*! Сравнивает два поля друг с другом. */
    bool operator==(const Field &field);
};

#endif // FIELD_H