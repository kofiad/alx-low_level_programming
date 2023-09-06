#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a character is a space, tab, or newline
int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

// Function to count the number of words in a string
int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_space(str[i]) && !in_word) {
            in_word = 1;
            count++;
        } else if (is_space(str[i])) {
            in_word = 0;
        }
    }

    return count;
}

// Function to split a string into words
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL; // Return NULL if str is NULL or an empty string
    }

    int word_count = count_words(str);
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL; // Return NULL on memory allocation failure
    }

    int word_index = 0;
    int word_start = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_space(str[i]) && !in_word) {
            in_word = 1;
            word_start = i;
        } else if (is_space(str[i])) {
            if (in_word) {
                int word_length = i - word_start;
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL) {
                    // Clean up and return NULL on memory allocation failure
                    for (int j = 0; j < word_index; j++) {
                        free(words[j]);
                    }
                    free(words);
                    return NULL;
                }
                strncpy(words[word_index], &str[word_start], word_length);
                words[word_index][word_length] = '\0';
                word_index++;
                in_word = 0;
            }
        }
    }

    if (in_word) {
        int word_length = strlen(&str[word_start]);
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            // Clean up and return NULL on memory allocation failure
            for (int j = 0; j < word_index; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        strcpy(words[word_index], &str[word_start]);
        word_index++;
    }

    words[word_index] = NULL; // Set the last element to NULL to indicate the end of words

    return words;
}

int main() {
    char *str = "Hello World";
    char **words = strtow(str);

    if (words != NULL) {
        for (int i = 0; words[i] != NULL; i++) {
            printf("Word %d: %s\n", i, words[i]);
            free(words[i]);
        }
        free(words);
    } else {
        printf("Memory allocation failed or empty string.\n");
    }

    return 0;
}
