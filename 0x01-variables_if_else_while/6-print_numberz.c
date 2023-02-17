#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers 0 to 9 using putchar followed by \n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}
