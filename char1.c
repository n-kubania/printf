#include "main.h"

/**
 * print_char - character printing.
 * @args: Arguments list that contain characters to be printed.
 * Return: Number of characters printed.
 */

int print_char(va_list args)
{
	char character = va_arg(args, int);

	putchar(character);
	return (1);
}
