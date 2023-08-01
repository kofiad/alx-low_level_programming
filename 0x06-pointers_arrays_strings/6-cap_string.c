#include "main.h"
#include <ctype.h>

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
	int capitalize_next;

	while (str[capitalize_next] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		/*Check if the current character is a word separator*/
		if (str[capitalize_next] == ' ' || str[capitalize_next] == '\t' ||
				str[capitalize_next] == '\n' || str[capitalize_next] == ','
				|| str[capitalize_next] == ';' || str[capitalize_next] == '.'
				|| str[capitalize_next] == '!' || str[capitalize_next] == '?'
				|| str[capitalize_next] == '"' || str[capitalize_next] == '('
				|| str[capitalize_next] == ')' || str[capitalize_next] == '{'
				|| str[capitalize_next] == '}')
		{
			if (str[capitalize_next + 1] >= 97 && str[capitalize_next] <= 122)
			{
			str[capitalize_next + 1] = str[capitalize_next + 1] - 32;
			}
		}
		capitalize_next++;
	}
	return (str);
}
