#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stddef.h>

typedef struct format
{
	char *type;
	int (*f)(va_list);
} format;

int _printf(const char *format, ...);

int _putchar(char c);

int (*get_spec_func(char *str, va_list list, int i));

int print(const char *str, va_list list);

int print_char(va_list list);

int print_string(va_list list);

#endif
