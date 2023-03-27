#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and returns a pointer to the memory
 * @nmemb: array
 * @size: bytes of each element in the array
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
