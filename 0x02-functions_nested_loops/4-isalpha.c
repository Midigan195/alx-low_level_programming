#include"main.h"

/**
 * print_alphabet - prints alphabet from a
 *
 * Return: 0 if sucessful
*/
 int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return 1;
	else
		return 0;
}
