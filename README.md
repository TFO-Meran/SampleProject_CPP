# SampleProject_CPP

A sample project structure for C++ programming with VSCode, CMake, and MinGW, suitable for Linux, Windows, and Mac platforms.

This repository was created specifically for **TFO-MERAN(O)**, a high school in South Tyrol, Italy. It is a **work-in-progress for educational purposes** and does not aim for completeness or absolute perfection. However, contributions and suggestions for improvements are welcome.

Happy programming!

## Prerequisites

To use this project, ensure you have the following installed and properly configured:

1. **VSCode** with the following extensions:
   - C/C++ by Microsoft
   - C/C++ Extension Pack by Microsoft
   - CMake Tools by Microsoft

2. **MinGW** - [Download MinGW](https://www.mingw-w64.org/downloads/)
3. **CMake** - [Download CMake](https://cmake.org/download/)
4. A working **Git** environment

Ensure that MinGW and CMake are accessible through the PATH variable.

## Getting Started

### Starting a New Project

After cloning the sample project, you should rename the project by editing the `CMakeLists.txt` file and changing the first argument in the `project()` call.

Example:

```cmake
project(MyProgram VERSION 1.0)