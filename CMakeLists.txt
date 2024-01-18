cmake_minimum_required(VERSION 3.10)
project("Stack")

set(CMAKE_EXPORT_COMPILE_COMMANDS on)

# HashTable
file(GLOB_RECURSE SRC_FILES "src/*.cpp")
file(GLOB_RECURSE HPP_FILES "src/*.hpp")
file(GLOB_RECURSE HDR_FILES "src/*.h")

add_executable( Stack ${SRC_FILES} ${HPP_FILES} ${HDR_FILES})

target_include_directories(Stack PRIVATE lib/src)