#include <stdio.h>
#include "main.h"


/**
 * _printf - a function that prints a stdoutput
 * @format: the format specifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output strings)
 */

int _printf(const char *format, ...)
{
	int a;
	va_list n;
	int length = 0, y = 0;

	if (!format || (format[0] == '%' && format[1] == '\0') || format == NULL)
	{
		return (-1);
	}
	va_start(n, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			printf_c(format[a]);
			length++;
		}
		else if (format[a + 1] == 'd' || format[a + 1] == 'i')
		{
			y = printf_d_i(va_arg(n, int));
			length += y;
			a++;
		}
		else if (format[a + 1] == 'c')
		{
			printf_c(va_arg(n, int));
			length++;
			a++;
		}
		else if (format[a + 1] == 's')
		{
			y = putstring(va_arg(n, char *));
			length += y;
			a++;
		}
		else if (format[a + 1] == '%')
		{
			printf_c('%');
			length++;
			a++;
		}
	}
	va_end(n);
	return (length);
}
