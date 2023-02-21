#include"main.h"

/**
 * _abs - prints value without negatives
 * @n: integer value
 * Return: absolute value
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
