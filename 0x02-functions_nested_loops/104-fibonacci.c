#include <stdio.h>

/**
 * main -  finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */
int main()
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int fib3;
	int count = 2;

	printf("%u, %u, ", fib1, fib2);
	while (count < 98)
	{
	fib3 = fib1 + fib2;
	printf("%u", fib3);
        /* Add comma and space except for the last number*/
	if (count < 97)
	{
		printf(", ");
	}
	fib1 = fib2;
	fib2 = fib3;
	count++;
	}
	printf("\n");
	return 0;
}
