#include "main.h"

/**
 * reverse - the function encodes a string.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: 0.
 */
int reverse(char *buffer, va_list args, int *b)
{
	int i, len, j;
	char *str = va_arg(args, char *);
	char *str_copy;

	if (buffer == NULL || str == NULL)
		return (-1);
	len = strlen(str);
	str_copy = malloc(sizeof(char) * (len + 1));
	if (str_copy == NULL)
		return (-1);
	for (i = 0, j = len; i < len; i++, j--)
	{
		str_copy[i] = str[j];
	}
	for (i = 0; i < len; i++, (*b)++)
	{
		buffer[*b] = str_copy[i];
	}
	(*b)--;
	free(str_copy);
	return (0);
}
