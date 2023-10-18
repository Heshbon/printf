#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - a function that prints a stdoutput
 * @format: the format specifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output strings)
 */
int _printf(const char *format, ...)
{
	char *s;
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
			putchar(*format);
			length++;
		}
		else if (format[a + 1] == 'd' || format[a + 1] == 'i')
		{
			length += printf("d", va_arg(n, int));
			a++;
		}
		else if (format[a + 1] == 'c')
		{	putchar(va_arg(n, int));
			length++;
			a++;
		}
		else if (format[a + 1] == 's')
		{
			s = va_arg(n, char *);
			while (*s)
			{
				putchar(*s);
				a++;
				y++;
			}
		}
		else if (format[a + 1] == '%')
		{	putchar('%');
			length++;
			a++;
		}
	}
	va_end(n);
	return (length);
}
