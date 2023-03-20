#include <stdio.h>

/*
 * function - init_dog
 * @d pointer to struct
 * @name - pointer to char dog's name
 * @age - float
 * @owner - pointer to char of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

	d->name = name;
	d->age = age;
	d->owner = owner;

	}
}
