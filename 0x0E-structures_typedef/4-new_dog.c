#include"dog.h"
#include<string.h>
#include <stdlib.h>

/**
*new_dog - creates a new dog
*@name: name of dog
*@age: age of dog
*@owner: owner of  dog
*Return: returns string of dog's data
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);
d->name = malloc(sizeof(char) * (strlen(name) + 1));
if (d->name == NULL)
{
	free(d->name);
	return (NULL);
}
d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (d->owner == NULL)
{
	free(d->name);
	free(d);
	return (NULL);
}
strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);
return (d);
}
