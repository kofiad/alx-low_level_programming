#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main: beginning 
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	/* if the last digit of n is greater than 5: the string and is greater than 5*/
	if (x > 5)
	{
		printf("if the last digit of %d is greater than 5\n", n);
	}
	/* if the last digit of n is 0: the string and is 0*/
	if (x == 0)
	{
		printf("if the last digit of %d is 0\n", n);
	}
	/* if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0*/
	if (x > 6 && x != 0)
	{
	printf("if the last digit of %d is %d less than 6 and not 0\n", n,x);
	}
return (0);
}
