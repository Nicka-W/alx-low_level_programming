#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all different combinations of 3 digits between 011 & 799
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int e = 48, g = 48, i = 48;

	while (e < 58)
	{
		i = 48;
	while (i < 58)
	{
		g = 48;
	while (g < 58)
	{
		if (e != i && e != g && i != g && e < i && i < g)
		{
			putchar(e);
			putchar(i);
			putchar(g);
			if (i == 56 && e == 55 && g == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	g++;
	}
	i++;
	}
	e++;
	}
	putchar('\n');
	return (0);
}
