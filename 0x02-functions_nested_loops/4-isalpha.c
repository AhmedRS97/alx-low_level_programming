#include "main.h"

/**
 * _isalpha - checks if c is an english letter
 * @c: An ASCII character
 *
 * if c is an english letter return 1 else return 0
 *
 * Return: Always int.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

