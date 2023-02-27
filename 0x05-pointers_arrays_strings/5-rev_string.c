#include "main.h"

/**
 * rev - reverses a string
 * @s: pointer that points to a string that is to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	char reverse;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		reverse = s[i];
		s[i] = s[count];
		s[count] = reverse;
	}
}
