#include"main.h"
/**
 * _string_toupper - concattenates two strings
 * @c: string 1
 * Return: value of dest
*/

char *string_toupper(char *c)
{
	int i = 0;
	
	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			*(c + i) = *(c + i) - 32;
		i++;
	}

	return (c);
}
