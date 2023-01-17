#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * print_dog - prints the struct dog
 * @d: the memeber to be printed
 *
 * Description: it writes a function thta prints
 */
void print_dog(struct dog *d);
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		else
			printf("Name: %d\n", d->name);
		}
		if (d->age < NULL)
		{
			print("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		else
			printf("Owner: %d\n", d->owner);
		}
	}
}
