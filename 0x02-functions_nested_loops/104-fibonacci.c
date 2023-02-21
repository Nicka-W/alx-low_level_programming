#include <stdio.h>
#include <inttypes.h>

/**
 * main - Entry point
 * Description: Finds & prints first 98 Fibonacci numbers, starting with 1 & 2
 * followed by \n
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	intmax_t n;
	intmax_t t1 = 1, t2 = 2;
	intmax_t Tn = t1 + t2;

	printf("%lu, %lu, ", t1, t2);

	for (n = 3; n <= 50; n++)
	{
		if (n != 98)
			printf("%lu, ", Tn);
		else
			printf("%lu,\n", Tn);
		t1 = t2;
		t2 = Tn;
		Tn = t1 + t2;
	}
	return (0);
}
