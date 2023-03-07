#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to a string that is to be compared with s2
 * @s2: pointer to a string that is to be compared with s1
 *
 * Return: 0 if s1 and s2 are equal. Negative value if s1 is less than s2.
 * Postive value is s1 is greater that s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
