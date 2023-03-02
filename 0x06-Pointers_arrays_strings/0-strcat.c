#include"main.h"
/**
 * _strcat - concattenates two strings
 * @dest: string 1
 * @src: string 2
 * return: dest
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + (len + j)) = *(src + j);
		j++;
	}
	*(dest + (len + j)) = '\0';

	return (dest);
}
