#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * printf_c - a function that prints a character value
 * @val: the character input
 * Return: return 1
 */

int printf_c(va_list val)
{
	char ptr;

	ptr = va_arg(val, int);
	_putchar(ptr);
	return (1);
}
