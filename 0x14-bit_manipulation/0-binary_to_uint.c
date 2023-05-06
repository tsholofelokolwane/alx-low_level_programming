#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_value;

	binary_value = (unsigned int) strtol(b, NULL, 2);

	if (b == NULL)
	{
		return (0);
	}

	else if (*b != '0' && *b != '1')
	{
		return (0);
	}

	else
	{
		return (binary_value);
	}
}
