#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins
 * to make change for an amount
 * @argc: argument count
 * @argv: argument value
 * Return: 0 success
 * 1 error
 */

int main(int argc, char *argv[])
{
	/*initializing variables*/
	int cents, numberOfCoins = 0;

	/*if number of arguments is not exactly 1*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		/*if number of arguments is 1*/
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			numberOfCoins += 1;
		}
	}
	printf("%d\n", numberOfCoins);
	return (0);
}
