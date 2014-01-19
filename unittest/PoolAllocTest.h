#ifndef __POOL_ALLOC_TESTS_INCLUDED__
#define __POOL_ALLOC_TESTS_INCLUDED__

#include <cppunit/extensions/HelperMacros.h>

class PoolAllocTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(PoolAllocTest);

    CPPUNIT_TEST(testTAllocation);
	
    CPPUNIT_TEST_SUITE_END();

public:
    PoolAllocTest();
    
    virtual void setUp();
    virtual void tearDown();

    void testTAllocation();
};

#endif
