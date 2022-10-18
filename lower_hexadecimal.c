#include "main.h"
/**
 * print_x - print hexadecimal numbers
 * @list: argument list
 * Return: size
 */

int print_x(va_list list)
{
	char *x_buffer;
	int size;

	x_buffer = convert(va_arg(list, unsigned int), 16);
	size = print((x_buffer != NULL) ? x_buffer : "NULL");

	return (size);
}
