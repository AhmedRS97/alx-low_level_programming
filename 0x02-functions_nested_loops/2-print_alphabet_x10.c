#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

