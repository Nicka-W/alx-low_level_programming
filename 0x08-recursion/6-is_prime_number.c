#include "main.h"

int real_prime(int n, int div);

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise return 0.
 * @n: integer
 *
 * Return: returns 1 if n is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - checks for a prime number
 * @n: number to check
 * @div: divisor
 *
 * Return: 1 if n is prime number. 2, the smallest prime number. Otherwise, 0.
 */
int real_prime(int n, int div)
{
	if (n == 2)
		return (2);
	if (n % div == 0)
		return (0);
	if (div * div > n)
		return (1);
	return (real_prime(n, div + 1));
}
