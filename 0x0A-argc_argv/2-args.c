#include <stdio.h>

/**
 * main - prints all arguments it receives
 * all argument should be printed
 * only print one argument per line,ending with a new line
 *
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	/*loop to print each argument*/
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
