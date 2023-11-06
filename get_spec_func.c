#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
/**
 * get_spec_func - points to the proper function based 
 * on format specifier
 * @str: string being printed
 * @args: va list
 * @i: char at a place in the string
 * Return: -one on error or pointer to proper function
 **/

int get_spec_func(char *str, va_list args, int i)
{
	int size;
	unsigned long int j;

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

	for (j = 0; j < sizeof(formats) / sizeof(formats[0]); j++)
	{
		if (str[i] == formats[j].type[0])
		{
			size = formats[j].f(args);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[i]);

	return (2);
}
