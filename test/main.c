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
	_printf("The young man is %i years old\n", age);
	printf("The young man is %i years old\n", age);

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



	
	 _printf("Let's try to printf a simple sentence.\n");
	 printf("Let's try to printf a simple sentence.\n");
	/**ui = (unsigned int)INT_MAX + 1024;
	 *addr = (void *)0x7ffe637541f0;
	 */
	_printf("Length:[%d, %i]\n", 10, -19);
	printf("Length:[%d, %i]\n", 10, -19);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	return (0);
}
