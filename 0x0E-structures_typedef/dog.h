#ifndef DOG_H
#define DOG_H

/**
 * struct Dog - struct of Dog
 * @name: name of Dog
 * @age: age of Dog
 * @owner: owner of Dog
 *
 * Description: this is a type of Dog,
 * with elements such as name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
