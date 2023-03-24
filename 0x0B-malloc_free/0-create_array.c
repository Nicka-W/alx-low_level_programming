#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars & initializes it with a specific
 * char.
 * @size: size of array
 * @c: character of which an array should be comprised of
 *
 * Return: Null, if size is 0 or upon failure. Otherwise, pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i  < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
