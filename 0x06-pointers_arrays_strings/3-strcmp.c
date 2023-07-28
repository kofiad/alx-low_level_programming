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
	int count;

	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
