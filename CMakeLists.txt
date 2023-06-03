project(hello_world)

cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${CMAKE_PROJECT_NAME}
    hello.cpp
    src/boo.cpp
)

# find fmt and link it.
find_package(fmt REQUIRED)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE fmt::fmt)

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
    src
)
