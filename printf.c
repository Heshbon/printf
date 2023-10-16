#include "main.h"

/**
 * _printf - a function that produces output
 * @format: the format specifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	convert_match i[] = {
		{"%c", printf_c}, {"%s", printf_string}, {"%%", printf_37},
	};
	int a = 0, k = 0;
	va_list n;
	int p;

	va_start(n, format);
	if (format == NULL || (format[0] == '%' && format[a] == '\0'))
		return (-1);
	while (format[a] != '\0')
	{
		p = 2;
		while (p >= 0)
		{
			if (i[p].id[0] == format[a] && i[p].id[1] == format[a + 1])
			{
				k = k + i[p].f(n);
				a = a + 2;
			}
			p--;
		}
		_putchar(format[a]);
		a++;
		k++;
	}
	va_end(n);
	return (k);
}
