#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int get_spec_func(char *str, va_list, int i)
{
	int size;

	format formats[] = {
		{"c", print_char},
		{"s", print_string},
	};

	i = i + 1;

	if (str[i] == '\0')
	{
		return (-1);
	}
	if (str[i] == '%')
	{
		_putchar('%');
		return (1);
	}

	while (str[i] != '\0')
	{
		if (str[i] == formats[i].type)
		{
			size = formats[i].f(args);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[i]);

	return (2);
}
