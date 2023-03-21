#include "main.h"

/**
 * _abs - compute and return the absloute value
 * @number: an integer
 *
 * Return: Always int.
 */
int _abs(int number)
{
	if (number < 0)
		return (-number);
	else
		return (number);
}

