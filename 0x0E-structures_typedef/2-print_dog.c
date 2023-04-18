#include "dog.h"
/**
 * print_dog - xyz
 * @d: xyz
 *
 */
void print_dog(struct dog *d)
{
	if(d)
	{
		char* name,* owner;
		float age;
		
		name = d->name, owner = d->owner, age = d->age;
		printf("Name: %s\n",name ? name : "(nil)");
		printf("Age: %f\n",age);
		printf("Owner: %s\n",owner ? owner : "(nil)");
	}
}
