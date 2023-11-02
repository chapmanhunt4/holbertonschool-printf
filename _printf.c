#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
**/


int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = print(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
