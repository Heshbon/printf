#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", 3, 5);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "~");

	return len;
}
