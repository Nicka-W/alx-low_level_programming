#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints largest prime factor of 612852475143, followed by \n
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
			{
				prime /= div;
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
