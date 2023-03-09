#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to string
 *
 * Return: pointer to resulting string
 */
char *rot13(char *str)
{
	int x = 0, y;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[x] != '\0')
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == alpha[y])
			{
				str[x] = rot[y];
				break;
			}
		}
		x++;
	}
	return (str);
}
