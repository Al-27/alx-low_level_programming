#include "dog.h"
/**
 * new_dog - xyz
 * @name: xyz
 * @age: xyz
 * @owner: xyz
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp = malloc(sizeof(dog_t));
	if(tmp)
	{
		tmp->name = malloc(250);
		tmp->owner = malloc(250);
		if(tmp->name && tmp->owner)
		{
			tmp->name = name;
			tmp->owner = owner;
			tmp->age = age;	
		}	
	}
	
	return tmp;
}
