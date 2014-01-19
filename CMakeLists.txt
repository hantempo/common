cmake_minimum_required (VERSION 2.8)

project (common)

if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif ()

set (THIRDPARTY_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/thirdparty)

add_subdirectory (unittest)

#add_library (glslang SHARED
#)

#target_link_libraries (glslang
    #-rdynamic
    #-Wl,--whole-archive
    #InitializeDll
    #MachineIndependent
    #Preprocessor
    #CodeGen
    #Ossource
    #-Wl,--no-whole-archive
#)

#include_directories (
    #glslang/OSDependent/Linux
#)

#add_executable (glslangValidator
    #StandAlone/StandAlone.cpp)
