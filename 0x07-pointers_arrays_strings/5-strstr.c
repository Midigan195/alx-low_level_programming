#include"main.h"
/**
 * _strstr - fill area in memory
 * @haystack: pointer
 * @needle: character
 * Return: pointer at s;
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	char *prt = 0;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			j = 0;
			while (*(needle + j) != '\0')
			{
				if (*(haystack + (i + j)) == *(needle + j))
					j++;
				else
					break;
			}
			if (*(needle + j) == '\0')
			{
				prt = haystack + i;
				break;
			}
		}
		i++;
	}

	return (prt);
}
