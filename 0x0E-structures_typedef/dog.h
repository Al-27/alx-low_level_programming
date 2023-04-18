#ifndef DOG_H
#define DOG_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char* name;
	float age;
	char* owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
