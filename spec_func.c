#include "print.h"
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

int print_char(va_list list)
{
	int c;

	c = va_arg(list, int);

	_putchar(c);

	return (1);
}
