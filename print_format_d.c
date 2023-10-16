#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_format_d(va_list arg)
{
	int val = va_arg(arg, int);
	return val;
}
