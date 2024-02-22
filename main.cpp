#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

int main( )
{
    glfwInit( );

    glfwWindowHint( GLFW_CLIENT_API, GLFW_NO_API );
    GLFWwindow *window = glfwCreateWindow( 800, 600, "Window", nullptr, nullptr );

    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties( nullptr, &extensionCount, nullptr );
    
    while ( !glfwWindowShouldClose( window ) )
        glfwPollEvents( );

    glfwDestroyWindow( window );
    glfwTerminate( );

    return 0;
}
