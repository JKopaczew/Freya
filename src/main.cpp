#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main(void)
{
    int W = 640;
    int H = 480;
    const char *Title= "Freya";

    GLFWwindow* window;
    
    // Initialize the library
    if (!glfwInit())
        return -1;

    // Check if Vulkan is supported, will return 1 to console on success
    std::cout << glfwVulkanSupported() << std::endl;

    // Create a windowed mode window and its OpenGL context
    window = glfwCreateWindow(W, H, Title, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window))
    {
        // Render here
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}