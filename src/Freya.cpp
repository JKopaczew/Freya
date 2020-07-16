#include <assert.h>
#include <stdio.h>
#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    int rc = glfwInit();
    assert(rc);

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1024, 768, "Freya", NULL, NULL);
    assert(window);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}