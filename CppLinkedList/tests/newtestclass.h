/*
 * File:   newtestclass.h
 * Author: yuyc
 *
 * Created on 2015-2-23, 10:20:40
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../LinkedList/LinkedList.h"

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testInsertInfront);
    CPPUNIT_TEST(testFindNode);
    CPPUNIT_TEST(testDelNode);        

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testInsertInfront();
    void testFindNode();
    void testDelNode();
    LinkedList<int>* list;

};

#endif	/* NEWTESTCLASS_H */

