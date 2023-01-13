#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocateds memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fail, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pt[i] = 0;

	return (pt);
}
