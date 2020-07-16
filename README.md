# Freya

A Vulkan rendering engine written from the ground up. It is not intended for release or comercial use, this is just a hobby project to learn Vulkan and graphics rendering.

## Purpose

Draw pretty 3d objects on the screen supper efficiently. I am just one person working on this project so there are no plans for any super complex functionality. 

## Support

Currently only targets Windows x64 devices with modern vulkan drivers 

## Prerequisites

The renderer is written using Visual Studio 2019 cummunity and Vulkan SDK (must be added to PATH).

## Building

In order to build and run the project, clone this repository using --recursive flag as git submodules are utilised

	git clone https://github.com/jkopaczew/freya.git --recursive

I use Vulkan SDK version 1.2.141.2

## Road-map

### Support

   * Support Windows x86 (if time permits)
   * Linux compatibility
   * Mac compatibility (maybe)

### Functinality

   * Parse obj files and render them 

