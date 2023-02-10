#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write ti the file
 *
 * Return: 1on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters, rw;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rw = write(fd, text_content, letters);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}
