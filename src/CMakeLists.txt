cmake_minimum_required(VERSION 3.5)

add_executable(untitled1 main.cpp ${MY_INCLUDE_DIR}/shape.h shape.cpp ${MY_INCLUDE_DIR}/circle.h
    circle.cpp ${MY_INCLUDE_DIR}/rectangle.h rectangle.cpp ${MY_INCLUDE_DIR}/triangle.h triangle.cpp)

target_include_directories(untitled1 PUBLIC ${MY_INCLUDE_DIR})
