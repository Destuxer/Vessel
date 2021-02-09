cmake_minimum_required(VERSION 3.19.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Vessel VERSION 0.1.0)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR})

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

find_package(OpenGL REQUIRED)
include_directories(${PROJECT_NAME} PRIVATE ${OPENGL_INCLUDE_DIR})

file(GLOB SOURCES
    "${SOURCE_DIR}/*.h"
    "${SOURCE_DIR}/*.cpp"
)
add_subdirectory(glfw/)
add_subdirectory(glad/)
add_subdirectory(imgui/)

add_library(${PROJECT_NAME} STATIC src/Core/Application.cpp src/Core/Layer.cpp src/Core/LayerStack.cpp src/Core/Log.cpp src/ImGui/ImGuiBuild.cpp src/ImGui/ImGuiLayer.cpp src/Platform/WindowsWindow.cpp src/Platform/PlatformInput.cpp)
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} Glad imgui glfw)
include_directories(${PROJECT_NAME} PRIVATE src/ PRIVATE include/ PRIVATE imgui/ PRIVATE glm/)
target_precompile_headers(${PROJECT_NAME} PUBLIC src/pch.h)

add_executable(AppTest Sandbox/AppTest)
target_link_libraries(AppTest ${PROJECT_NAME})

add_definitions(-DGLFW_INCLUDE_NONE)
