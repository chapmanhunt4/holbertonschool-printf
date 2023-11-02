#include "printf.h"
#include <stdio.h>
#include <stdlib.h>

int (*get_spec_func(char *str))(va_list list)
{
	format specs[] = {
		{"c", print_char},
		{"s", print_string},
	};

	*i = *i + 1;

	if (str[*i] == '\0')
	{
		return (-1)
	}
	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[*i]);

	return (2);
}
