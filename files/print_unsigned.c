#include "main.h"

/**
 * print_unsigned - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
 */
int print_unsigned(char *buffer, va_list args, int *b)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i;
	unsigned int temporaryCount = num; /* to use it to count the digits*/
	char num_str[50];

	if (num == 0)
	{
		buffer[(*b)++] = '0';
		return (0);
	}
	while (temporaryCount != 0)
	{
		temporaryCount /= 10;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		num_str[i] = '0' + num % 10;
		num /= 10;
	}
	num_str[count] = '\0';
	for (i = 0; i < count; i++, (*b)++)
		buffer[*b] = num_str[i];
	(*b)--;
	return (0);
}
