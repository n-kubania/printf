#include "main.h"

/**
 * specifier_selector - Makes a selection of the appropriate
 * printing function based according to the specifier.
 * @specifier: Specifier character.
 * Return: A pointer that points to corresponding printing functions.
 */

int (*specifier_selector(char specifier))(va_list)
{
	if (specifier == 's')
	{
	return (&print_string);
	}
	else if (specifier == 'c')
	{
	return (&print_char);
	}
	else if (specifier == 'd')
	{
	return (&print_decimal);
	}
	else if (specifier == 'i')
	{
	return (&print_decimal);
	}
	else 
	{
	return (NULL);
	}
	return (0);
}

