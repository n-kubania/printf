#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - is the function that helps implement printf function.
 * @format: Is the strings where the specifiers are.
 * Return: Characters printed.
 */
int _printf(const char *format, ...)
{
	int character_count = 0;
	char current_specifier;
	va_list args;
	int d = 0;

	va_start(args, format);


	if (format[0] == '\0')
	{
	va_end(args);
	return (-1);
	}

	while (format[d])
	{
	if (format[d] == '%')
	{

	current_specifier = format[d + 1];

	character_count += (*specifier_selector(current_specifier))(args);

	d++;
	}
	else
	{

	putchar(format[d]);
	character_count++;
	}
	d++;
	}


	va_end(args);

	return (character_count);
}
