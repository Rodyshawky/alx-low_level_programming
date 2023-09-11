#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - Print data of dog
  * @d: dog structure
  * Return: Nothing
  */

void print_dog(struct dog *d)
{
if (d != NULL)
{
	if (d->name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("nil\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Owmer: %s\n", d->name);
	}
}
else 
{
	return;
}
}
