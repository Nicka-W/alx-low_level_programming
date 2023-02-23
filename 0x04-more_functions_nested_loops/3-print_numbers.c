#include "main.h"

/**
 * print_numbers - Prints the numbers 0 to 9, followed by \n
 *
 * Return: void
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
