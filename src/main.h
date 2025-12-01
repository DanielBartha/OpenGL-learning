#ifndef OPENGL_LEARNING_MAIN_H
#define OPENGL_LEARNING_MAIN_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// shader source (declaration)
extern const char *vertexShaderSource;

// global buffer (declaration)
extern unsigned int VBO;

// function declarations
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

#endif // OPENGL_LEARNING_MAIN_H
