#include "main.h"
/**
 * print_x - print hexadecimal numbers
 * @ar_list: argument list
 * Return: size
 */

int print_x(va_list ar_list)
{
	char *x_buffer;
	int size;

	x_buffer = convert(va_arg(ar_list, unsigned int), 16);
	size = print((x_buffer != NULL) ? x_buffer : "NULL");

	return (size);
}
