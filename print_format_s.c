#include "main.h"
#include <stdio.h>
/**
 *print_format_s - function that prin characters
 *@val: argument
 *Return: count
 */
int print_format_s(va_list val)
{
	char *ptr;
	int i;
	int count;

	ptr = va_arg(val, char  *);
	if (ptr == NULL)
	{
		ptr = "(NULL)";
		count = _strlen(ptr);
		for (i = 0; i < count; i++)
			_putchar(ptr[i]);
		return (count);
	}
	else
	{

		count = _strlen(ptr);
		for (i = 0; i < count; i++)
			_putchar(ptr[i]);
	return (count);
	}
}
