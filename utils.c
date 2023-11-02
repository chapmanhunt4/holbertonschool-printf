#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - prints char to stdout
 * @c: char to be printed
 *
 * Return: character
 **/

int _putchar(char c)
{
	write(1, &c, 1);
}

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		return (i);
	}
}
