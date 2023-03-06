#include"main.h"
/**
 * _strchr - fill area in memory
 * @s: pointer
 * @c: character
 * Return: pointer at s;
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *dest;

	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
			i++;
		else
		{
			dest = &(*(s + i));
			break;
		}
	}
	if (*(s + i) == '\0')
		*dest = '\0';

	return (dest);
}
