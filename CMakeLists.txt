cmake_minimum_required(VERSION 3.5)
project(Lista_spesa)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(SOURCE_FILES User.cpp User.h ShoppingList.cpp ShoppingList.h Item.cpp Item.h Observer.cpp Observer.h)
#add_executable(Lista_spesa main.cpp User.cpp User.h ShoppingList.cpp ShoppingList.h Item.cpp Item.h Observer.cpp Observer.h)
add_executable(Lista_spesa main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Lista_spesa core)

