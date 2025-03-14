#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: a pointer to a character array that stores dog's name
 * @age: a float represents dog's age
 * @owner: a pointer to a character array that stores dog's owner's name
 *
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
