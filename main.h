#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct specifier - a struct to make it easy to handel specifiers.
 * @specifier: the format specifier
 * @ptr: a pinter to the function
*/
typedef struct specifier
{
	char specifier;
	int (*ptr)(char *, va_list, int *);
} Specifiers;

int print_string(char *buffer, va_list args, int *b);
int print_percent(char *buffer, va_list args, int *b);
int print_integers(char *buffer, va_list args, int *b);
int print_unsigned(char *buffer, va_list args, int *b);
int print_binary(char *buffer, va_list args, int *b);
int print_char(char *buffer, va_list args, int *b);
int _printf(const char *format, ...);

#endif
