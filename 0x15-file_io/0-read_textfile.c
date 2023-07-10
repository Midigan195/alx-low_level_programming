#include <stddef.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a textfile and prints it to STDOUT_FILENO
 * @filename: Name of the file
 * @letters: Number of letters to print
 * Return: Number of letters read if succesful else 0
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int n = 0;
	size_t i = 0;
	char *buff = NULL;

	if (filename == NULL)
		return (0);
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	read(n, buff, letters);
	close(n);

	while (buff[i] != '\0')
		i++;
	n = write(STDOUT_FILENO, buff, i);
	if (n == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (i);
}
