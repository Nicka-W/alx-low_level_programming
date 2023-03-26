#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: On success, pointer to newly allocated space in memory which
 * contains concatenated. Otherwise, NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	cat = malloc(sizeof(char) * (i + j + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		cat[i] = s1[i];
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		cat[i] = s2[j];
		i++;
		;
	}
	cat[i] = '\0';
	return (cat);
}
