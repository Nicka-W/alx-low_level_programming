#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer that points to a string that is to be converted to an integer
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= 0 + '0' && s[i] < 10 + '0')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (s[i - 1] >= 0 + '0' && s[i - 1] < 10 + '0')
			break;
	}
	return (num * sign);
}
