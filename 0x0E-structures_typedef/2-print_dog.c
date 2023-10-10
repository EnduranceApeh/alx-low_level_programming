#include "dog.h"
#include <stdio.h>
/**
 *print_dog - a function that print a struct dog
 *@d: a pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age <= 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	if (d != NULL)
	{
		printf("Name:%s", d->name);
		printf("\nAge: %f", d->age);
		printf("\nOwner: %s\n", d->owner);
	}
}
