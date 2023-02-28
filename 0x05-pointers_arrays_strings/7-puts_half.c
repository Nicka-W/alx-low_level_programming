#include "main.h"

/**
 * puts_half - prints half a string
 * @str: a pointer that points to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length = 0, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
		n = (length / 2);
		if ((length % 2) != 0)
		{
			n = ((length - 1) / 2) + 1;
		}
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
