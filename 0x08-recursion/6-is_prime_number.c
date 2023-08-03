#include "main.h"

/**
 * prime_number_checker - checks for prime number
 *
 * @n: number of interest
 * @divisor: number for division
 *
 * Return: return 1 or 0
 */

int prime_number_checker(int n, int divisor)
{
	if (n <= 1)
	{/*prime numbers cannot be less than or equal to 1*/
		return (0);
	}
	if (divisor * divisor > n)
	{/*number is prime if all possible divisors are checked*/
		return (1);
	}
	if (n % divisor == 0)
	{/*number not prime if it has other divisors except 1 and number*/
		return (0);
	}
	return (prime_number_checker(n, divisor + 1));
}
/**
 * is_prime_number - evaluate if a number is a prime number
 *
 * @n: number
 *
 * Return: return 1 prime
 * 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_number_checker(n, 2));
}
