#include <fcntl.h>
#include <stdlib.h>
#include <unistd>
#include <stddef.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name to the file
 * @text_content: NULL terminated string to add
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letters. wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr = write(fd, text_content, letters);

		if (wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
