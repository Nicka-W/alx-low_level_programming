#include "main.h"
#include <stddef.h>

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
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
