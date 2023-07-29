#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?,\", (, ), {, and }
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	/*Start with capitalizing the first character*/
	int capitalize_next = 1;

	while (*str != '\0')
	{
		/*Check if the current character is a word separator*/
		if (*str == ' ' || *str == '\t' ||
				*str == '\n' || *str == ',' || *str == ';' ||
			*str == '.' || *str == '!' || *str == '?' || *str == '"' || *str == '(' ||
			*str == ')' || *str == '{' || *str == '}')
		{
			/*Set flag to capitalize the next character*/
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			/*Capitalize the current character*/
			*str = toupper(*str);
			/*Reset flag to not capitalize the next character*/
			capitalize_next = 0;
		}
		str++; /*Move to the next character*/
	}

	return (str);
}
