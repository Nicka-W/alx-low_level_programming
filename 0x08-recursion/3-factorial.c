#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: a number of which the factorial is to be returned
 *
 * Return: factorial of a given number. If n < 0, then -1.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
