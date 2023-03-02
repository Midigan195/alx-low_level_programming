#include"main.h"
/**
 * _strncat - concattenates two strings to n bytes
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: value of dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int j = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	j = 0;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + (len + j)) = *(src + j);
		j++;
	}
	*(dest + (len + j)) = '\0';

	return (dest);
}
