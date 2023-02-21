#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: an integer
 *
 * Return: Absolute value of an integer.
 */
int _abs(int n)
{

	if (n > 0)
		return (n - 0);
	else if (n < 0)
		return (0 - n);
	else
		return (0);
}
