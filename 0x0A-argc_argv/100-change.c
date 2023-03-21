#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change for amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: On success, 0. Otherwise, 0.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int change, i = 0, n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5 && change >= 0)
	{
		while (change >= coins[i])
		{
			n++;
			change -= coins[i];
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}
