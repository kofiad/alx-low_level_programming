#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * followed by a new line
 *
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	/*Print program name from command line argument*/
	for(i = 0; argv[0][i] != '\0'; i++)
	{
		putchar(argv[0][i]);
	}
	putchar('\n');
	/*to avoid unused parameter warning*/
	(void)argc;
	return (0);
}
