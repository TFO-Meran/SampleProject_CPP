cmake_minimum_required(VERSION 3.10)

project(myProgram VERSION 1.0)

include(CTest)

enable_testing()

file(GLOB_RECURSE PROJECT_SRC 
    ${PROJECT_SOURCE_DIR}/src/*.cpp 
    ${PROJECT_SOURCE_DIR}/src/*.c 
    ${PROJECT_SOURCE_DIR}/src/*.h 
    ${PROJECT_SOURCE_DIR}/include/*.h
    ${PROJECT_SOURCE_DIR}/include/*.c
    ${PROJECT_SOURCE_DIR}/include/*.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SRC})

target_include_directories(${PROJECT_NAME} PRIVATE 
    ${PROJECT_SOURCE_DIR}/src/ 
    ${PROJECT_SOURCE_DIR}/include/)

include(CPack)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

if(WIN32)
    message(STATUS "Configuring for Windows")
    # Windows-spezifische Einstellungen
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
elseif(APPLE)
    message(STATUS "Configuring for macOS")
    # macOS-spezifische Einstellungen
    set(CMAKE_C_COMPILER "/usr/bin/clang")
    set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
elseif(UNIX)
    message(STATUS "Configuring for Linux/Unix")
    # Linux-spezifische Einstellungen
else()
    message(FATAL_ERROR "Unbekannte Plattform")
endif()

