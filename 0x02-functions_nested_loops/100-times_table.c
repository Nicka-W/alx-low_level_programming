#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: number of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, mul;

	if (n >= 0 && n < 16)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				mul = x * y;
				if (y == 0)
					_putchar(mul + '0');
				else if (mul < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				} else if (mul >= 10 && mul <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				} else if (mul >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
