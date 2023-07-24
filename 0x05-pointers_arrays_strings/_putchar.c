#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 on success
 * -1 is returned on error, errno is set appopriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
