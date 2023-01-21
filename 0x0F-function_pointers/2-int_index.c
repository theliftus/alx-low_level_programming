#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - funtion that searches for an integer
 * @array: variable array
 * @size: size of variable array
 * @cmp: function pointer to be used
 * Return:index of the first elemnt, -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int cp;
	int sp = -1;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (sp);

	for (i = 0; i < size; i++)
	{
		cp = cmp(array[i]);
		if (cp != 0)
		{
			sp = i;
			return (sp);
		}
	}
	return (sp);
}
