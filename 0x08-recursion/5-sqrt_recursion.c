#include "main.h"

/**
 * _sqrt_recursion_checker - checks for natural square root of a number
 *
 * @n: number of interest
 * @start: starting number
 * @end: ending number
 *
 * Return: -1 if number has no natural square root
 * natural square root
 */
int _sqrt_recursion_checker(int n, int start, int end)
{
	int mid;
	long long square;

	if (start <= end)
	{
		mid = start + (end - start) / 2;
		square = (long long) mid * mid;
		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (_sqrt_recursion_checker(n, mid + 1, end));
		}
		else
		{
		return (_sqrt_recursion_checker(n, start, mid - 1));
		}
	}
	return (-1);/*natural root not found*/
}
/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number of interest
 *
 * Return: -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_checker(n, 0, n));
}
