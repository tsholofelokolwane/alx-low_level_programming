#include <stdio.h>

/**
 * main - Prints the number of args
 * @argsc: argument count
 * @argsv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
