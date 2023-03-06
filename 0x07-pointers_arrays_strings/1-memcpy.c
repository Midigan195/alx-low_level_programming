#include"main.h"
/**
 * _memcpy - copy n bytes
 * @dest: pointer
 * @src: input pointer
 * @n: number of bytes
 * Return: pointer at s;
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
