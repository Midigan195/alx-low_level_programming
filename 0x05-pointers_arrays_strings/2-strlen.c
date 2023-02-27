#include"main.h"
/**
 * _strlen - changes value through pointer
 * @s: takes pointer of character
 * Return: nothing
*/

int _strlen(char *s)
{
	int i = 0;
	char c;

	while (c != '\0')
	{
		c = *(s + i);
		i++;
	}

	return (i - 1);
}
