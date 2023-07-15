#include <stdio.h>
/**
 * main - prints all possible combinations of single-digits
 *
 * Return: 0
 */
int main(void)
{
	int i;/*declare variable i*/

	for (i = 0; i <= 9; i++){
		putchar( i + '0');/*print current digit*/
	if (i != 0){
		putchar(',');/*print , after every number*/
		putchar(' ');/*print space after every number*/
	}
	}
	putchar('\n');
return (0);
}
