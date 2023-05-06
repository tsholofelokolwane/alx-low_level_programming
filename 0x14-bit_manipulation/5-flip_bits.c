#include "main.h"
#include <stdio.h>

/**
 * countSetBits - counts set bits
 * @a: number
 *
 * Return: count of set bits
 */

/* Function that count set bits */
int countSetBits(int a)
{
	int count = 0;

	while (a > 0)
	{
		count++;
		a &= (a - 1);
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: count of flipped number
 */

/* Function that return count of flipped number */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
