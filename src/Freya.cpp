#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>


#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>
#include <stdexcept>
#include <assert.h>

class HelloTriangleApp {
public:
	void run()
	{
		initVulkan();
		mainLoop();
		cleanup();
	}

private:
	void initVulkan()
	{

	}

	void mainLoop()
	{

	}

	void cleanup()
	{

	}
};

int main()
{

	//GLFW CODE
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