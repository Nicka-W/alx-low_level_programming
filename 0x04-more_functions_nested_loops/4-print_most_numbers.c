#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9, except 2 & 4, followed by \n
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}
	_putchar('\n');
}
