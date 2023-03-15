#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers.
 * @a: pointer
 * @size: size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumLeft = 0, sumRight = 0;

	for (i = 0; i < size; ++i)
	{
		sumLeft = sumLeft + a[i * size + 1];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumRight = sumRight + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumLeft, sumRight);
}
