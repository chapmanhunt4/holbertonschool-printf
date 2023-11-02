#include "printf.h"
#include <string.h>

/**
 * _printf - produces output according to format
 * @format: a charater string composed of zero or 
 * more directives
 *
 * Return: number of chars printed excluding null byte
 **/

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	size = _strlen(format);
	if (size <= 0)
	{
		return (0);
	}


