#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

void check(int option, int id, char *file);
/**
 * check - handles error messages
 * @option: wether error is read or write
 * @id: file ID
 * @file: name of file
 */
void check(int option, int id, char *file)
{
	if (option == 1)
	{
		if (id == -1)
		{
			dprintf(2, "Error: Can't read from this thing %s\n", file);
			exit(98);
		}
	}
	else if (option == 2)
	{
		if (id == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file);
			exit(99);
		}
	}
}
/**
 * main - Copies data from one file to another
 * @ac: Number of arguments
 * @av: argument vectors
 * Return: always returns 0
 */

int main(int ac, char **av)
{
	char *fileto = av[2];
	char *filefrom = av[1];
	char *buff = NULL;
	int k = 0;
	int j = 0;
	size_t buff_size = 1024;
	int n = 0;
	int i = 0;

	mode_t old_mask = umask(0);

	if (ac != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	buff = malloc(buff_size);
	n = open(filefrom, O_RDONLY);
	check(1, n, filefrom);
	k = read(n, buff, buff_size);
	check(1, k, filefrom);

	if (close(n) == -1)
	{
		dprintf(2, "Can't close fd %i\n", n);
		exit(100);
	}

	i = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check(2, i, fileto);
	j = write(i, buff, buff_size);
	check(2, j, fileto);

	if (close(i) == -1)
	{
		dprintf(2, "Can't close fd %i\n", i);
		printf("there is an issue");
		exit(100);
	}
	umask(old_mask);
	free(buff);
	return (0);
}

