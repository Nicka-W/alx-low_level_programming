#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by \n
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
