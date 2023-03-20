#include"main.h"
/**
 * is_prime_number - prints string recursively
 * @n: pointer to string;
 * Return: total factorial
*/
int i = 1;

int is_prime_number(int n)
{
	if ((n % i == 0))
	{
		i = 0;
		return (0);
	}
	if (n <= 0)
	{
		i = 0;
		return (0);
	}
	if (i >=( n / 2))
	{
		i = 0;
		return (1);
	}
	i++;
	return(is_prime_number(n));
}
