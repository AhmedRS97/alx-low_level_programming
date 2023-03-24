#include "main.h"

/**
 * print_square - print a square to the terminal
 * @n: An integer number
 *
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
}

