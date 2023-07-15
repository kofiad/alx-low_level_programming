#include <std.h>
/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char hexadecimal;

	/*print numbers in base 16 in lowercase*/
	for (hexadecimal = '0'; hexadecimal <= '9'; hexadecimal++)
	{
		putchar(hexadecimal);
	}
	for (hexadecimal = 'a'; hexadecimal <= 'f'; hexadecimal++)
	{
		putchar(hexadecimal);
	}
	putchar('\n');/*print new line*/
return (0);
}
