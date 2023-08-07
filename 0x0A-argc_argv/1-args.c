#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * followed by a new line
 *
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	/*print the number of arguments minus program name*/
	putchar(argc - 1);
	return (0);
}
