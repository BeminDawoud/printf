#include "main.h"
/**
 * print_HEX - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
*/
int print_HEX(char *buffer, va_list args, int *b)
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
		temporaryCount /= 16;
		count++;
	}
	str = (char *)malloc(count * sizeof(char));
	if (str == NULL)
		return (-1);
	for (i = count - 1; i >= 0; i--)
	{
		if (num % 16 < 10)
			str[i] = '0' + num % 16;
		else
			str[i] = 'A' + ((num % 16) - 10);
		num /= 16;
	}
	for (i = 0; i < count; i++, (*b)++)
		buffer[*b] = str[i];
	free(str);
	(*b)--;
	return (0);
}
/**
 * print_HEXP - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
*/
int print_HEXP(char *buffer, va_list args, int *b)
{
	unsigned long int num = va_arg(args, int);
	int i;
	char *str;

	if (num == 0)
	{
		buffer[(*b)] = '0';
		return (0);
	}
	str = (char *)malloc(16 * sizeof(char));
	if (str == NULL)
		return (-1);
	for (i = 15; i >= 0; i--)
	{
		if (num % 16 < 10)
			str[i] = '0' + num % 16;
		else
			str[i] = 'A' + ((num % 16) - 10);
		num /= 16;
	}
	for (i = 0; i < 16; i++, (*b)++)
		buffer[*b] = str[i];
	free(str);
	(*b)--;
	return (0);
}
#include "main.h"
/**
 * print_hex - this function is designed to handle the specifiers.
 * @buffer: pointer to the buffer of final string to be printed.
 * @args: parameter of type va_list.
 * @b: pointer to the int b.
 * Return: void
*/
int print_hex(char *buffer, va_list args, int *b)
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
		temporaryCount /= 16;
		count++;
	}
	str = (char *)malloc(count * sizeof(char));
	if (str == NULL)
		return (-1);
	for (i = count - 1; i >= 0; i--)
	{
		if (num % 16 < 10)
			str[i] = '0' + num % 16;
		else
			str[i] = 'a' + ((num % 16) - 10);
		num /= 16;
	}
	for (i = 0; i < count; i++, (*b)++)
		buffer[*b] = str[i];
	free(str);
	(*b)--;
	return (0);
}
