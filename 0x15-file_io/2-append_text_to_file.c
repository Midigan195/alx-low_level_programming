#include <stddef.h>
#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - Adds text to an already existing file
 * @filename: name of file
 * @text_content: text to be added to file
 * Return: 1 on sucess else -1 on faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n = 0;
	int count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);

	while (text_content[count] != '\0')
	{
		count++;
	}

	n = open(filename, O_WRONLY | O_APPEND);
	if (n == -1)
		return (-1);
	n = write(n, text_content, count);
	close(n);
	if (n == -1)
		return (-1);
	return (1);
}
