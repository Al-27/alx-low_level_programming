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
	char *cp_owner, *cp_name;
	
	if(tmp)
	{
		tmp->name = malloc(250);
		tmp->owner = malloc(250);
		cp_name = malloc(250);
		cp_owner = malloc(250);
		if(tmp->name && tmp->owner && cp_name && cp_owner)
		{
			cp_name = tmp->name = name;
			cp_owner = tmp->owner = owner;
			tmp->age = age;	
		}	
	}
	else
		free(tmp);
	return tmp;
}
