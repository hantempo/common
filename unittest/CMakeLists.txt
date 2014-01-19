find_library(CPPUNITLIB cppunit PATHS ${THIRDPARTY_INCLUDE_DIRS}/cppunit/lib/gcc-x86_64-linux)

include_directories(
    ${THIRDPARTY_INCLUDE_DIRS}/cppunit/include
)

add_executable(unittest
    testharness.cpp
    testhelper.cpp

    PoolAllocTest.cpp
)

target_link_libraries(unittest
    ${CPPUNITLIB}
    common
)
