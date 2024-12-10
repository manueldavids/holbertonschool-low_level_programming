#include "main.h"

/**
 * read_textfile - Reads a text file and prints its contents to POSIX stdout.
 * @filename: Pointer to the name of the file to be read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         Returns 0 if:
 *           - The file cannot be opened or read.
 *           - The filename is NULL.
 *           - Write fails or doesn't write the expected number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor for the opened file */
	ssize_t bytes_read, bytes_written; /* Variables for read and write operations */
	char *buffer; /* Buffer to store the file content */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* Check if file opening failed */
	{
		free(buffer);
		return (0);
	}

	/* Read the file contents into the buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1) /* Check if reading failed */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write the contents of the buffer to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) /* Check if writing failed */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Free the buffer and close the file */
	free(buffer);
	close(fd);

	/* Return the number of bytes successfully written */
	return (bytes_written);
}

