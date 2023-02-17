#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints number from 0 to 9 followed by \n
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
