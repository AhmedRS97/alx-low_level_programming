#include "main.h"

/**
 * print_line - print and draws a straight line in the terminal
 * @n: An integer number
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

