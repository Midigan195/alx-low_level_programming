#include"main.h"
/**
 * _sqrt_recursion - prints string recursively
 * @n: pointer to string;
 * Return: total factorial
*/

int _find_root(int n, int i)
{
	if ((i * i) > n)
		return(-1);
	if ((i * i) == n)
		return(i);
	return(_find_root(n , i + 1));
}
