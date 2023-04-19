#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the three in one
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
