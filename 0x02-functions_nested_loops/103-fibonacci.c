#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	unsigned long int r, s, next_number, sum;

	r = 1;
	s = 2;
	sum = 0;
	for (q = 1; q <= 33; ++q)
	{
		if (r < 4000000 && (r % 2) == 0)
		{
			sum = sum + r;
		}
		next_number = r + s;
		r = s;
		r = next_number;
	}
	printf("%lu\n", sum);
	return (0);
}
