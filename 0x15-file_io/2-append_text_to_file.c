#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: Pointer to the file name.
 * @text_content: The string to append
 * Return: 1 if Success, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file = 0;
	int wr = 0;
	int size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, size);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}

