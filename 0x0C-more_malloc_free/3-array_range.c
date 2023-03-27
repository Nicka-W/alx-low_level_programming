#include "main.h"
#include <stdlib.h>

/**
 * array_range - creats an array of integers
 * @min: smallest integer in array
 * @max: largest integer in array
 *
 * Return: On success, pointer to the newly created array. Otherwise, NULL.
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
