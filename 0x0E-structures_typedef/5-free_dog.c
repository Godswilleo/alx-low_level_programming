#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free memory
* @d: pointer to the struct
*/

void free_dog(dog_t *d)
{
	if (d == NULL}
	{}

	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);

}
