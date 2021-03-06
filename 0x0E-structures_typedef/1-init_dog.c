#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a fucntion that initialize a variable of type dog
 *
 * @d : pointer to the dog
 *
 * @name : name of the dog
 *
 * @age : age of the dog
 *
 * @owner: dog's owner
 *
 * Return: null
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
