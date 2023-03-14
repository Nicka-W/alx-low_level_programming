#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to substring
 *
 * Return: number of bytes in initial segment of s which consist only of bytes
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				len++;
				break;
			}
			else if (*accept == '\0')
				return (len);
			accept++;
		}
		s++;
	}
	return (len);
}
