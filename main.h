#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
void printf_c(char c);
int putstring(char *s);
int printf_i(va_list y);
int _printf(const char *format, ...);

#endif
