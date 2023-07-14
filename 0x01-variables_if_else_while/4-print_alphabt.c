#include <stdio.h>
/**
 * main - prints alphabet in lowercase except q, e
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	/*loop to print alphabet in lowercase minus q,e*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
return (0);
}
