cmake_minimum_required(VERSION 3.16)
project(Freya)

set(CMAKE_CXX_STANDARD 20)

find_package(Vulkan REQUIRED FATAL_ERROR)

set( GLFW_BUILD_DOCS OFF CACHE INTERNAL "" )
set( GLFW_BUILD_TESTS OFF CACHE INTERNAL "" )
set( GLFW_BUILD_EXAMPLES OFF CACHE INTERNAL "" )
add_subdirectory( deps/GLFW )

find_package(OpenGL REQUIRED)

include_directories( "include" )

add_executable("${PROJECT_NAME}" "src/main.cpp")
target_compile_definitions(${PROJECT_NAME} PRIVATE VK_USE_PLATFORM_WIN32_KHR)
target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE Vulkan::Vulkan
        PRIVATE glfw
        PRIVATE user32
        PRIVATE gdi32
        PRIVATE opengl32
)