#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints struct dog
* @name: variable
* @age: variable
* @owner: variable
* @d: pointer to the struct dog type variable
*/

void print_dog(struct dog *d)
{
	d = malloc(sizeof(
	
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
