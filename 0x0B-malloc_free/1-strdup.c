#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new string which is a duplicate of the string
 * @str: string passed as a parameter
 *
 * Return: On success, returns pointer to duplicated string. Otherwise, NULL if
 * insufficient memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int c, i = 0;

	for (i = 0; str[i]; i++)
		;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		dup[c] = str[c];
	return (dup);
}
