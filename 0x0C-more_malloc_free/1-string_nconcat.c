#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - cooncatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: bytes of s2 to be concatenated with s1
 *
 * Return: On success, pointer to new string in memory. Otherwise, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, mem = n;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		mem++;
		i++;
	}

	cat = malloc(sizeof(char) * (mem + 1));
	if (cat == NULL)
		return (NULL);

	i = mem = 0;

	while (s1[i])
	{
		cat[mem++] = s1[i];
		i++;
	}
	i = 0;
	while (i < n && s2[i])
	{
		cat[mem++] = s2[i];
		i++;
	}
	cat[mem] = '\0';
	return (cat);
}
