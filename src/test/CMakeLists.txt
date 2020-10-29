cmake_minimum_required(VERSION 3.14)

project(test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB Headers *.h)
file(GLOB Cpps *.cpp *.cxx)
file(GLOB Swig *.i)
add_library(${PROJECT_NAME} SHARED
    ${Headers}
    ${Cpps}
    ${Swig}
)

# 前缀
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "_")
# 后缀名
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".pyd")

target_compile_definitions(${PROJECT_NAME} PRIVATE TEST_LIBRARY)
