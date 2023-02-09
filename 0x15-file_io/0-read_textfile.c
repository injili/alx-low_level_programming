#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: the pointer to the file to be read from
 * @letters: size to be printed
 *
 * Return: the actual number of letters read and printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t one, two, file;
	char *temp;

	temp = malloc(letters);
	if (temp == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(temp);
		return (0);
	}

	one = read(file, temp, letters);
	two = write(STDOUT_FILENO, temp, one);

	close(file);

	return (two);
}
