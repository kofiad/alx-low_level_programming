#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	/* Skip leading whitespaces */
	while (*s == ' ')
		s++;

	/* Check the sign */
	while (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -sign : sign;
		s++;
	}

	/* Convert the string to an integer */
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		/* Check for potential overflow */
		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		result = result * 10 + digit;
		s++;
	}

	return result * sign;
}
