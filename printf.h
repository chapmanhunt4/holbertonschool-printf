#ifndef MAIN
#define MAIN

typedef struct _format
{
	char *form
	int (*f)(va_list list);
} format;

int _printf(const char *format, ...);



#endif
