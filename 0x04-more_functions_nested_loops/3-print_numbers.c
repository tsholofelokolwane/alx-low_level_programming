#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 * Return: numbers from 0 to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
