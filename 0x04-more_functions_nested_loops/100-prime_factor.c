#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @num: the number to find the largest prime factor of
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long num)
{
	long max_prime = -1;
	long i;

	/* Remove all factors of 2 */
	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	/* Now, num must be odd, so we can skip even numbers */
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
	}

	/* If num is still greater than 2, it is a prime factor itself */
	if (num > 2)
		max_prime = num;

	return max_prime;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}
