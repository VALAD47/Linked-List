cmake_minimum_required(VERSION 3.14)
project(llist)

add_library(llist src/llist.c)

add_executable(llist_test src/test.c)
target_link_libraries(llist_test llist)

add_executable(llist_testcpp src/testcpp.cpp)
target_link_libraries(llist_testcpp llist)