#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer that points to a string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;
	int n;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	for (n = (count - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
