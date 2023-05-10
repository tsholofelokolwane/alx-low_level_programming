#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	int ch;
	size_t count = 0;

	/* Opening file in reading mode */
	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	/* Allocate buffer to store the contents of the file */
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	/* Reading up to 'letters' characters from the file */
	while ((ch = fgetc(fp)) != EOF && count < letters)
	{
		buffer[count] = (char) ch;
		count++;
	}

	/* Printing what is written in file */
	/* character by character using loop */
	fwrite(buffer, sizeof(char), count, stdout);

	/* Free buffer and close the file */
	free(buffer);
	fclose(fp);

	/* Return the actual number of characters read */
	return (count);
}
