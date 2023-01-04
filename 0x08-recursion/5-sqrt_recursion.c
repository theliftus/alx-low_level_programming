#include "main.h"

/**
 * square_root - finds square root ofnumber
 * @a: the square root number
 * @b: the main number
 * Return: square root or -1 in n less than 0
 */

int square_root(int a, int b)
{
	if ((a * a) == b)
		return (a);
	else if ((a * a) > b)
		return (-1);
	else
		return (square_root((a + 1), b));
}

/**
 * _sqrt_recursion - Returns the natural square root of number
 * @n: number
 * Return: square root or -1 if n is less tha 0
 */

int _sqrt_recursion(int n)
{
	if (n >= 0)
	{
		return (square_root(1, n));
	}
	else
		return (-1);
}
