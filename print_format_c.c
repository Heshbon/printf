#include "main.h"
#include <stdio.h>
/**
 *print_format_c - function that prin characters
 *@val: argument
 *Return: (1)
 */
int print_format_c(va_list val)
{
	char ptr;

	ptr = va_arg(val, int);
	_putchar(ptr);
	return (1);
}
