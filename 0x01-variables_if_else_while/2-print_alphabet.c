#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	/*declaration of data type*/
	char alphabet;

	/*print alphabets*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
return (0);
}
