/*
 * File:   newtestclass.cpp
 * Author: nick
 *
 * Created on 09-Jun-2014, 20:37:07
 */

#include "newtestclass.h"
#include "../NetworkInterface.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testNetworkInterface() {
    NetworkInterface networkInterface();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass::testNetworkInterface2() {
    const NetworkInterface& orig;
    NetworkInterface networkInterface(orig);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

