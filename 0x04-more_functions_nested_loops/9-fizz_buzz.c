#include <stdio.h>

/**
 * print_fizz_buzz - print fizz buzz test to the terminal
 *
 * Return: void.
 */
void print_fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fizz_buzz();
	return (0);
}

