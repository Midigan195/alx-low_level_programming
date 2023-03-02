#include"main.h"
/**
 * _strcmp - concattenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: value of dest
*/

int _strcmp(char *s1, char *s2)
{
	int k = 0;
	int val = 0;

	while (*(s1 + k) != '\0' && *(s2 + k) != '\0')
	{
		val = *(s1 + k) - *(s2 + k);

		if (val == 0)
			k++
		else
			break;
	}
		val = *(s1 + k) - *(s2 + k);

	return (val);
}
