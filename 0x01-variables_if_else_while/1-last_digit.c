#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: print last digit of number stored in variable n 
 *
 * Return: 0
*/
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	/* if the last digit of n is greater than 5*/
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	/* if the last digit of n is 0*/
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	/* if the last digit of n is less than 6 and not 0*/
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
return (0);
}
