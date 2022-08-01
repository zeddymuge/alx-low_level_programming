#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: struct to initialize
 * Return: nothing
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		printf("nil");
	if (name == NULL)
		printf("Name: nil");
	d->name = name;
	d->age = age;
	d->owner = owner;
}
