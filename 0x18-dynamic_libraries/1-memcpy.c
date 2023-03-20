#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area destination
 * @src: memory area present location
 * @n: bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
