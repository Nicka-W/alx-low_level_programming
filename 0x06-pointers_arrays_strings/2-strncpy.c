#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to where string is to be copied
 * @src: pointer to string that is to be copied
 * @n: bytes from src to be copied
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
		;
	}
	return (dest);
}
