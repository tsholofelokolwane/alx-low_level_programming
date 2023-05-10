#include "main.h"
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to
 * write to the file
 *
 * Return: 1 on success, -1 on failure
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		fwrite(text_content, sizeof(char), len, fp);
	}

	fclose(fp);

	if (chmod(filename, mode) != 0)
	{
		return (-1);
	}

	return (1);
}
