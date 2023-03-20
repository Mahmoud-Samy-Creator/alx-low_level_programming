#include "dog.h"

/**
 * init_dog - variable inizialization of type struct dog
 * @d pointer to struct
 * @name - pointer to char dog's name
 * @age - float
 * @owner - pointer to char of dog's owner
 * Return: No.
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
