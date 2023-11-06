#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * print_char - prints char
 * @args: va_list
 *
 * Return: 1
 **/

int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);

	_putchar((char)c);

	return (1);
}

/**
 * print_string - prints string
 * @args: va_list
 *
 * Return: 1
 **/

int print_string(va_list args)
{
	char *str;
	int i;
	int size = 0;

	str = va_arg(args, char *);
	if (str != NULL)
	{
		size = strlen(str);
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		size = 6;
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	return (size);
	size++;
}

