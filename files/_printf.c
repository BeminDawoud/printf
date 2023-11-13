#include "main.h"
/**
 * function_handler - this function is designed to handle the specifiers.
 * @spec: this is the passed specifier to check
 * Return: void
 */
int (*function_handler(char spec))(char *, va_list, int *)
{
	int i = 0;
	Specifiers handle_func[] = {
		{'s', print_string},
		{'i', print_integers},
		{'d', print_integers},
		{'u', print_unsigned},
		{'b', print_binary},
		{'c', print_char},
		{'%', print_percent},
		{'\0', NULL}};

	while (handle_func[i].specifier != '\0')
	{
		if (spec == handle_func[i].specifier)
			return (handle_func[i].ptr);
		i++;
	}
	return (NULL);
}

/**
 * function_handler - this function is designed to act as standard printf.
 * @format: string.
 * Return: 0 or -1.
 */
int _printf(const char *format, ...)
{
	int i, b, format_len;
	char *buffer = malloc(sizeof(char) * 1024);
	va_list args;

	if (!format || !buffer)
		return (-1);
	va_start(args, format);
	format_len = strlen(format);
	for (i = 0, b = 0; i < format_len; i++, b++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			(*function_handler(format[i + 1]))(buffer, args, &b);
			i++;
		}
		else
			buffer[b] = format[i];
	}
	buffer[b] = '\0';
	write(1, buffer, b);
	va_end(args);
	free(buffer);
	return (b);
}
