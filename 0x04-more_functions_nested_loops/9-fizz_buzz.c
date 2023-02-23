#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints numbers 0-100. But for multiples of 3 Fizz should be
 * printed & for multiples of 5 Buzz should be printed. For multiples of 3 & 5
 * FizzBuzz should be printed
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0 && count != 100)
		{
			printf("Buzz ");
		}
		else if (count == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("\n");
	return (0);
}
