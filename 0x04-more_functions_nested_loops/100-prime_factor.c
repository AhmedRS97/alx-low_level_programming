#include <stdio.h>

/**
 * main - check the prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number = 612852475143;
	long int factor = 2;
	long int largest_factor;

	while (number != 1)
	{
		if (number % factor == 0)
		{
			number /= factor;
			largest_factor = factor;
		}
		else
			factor++;
	}
	printf("%ld\n", largest_factor);
	return (0);
}

