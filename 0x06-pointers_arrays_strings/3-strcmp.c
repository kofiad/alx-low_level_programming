#insert "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string for comparison
 * @s2: second string for comparison
 *
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	retun (*s1 - *s2);
}
