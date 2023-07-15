#include <stdio.h>
/**
 * main - print all possible combination of two-digit numbers
 *
 * Return: 0
 */

int main(void) 
{
    int g, i;

	for (g = 0; g <= 99; g++) 
	{
		for (i = g; i <= 99; i++) 
		{
		putchar(g / 10 + '0');
		putchar(g % 10 + '0');
		putchar(' ');
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
			if (g != 99 || i != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
return 0;
}
