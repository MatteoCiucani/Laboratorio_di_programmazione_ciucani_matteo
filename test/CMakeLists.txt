cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

#set(TEST_SOURCE_FILES runAllTest.cpp test_shopping_list.cpp)
add_executable(runShoppingTests runAllTest.cpp test_shopping_list.cpp test_user.cpp)
target_link_libraries(runShoppingTests gtest gtest_main core)