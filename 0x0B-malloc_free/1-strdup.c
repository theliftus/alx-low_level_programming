#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to the newly allocated space in memory
 * @str: string to be copied
 *
 * Return: returns a char pointer
 */
char *_strdup(char *str)
{
	int i;
	char *cp;

	if (str == NULL)
		return (NULL);

	if (!str)
		return (NULL);

	cp = malloc(strlen(str) + 1);

	if (!cp)
		return (NULL);

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
	free(cp);
}
