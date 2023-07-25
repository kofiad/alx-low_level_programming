#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 64

/**
 * generate_random_char - Generate a random printable ASCII character.
 *
 * Return: The random character.
 */
char generate_random_char(void)
{
    return rand() % ('~' - ' ' + 1) + ' ';
}

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */
    int i;

    srand(time(NULL)); /* Seed the random number generator with the current time */

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generate_random_char();
    }

    password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password string */

    printf("Random valid password: %s\n", password);

    return 0;
}
