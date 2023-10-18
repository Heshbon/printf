#include "main.h"
#include <stdio.h>
/**
 *printf_i - function that prints int value
 *@b: the argument
 *Return: char value
 */
int printf_i(va_list b)
{
	int a = va_arg(b, int);
	int p, y = a % 10, k;
	int x = 1;
	int j = 1;

	a = a / 10;
	p = a;
	if (y < 0)
	{
		putchar('-');
		p = -p;
		a = -a;
		y = -y;
		x++;
	}
	if (p > 0)
	{
		while  (p / 10 != 0)
		{
			j = j * 10;
			p = p / 10;
		}
		p = a;
		while (p / 10 != 0)
		{
			j = j * 10;
			p = p / 10;
		}
		p = a;
		while (j > 0)
		{
			k = p / j;
			putchar(k + '0');
			p = p - (k * j);
			j = j / 10;
			x++;
		}
	}
	putchar(y + '0');
	return (x);
}
