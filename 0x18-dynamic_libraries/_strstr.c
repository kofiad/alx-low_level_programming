#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string hastack. The terminating bytes are not compared.
 *
 * @needle: substring of interest
 * @haystack: string of interest
 *
 * Return: pointer to beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *string_a, *string_b;

	while (*haystack != '\0')
	{
		string_a = haystack;
		string_b = needle;
		while (*haystack != '\0' && *string_b != '\0'
				&& *haystack == *string_b)
		{
			haystack++;
			string_b++;
		}
		if (*string_b == '\0')
		{
			return (string_a);
		}
		haystack = string_a + 1;
	}
		return (0);

}
