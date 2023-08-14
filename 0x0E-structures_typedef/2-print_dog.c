#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the details of the dog.
 * @d: dog's details to be printed.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
