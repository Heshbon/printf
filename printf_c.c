#include "main.h"

/**
 * printf_c - a function that prints a character value
 * @b: the argument value
 * Return: 1
 */

int printf_c(char b)
{
	return (write(1, &b, 1));
}
