cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(DryBlood VERSION 0.1.0)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR})

find_package(GLFW3 REQUIRED)
include_directories(${PROJECT_NAME} PRIVATE ${GLFW3_INCLUDE_DIR})

file(GLOB SOURCES
    "${SOURCE_DIR}/*.h"
    "${SOURCE_DIR}/*.cpp"
)

add_executable(${PROJECT_NAME} src/Application/Application.cpp)

target_link_libraries(${PROJECT_NAME} ${GLFW3_LIBRARY})

include_directories(${PROJECT_NAME} PRIVATE src/)