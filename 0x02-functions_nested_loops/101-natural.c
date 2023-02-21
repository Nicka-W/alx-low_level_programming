#include <stdio.h>

/**
 * main - Entry point
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded) followed by \n
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int mul, sum;

	for (mul = 0; mul < 1024; mul++)
	{
		if ((mul % 3 == 0) || (mul % 5 == 0))
			sum += mul;
	}
	printf("%d\n", sum);
	return (0);
}
