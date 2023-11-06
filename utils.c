#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * _putchar - prints char to stdout
 * @c: char to be printed
 *
 * Return: character
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - prints string to stdout
 * @str: string to be printed
 * Return: string
 **/

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	return (i);
}
