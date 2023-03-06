#include"main.h"
/**
 * _strspn - fill area in memory
 * @s: pointer
 * @accept: character
 * Return: pointer at s;
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0' )
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) != *(accept + j))
				j++;
			else
				break;
		}
			if (*(accept + j) == '\0')
				break;
		i++;
	}
	return (i);
}
