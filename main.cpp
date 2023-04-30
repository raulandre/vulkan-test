#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
#include "VkRenderer.h"

void initWindow(std::string wName = "LearnVulkan", const int width = 800, const int height = 600);

GLFWwindow *window;
VkRenderer vkRenderer;

int main() {
    initWindow();
    if(vkRenderer.init(window) == EXIT_FAILURE)
        return EXIT_FAILURE;

    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}

void initWindow(std::string wName, const int width, const int height) {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, wName.c_str(), nullptr, nullptr);
}