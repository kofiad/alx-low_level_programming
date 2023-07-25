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

/**
 * main - Generate a random valid password for 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password string

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generate_random_char();
    }

    printf("Random valid password: %s\n", password);

    return 0;
}
