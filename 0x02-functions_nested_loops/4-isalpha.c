#include"main.h"

/**
 * _isalpha - checks if value is an alphabetical character
 * @c: returns value
 * Return: 0 if sucessful
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
