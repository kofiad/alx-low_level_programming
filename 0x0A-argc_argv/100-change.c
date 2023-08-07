#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * to make change for an amount
 *
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 success
 * 1 error
 */
int main(int argc, char *argv[])
{
	int cents, numCoins, minCoins, i;
	int coins[] = {25, 10, 5, 2, 1};

	/*Ensure there's only 1 argument (program name counts as one)*/
	if (argc != 2)
	{
		printf("Oops!\n");
		return (1);
	}

	/*Convert argument to an integer*/
	cents = atoi(argv[1]);

	/*Check for negative amount*/
	if (cents < 0)
	{
		printf("No coins needed.\n");
		return (0);
	}

	/*Coin denominations*/
	numCoins = sizeof(coins) / sizeof(coins[0]);

	/*Calculate minimum coins*/
	minCoins = 0;
	for (i = 0; i < numCoins; i++)
	{
		minCoins += cents / coins[i];
		cents %= coins[i];
	}

	/*Print the result*/
	printf("Minimum coins: %d\n", minCoins);

	return (0);
}
