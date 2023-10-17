#include "main.h"
#include <stdlib.h>

/**
 * printf_d_i - a function that prints an integer value
 * @val: the integer input
 * Return: return number of chars printed
 */

int int_len_helper(unsigned int x);
int get_int_len(int x);

int printf_d_i(int val)
{
	int i = 2;
	int int_len;
	char *int_str;

	if (val < 0)
	{
		i += 1;
	}

	if (val == 0)
	{
		int_str = malloc(2 * sizeof(char));
	}
	else
	{
		int_len = get_int_len(val);
		int_str = malloc(int_len * sizeof(char));
	}

	i = 0;
	int_len = 0;
	while (int_str[i] != '\0')
	{
		_putchar(int_str[i]);
		i++;
		int_len++;
	}
	return (int_len);
}

/**
 * int_len_helper - helper function to determine the length of int
 * @x: the integer input
 * Return:  of chars printed
 */

int int_len_helper(unsigned int x)
{
	if (x >= 1000000000) return 10;
	if (x >= 100000000)  return 9;
	if (x >= 10000000)   return 8;
	if (x >= 1000000)    return 7;
	if (x >= 100000)     return 6;
	if (x >= 10000)      return 5;
	if (x >= 1000)       return 4;
	if (x >= 100)        return 3;
	if (x >= 10)         return 2;
	return 1;
}

/**
 * printf_d_i - a function that prints an integer value
 * @val: the integer input
 * Return: return number of chars printed
 */

int get_int_len(int x) 
{
    return x < 0 ? int_len_helper(-x) + 1 : int_len_helper(x);
}

