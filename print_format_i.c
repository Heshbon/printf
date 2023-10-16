#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_format_i(va_list arg)
{
        int val = va_arg(arg, int);
	_putchar(val);
        return val;
}
