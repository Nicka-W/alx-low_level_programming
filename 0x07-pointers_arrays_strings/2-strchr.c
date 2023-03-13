#include "main.h"

/**
 * _strchr - locates a charcter in a string
 * @s: pointer to a string
 * @c: character to be located
 *
 * Return: pointer to first occurrence of character c in string s.
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
