#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array of an integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int e = 0;
	int m;

	while (e < n--)
	{
		m = a[e];
		a[e] = a[n];
		a[n] = m;
		e++;
	}
}
