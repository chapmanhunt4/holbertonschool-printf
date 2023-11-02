#ifndef MAIN
#define MAIN
#include <stdarg.h>

typedef struct _format
{
<<<<<<< HEAD
	char *type;
	int (*func)(va_list list);
=======
	char *type
	int (*f)(va_list list);
>>>>>>> refs/remotes/origin/chapmans_branch
} format;

int _printf(const char *format, ...);

int _putchar(char c);

int (*get_spec_func(char *str))(va_list list);

int print(const char *str, va_list list);

int print_char(va_list list);

int print_string(va_list list);

#endif
