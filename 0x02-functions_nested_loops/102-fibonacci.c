#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints first 50 Fibonacci numbers, starting with 1 & 2 followed
 * by a new line.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	unsigned long n;
	unsigned long t1 = 1, t2 = 2;
	unsigned long Tn = t1 + t2;

	printf("%lu, %lu, ", t1, t2);

	for (n = 3; n <= 50; n++)
	{
		if (Tn != 20365011074)
			printf("%lu, ", Tn);
		else
			printf("%lu\n", Tn);
		t1 = t2;
		t2 = Tn;
		Tn = t1 + t2;
	}
	return (0);
}
