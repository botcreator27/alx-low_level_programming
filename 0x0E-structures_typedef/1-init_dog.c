#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialized variable of type struct dog
 *
 * @d: address
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: always 0
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

