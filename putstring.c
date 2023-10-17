#include "main.h"

/**
 * putstring - a function that prints string value
 * @b: the string value
 * Return: the character value
 */

int putstring(char *b)
{
	int a = 0;

	if (b)
	{
		for (a = 0; b[a] != '\0'; a++)
		{
			printf_c(b[a]);
		}
	}
	return (a);
}
