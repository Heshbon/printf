#include "main.h"

/**
 * printf_c - a function that prints a character value
 * @s: the character input
 * Return: return 1
 */

int printf_c(char s)
{
	return (write(1, &s, 1));
}
