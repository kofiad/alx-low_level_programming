#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
