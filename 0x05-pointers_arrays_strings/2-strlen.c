#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer that points to a string
 *
 * Return: an integer that is the length of a string
 */
int _strlen(char *s)
{
	char el = s[0];
	int i = 1, length = 0;

	while (el != '\0')
	{
		length++;
		el = s[i++];
	}
	return (length);
}
