#include <limits.h>
#include <stdio.h>
#include "../printf.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char gender = 'M';
	int age = 10;
	char name[] = "Kamanja";
	int n;
		
	_printf("The boy by the name %s is here\n", name);
	printf("The boy by the name %s is here\n", name);
	_printf("The gender filled in his form is %c\n", gender);
	printf("The gender filled in his form is %c\n", gender);
	_printf("The young man is %d years old\n", age);
	 printf("The young man is %d years old\n", age);
	
	for (n = 0; n <= 20; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			_printf("Nkatha&Chege");
			_printf(" ");
		}
		else if (n % 3 == 0)
		{
			_printf("Nkatha");
			_printf(" ");
		}
		else if (n % 5 == 0)
		{
			_printf("Chege");
			_printf(" ");
		}
		else
		{
			_printf("%d ", n);
		}
	}
	_printf("\n");	
	return (0);
}
