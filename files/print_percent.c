#include "main.h"

/**
 * print_percent - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
 */
int print_percent(char *buffer, va_list args, int *b)
{
	(void)args;
	buffer[*b] = '%';
	return (0);
}
