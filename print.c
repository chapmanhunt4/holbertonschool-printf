#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int print(char *str, va_list args)
{
	int size, i, per;

	size = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			per = get_spec_func(str, args, i);
			if (per == -1)
				return (-1);

			size += per;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}


