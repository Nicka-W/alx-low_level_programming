#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0, min = 32, max = 126, pass;

	while (i < 2772)
	{
		srand(time(0) + i);
		pass = (rand() % (max - min + 1)) + min;
		if ((i + pass) <= 2772)
		{
			printf("%c", pass);
			i = i + pass;
		}
		else
			break;
	}
	if (i < 2772)
	{
		pass = 2772 - i;
		printf("%c", pass);
	}
	return (0);
}
