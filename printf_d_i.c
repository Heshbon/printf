#include "main.h"
#include <stdarg.h>
/**
 *printf_d - function that print decimal
 *@b: the argument
 *Return: char value
 */
int printf_d(va_list b)
{
	int a = va_arg(b, int);
	int p, y = a % 10, k;
	int x = 1;
	int j  = 1;

	a = a / 10;
	p = a;

	if (y < 0)
	{
		_putchar('-');
		p = -p;
		a = -a;
		y = -y;
		x++;
	}
	if (p > 0)
	{
		while (p / 10 != 0)
		{
			j = j * 10;
			p = p / 10;
		}
		p = a;
		while (j > 0)
		{
			k = p / j;
			_putchar(k + '0');
			p = p - (k * j);
			j = j / 10;
			x++;
		}
	}
	_putchar(y + '0');

	return (x);

}
#include "main.h"
/**
 *printf_i - function that print interger
 *@b: arguments
 *Return: char value
 */
int printf_i(va_list b)
{
	int a = va_arg(b, int);
	int p, y = a % 10, k, j = 1;
	int x = 1;

	a = a / 10;
	p = a;

	if (y < 0)
	{
		_putchar('-');
		p = -p;
		a = -a;
		y = -y;
		x++;
	}
	if (p > 0)
	{
		while (p / 10 != 0)
		{
			j = j * 10;
			p = p / 10;
		}
		p = a;
		while (j > 0)
		{
			k = p / j;
			_putchar(k + '0');
			p = p - (k * j);
			j = j / 10;
			x++;

		}
	}
	_putchar(y + '0');
	return (x);


}
