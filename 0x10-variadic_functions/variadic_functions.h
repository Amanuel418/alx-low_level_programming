#ifndef __VARIADIC_H__
#define __VARIADIC_H__
#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif /* MAIN_H */
