#include <cppunit/config/SourcePrefix.h>

#include "PoolAllocTest.h"

#define TEST(name) \
/* Registers the fixture into the "all tests" registry */ \
/* Cannot use CPPUNIT_TEST_SUITE_REGISTRATION due to name collision with */ \
/* Variable defined by CPPUNIT_TEST_SUITE_REGISTRATION */ \
static CPPUNIT_NS::AutoRegisterSuite<name> autoregister##name;\
/* Registers the fixture into a registry containing this test suite only */ \
CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(name, #name);

TEST(PoolAllocTest)
