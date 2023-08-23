#include "main.h"


/**
 * print_non_printable - Print a string, representing non-printable characters
 *                       using the \x notation.
 * @str: The input string.
 *
 * Return: The total length of printed characters.
 */
int print_non_printable(const char *str)
{
	int printed_length = 0;

	while (*str)
	{
	if (*str < 32 || *str >= 127)
	{
		printf("\\x%02X", (unsigned char)*str);
		printed_length += 4;
	}
	else
	{
		putchar(*str);
	printed_length++;
	}
	str++;
	}

	return (printed_length);
}
