#include "main.h"

/**
 * printf_c - a function that prints a character
 * @b: the argument value
 * Return: 0
 */

int printf_c(va_list  b)
{
	char c;

	c = va_arg(b, int);
	_putchar(c);
	return (0);
}
