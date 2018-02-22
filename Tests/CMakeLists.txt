cmake_minimum_required(VERSION 2.8.11)
enable_testing()
add_compile_options(-std=c++11)

set (LOGLIBTEST "loglibTEST")



find_package(Qt5 COMPONENTS Core Test REQUIRED) 


set(LOGLIBINCL_TEST ${LOGLIBINCL})
set(LOGLIBSRC_TEST ${LOGLIBSRC} loger_Test.cpp )

include_directories(${Qt5Test_INCLUDE_DIRS})
include_directories(${LOGLIBINCL_TEST})

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#loglibtest
add_executable (${LOGLIBTEST} ${LOGLIBSRC_TEST} ${LOGLIBHDR})
target_link_libraries(${LOGLIBTEST} Bugdevelop ${Qt5Test_LIBRARIES} ${Qt5Core_LIBRARIES} )
add_test(NAME ${LOGLIBTEST} COMMAND ${LOGLIBTEST})

