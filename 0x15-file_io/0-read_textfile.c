#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print it to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed 0
 * when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t i;
	ssize_t j;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	j = read(file, buffer, letters);
	i = write(STDOUT_FILENO, buffer, j);

	free(buffer);
	close(file);
	return (i);
}
