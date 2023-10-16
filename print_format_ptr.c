#include "main.h"
/**
 *_strlen - function that returns the length of a string
 *@ptr: parameter to checked
 *Return: i
 */
int _strlen(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != 0; i++)
		;
	return (i);
}
/**
 *_strlens - function that returns the length of a string
 *@ptr: parameter to checked
 *Return: i
 */
int _strlens(const char *ptr)
{
	int i;

	for (i = 0 ; ptr[i] != 0; i++)
		;
	return (i);
}
