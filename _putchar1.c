#include <stdio.h>
#include "printf.h"

/**
 * _putchar - counts characters and prints integer digits.
 * @value: Integer being printed.
 * @count: Character count printed.
 * Return: Character count updated.
 */

int _putchar(int value, int count)
{
	int current_digit = value;

	if (value < 0)
	{
	current_digit = -value;
	putchar('_');
	count++;
	}

	if (current_digit >= 10)
	{
	count = _putchar(current_digit / 10, count);
	}
	putchar(current_digit % 10 + '0');
	return (count + 1);
}