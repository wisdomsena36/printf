#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - It writes the character to stdout
 * @c: The character to print
 *
 * Return: 1.
 */
int print_char(va_list c)
{
	unsigned char _char;

	_char = va_arg(c, int);
	_putchar(_char);
	return (1);
}
/**
 * print_percentage - %
 *
 * Return: 1.
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}
