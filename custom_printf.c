#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *custom_printf - function that handle specifier
 *@format:
 *@...:
 *Return: void
 */
void custom_printf(const char* format, ...)
{
	int value;
	va_list arg;
	va_start(args, format);

	while (format)
	{
		if (format == '%')
		{
			formart++;
			if (*format == 'd' || *format == 'i')
			{
				value = va_arg(args, int);
				printf("%d", value);
			}
			
		
		}
	
	}
	 va_end(args);
}
