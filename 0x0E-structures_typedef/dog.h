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

struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
