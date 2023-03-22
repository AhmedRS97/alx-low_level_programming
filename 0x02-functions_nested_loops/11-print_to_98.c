#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers up to 98
 * @num: an integer
 *
 * Return: Nothing.
 */
void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
			printf("%d, ", num--);
		printf("%d\n", num);
	}

	else
	{
		while (num < 98)
			printf("%d, ", num++);
		printf("%d\n", num);
	}
}

