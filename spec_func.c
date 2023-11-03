#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

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
	int str;

	str = va_arg(args, char *);

	_putchar(str);

	return (1);
}
