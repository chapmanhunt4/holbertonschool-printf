#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stddef.h>

typedef struct format
{
<<<<<<< HEAD
	char *type
	int (*f)(va_list list);
=======
>>>>>>> 35352f8a223962f840a45e35ab09a4aa5308f365
} format;

int _printf(const char *format, ...);

int _putchar(char c);

int (*get_spec_func(char *str))(va_list list);

int print(const char *str, va_list list);

int print_char(va_list list);

int print_string(va_list list);

#endif
