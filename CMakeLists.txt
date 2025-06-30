#[==[
    . Introducing testing. Using the google test reference.
#]==]

cmake_minimum_required(VERSION 3.21)

project(Dependencies)

enable_testing()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(calculator)

add_executable(rooster main.cpp)
target_link_libraries(rooster PUBLIC calculator)

add_subdirectory(test)
