#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints struct dog
* @d: pointer to the struct dog type variable
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);

	if (d->age < 0)
		printf("Age: (nil)\n");

	else
		printf("Age: %.1f\n", d->age);
}
