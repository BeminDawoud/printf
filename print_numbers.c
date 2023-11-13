#include "main.h"

/**
 * print_integers - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
 */
int print_integers(char *buffer, va_list args, int *b)
{
	int num = va_arg(args, int);
	int count = 0, i;
	int temporaryCount = num; /* to use it to count the digits*/
	int negative = 0;
	char num_str[40];

	if (num == 0)
	{
		buffer[(*b)++] = '0';
		return (0);
	}
	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	if (negative)
	{
		buffer[*b] = '-';
		(*b)++;
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
	for (i = 0; i < count; i++, (*b)++)
		buffer[*b] = num_str[i];
	(*b)--;
	return (0);
}
