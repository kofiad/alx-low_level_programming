#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string hastack. The terminating bytes are not compared.
 *
 * @needle:
 * @haystack:
 *
 * Return: pointer to beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *string_a, *string_b;

	while (haystack != '\0')
	{
		string_a = haystack;
		string_b = needle;
		while (*haystack != '\0' && *string_b != '\0'
				&& *haystack == *string_2)
		{
			haystack++;
			string_2++;
		}
		if (*string_2 == '\0')
		{
			return (string_1);
		}
		haystack = string_1 + 1;
	}
		return (0);

}
