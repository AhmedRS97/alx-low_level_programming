#include "main.h"

/**
 * _islower - checks if c is a lower case english letter using ASCII
 * @c: the ASCII english letter
 *
 * if the letter is lower case return 1 else return 0
 *
 * Return: Always int.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

