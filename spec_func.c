#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * print_char - prints char
 * @list: va_list
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
 * @list: va_list
 *
 * Return: 1
 **/

int print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	int size = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		size++;
	}
	return (size);
}
