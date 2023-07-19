#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting 
 * with 1 and 2, followed by new line
 *
 * Return: 0
 */

int main(void)
{
	unsigned long long fib1 = 1;
	unsigned long long fib2 = 2;
	unsigned long long fib3;
	int count = 2;

	printf("%llu, %llu, ", fib1, fib2);
	while (count < 98) {
		fib3 = fib1 + fib2;
		printf("%llu", fib3);
        /*Add comma and space except for the last number*/
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
