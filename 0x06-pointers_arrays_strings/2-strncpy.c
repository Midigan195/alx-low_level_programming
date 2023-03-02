#include"main.h"
/**
 * _strncpy - concattenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}

	if (n < len)
	{
		while (*(src + i) != '\0' && i < n)
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	else
	{
		while (*(src + j) != '\0' && j < n && j < len)
		{
			*(dest + j) = *(src + j);
			j++;
		}
		*(dest + j) = '\0';
	}

	return (dest);
}
