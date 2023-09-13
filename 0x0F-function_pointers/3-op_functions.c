#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b.
 * Prototype: int op_add(int a, int b);
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns the difference of a and b.
 * Prototype: int op_sub(int a, int b);
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns the product of a and b.
 * Prototype: int op_mul(int a, int b);
 * @a: first integer
 * @b: second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the result of the division of a by b.
 * Prototype: int op_div(int a, int b);
 * @a: first integer
 * @b: second integer
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a / b);
}


/**
 * op_mod - returns the remainder of the division of a by b.
 * Prototype: int op_mod(int a, int b);
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a % b);
}
