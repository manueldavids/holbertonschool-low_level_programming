#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters it could read and print,
 * or 0 if the file can't be opened, read, or if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor */
	char *buffer; /* Buffer to hold file content */
	ssize_t bytes_read, bytes_written; /* Bytes read and written */

	if (filename == NULL)
		return (0); /* Invalid filename */

	fd = open(filename, O_RDONLY);
	if (fd == -1) /* Error opening the file */
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* Memory allocation failed */
	{
		close(fd);
		return (0);
	}
	/* Read the file content */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1) /* Reading failed */
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Write the content to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) /* Writing failed */
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written); /* Return the number of bytes written */
}
