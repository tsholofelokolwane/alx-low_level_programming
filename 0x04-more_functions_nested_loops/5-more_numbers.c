#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * Return: 10 times the value of numbers 0 to 14
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10 ; x++)
	{
	for (y = 0; y <= 10 ; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
