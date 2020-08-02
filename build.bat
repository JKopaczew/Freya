@echo off

IF NOT EXIST build mkdir build
IF NOT EXIST bin mkdir bin

IF NOT "%clset%"=="64" call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"



set addlib=-LIBPATH:%VULKAN_SDK%\Lib


set addinc=-I %VULKAN_SDK%\Include -I ..\extern\glfw\include -I ..\extern\glm

set opt=-Zi -std:c++17

set libs=user32.lib gdi32.lib

set src=..\src\Vulkan-Renderer.cpp



pushd build
cl %addinc% %opt% %src% %libs% -Fecustom_window
popd