#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
**/


int _printf(char *format, ...)
{
	int size = 0;
	int i, per;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			per = get_spec_func(format, args, i);
			if (per == -1)
			{
				va_end(args);
				return (-1);
			}
			size += per;
			i++;
			continue;
		}
		_putchar(format[i]);
		size++;
	}
	va_end(args);
	return (size);
   }
   for (; format[i] != '\0'; i++)
   {
       _putchar(format[i]);
       size++;
   }

   va_end(args);
   return (size);
}
