#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: name of the file to append text to
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on failure
 *         If filename is NULL return -1
 *         If text_content is NULL, do not add anything to the file.
 *         Return 1 if the file exists and -1 if the file does not exist or
 *         if you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

