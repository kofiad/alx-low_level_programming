#include <stdio.h>

/**
* main - prints name of file it was compiled from
* Return: void
*/

int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}
