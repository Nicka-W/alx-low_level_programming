#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		while (i < new_size)
		{
			new_ptr[i] = old_ptr[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			new_ptr[i] = old_ptr[i];
			i++;
		}
	}
	free(ptr);
	return (new_ptr);
}
