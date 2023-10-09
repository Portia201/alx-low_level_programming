#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type
 * @d: pointer to struct dog to initialize
 * @name: initialize name
 * @age: inutialized age
 * @owner: initialized owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
