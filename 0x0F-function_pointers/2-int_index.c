#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size:  number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element for which cmp function does not return 0
 * If no element matches or if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
