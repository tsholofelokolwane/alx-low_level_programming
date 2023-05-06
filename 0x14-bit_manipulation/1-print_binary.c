#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: given number
 *
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int j, k, andmask;
	int bits = sizeof(unsigned long int) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		j = i;
		andmask = 1UL << j;
		k = n & andmask;

		if (k == 0)
		{
			printf("0");
		}

		else
		{
			printf("1");
		}
	}
}
