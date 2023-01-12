#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int c, num;

	for (c = 0; c < 10; c++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
