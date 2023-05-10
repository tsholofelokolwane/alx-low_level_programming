#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at
 * the end of the file
 *
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not
 * exist or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a");

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
