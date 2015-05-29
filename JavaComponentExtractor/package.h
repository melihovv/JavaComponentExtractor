﻿/*!
*\file
*\brief Файл объявления класса компонента пакета.
*\author Александр Мелихов amelihovv@ya.ru.
*
* Данный файл содержит в себе класс компонента пакета.
*/

#ifndef PACKAGE_H
#define PACKAGE_H

#include <QString>
#include "component.h"

/*!
*\brief Класс пакета.
*\author Александр Мелихов amelihovv@ya.ru.
*
* Данный класс описывает компонент пакета.
*/
class Package : public Component
{
public:
    QString packageName; ///< Имя пакета.

    /*! Создает объект пакета. */
    Package();
    /*! Создает объект пакета на основании переданного имени пакета. */
    Package(const QString &packageName);
    /*! Создает объект пакета на основании переданных имени пакета и положения. */
    Package(const QString &packageName, const TextLocation &location);

    /*! Сравнивает два пакета друг с другом. */
    bool operator==(const Package &package);
};

#endif // PACKAGE_H
