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
	int length, y = 0;

	if (!format || (format[0] == '%' && format[1] == '\0') || format == NULL)
	{
		return (-1);
	}
	va_start(n, format);
	for (a = 0; format && format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			printf_c(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			printf_c(va_arg(n, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			y = putstring(va_arg(n, char *));
			a++;
			length += (y - 1);
		}
		else if (format[a + 1] == '%')
		{
			printf_c('%');
		}
		length += 1;
	}
	va_end(n);
	return (length);
}
