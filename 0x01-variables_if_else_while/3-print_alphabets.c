#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase then uppercase followed by \n
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
