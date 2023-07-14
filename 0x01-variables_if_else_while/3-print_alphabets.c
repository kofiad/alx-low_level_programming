#include <stdio.h>
/**
 * main - prints alphabet in lowercase, then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	/*print alphabet in lowercase*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	/*print alphabet in uppercase*/
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
return (0);
}
