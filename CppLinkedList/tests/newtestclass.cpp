/*
 * File:   newtestclass.cpp
 * Author: yuyc
 *
 * Created on 2015-2-23, 10:20:40
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
    list = new LinkedList<int>();
}

newtestclass::~newtestclass() {
    delete list;
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testInsertInfront() {
    int value = 2;
    bool isOK = list->insertInfront(value);
    CPPUNIT_ASSERT(isOK);
    ListElement<int>*  head = list->getHead();
    CPPUNIT_ASSERT( value == head->getValue() );
}

void newtestclass::testFindNode() {
    int value = 3;
    list->insertInfront(value);    
    ListElement<int>* findme = list->findNode(value);
    CPPUNIT_ASSERT( value == findme->getValue() );
}

void newtestclass::testDelNode() {
    int value = 4;
    list->insertInfront(value);    
    bool isOk = list->delNode(value);
    CPPUNIT_ASSERT(list->findNode(value)==NULL);
    CPPUNIT_ASSERT(isOk);    
}

