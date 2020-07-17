#include <assert.h>

#include <GLFW/glfw3.h>

#include <vulkan/vulkan.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>


//#define VK_CHECK(call) do{VkResult result_ = call; assert(result_ == VK_SUCCESS);} while (0);

int main(void)
{
	// Initialize glfw
	glfwInit();
	VkInstanceCreateInfo createInfo{};
	
	VkInstance instance = 0;
	//VK_CHECK(ckCreateInstance(&createInfo, 0, &instance));

	// Create a windowed mode window and its OpenGL context
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(1024, 768, "Freya", NULL, NULL);
	assert(window);


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
		// Swap front and back buffers
		glfwSwapBuffers(window);

		// Poll for and process events
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}