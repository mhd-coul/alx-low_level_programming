#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init a vat of type struc
 * @d : pointer to struct dog
 * @name : name to initialize
 * @age : age to initioalize
 * @owner : owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
