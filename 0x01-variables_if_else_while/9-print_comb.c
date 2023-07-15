#include <stdio.h>
/**
 * main - prints all possible combinations of single-digits
 *
 * Return: 0
 */
int main(void)
{
	int i;/*declare variable i*/

	/*print out first digit 0*/
	putchar('0');
	for (i = '1'; i <= '9'; i++){
		putchar(',');/*print , after every number*/
		putchar(' ');/*print space after every number*/
		putchar( i + '0');/*print current digit*/
	}
	putchar('\n');
return (0);
}
