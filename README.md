# 0x11. C - Printf

![C](https://img.shields.io/badge/language-C-blue.svg)

## Description

This repository contains the implementation of a custom `printf` function in the C programming language. The `printf` function is a standard library function in C that is used to print formatted output to the console. Our custom `printf` function mimics the behavior of the original `printf` and provides support for various format specifiers.

## Function Prototype

The prototype of our custom `printf` function is:

```c
int _printf(const char *format, ...);
```

## Format Specifiers

Our `printf` implementation supports the following format specifiers:

- `%c`: Print a single character.
- `%s`: Print a string of characters.
- `%d` or `%i`: Print a signed decimal integer.
- `%b`: Print an unsigned binary number.
- `%u`: Print an unsigned decimal number.
- `%o`: Print an unsigned octal number.
- `%x`: Print an unsigned hexadecimal number (lowercase).
- `%X`: Print an unsigned hexadecimal number (uppercase).
- `%r`: Print a string in reverse.
- `%R`: Print a string using ROT13 encryption.

## Usage

To use the custom `printf` function, simply include the `main.h` header file in your C program and call `_printf` with the desired format string and arguments. Here's an example:

```c
#include "main.h"

int main(void)
{
    int number = 42;
    char *message = "Hello, printf!";
    
    _printf("This is a number: %d\n", number);
    _printf("This is a string: %s\n", message);
    
    return (0);
}
```

## Compilation

To compile the code, you can use your favorite C compiler. For example:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o my_printf
```

## Authors

Wisdom E. Sena
Mabel Zigah
