#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument vector
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
