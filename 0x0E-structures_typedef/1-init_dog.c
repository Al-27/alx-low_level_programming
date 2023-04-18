#include "dog.h"
/**
 * init_dog - xyz
 * @d: xyz
 * @name: xyz
 * @age: xyz
 * @owner: xyz
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
