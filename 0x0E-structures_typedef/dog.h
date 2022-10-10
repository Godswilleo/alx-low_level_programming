#ifndef DOG_H
#define DOG_H

/**
* struct dog - defines a dog
* @name: member
* @age: member
* @owner: member
*
* Description: This is a struct that defines tha characteristic of a dog
*/

typedef struct
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
