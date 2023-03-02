#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer that points to the string to which another will be added
 * @src: pointer that points to the string that is to be added
 * @n: bytes to be added from src
 *
 * Return: pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *catn = dest;
	int i, j = 0;

	for (j = 0; dest[j] != '\0'; j++)
	{
		;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		dest++;
		;
	}
	return (catn);
}
