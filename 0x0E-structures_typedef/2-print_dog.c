#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints all the data of a dog
 * @d: a dog structure
 *
 * Return: nothiing
 */
void print_dog(struct dog *d)
{
	if (d = NULL)
	{
		return;
	}
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
