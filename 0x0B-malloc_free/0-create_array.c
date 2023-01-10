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
	unsigned int i;
	char *cp;

	cp = malloc(size * sizeof(c));

	if (cp != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			cp[i] = c;
		}
		return (cp);
	}
	else
		return (NULL);
}
