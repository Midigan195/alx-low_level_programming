#include"main.h"
/**
 * _isupper - Checks if letter is uppercase
 * @c: character
 * Return: 1 if true , 0 if flase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
