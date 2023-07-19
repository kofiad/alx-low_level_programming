#include <stdio.h>

/**
 * main - prints the sum of all the multiples
 * of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int multiples, sum_of_multiples = 0;

	for (multiples = 1; multiples < 1024; multiple++)
	{
		if (multiple % 3 == 0 || multiple % 5 == 0)
		{
			sum_of_multiples += multiples;
		}
		printf("%d\n", sum_of_multiples);
	}
}
