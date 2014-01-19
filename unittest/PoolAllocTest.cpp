#include "PoolAllocTest.h"

#include "PoolAlloc.h"

PoolAllocTest::PoolAllocTest()
{
}

void PoolAllocTest::setUp()
{
}

void PoolAllocTest::tearDown()
{
}

void PoolAllocTest::testTAllocation()
{
    const size_t userDataSize = 10;
    const size_t allocationSize = TAllocation::allocationSize(userDataSize);
    CPPUNIT_ASSERT(allocationSize >= userDataSize);

    unsigned char* mem1 = new unsigned char[allocationSize];
    CPPUNIT_ASSERT(TAllocation::offsetAllocation(mem1) >= mem1);
    unsigned char* mem2 = new unsigned char[allocationSize];

    TAllocation alloc1(userDataSize, mem1);
    TAllocation alloc2(userDataSize, mem2, &alloc1);

    alloc1.check();
    alloc2.check();
    alloc1.checkAllocList();
    alloc2.checkAllocList();

    delete [] mem1;
    delete [] mem2;
}
