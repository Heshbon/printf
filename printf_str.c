#include "main.h"
/**
 * _strlen - a function that prints a string value
 * @s: the string pointer
 * Return: 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);
}
/**
 * _strlen2 - a function that prints a string value
 * @s: the string pointer
 * Return: 0
 */

int _strlen2(const char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);
}
