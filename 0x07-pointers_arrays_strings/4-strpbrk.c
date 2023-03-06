#include"main.h"
/**
 * _strpbrk - fill area in memory
 * @s: pointer
 * @accept: character
 * Return: pointer at s;
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *prt = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) != *(accept + j))
				j++;
			else
			{
				break;
			}
		}
		if (*(s + i) == *(accept + j))
			break;
		i++;
	}
	prt = s + i;
	if (*(s + i) == '\0')
		prt = 0;

	return (prt);
}
