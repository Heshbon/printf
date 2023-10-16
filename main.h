#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct format
{
	char *id;
	int (*f)();
}convert_match;

int _putchar(char c);
int printf_c(va_list  b);
int printf_string(va_list b);
int _strlen(char *s);
int _strlen2(const char *s);
int printf_37(void);
int _printf(const char *format, ...);

#endif
