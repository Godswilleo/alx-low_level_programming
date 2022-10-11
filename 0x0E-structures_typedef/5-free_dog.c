#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free memory
* @d: pointer to the struct
*/
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
