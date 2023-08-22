#include "main.h"

/**
 * print_decimal - An integer is printed by the function.
 * @args: Arguments list that contain integers to be printed.
 * Return: Number of characters that are printed..
 */

int print_decimal(va_list args)
{
	int count = 0;
	int value = va_arg(args, int);

	count = _putchar(value, 0);

	return (count);
}
