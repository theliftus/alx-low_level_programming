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
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}

	_putchar('\n');
}
