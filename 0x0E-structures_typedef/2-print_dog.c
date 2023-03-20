#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  function that prints a struct dog.
 *
 * @d: dog parameter.
 *
 * Return: nothing.
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age : %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
