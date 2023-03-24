#include "main.h"

/**
 * print_triangle - print and draws a triangle in the terminal
 * @size: An integer number
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
