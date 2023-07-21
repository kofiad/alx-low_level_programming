#include <stdio.h>
/**
 * fizz_buzz - prints numbers replacing
 * multiples of 3 with Fizz
 * multiples of 5 with Buzz
 * multiples of both FizzBuzz
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
		printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
}
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
