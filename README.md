# C++20 CMake VS Code Boilerplate

A minimal boilerplate for C++20 projects using CMake and Visual Studio Code, designed for the Microsoft C/C++ and CMake Tools extensions.

## Prerequisites

- C++ Compiler (MSVC or GCC/G++)
- CMake (v3.10+)
- Ninja (for Linux)
- Visual Studio Code
- VS Code Extensions:
  - [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)
  - [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)

## Getting Started

1.  **Open the project in VS Code.**
2.  **Select a Preset**: Use the Command Palette (`Ctrl+Shift+P`) to run `CMake: Select a configure preset` and choose your configuration (e.g., `Windows Debug` or `Linux Debug`).
3.  **Build**: Run `CMake: Build`.
4.  **Run/Debug**: Use the `CMake: Run` or `CMake: Debug` commands.

## Project Structure

```
.
├── CMakeLists.txt      # Defines the CMake project and executable.
├── CMakePresets.json   # Configure, build, and test presets for VS Code.
├── main.cpp            # Example source file.
└── .vscode/
    └── settings.json   # Recommended VS Code settings.
```