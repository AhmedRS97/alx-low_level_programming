#include "main.h"

/**
 * _isdigit - checks if c is an ASCII digit
 * @c: An ASCII character
 *
 * if c is an ASCII digit return 1 else return 0
 *
 * Return: Always int.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

