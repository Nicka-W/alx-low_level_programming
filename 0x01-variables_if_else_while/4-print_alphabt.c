#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase except q & e followed by \n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
