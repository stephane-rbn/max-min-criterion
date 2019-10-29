# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.14.3)

# Use C11 standard
set(CMAKE_C_STANDARD 90)

# Use warning flags
set(CMAKE_C_FLAGS "-pedantic-errors -Wall -Wextra -Werror")

# Set the project name
project (max-min)

# Add an executable
add_executable(${PROJECT_NAME} main.c)
