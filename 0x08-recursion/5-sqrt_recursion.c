#include "main.h"

/**
 * _evaluate_squareroot - evaluate function sqrt
 * @i: checking integer
 * @n: integer of interest
 * Return: evaluate sqrt
 */

int _evaluate_squareroot(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_evaluate_squareroot(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (-1);
}
/**
 * _sqrt_recursion - evaluate sqrt
 * @n: integer of interest
 * Return: Sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_evaluate_squareroot(i, n));
	}
}
