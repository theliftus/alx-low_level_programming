#include "main.h"

/**
 *_isupper - checks for uppercase character
 * @c: An input character
 * Description: function _isupper
 * Return: 1 if c is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{

	if (ch == c)
	return (1);
	}
	return (0);
}
