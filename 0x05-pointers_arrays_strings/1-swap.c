#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer that points to an integer
 * @b: pointer that points to an integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
