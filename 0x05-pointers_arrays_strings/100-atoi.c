#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The input string.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			/*Check for integer overflow*/
			if (result > INT_MAX / 10 ||
					(result == INT_MAX / 10 &&
					 digit > INT_MAX % 10))
			{
				/*Return INT_MAX for positive values*/
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}

			result = result * 10 + digit;
		}
		else if (result != 0)
		{
			break;
		}

		i++;
	}

	return (result * sign);
}
