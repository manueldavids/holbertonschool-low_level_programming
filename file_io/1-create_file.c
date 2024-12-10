#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to the text content to write into the file.
 *
 * Description: This function creates a new file, or truncates an existing file,
 *              and writes the provided text content into it.
 *              The file will have permission 0600 (read/write for owner).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, file; /* `i` is the length of the content, `file` is the file descriptor */

	/* Check if the filename is NULL, return -1 if it is */
	if (filename == NULL)
		return (-1);

	/* If text_content is NULL, treat it as an empty string */
	if (text_content == NULL)
		text_content = "";

	/* Calculate the length of the text_content */
	while (text_content[i] != '\0')
	{
		i++;
	}

	/* Open the file for writing. Create it if it doesn't exist, truncate if it does */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Check if the file failed to open, return -1 on failure */
	if (file == -1)
		return (-1);

	/* Write the content to the file */
	write(file, text_content, i);

	/* Close the file descriptor after writing */
	close(file);

	/* Return 1 to indicate success */
	return (1);
}

