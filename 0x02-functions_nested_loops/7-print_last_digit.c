#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: a number
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = (n % 10) * -1;
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
