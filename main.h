#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int printf_c(va_list val);
int putstring(char *b);
int printf_i(va_list b);
int printf_d(va_list b);
int _printf(const char *format, ...);

#endif
