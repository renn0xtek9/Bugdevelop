cmake_minimum_required(VERSION 3.1)
add_compile_options(-std=c++11)
project (Bugdevelop)
#src
file(GLOB SRC "src/*.cpp")
file(GLOB HDR "include/*.hpp")

set (LOGLIBSRC ${SRC})
set (LOGLIBHDR ${HDR})
set (LOGLIBINCL ${CMAKE_CURRENT_SOURCE_DIR}/include )

include_directories(${LOGLIBINCL})
add_library(${PROJECT_NAME} STATIC ${LOGLIBSRC} ${LOGLIBHDR})
target_link_libraries(${PROJECT_NAME}  ${Qt5Core_LIBRARIES})


add_subdirectory(Tests)



set (LOGLIBINCL ${LOGLIBINCL} PARENT_SCOPE)
set (LOGLIBHDR ${LOGLIBHDR} PARENT_SCOPE)

# message(STATUS "bugdevelop: LOGLIBINCL------------------------------------------------\n" "${LOGLIBINCL}")
# message(STATUS "bugdevelop: LOGLIBHDR------------------------------------------------\n" "${LOGLIBHDR}")

