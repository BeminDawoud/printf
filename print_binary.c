#include "main.h"
/**
 * print_binary - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
*/
int print_binary(char *buffer, va_list args, int *b)
{
	int num = va_arg(args, int);
	int count = 0, i;
	char *str;
	int temporaryCount = num; /* to use it to count the bits in the number*/

	if (!buffer || !num)
		return (-1);
	while (temporaryCount != 0)
	{
		temporaryCount /= 2;
		count++;
	}
	str = (char *)malloc(count * sizeof(char));
	if (str == NULL)
		return (-1);
	for (i = count - 1; i >= 0; i--)
	{
		str[i] = '0' + num % 2;
		num /= 2;
	}
	for (i = 0; i < count; i++, (*b)++)
		buffer[*b] = str[i];
	free(str);
	(*b)--;
	return (0);
}
