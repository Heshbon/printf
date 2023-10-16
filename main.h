#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_format_c(va_list val);
int print_format_d(va_list arg);
int print_format_i(va_list arg);
int print_format_s(va_list arg);
int _strlen(char *ptr);
int _strlens(const char *ptr);
#endif
