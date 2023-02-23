#include "main.h"

/**
 * print_number - Prints an integer
 * @n: an integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (n == 0 || num == 0)
		_putchar('0');
	if ((n > 0 && n < 100) || (num > 0 && num < 100))
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if ((n > 100 && n < 1000) || (num > 100 && num < 1000))
	{
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if ((n > 1000 && n < 10000) || (num > 1000 && num < 10000))
	{
		_putchar((num / 1000) + '0');
		_putchar(((num / 100) % 10) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if ((n > 10000) || (n > 10000))
	{
		_putchar((num / 10000) + '0');
		_putchar(((num / 1000) % 10) + '0');
		_putchar(((num / 100) % 10) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}
