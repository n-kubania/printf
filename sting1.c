#include "main.h"


/**
 * print_string - String printing.
 * @args: Arguments list that contain the strings to be printed.
 * Return: Characters printed.
 */

int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char*);

	while (*str)
	{
	putchar(*str);
	str++;
	count++;
	}
	return (count);
}
