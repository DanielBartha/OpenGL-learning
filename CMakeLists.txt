cmake_minimum_required(VERSION 3.15)
project(Project)

set(CMAKE_CXX_STANDARD 20)

# Find system-installed GLFW and OpenGL
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

# Add glad.c explicitly
add_executable(Project
        main.cpp
        src/glad.c
        src/main.h
)

# Point compiler to the include/ directory that holds glad/ and KHR/
target_include_directories(Project PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

# Link with GLFW and OpenGL
target_link_libraries(Project
        glfw
        OpenGL::GL
)

include_directories(${PROJECT_SOURCE_DIR}/include)
