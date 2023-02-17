#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers 0 to 9 with commas and spaces as separators
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
