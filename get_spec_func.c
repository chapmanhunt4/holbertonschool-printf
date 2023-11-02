#include "printf.h"
#include <stdlib.h>
#include <stdio.h.

int (*get_spec_func(char *f)(va_list list)
{
	format spec[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_arg},
	{"
}"  
