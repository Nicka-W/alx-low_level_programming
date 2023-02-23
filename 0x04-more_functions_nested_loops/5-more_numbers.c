#include "main.h"

/**
 * more_numbers - Prints numbers 0-14 10 times, followed by \n
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 1, num;

	while (i <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	i++;
	}
}
