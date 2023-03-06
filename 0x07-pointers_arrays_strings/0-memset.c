#include"main.h"
/**
 * _memset - fill area in memory
 * @s: pointer
 * @b: character
 * @n: number of bytes
 * Return: pointer at s;
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int c = n;

	while (i < c)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
