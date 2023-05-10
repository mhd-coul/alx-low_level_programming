#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with specified permissions and writes a
 *               null-terminated string to it
 *
 * @filename: name of the file to create
 * @text_content: null-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *         (file can not be created, file can
 *         not be written, write "fails", etc.)
 *         If the file already exists, truncate it.
 *         If filename is NULL return -1.
 *         If text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
