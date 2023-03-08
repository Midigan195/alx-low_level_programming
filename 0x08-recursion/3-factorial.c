#include"main.h"
/**
 * factorial - prints string recursively
 * @n: pointer to string;
 * Return: total factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
