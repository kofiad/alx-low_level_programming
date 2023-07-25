#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * generate_random_char - Generate a random lowercase letter ('a' to 'z').
 *
 * Return: The random lowercase letter.
 */
char generate_random_char(void)
{
    return rand() % ('z' - 'a' + 1) + 'a';
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

    printf("%s\n", password);

    return 0;
}
