#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
