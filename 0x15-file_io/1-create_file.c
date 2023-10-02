#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include<string.h>
/**
 * create_file - function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}
	else
	{
	len = strlen(text_content);
	fd = open(filename, O_RDONLY | O_CREAT);
	write(fd, text_content, len);
	close(fd);
	}
	return (1);
}
