#include "main.h"

/**
 * wildcamp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical
 * 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/*Base cases*/
	if (*s1 == '\0' && *s2 == '\0')
	{
		/*Both strings are empty, consider them identical*/
		return (1);
	}
	else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0') {
		/*Handle case when s2 starts with '*'*/
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s2 == '*' && *(s2 + 1) == '\0')
	{
		/*'*' at the end of s2 can match any remaining characters in s1*/
		return (1);
	}

	if (*s1 == *s2 || *s2 == '?')
	{
	/*Characters match, check next characters*/
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		/*Try to match * with the next character in s1 or skip * in s2*/
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	return (0); /*Characters do not match, return 0*/
}
