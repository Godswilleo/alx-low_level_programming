#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes the struct dog
* @name: variable
* @age: variable
* @owner: variable
* @d: pointer to the struct dog type variable
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
