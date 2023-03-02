#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer that points to the string to which another is to be added
 * @src: pointer that points to a string that is to be added to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	char *cat = dest;

	for (j = 0; dest[j] != '\0'; j++)
	{
		;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		dest++;
		;
	}
	return (cat);
}
