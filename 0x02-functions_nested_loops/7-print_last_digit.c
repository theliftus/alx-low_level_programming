#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @value: The Return
 * Return: success value
 */
int print_last_digit(int value)
{
	int var;

	var = value % 10;
	if (value < 0)
	{
		var *= -1;
	}
	_putchar('0' + var);
	return (var);
}
