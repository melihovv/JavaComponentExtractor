#ifndef TESTTREEFUNCS_H
#define TESTTREEFUNCS_H

#include <QObject>
#include <QtTest/QtTest>
#include "../JavaComponentExtractor/treefuncs.h"
#include "declarations.h"

class Test_TreeFuncs : public QObject
{
    Q_OBJECT

private slots:
    void test_findParentsToEnums_data();
    void test_findParentsToEnums();

    void test_findParentsToInterfaces_data();
    void test_findParentsToInterfaces();

    void test_findParentsToClasses_data();
    void test_findParentsToClasses();

    void test_findParentsToFields_data();
    void test_findParentsToFields();

    void test_findParentsToMethods_data();
    void test_findParentsToMethods();
};

#endif // TESTTREEFUNCS_H
