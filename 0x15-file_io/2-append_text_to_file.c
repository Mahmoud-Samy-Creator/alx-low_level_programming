#include "main.h"

/**
 * append_text_to_file - A function to add content to a file
 * @filename: the filename to add the content to
 * @text_content: The content to be added
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, con = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (con = 0; text_content[con]; con++)
	;

	wr = write(fd, text_content, con);
	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
