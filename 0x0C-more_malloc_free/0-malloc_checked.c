#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory unsing malloc
 *
 * @b: memory to be assigned
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *am;

	am = malloc(b);

	if (am == NULL)
		exit(98);

	return (am);
}
