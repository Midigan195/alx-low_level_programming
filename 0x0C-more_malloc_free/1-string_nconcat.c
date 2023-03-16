#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - returns exit status if malloc fails
 * @s1: number of bytes of string 1
 * @s2: number of btes of sting 2
 * @n: number of bytes to be concatenated
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int len1 = 0;
	int len2 = 0;
	int j = 0;
	int i = 0;

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	if (!(n >= len2))
		len2 = n;

	p = malloc((len1 + len2 + 1) * sizeof(char));

	while (i < len1)
	{
		p[i] = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		p[i] = *(s2 + j);
		j++;
		i++;
	}
	p[i] = '\0';

	return (p);
}
