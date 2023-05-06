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

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		j = i;
		andmask = 1 << j;
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
