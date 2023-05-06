#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: position
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
