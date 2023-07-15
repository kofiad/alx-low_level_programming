#include <stdio.h>
/**
 * main - prints alphabet in lowercase in reverse
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	/*print alphabet in lowercase in reverse*/
	for (alphabet = 'z'; alphabet <= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
