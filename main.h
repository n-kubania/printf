#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

int _putchar(int value, int count);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_integer(va_list ars);
int print_decimal(va_list args);
int (*specifier_selector(char specifier))(va_list);
int print_char(va_list args);
#endif

