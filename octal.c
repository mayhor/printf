#include "main.h"
/**
 * print_o - print octal notation
 * @list: list of arguments
 * Return: number of characters
 */

int print_o(va_list ar_list)
{
	char *o_buffer;
	int size;

	o_buffer = convert(va_arg(ar_list, unsigned int), 8);

	size = print((o_buffer != NULL) ? o_buffer : "NULL");
	return (size);
}
