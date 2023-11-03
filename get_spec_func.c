#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int get_spec_func(const char *str, va_list list, int *i)
{
    int size, number_formats;

    format formats[] = {
        {"c", print_char},
        {"s", print_string},
    };

    (*i) = (*i) + 1;

    if (str[*i] == '\0')
    {
        return (-1);
    }
    if (str[*i] == '%')
    {
        putchar('%');
        return (1);
    }

    number_formats = sizeof(formats) / sizeof(formats[0]);
    for (size = 0, *i = 0; *i < number_formats; (*i)++)
    {
        if (str[*i] == formats[*i].type)
        {
            size = formats[*i].f(list);
            return (size);
        }
    }
    putchar('%'), putchar(str[*i]);

    return (2);
}
