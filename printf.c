#include "main.h"
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
	int length = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(n, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		
			if (*format == 'd' || *format == 'i')
		
			{
				length += printf("%d", (va_arg(n, int)));
			
		
			}
		
			else if (*format == 'c')
		
			{
				putchar(va_arg(n, int));
			
				length++;
			
				a++;
		
			}
		
			else if (*format  == 's')
		
			{
			
				s = va_arg(n, char *);
			
				while (*s)
			
				{
				
					putchar(*s);
				
					a++;
				
					length++;
			
				}

		
			}
		
			else if (*format == '%')
		
			{
				putchar('%');
			
				length++;
			
				a++;
			}
		else
		{
			putchar(*format);
			length++;
		}
		format++;
	}
	
	}

	va_end(n);
	return (length);

}
