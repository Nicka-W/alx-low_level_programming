#include "main.h"

/**
 * _puts - prints a string, folllowed by a new line, to stdout
 * @str: pointer that points to a string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
