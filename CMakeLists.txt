cmake_minimum_required(VERSION 3.25)
project(LearnVulkan)

set(CMAKE_CXX_STANDARD 17)

include_directories($ENV{VULKAN_SDK}/include)
link_directories($ENV{VULKAN_SDK}/lib)

add_executable(LearnVulkan main.cpp VkRenderer.cpp VkRenderer.h)
target_link_libraries(LearnVulkan vulkan glfw)