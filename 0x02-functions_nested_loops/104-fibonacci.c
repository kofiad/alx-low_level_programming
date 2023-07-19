#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
	unsigned long int x;
	unsigned long int begin = 1;
	unsigned long int next = 2;
	unsigned long int y = 1000000000;
	unsigned long int begin1;
	unsigned long int begin2;
	unsigned long int next1;
	unsigned long int next2;

	printf("%lu", begin;
	for (x = 1; x < 91; x++)
	{
		printf(", %lu", next);
		next += begin;
		begin = next - begin;
	}
	begin1 = (begin / l);
	begin2 = (begin % l);
	next1 = (next / l);
	next2 = (next % l);
	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", next1 + (next2 / l));
		printf("%lu", next2 % l);
		next1 = next1 + begin1;
		begin1 = next1 - begin1;
		next2 = next2 + begin2;
		begin2 = next2 - begin2;
	}
	printf("\n");
	return (0);
}
