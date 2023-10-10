#include "dog.h"
#include <stdio.h>
/**
 *print_dog - a function that print a struct dog
 *@d: a pointer to the struct
 */
void print_dog(struct dog *d)
{
	/* check if pointer is NULL*/
	if (d == NULL)
	{
		return;
	}
	/*check if elemt of d is NULL*/
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	if (d->age <= 0)
	{
		printf("(nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	/* print each eleemnt of pointer d */
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
