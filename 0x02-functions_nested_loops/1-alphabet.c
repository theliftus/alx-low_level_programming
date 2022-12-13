#include <stdio.h>
#include "main.h"

/**
 * main - to print alphabets in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
