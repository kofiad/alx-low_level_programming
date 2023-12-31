#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 *
 * @x: first integer
 * @y: second integer
 *
 * Return: -1 if y < 0
 * value of x exp y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
