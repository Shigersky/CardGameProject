cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(CardGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

list(APPEND CMAKE_PREFIX_PATH /usr/include/SFML)

add_executable(CardGame main.cpp ${SRC_FILES})

target_link_libraries(CardGame PUBLIC sfml-graphics sfml-audio sfml-window sfml-system)
target_include_directories(CardGame PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)