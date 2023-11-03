#include "main.h"
#include <stdarg.h>

// Add this line to declare the _strlen function
int _strlen(const char *s);

int _printf(const char *format, ...)
{
   int size;
   va_list args;

   if (format == NULL)
       return (-1);

   size = _strlen(format);
   if (size <= 0)
       return (0);

   va_start(args, format);
   size = print(format, args);

   _putchar(-1);
   va_end(args);

   return (size);
}
