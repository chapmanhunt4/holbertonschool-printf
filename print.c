#include "printf.h"
#include <stdlib.h>
#include <stdio.h.

int print(const char *str, va_list list)
{
	int size, i, per;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			per = get_spec_func(str, list, &i);
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


