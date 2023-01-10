#include "main.h"
#include <stdlib.h>
/**
 * create_array - makes an array of chars
 * @size: size of the array
 * @c: storage char
 * Return: pointer of an array  of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	cp = malloc(sizeof(c) * size)
		for (i = 0; i < size; i++)
		{
			cp[i] = c;
		}
	if (cp == NULL && size == 0)
	{
		return (NULL);
	}
	else
		return (cp);
}
