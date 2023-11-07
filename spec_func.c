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

/**
 * print_number - prints a number
 * @args: va_list
 **/

int print_digit(va_list args)
{
        int number, abs, abs_temp, track_dig;
        int size = 0;
	unsigned long temp;
	char buffer[20];

        number = va_arg(args, int);
        if (number == INT_MIN) {	
		putchar ('-');
		size++;
		abs = INT_MAX;
	}
	else if (number < 0) {
		putchar('-');
		size++;
		abs = number * -1;
	}
	else {
		abs = number;
	}
	abs_temp = abs;
	track_dig = 1;

	while (abs_temp > 9) {
		abs_temp = abs_temp / 10;
		track_dig = track_dig * 10;
	}
	while (track_dig >= 1) {
		if (number == INT_MIN && track_dig == 1)
		{
			putchar('8');
			size++;
			track_dig = track_dig / 10;
		}
		else{
			size++;
			putchar(((abs / track_dig) % 10) + '0');
			track_dig = track_dig / 10;
		}
	}
	return (size);
}
