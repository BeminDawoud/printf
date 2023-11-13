#include "main.h"

/**
 * print_char - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
 */
int print_char(char *buffer, va_list args, int *b)
{
	char character = va_arg(args, int);

	buffer[*b] = character;
	(*b)++;
	return (0);
}
