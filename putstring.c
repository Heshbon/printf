#include "main.h"

/**
 * putstring - a function that prints a string value
 * @s: the string character
 * Return: character byte
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
