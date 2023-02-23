#include "main.h"

/**
 * print_square - Prints a square, followed by \n
 * @size: size of the square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar ('#');
			_putchar('\n');
		}
	}
}
