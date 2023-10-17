#include "main.h"

/**
 * _printf - a function that produces output
 * @format: the format specifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int a;
	va_list n;
	int length = 0;

	if (!format || (format[0] == '%' && format[1] == '\0') || format == NULL)
	{
		return (-1);
	}
	va_start(n, format);
	for (a = 0; format && format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			print_c(format[a]);
			length++;
		}
		else
		{
			a++;
			if (format[a] == 'c')
			{
				print_c(va_arg(n, int));
				length++;
			}
			else if (format[a] == 's')
			{
				length += printf_str(va_arg(n, char *));
			}
			else if (format[a] == '%')
			{
				print_c('%');
				length++;
			}
		}
	}
	va_end(n);
	return (length);
}
