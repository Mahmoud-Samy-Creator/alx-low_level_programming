#include "main.h"

/**
 *create_file - A function used to create a file
 *@filename: File to be created
 *@text_content: content to be written in the file
 *Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_num, count_letters = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (count_letters = 0 ; text_content[count_letters]; count_letters++)
	;

	write_num = write(fd, text_content, count_letters);
	if (write_num == -1)
		return (-1);

	close(fd);

	return (1);
}
