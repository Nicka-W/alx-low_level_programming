#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a string
 * @accept: pointer to set of bytes to be searched for
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
