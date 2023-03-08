#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to leet
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
	int x, i = 0;

	char leet[] = "4433007711";
	char alph[] = "AaEeOoTtLl";

	while (str[i] != '\0')
	{
		for (x = 0; x < 10; x++)
		{
			if (str[i] == alph[x])
			{
				str[i] = leet[x];
			}
		}
		i++;
	}
	return (str);
}
