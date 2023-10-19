#include "main.h"

/**
 * putstring - a function that prints a string value
 * @s: the string to be printed
 * Return: the length of the string
 */

int putstring(char *s)
{
	int a = 0;

	if (s)
	{
		for (a = 0; s[a] != '\0'; a++)
		{
			printf_c(s[a]);
		}
	}
	return (a);
}
