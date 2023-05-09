#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The read text file
 * @letters: No. of letters to be read
 * Return: read_letters - No. of bytes read and printed
 * 0 - function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t read_letters;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(file, buffer, letters);
	read_letters = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file);
	return (read_letters);
}

