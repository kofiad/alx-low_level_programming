#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number of interest
 *
 * Return: -1 if n<0
 * 1 if 0
 * factorial otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{/*recursive call to calculate factorial*/
		return (n * factorial(n-1));
	}
}
