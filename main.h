#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
* struct op - flag / function object
* @c: flag
* @f: function
*/

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_s(va_list ar_list);
int print_d(va_list ar_list);
int print_i(va_list ar_numlist);
int print_b(va_list binary_list);
int print_unsigned(va_list ar_list);
int print_o(va_list ar_list);
int print_x(va_list ar_list);
int print_X(va_list ar_list);
char *convert(long int num, int base);
int print(char *str);

#endif
