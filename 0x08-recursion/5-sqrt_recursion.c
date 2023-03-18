#include "main.h"
int isInt(double num);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: returns natural square root of number. If n does not have a natural
 * square root, then -1.
 */
int _sqrt_recursion(int n)
{
	int i;
	double ans;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	i = _sqrt_recursion(n - 1);
	ans = (((n / i) + i) / 2);
	return (isInt(ans));
}

/**
 * isInt - checks if number is an integer data type
 * @num: number to be checked
 *
 * Return: num, if it is an integer. Otherwise, -1.
 */
int isInt(double num)
{
	int x = num;
	double decimal = num - x;

	if (decimal == 0)
		return (x);
	else
		return (-1);
}
