#include "main.h"
/**
 * print_octal - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
 */
int print_octal(char *buffer, va_list args, int *b)
{
	unsigned long int num = va_arg(args, int);
	int count = 0, i;
	char *str;
	unsigned long int temporaryCount = num;

	if (num == 0)
	{
		buffer[(*b)] = '0';
		return (0);
	}
	while (temporaryCount != 0)
	{
		temporaryCount /= 8;
		count++;
	}
	str = (char *)malloc(count * sizeof(char));
	if (str == NULL)
		return (-1);
	for (i = count - 1; i >= 0; i--)
	{
		str[i] = '0' + num % 8;
		num /= 8;
	}
	for (i = 0; i < count; i++, (*b)++)
		buffer[*b] = str[i];
	free(str);
	(*b)--;
	return (0);
}
