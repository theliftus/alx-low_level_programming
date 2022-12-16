#include "main.h"

/**
 * print_numbers -  0 to 9 followed by a new line
 *
 * Description: void print_numbers(void)
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
