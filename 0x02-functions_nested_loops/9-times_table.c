#include "main.h"

/**
 * times_table - prints times table from 0 to 9
 *
 * Return: Always int.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

