#include "main.h"

/**
 * printf_string - a function that prints the length of a string
 * @b: the argument value
 * Return: the value of the string length
 */

int printf_string(va_list b)
{
	char *c;
	int a;
	int p;

	c = va_arg(b, char *);
	if (c == NULL)
	{
		c = "(null)";
		p = _strlen(c);
		for (a = 0; a < p; a++)
			_putchar(c[a]);
		return (p);
	}
	else
	{
		p = _strlen(c);
		for (a = 0; a < p; a++)
			_putchar(c[a]);
	}
	return (p);
}
