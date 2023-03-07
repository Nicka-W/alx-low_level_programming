#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @s: pointer to a string
 *
 * Return: pointer to the resulting of changed letters
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
