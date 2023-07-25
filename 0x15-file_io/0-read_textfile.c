#include "main.h"

/**
 * read_textfile - A function reads a text & print it
 * @filename: The required file to be read
 * @letters: The size will be read from the file
 * Return: Actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t  read_num = 0, write_num = 0;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	read_num = read(fd, buffer, letters);
	write_num = write(STDOUT_FILENO, buffer, read_num);

	if (write_num == 0)
		return (0);

	free(buffer);
	close(fd);

	return (write_num);
}
