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
	int specifier_len = strlen(str);
	int j;

	if (!buffer)
		return (-1);
	for (j = 0; j < specifier_len; j++, (*b)++)
	{
		buffer[*b] = str[j];
	}
	(*b)--;
	return (0);
}
