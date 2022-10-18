#include "main.h"

int is_lowercase(char c);
char *string_to_upper(char *);

/**
 * print_X - print hexadecimal notation in uppercase
 * @list: list of arguments
 * Return: size, number of characters
 */

int print_X(va_list list)
{
	char *x_buffer;
	int size;

	x_buffer = convert(va_arg(list, unsigned int), 16);
	x_buffer = string_to_upper(x_buffer);

	size = print((x_buffer != NULL) ? x_buffer : "NULL");
	return (size);
}
/**
 * is_lowercase - check if argument is lowercase
 * @c: char argument
 * Return: lowercase character
 */

int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * string_to_upper - convert string to uppercase
 * @str: string argument
 * Return: converted string
 */

char *string_to_upper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_lowercase(str[i]))
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

