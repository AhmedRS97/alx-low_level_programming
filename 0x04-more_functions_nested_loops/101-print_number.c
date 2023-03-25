#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer that will get printed
 */
void print_number(int n)
{
	unsigned int result = n;

	if (n < 0)
	{
		_putchar('-');
		result = -result;
	}
	if ((result / 10) > 0)
		print_number(result / 10);

	_putchar((result % 10) + '0');
}

