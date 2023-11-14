#include "main.h"
/**
 * print_string - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
*/
int print_string(char *buffer, va_list args, int *b)
{
	char *str = va_arg(args, char *);

	if (!str)
		return (-1);
	while (*str)
	{
		buffer[*b] = *str;
		(*b)++;
		str++;
	}
	(*b)--;
	return (0);
}
