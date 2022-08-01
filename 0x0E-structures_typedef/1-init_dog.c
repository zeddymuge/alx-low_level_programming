#include "dog.h"
#include <stddef.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct to initialize
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

