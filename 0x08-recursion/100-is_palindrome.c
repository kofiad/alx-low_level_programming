#include "main.h"

/**
 * str_length - checks length f string
 * @s: string of interest
 * Return: 0 if null, 1 otherwise
 */
int str_length(char *s)
{
	if (*s == '\0')
	{
		return (0); /*Base case: end of the string*/
	}
	/*Recursive call with the next character in the string*/
    return (1 + str_length(s + 1));
}

/**
 * is_palinfrom_helper - checks for palindrome
 * @s: string of interest
 * @start: starting  byte
 * @end: ending byte
 * Return: 1 if palindrome
 * 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		/*The string is a palindrome*/
		return (1);
	}
	if (s[start] != s[end])
	{
		/* The string is not a palindrome*/
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - palindrome function
 * @s: string of interest
 * Return: 1 if palindrome
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	if (length <= 1)
	{
		/*An empty string or single character is a palindrome*/
		return (1);
	}
	return (is_palindrome_helper(s, 0, length - 1));
}
