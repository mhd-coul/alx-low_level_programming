#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struc dog
 * @d : struct to be printed
 */

#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6g\n", d->age);
	printf("Owner: %c\n", d->owner ? d->owner : "(nil)");
}

