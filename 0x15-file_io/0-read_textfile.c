#include "main.h"

/**
 * read_textfile - reads a text file and print to stdout
 * @filename: pointer to name of file
 * @letters: number of letter to read
 * Return: number of letter to write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buffer;
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	rd = read(file, buffer, letters);
	if (rd == -1)
		return (-1);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
		return (0);
	close(file);
	free(buffer);
	return(wr);
}
