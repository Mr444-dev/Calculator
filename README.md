# Calculator

A small interactive command-line calculator written in C++20. It supports addition, subtraction, multiplication, and division.

## Requirements

- CMake 3.31 or newer
- A C++20-compatible compiler

## Build

From the repository root, configure and build the project with CMake:

```sh
cmake -S . -B build
cmake --build build --config Release
```

Run the generated `Calculator` executable from the build output directory. Multi-configuration generators usually place it in a configuration subdirectory such as `Release`; on Windows, the executable is named `Calculator.exe`.

## Use

Enter a first number, one of `+`, `-`, `*`, or `/`, and a second number. Invalid numbers and unsupported operators are reported and prompted again. Division by zero prints an error and exits with a non-zero status.

Example:

```text
Enter first number: 8
Enter an arithmetic operator (+, -, *, /): /
Enter second number: 2
Result: 8 / 2 = 4
```
