#include "main.h"

/**
 * print_unsigned - print unsigned int
 * @list: list of arguments
 * Return: number of unsigned ints
 */

int print_unsigned(va_list list)
{
	char *unsigned_int;
	int size;

	unsigned_int = convert(va_arg(list, unsigned int), 10);


	size = print((unsigned_int != NULL) ? unsigned_int : "NULL");
	return (size);
}
