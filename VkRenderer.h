#ifndef LEARNVULKAN_VKRENDERER_H
#define LEARNVULKAN_VKRENDERER_H
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>

class VkRenderer {
private:
    GLFWwindow *window;
    VkInstance instance;
public:
    int init(GLFWwindow *w);

private:
    void createInstance();
    bool checkInstanceExtensionSupport(std::vector<const char*> &extensions);
};

#endif //LEARNVULKAN_VKRENDERER_H