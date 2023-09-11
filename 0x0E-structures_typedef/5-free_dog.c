#include "dog.h"

/**
*free_dog - Frees dog
*@d: pointer to dog
*
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->name);
	free(d->age);
	free(d->owner);
}
}
