#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring
 * or Null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *dhaystack;
	char *gneedle;

	while (haystack != '\0')
	{
		dhaystack = haystack;
		gneedle = needle;

		while (*haystack != '\0' && *gneedle != '\0' && *haystack == *gneedle)
		{
			haystack++;
			gneedle++;
		}
		if (!*gneedle)
			return (dhaystack);
		haystack = dhaystack + 1;
	}
	return (0);
}


