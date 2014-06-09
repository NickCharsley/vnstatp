/*
 * File:   newtestclass.h
 * Author: nick
 *
 * Created on 09-Jun-2014, 20:37:07
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testNetworkInterface);
    CPPUNIT_TEST(testNetworkInterface2);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testNetworkInterface();
    void testNetworkInterface2();

};

#endif	/* NEWTESTCLASS_H */

