#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all different combinations of two digits between 0 & 90
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int e = 48, i = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
			if (i == 57 && e == 56)
			{
				break;
			}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
