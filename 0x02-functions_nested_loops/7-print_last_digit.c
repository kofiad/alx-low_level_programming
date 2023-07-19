#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: number to be checked
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	_putchar(last_digit + '0');
	_putchar('\n');
return (last_digit);
}
