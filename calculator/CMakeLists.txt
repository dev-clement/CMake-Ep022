add_library(calculator ${CMAKE_SOURCE_DIR}/calculator/src/calculator.cpp)
target_include_directories(calculator PUBLIC ${CMAKE_SOURCE_DIR}/calculator/include)