#include"main.h"
/**
 * _sqrt_recursion - prints string recursively
 * @n: pointer to string;
 * Return: total factorial
*/
int i = 1;

int _sqrt_recursion(int n)
{
	if ((i * i) > n)
	{
		i = 0;
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	i++;
	return (_sqrt_recursion(n));
}
