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
    for(int i=1;i<=5;i++){
        list->insertInFront(i);
    }
}

void newtestclass::tearDown() {
}

void newtestclass::testInsertInfront() {
    ListElement<int>*  cur = list->getHead();
    for(int j=5;j>=1;j--){
        CPPUNIT_ASSERT_EQUAL( j, cur->getValue() );
        cur = cur->getNext();
    }
}

void newtestclass::testFindNode() {
    ListElement<int>* findme = NULL;
    for(int j=5;j>=1;j--){
        findme = list->findNode(j);
        CPPUNIT_ASSERT_EQUAL( j, findme->getValue() );
    }
}

void newtestclass::testDelNode() {  
    for(int j=5;j>=1;j--){
        list->delNodeInFront(j);
        CPPUNIT_ASSERT(list->findNode(j)==NULL);
    }
}

