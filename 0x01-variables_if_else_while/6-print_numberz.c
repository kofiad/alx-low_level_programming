#include <stdio.h>
/**
 * main - print out 0-9
 *
 * Return: 0
 */
int main(void)
{
	int num;

	/*printing out 0-9*/
	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	putchar('\n');
	return (0);
}
