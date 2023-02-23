#include"main.h"
/**
 * _isdigit - Checks if character is number
 * @c: character
 * Return: 1 if true , 0 if flase
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
