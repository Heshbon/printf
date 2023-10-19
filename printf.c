#include "main.h"

/**
 * _printf - a function that prints a stdoutput
 * @format: the format specifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output strings)
 */

int _printf(const char *format, ...)
{
	unsigned int a;
	va_list n;
	int b, p = 0;

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
		}
		else if (format[a + 1] == 'c')
		{
			printf_c(va_arg(n, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			p = putstring(va_arg(n, char *));
			a++;
			b += (p - 1);
		}
		else if (format[a + 1] == '%')
		{
			printf_c('%');
		}
		b += 1;
	}
	va_end(n);
	return (b);
}

