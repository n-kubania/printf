#include "main.h"

/**
 * print_integer - Printing of an integer.
 * @ars: Arguments that contain integer that are to be printed.
 * Return: The number of characters printed.
 */

int print_integer(va_list ars)
{
	int value = va_arg(ars, int);

	_putchar(value, 0);
	return (1);
}

