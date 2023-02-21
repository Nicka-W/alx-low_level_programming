#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints sum of even-valued terms < 4000000 in Fibonacci sequence
 * followed by \n
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	unsigned long t1 = 0, t2 = 1, Tn, sum = 0;

	Tn = t1 + t2;

	while (Tn < 40000000)
	{
		t1 = t2;
		t2 = Tn;
		Tn = t1 + t2;
		if ((Tn % 2) == 0)
			sum += Tn;
	}
	printf("%lu\n", sum);
	return (0);
}
