#ifndef MAIN
#define MAIN
#include <stdarg.h>

typedef struct _format
{
} format;

int _printf(const char *format, ...);

int _putchar(char c);

int (*get_spec_func(char *str))(va_list list);

int print(const char *str, va_list list);

int print_char(va_list list);

int print_string(va_list list);

#endif
