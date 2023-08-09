#include <stdio.h>
#include <stdlib.h>
/**
 * main -A program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: Argument count
 * @argv: Array of string holding argument
 * Return: Always 0 (success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	result = 0;

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coins[j])
		{
			result++;
			i -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
