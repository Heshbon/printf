#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: String representation of the format for output
 * @...: Other parameters
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	char char_format;
	int result = 0;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			char_format = format[i + 1];
			switch (char_format)
			{
				case 'd':
					result = print_format_d(arg);
					break;
				case 'i':
					result = print_format_i(arg);
					break;
				case 'c':
					result = print_format_c(arg);
					break;
				case 's':
					result = print_format_s(arg);
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (result);
}
