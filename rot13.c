#include "main.h"

/**
 * rot13 - the function encodes a string.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: 0.
 */
int rot13(char *buffer, va_list args, int *b)
{
	int i, len;
	char *str = va_arg(args, char *);
	char *str_copy;

	if (!buffer || !str)
		return (-1);
	len = strlen(str);
	str_copy = malloc(sizeof(char) * (len + 1));
	if (str_copy == NULL)
		return (-1);
	strcpy(str_copy, str);
	for (i = 0; i < len; i++)
	{
		if ((str_copy[i] >= 'a' && str_copy[i] <= 'z') ||
				(str_copy[i] >= 'A' && str_copy[i] <= 'Z'))
		{
			if ((str_copy[i] >= 'a' && str_copy[i] <= 'm') ||
					(str[i] >= 'A' && str_copy[i] <= 'M'))
			{
				str_copy[i] += 13;
			}
			else
			{
				str_copy[i] -= 13;
			}
		}
	}
	for (i = 0; i < len; i++, (*b)++)
	{
		buffer[*b] = str_copy[i];
	}
	(*b)--;
	free(str_copy);
	return (0);
}
