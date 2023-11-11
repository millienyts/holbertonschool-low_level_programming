#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog- Function to free prev struct member created
 *
 * @d: new struct member with data created
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
