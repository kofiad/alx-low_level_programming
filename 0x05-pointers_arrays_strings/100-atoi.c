#include <stdbool.h>
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    // Skip leading white spaces
    while (*s == ' ')
    {
        s++;
    }

    // Handle the optional sign
    bool isNegative = false;
    if (*s == '-')
    {
        isNegative = true;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    // Convert the remaining characters into an integer
    int result = 0;
    while (*s >= '0' && *s <= '9')
    {
        // Check for overflow before adding the next digit
        if (result > (INT_MAX - (*s - '0')) / 10)
        {
            // Overflow will occur, so return the maximum/minimum value accordingly
            return isNegative ? INT_MIN : INT_MAX;
        }

        // Update the result
        result = result * 10 + (*s - '0');
        s++;
    }

    // Apply the sign to the result if it was negative
    return isNegative ? -result : result;
}
