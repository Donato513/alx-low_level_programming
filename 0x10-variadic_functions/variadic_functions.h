#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_char(va_list arguments);
void print_int(va_list arguments);
void print_float(va_list arguments);
void print_string(va_list arguments);


#endif /* _VARIADIC_FUNCTIONS */
