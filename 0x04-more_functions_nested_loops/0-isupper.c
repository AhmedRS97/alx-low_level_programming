#include "main.h"

/**
 * _isupper - checks if c is an english uppercase letter
 * @c: An ASCII character
 *
 * if c is an english uppercase letter return 1 else return 0
 *
 * Return: Always int.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

