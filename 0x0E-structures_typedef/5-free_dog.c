#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dog
 * @d: parameter
 * Return: always 0;
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
