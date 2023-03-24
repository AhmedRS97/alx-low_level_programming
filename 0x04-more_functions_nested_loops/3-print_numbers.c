#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void.
 */
void print_numbers(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
		_putchar(letter);
	_putchar('\n');
}

