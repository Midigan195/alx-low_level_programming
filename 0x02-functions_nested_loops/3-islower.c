#include"main.h"

/**
 * _islower - checks wether value is lowercase
 * @c: input parameter
 * Return: 0 if sucessful
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
