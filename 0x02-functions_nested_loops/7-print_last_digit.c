#include "main.h"

/**
 * print_last_digit - returns the last digit in a number
 * @number: an integer
 *
 * Return: Always int.
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (number < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);
	return (last_digit);
}

