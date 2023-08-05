#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: test string
 * @c: character to be located
 *
 * Return: pointer to first occurrence of character c
 * NULL if character is absent
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
		{
			return (&s[g]);
		}
	}
	return (0);
}
