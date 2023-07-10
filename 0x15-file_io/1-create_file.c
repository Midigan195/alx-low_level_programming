#include <stddef.h>
#include "main.h"
/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: text to be writen in new file
 * Return: 1 on sucess else -1 on faliure
 */

int create_file(const char *filename, char *text_content)
{
	int n = 0;
	int count = 0;

	if (filename == NULL)
		return (0);
	if (text_content == NULL)
	{
		n = open(filename, O_CREAT | O_TRUNC, 0600);
		if (n == -1)
			return (-1);
		return (1);
	}

	while (text_content[count] != '\0')
		count++;
	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (n == -1)
		return (-1);
	n = write(n, text_content, count);
	if (n == -1)
		return (-1);
	return (1);
}
