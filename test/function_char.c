#include <stdarg.h>
#include "main.h"

/**
  * p_char - A function that prints character variables
  * @args: va_list containing the argument
  * Return: 1
  */
 int p_char(va_list args)
 {
         char value;

         value = va_arg(args, int);
         _putchar(value);
         return (1);
}

